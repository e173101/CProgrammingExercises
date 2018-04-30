GCC = gcc
CFLAGS = -g -Wall -Wshadow

mysort:mysort.o mysort.h main.o
	$(GCC) $(CFLAGS) mysort.o main.o -o $@

testgen:testgen.c
	$(GCC) $(CFLAGS) testgen.c -o $@


.c.o:
	$(GCC) $(CPLAGS) -c $*.c

testinput: mysort
	./mysort 6	< input6	> temp6
	diff temp6 input6

testsort:
	./mysort 6	< input6	>output6
	./mysort 20	< input20	>output20
	./mysort 50	< input50	>output50
	./mysort 100	< input100	>output100
	diff output6 expected6
	diff output20 expected20
	diff output50 expected50
	diff output100 expected100

inputgen: testgen
	./testgen 6	> input6
	./testgen 20	> input20
	./testgen 50	> input50
	./testgen 100	> input100
	sort -n input6 > expected6
	sort -n input20 > expected20
	sort -n input50 > expected50
	sort -n input100 > expected100

clean:
<<<<<<< HEAD
	rm testgen input* expected* temp* output* *.o
=======
	rm testgen input* expected* temp* output*
>>>>>>> 3e0caaf556fe9e3339b596dd0a2aac8d5af21d9d

