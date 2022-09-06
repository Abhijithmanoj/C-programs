CC=gcc
CFLAGS:=-O3 -Wall

SRCS = $(wildcard *.c)
HEADERS =$(wildcard *.h)
OBJECTS = $(SRCS:.c=.o)

TARGET = out

%.o : %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(TARGET) $(OBJECTS)
