# ognia!
CPP = g++
CPPFLAGS = -Wall -O3
OBJ = plik1.o plik2.o
HDR = plik1.h plik2.h
SRC =$(OBJ_SIM:.o=.cpp)

BIN = nazwa_programu
RM = rm -f

$(BIN): $(OBJ) $(HDR)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $@
.cpp.o: $(HDR)
	$(CPP) $(CPPFLAGS) -c $< -o $@
clean:
	${RM} $(OBJ) *~ *.o $(BIN)
