TARGET = gmie
CXX = g++-6
CXXFLAGS = -O3
CPPFLAGS = -DNDEBUG
$(TARGET) : gmie_call.o gmie.o
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -o $@ gmie_call.o gmie.o

gmie_call.o : gmie_call.cpp gmie.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c gmie_call.cpp

gmie.o : gmie.cpp gmie.hpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c gmie.cpp

clean:
	rm -f *.o $(TARGET)
