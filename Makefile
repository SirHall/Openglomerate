CXX		  := g++
CXX_FLAGS := -Wall -Wextra -std=c++17 -ggdb 

BIN		:= bin
SRC		:= src
INCLUDE	:= -I./include/ -I/usr/include/ -I/usr/local/include/
LIB		:= -Llib
OBJECT	:= objects

LIBRARIES	:= -lncurses
EXECUTABLE	:= main

quick: clean all
	$(CXX) -o $(BIN)/$(EXECUTABLE) \
	$(find ./src/ -name "*.cpp") $(find ./src/ -name "*.c")\
	$(CXX_FLAGS) $(INCLUDE) -L$(LIB) $(LIBRARIES)

all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	./$(BIN)/$(EXECUTABLE)

#$(BIN)/$(EXECUTABLE): $(SRC)/*.cpp
#	$(CXX) $(CXX_FLAGS) $(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)

comp:
	$(CXX) -Wall -o $(OBJECT)/(EXECUTABLE) \
	$(find ./src/ -name "*.cpp") $(find ./src/ -name "*.c")\
	$(CXX_FLAGS) $(INCLUDE) $(LIB) $(LIBRARIES)

clean:
	-rm $(BIN)/*