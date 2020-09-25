CXX = g++
CXXFLAGS = -g
INCS = I.

OBJS = addition.o multiply.o

exampleapp: exampleapp.cpp $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

.cpp:.o
	$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCS)

clean:
	rm *.o exampleapp
