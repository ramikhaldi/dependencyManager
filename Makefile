
all: main.c
	gcc -Wall -Wextra -o depMan main.c

clean:
	rm -rf depMan