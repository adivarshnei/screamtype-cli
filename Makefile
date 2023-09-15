STRING = hello
CC = g++
CFLAGS = -Wall -Wextra -pedantic -Wfatal-errors -g
LIBS = -lncurses -lcurses
RM = rm
FILES = src/main.cpp src/charmap.cpp src/funcs.cpp
OUTPUT = out/main.o
GREEN = echo -n "\033[0;32m"
BLUE = echo -n "\033[0;34m"
YELLOW = echo -n "\033[0;33m"
RESET = echo -n "\033[0m"

all: build run clean

build:
	@$(GREEN)
	$(CC) $(CFLAGS) $(FILES) $(LIBS) -o $(OUTPUT)
	@$(RESET)

run:
	@$(BLUE)
	./$(OUTPUT) "$(STRING)"
	@$(RESET)

clean:
	@$(YELLOW)
	$(RM) $(OUTPUT)
	@$(RESET)