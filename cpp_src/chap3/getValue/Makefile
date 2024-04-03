main : Exp.o main.o
	g++ -o main main.o Exp.o

Exp.o : Exp.cpp
	g++ -c Exp.cpp

main.o : main.cpp
	g++ -c main.cpp

clean : 
	rm -rf *.o main