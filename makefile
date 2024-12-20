CC = g++
CFLAGS = -Wall

all:testbench

testbench:testbench.o akku.o position.o drohne.o
	$(CC) $(CFLAGS) -o testbench testbench.o akku.o position.o drohne.o

testbench.o:testbench.cpp drohne.h
	$(CC) $(CFLAGS) -c testbench.cpp

akku.o:akku.cpp akku.h
	$(CC) $(CFLAGS) -c akku.cpp

position.o:position.cpp position.h
	$(CC) $(CFLAGS) -c position.cpp

drohne.o:drohne.cpp drohne.h position.h akku.h
	$(CC) $(CFLAGS) -c drohne.cpp

clean:
	rm -f *.o testbench

