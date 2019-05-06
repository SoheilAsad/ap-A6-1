CC := g++ -std=c++11

all: 1.out

1.out: main.o shape.o sphere.o cuboid.o cone.o
	$(CC) main.o shape.o sphere.o cuboid.o cone.o  1.out

main.o: main.cpp shape.h sphere.h cuboid.h cone.h
	$(CC) -c main.cpp 

shape.o: shape.cpp shape.h sphere.h cuboid.h cone.h
	$(CC) -c shape.cpp

sphere.o: sphere.cpp shape.h sphere.h cuboid.h cone.h
	$(CC) -c sphere.cpp

cuboid.o: cuboid.cpp shape.h sphere.h cuboid.h cone.h
	$(CC) -c cuboid.cpp

cone.o: cone.cpp shape.h sphere.h cuboid.h cone.h
	$(CC) -c cone.cpp

.PHONY: clean
clean:
	rm -r *.o