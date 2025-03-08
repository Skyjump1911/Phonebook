/**
 * @file Makefile
 * @author Noah Melton
 * @date 2025-03-07
 * @brief The makefile for this assignment. 
 * 
 * This is where we specify how to build and run the files. 
 */

CXX = g++

CXXFLAGS = -Wall -Wextra -g

all: program

program: main.o phonebook.o
	$(CXX) $(CXXFLAGS) -o program main.o phonebook.o
main.o: main.cpp phonebook.h
	$(CXX) $(CXXFLAGS) -c main.cpp
phonebook.o: phonebook.cpp phonebook.h
	$(CXX) $(CXXFLAGS) -c phonebook.cpp
clean:
	rm -f *.o~ program
