CC = g++
CFLAGS = -c I.

DEPS = MagicSqaure.hpp
TARGET = magic
OBJS = main.o MagicSquare.o

%.o : %.cpp $(DEPS)
	$(CC) -o $@ $(CFLAGS) $<

$(TARGET) : $(OBJS)
	$(CC) -o $@ $^ 