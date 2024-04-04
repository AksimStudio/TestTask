CC=gcc
CFLAGS=-std=c99 -Wall -Wextra -Werror
SRC=quadratic_equation.c test_quadratic_equation.c
TEST_SRC=test_quadratic_equation.c

all: $(SRC)
	$(CC) -o test $(SRC) $(CFLAGS)

check: all
	./test

.PHONY: test check
