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
