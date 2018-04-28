TARGET = mystring
GCC = gcc
CFLAGS = -g -Wall -Wshadow -fprofile-arcs -ftest-coverage
OBJS	= mystring.o main.o
HDRS	= mystring.h

mystring: $(OBJS) $(HDRS)
	$(GCC) $(CFLAGS) $(OBJS) -o $@

.c.o:
	$(GCC) $(CFLAGS) -c $*.c

clean:
	rm -f $(TARGET) $(OBJS) out_*

test0:
	./mystring strlen input out_len
	diff  out_len expected_strlen

test1:
	./$(TARGET) countchar input out_countchar
	diff out_countchar expect_countchar

test2:
	./$(TARGET) strupper input out_upper
	diff out_upper expect_upper

