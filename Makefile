sim: main.o memory.o cpu.o execute.o
	gcc -o sim main.o memory.o cpu.o execute.o

main.o: main.c memory.h cpu.h execute.h
	gcc -c main.c

memory.o: memory.c memory.h
	gcc -c memory.c

cpu.o: cpu.c cpu.h
	gcc -c cpu.c 

execute.o: execute.c execute.h
	gcc -c execute.c 

clean:
	rm sim *.o