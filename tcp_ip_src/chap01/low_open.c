#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void error_handling(char *message);

int main(void)
{
    int fd;     //file descriptor
    char buf[] = "Let's go!\n";

    fd = open("data.txt", O_CREAT | O_WRONLY | O_TRUNC);    //필요하면 파일생성, 쓰기전용, 기존데이터 전부 삭제제
    if(fd == -1){       //파일이 열리지 않으면
        error_handling("open() error!");
    }
    printf("file descriptor: %d \n", fd);

    if( write(fd, buf, sizeof(buf)) == -1 ){
        error_handling("write() error!");
    }

    close(fd);
    
    return 0;
}

void error_handling(char *message)
{
    fputs(message, stderr);
    fputc('\n', stderr);
    exit(1);
}