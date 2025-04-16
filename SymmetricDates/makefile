CC = g++
CFLAGS = -c I.
DEPS = SymmetricDates.hpp
TARGET = dates
OBJS = main.o SymmetricDates.o

%.o : %.cpp $(DEPS)
	$(CC) -o $@ $(CFLAGS) $<

$(TARGET) : $(OBJS)
	$(CC) -o $@ $^ 