CC = g++
OBJ = main.o stack.o queue.o

lsq: $(OBJ)
	$(CC) $(OBJ) -std=c++11 -g -o $@

.cpp.o:
	$(CC) -std=c++11 -g -c $<

clean:
	rm *.o lsq
