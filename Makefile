CXX=g++
RM=
LDLIBS=$(shell root-config --libs)

SRCS=$(wildcard *.cpp) $(wildcard */*.cpp)
OBJS=$(patsubst %.cpp,%.o,$(SRCS))

all: algomem

algomem: $(OBJS)
	$(CXX) -o algomem $(OBJS)

simple_list_main.o: simple_list_main.cpp simple_list.h

simple_list.o: simple_list.cpp simple_list.h

clean:
	rm algomem.exe
	rm -f $(OBJS)
	rm -f *~