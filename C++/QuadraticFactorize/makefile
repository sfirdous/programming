CC = g++
CFLAGS = -c 
TARGET = quad
DEPS = QuadraticFactorize.hpp
OBJS = main.o QuadraticFactorize.cpp

%.o : %.cpp $(DEPS)
	$(CC) -o $@ $(CFLAGS) $<

$(TARGET) : $(OBJS)
	$(CC) -o $@ $^