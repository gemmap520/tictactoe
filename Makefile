CXX = g++
CXXFLAGS = -std=c++20 -g -Wall -Werror=vla -MMD -I/opt/X11/include -I.
LDFLAGS = -L/opt/X11/lib -lX11

OBJECTS = main.o tictactoe.o window.o
DEPENDS = ${OBJECTS:.o=.d}
EXEC = tictactoe

${EXEC}: ${OBJECTS}
	${CXX} ${OBJECTS} -o ${EXEC} ${LDFLAGS}

-include ${DEPENDS}

clean:
	rm -f ${OBJECTS} ${DEPENDS} ${EXEC}
