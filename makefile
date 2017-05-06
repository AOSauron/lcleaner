#
#		Makefile for building LCleaner
#

CC = g++
CFLAGS = -Wall -Wextra
GTKMM = `pkg-config gtkmm-3.0 --cflags --libs`
OBJECTS = main.o mainwindow.o
SRC = src/
INC = include/

all: lcleaner

lcleaner: $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS) $(GTKMM)
	rm -rf *.o

main.o: $(SRC)main.cpp $(INC)mainwindow.h
	$(CC) $(CFLAGS) -c $< $(GTKMM)

mainwindow.o: $(SRC)mainwindow.cpp $(INC)mainwindow.h
	$(CC) $(CFLAGS) -c $< $(GTKMM)

clean:
	rm -rf *.o

mrproper: clean
	rm -f lcleaner
