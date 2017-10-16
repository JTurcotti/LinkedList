all: linked_list.o main.o
	gcc -o ListTest linked_list.o main.o

linked_list.o: linked_list.c linked_list.h 
	gcc -c linked_list.c linked_list.h 

main.o: main.c linked_list.h 
	gcc -c main.c linked_list.h 

run: all
	./ListTest

clean:
	rm *.o
	rm *.gch
