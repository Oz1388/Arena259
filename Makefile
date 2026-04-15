CXX      = g++
CXXFLAGS = -std=c++17
SRC      = ./src/*.cpp
TARGET   = ./arena

build: $(TARGET)

$(TARGET):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
