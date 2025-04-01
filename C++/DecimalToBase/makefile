CC = g++
CFLAGS = -c -I.
DEPS = DecimalToBase.hpp
TARGET = conv
OBJS = main.o DecimalToBase.o 

%.o : %.cpp $(DEPS)
	$(CC) -o $@ $(CFLAGS) $<

$(TARGET) : $(OBJS)
	$(CC) -o $@ $^

clean:
	\rm *.o *~