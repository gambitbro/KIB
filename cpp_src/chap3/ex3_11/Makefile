main : Adder.o Calculator.o 
	g++ main.cpp Adder.o Calculator.o -o main

Adder.o : Adder.cpp
	g++ -c Adder.cpp

Calculator.o : Calculator.cpp
	g++ -c Calculator.cpp

clean :
	rm -rf *.o main