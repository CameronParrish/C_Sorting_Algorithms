objs = main.o bubble.o insertion.o mergesort.o quicksort.o selection.o swap.o

obj1 = bubble.h
obj2 = insertion.h
obj3 = mergesort.h
obj4 = quicksort.h
obj5 = selection.h
obj6 = swap.h

mainOut: ${objs}
	 gcc -o mainOut ${objs}
	 rm -f *.o

bubble.o: ${obj1}
	  gcc -o bubble.o ${obj1}

insertion.o: ${obj2}
	     gcc -c -o insertion.o ${obj2}

mergesort.o: ${obj3}
	     gcc -c -o mergesort.o  ${obj3}

quicksort.o: ${obj4} ${obj6}
	     gcc -c -o quicksort.o  ${obj4}

selection.o: ${obj5} ${obj6}
	     gcc -c -o selection.o ${obj5}

swap.o: ${obj6}
	gcc -c -o swap.o ${obj6}

main.o: ${objs}
	gcc -c -o main.o main.c

