all:main
main:main.cpp func.o
	g++ -o main main.cpp func.o	
func.o:func.cpp header.h
	g++ -c func.cpp
