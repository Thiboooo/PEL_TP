EXE 	= bezier
OBJS	= interface.o point.o
CPP	= g++ -O3
UNAME	= $(shell uname)
SDL_INC = `sdl2-config --cflags`
SDL_LIB = `sdl2-config --libs`

all : $(EXE)

point.o: point.cpp point.hpp

interface.o: interface.cpp interface.hpp
	$(CPP) $< $(SDL_INC) -c -o $@

$(EXE): $(OBJS) main.cpp
	$(CPP) $^ $(SDL_LIB) -o $@

clean:
	-$(RM) $(OBJS) $(EXE)
