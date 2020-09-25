CXX = g++
CXXFLAGS = -g -L/usr/local/lib -lgtest -lgtest_main -lpthread
INCS = -I. -I../src

OBJS = ../src/addition.o ../src/multiply.o main_testall.o

testall: $(OBJS)
	$(CXX) -o $@  $^ $(CXXFLAGS) 

%.o:%.cpp
	$(CXX) -c $< -o $@ $(INCS)

clean:
	rm -f *.o testall
