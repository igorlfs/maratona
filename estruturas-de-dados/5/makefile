CC = clang++
CFLAGS = -Wall -Wextra -std=c++20 -g -fstandalone-debug
BIN = bin
SRC = src.cpp

$(BIN): $(SRC)
		$(CC) $(CFLAGS) $(SRC) -o $(BIN)

clean:
	rm $(BIN)
