GCC = gcc
CFLAGS = -g -Wall -Wshadow -fprofile-arcs -ftest-coverage
OBJS	= mystring.o main.o
HDRS	= mystring.h

mystring: $(OBJS) $(HDRS)
	$(GCC) $(CFLAGS) $(OBJS) -o $@

.c.o:
	$(GCC) $(CFLAGS) -c $*.c

clean:
	rm -f mystring $(OBJS) out_*

test0:
	./mystring strlen input out_len
	diff -q out_len expected_strlen

