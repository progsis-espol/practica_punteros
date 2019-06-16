sort: main.c
	gcc -g -o sort main.c

.PHONY: clean
clean:
	rm sort