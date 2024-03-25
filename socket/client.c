#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>		// system call을 쓸 경우
#include <assert.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <pthread.h>
#include <string.h>


void *send_msg(void *arg)
{
	int dataSocket = *(int *)arg;

	for(;;){
		char buf[1024];
		fgets(buf, 1024, stdin);

		if(strcmp(buf, "quit\n") == 0){
			break;
		}

		write(dataSocket, buf, strlen(buf));
	}

	close(dataSocket);
	return NULL;

}

void *recv_msg(void *arg)
{
	int dataSocket = *(int *)arg;

	for(;;){
		char buf[1024];
		int nread = read(dataSocket, buf, 1024);
		if(nread == 0){
			break;
		}else if(nread == -1){
			break;
		}else{
			buf[nread] = '\0';
			printf("%s", buf);
		}
	}
	return NULL;
}


int main(void)
{
	int dataSocket = socket(AF_INET, SOCK_STREAM, 0);
	assert(dataSocket != -1);
	
	struct sockaddr_in servAddr;
	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = inet_addr("127.0.0.1");		//loop back address
	servAddr.sin_port = htons(7777);
	assert( connect(dataSocket, (struct sockaddr *)&servAddr, sizeof(servAddr)) != -1);

	
	pthread_t pId1, pId2;
	pthread_create(&pId1, NULL, send_msg, &dataSocket);
	pthread_create(&pId2, NULL, recv_msg, &dataSocket);
	
/*	for(;;){
		;	
	}
*/
    pthread_join(pId1, NULL);
    pthread_join(pId2, NULL);

	return 0;
}
