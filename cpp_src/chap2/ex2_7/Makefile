main : main.o a.o
	g++ -o main main.o a.o

a.o : a.cpp
	g++ -c a.cpp

main.o : main.cpp
	g++ -c main.cpp

clean :
	rm -rf *.o main