CC=gcc
CFLAGS=-Wall -Wextra -g 

all: $(FILE)

$(FILE): $(FILE).c
	$(CC) $(CFLAGS) -o $(FILE) $(FILE).c -lm

run: all
	./$(FILE)

clean:
	rm -f $(FILE)
