CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I include
LDFLAGS = 

SRC_DIR = src
OBJ_DIR = obj
BIN = juego

SRC = $(wildcard $(SRC_DIR)/*.cpp)

OBJ = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC))

all: $(BIN)

$(BIN): $(OBJ)
	$(CXX) $(OBJ) -o $(BIN) $(LDFLAGS)
	@echo "\n\033[1;32m🚀 Compilación completada: ./$(BIN)\033[0m"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "🧹 Eliminando objetos..."
	rm -rf $(OBJ_DIR)

fclean: clean
	@echo "🗑️ Eliminando ejecutable..."
	rm -f $(BIN)

re: fclean all

.PHONY: all clean fclean re
