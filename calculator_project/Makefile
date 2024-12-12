CXX = g++
CXXFLAGS = -Iinclude -std=c++17 -Wall -Wextra
SRC = src/calculator.cpp src/main.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = calculator_app

all: $(TARGET)

$(TARGET): $(OBJ)
\t$(CXX) -o $@ $^

%.o: %.cpp
\t$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
\trm -f $(OBJ) $(TARGET)
