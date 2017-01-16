# ognia!
CPP = g++
CPPFLAGS = -Wall -O3
OBJ = figura.o kolo.o kwadrat.o main.o
HDR = figura.h kolo.h kwadrat.h
SRC =$(OBJ_SIM:.o=.cpp)

BIN = shapes
RM = rm -f

$(BIN): $(OBJ) $(HDR)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $@
.cpp.o: $(HDR)
	$(CPP) $(CPPFLAGS) -c $< -o $@
clean:
	${RM} $(OBJ) *~ *.o $(BIN)
