all:obj
	gcc *.o -g -o a.out -w
obj:
	gcc src/*.c -c -g -w
clean:
	rm *.o
