CC=gcc
CXX=g++
CFLAGS=-I/Users/bubble/c++/include/SDL 

LDFLAGS=-L/Users/bubble/c++/lib -lSDL -lSDL_image -lstdc++

OBJS= \
	box.o \
	player.o \
	room.o \
		
all: target

clean:
	rm -f *.o ccZeldaII

target: $(OBJS) SDLMain.o main.o
	$(CXX) -o ccZeldaII SDLMain.o main.o $(OBJS) $(LDFLAGS) -framework Cocoa	

.cc.o:
	$(CXX) $(CFLAGS) -c $<

.m.o:
	$(CC) $(CFLAGS) -c $<
