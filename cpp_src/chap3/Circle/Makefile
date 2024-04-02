main : circle.o main.o
	g++ circle.o main.o -o main

circle.o : circle.cpp
	g++ -c circle.cpp

main.o : main.cpp
	g++ -c main.cpp

clean :
	rm *.o main