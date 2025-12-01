CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude

SRC = src/main.cpp \
      src/tile.cpp \
      src/map.cpp \
      src/renderer.cpp \
      src/unit.cpp \
      src/building.cpp \
      src/controller.cpp \
      src/game_engine.cpp

TARGET = juego

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	del /Q src\*.o $(TARGET).exe 2>nul || true
	rm -f src/*.o $(TARGET) 2> /dev/null || true

run: all
	./$(TARGET)
