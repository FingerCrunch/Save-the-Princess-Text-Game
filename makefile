#*********************************************************************
#** Program name: Final Project Text-Based Game
#** Author: Eric Riemer
#** Date: 11/28/2017
#** Description: Makefile
#** References: https://www.cs.umd.edu/class/fall2002/cmsc214/Tutorial/makefile.html
#*********************************************************************
OBJS = main.o spaceClass.o gameClass.o playerClass.o menuClass.o armoryClass.o barracksClass.o courtyardClass.o dungeonClass.o kingChamberClass.o kitchenClass.o libraryClass.o mainHallClass.o stableClass.o
CC = g++ -std=c++11
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)


textGame: $(OBJS)
	 $(CC) $(LFLAGS) $(OBJS) -o textGame
	
main.o: main.cpp gameClass.hpp
	$(CC) $(CFLAGS) main.cpp
	
spaceClass.o: spaceClass.cpp spaceClass.hpp menuClass.hpp playerClass.hpp
	$(CC) $(CFLAGS) spaceClass.cpp
	
gameClass.o: gameClass.cpp gameClass.hpp
	$(CC) $(CFLAGS) gameClass.cpp
	
playerClass.o: playerClass.cpp playerClass.hpp spaceClass.hpp
	$(CC) $(CFLAGS) playerClass.cpp	
	
menuClass.o: menuClass.cpp menuClass.hpp
	$(CC) $(CFLAGS) menuClass.cpp

armoryClass.o: armoryClass.cpp armoryClass.hpp spaceClass.hpp
	$(CC) $(CFLAGS) armoryClass.cpp

barracksClass.o: barracksClass.cpp barracksClass.hpp spaceClass.hpp
	$(CC) $(CFLAGS) barracksClass.cpp
	
courtyardClass.o: courtyardClass.cpp courtyardClass.hpp spaceClass.hpp
	$(CC) $(CFLAGS) courtyardClass.cpp
	
dungeonClass.o: dungeonClass.cpp dungeonClass.hpp spaceClass.hpp
	$(CC) $(CFLAGS) dungeonClass.cpp
	
kingChamberClass.o: kingChamberClass.cpp kingChamberClass.hpp spaceClass.hpp
	$(CC) $(CFLAGS) kingChamberClass.cpp

kitchenClass.o: kitchenClass.cpp kitchenClass.hpp spaceClass.hpp
	$(CC) $(CFLAGS) kitchenClass.cpp
	
libraryClass.o: libraryClass.cpp libraryClass.hpp spaceClass.hpp
	$(CC) $(CFLAGS) libraryClass.cpp

mainHallClass.o: mainHallClass.cpp mainHallClass.hpp spaceClass.hpp
	$(CC) $(CFLAGS) mainHallClass.cpp
	
stableClass.o: stableClass.cpp stableClass.hpp spaceClass.hpp
	$(CC) $(CFLAGS) stableClass.cpp

clean:
	rm *.o textGame