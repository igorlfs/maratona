CC = g++
CFLAGS = -Wall -Wextra -std=c++17 -g
BIN = bin
OBJ = obj.o
SRC = src.cpp

$(BIN): $(OBJ)
		$(CC) -o $(BIN) $(OBJ)

$(OBJ): $(SRC)
		$(CC) $(CFLAGS) -c $(SRC) -o $(OBJ)

clean:
	rm -rI $(OBJ) $(BIN)
