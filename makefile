CPP = g++ 
CFLAGS = -Wall -Werror
C = build/src/
T = build/test/
OBJECTS = $(C)main.o $(C)move.o $(C)printchess.o $(C)deskchess.o $(C)checkData.o $(C)getCoors.o $(C)diagonal.o $(C)hodFigures.o $(C)tools.o
OBJECTS_TEST = $(T)bishop_move_test.o $(T)knight_move_test.o $(T)king_move_test.o $(T)queen_move_test.o $(T)rook_move_test.o $(T)main-test.o
test = bin/test
.PHONY: clean $(test)
all: bin/chess

bin/chess: $(OBJECTS)
	$(CPP) -o bin/chess $(OBJECTS)

$(test): $(OBJECTS_TEST) $(C)deskchess.o $(C)hodFigures.o $(C)diagonal.o
	$(CPP)$(CFLAGS) -o $(test) $(OBJECTS_TEST) $(C)deskchess.o $(C)hodFigures.o $(C)diagonal.o


$(C)move.o: src/move.cpp
	$(CPP) $(CFLAGS) -o $(C)move.o -c src/move.cpp

$(C)main.o: src/main.cpp
	$(CPP) $(CFLAGS) -o $(C)main.o -c src/main.cpp
$(C)printchess.o: src/printchess.cpp
	$(CPP) $(CFLAGS) -o $(C)printchess.o -c src/printchess.cpp
$(C)deskchess.o: src/deskchess.cpp
	$(CPP) $(CFLAGS) -o $(C)deskchess.o -c src/deskchess.cpp
$(C)checkData.o: src/checkData.cpp
	$(CPP) $(CFLAGS) -o $(C)checkData.o -c src/checkData.cpp
$(C)getCoors.o: src/getCoors.cpp
	$(CPP) $(CFLAGS) -o $(C)getCoors.o -c src/getCoors.cpp
$(C)diagonal.o: src/diagonal.cpp
	$(CPP) $(CFLAGS) -o $(C)diagonal.o -c src/diagonal.cpp
$(C)hodFigures.o: src/hodFigures.cpp
	$(CPP) $(CFLAGS) -o $(C)hodFigures.o -c src/hodFigures.cpp
$(C)tools.o: src/tools.cpp
	$(CPP) $(CFLAGS) -o $(C)tools.o -c src/tools.cpp

$(T)bishop_move_test.o: test/bishop_move_test.cpp
	$(CPP) -I thirdparty -I src $(CFLAGS) -o build/test/bishop_move_test.o -c test/bishop_move_test.cpp

$(T)main-test.o: test/main-test.cpp
	$(CPP) -I thirdparty $(CFLAGS) -o $(T)main-test.o -c test/main-test.cpp
$(T)rook_move_test.o: test/rook_move_test.cpp
	$(CPP) -I thirdparty -I src $(CFLAGS) -o $(T)rook_move_test.o -c test/rook_move_test.cpp
$(T)knight_move_test.o: test/knight_move_test.cpp
	$(CPP) -I thirdparty -I src $(CFLAGS) -o $(T)knight_move_test.o -c test/knight_move_test.cpp
$(T)queen_move_test.o: test/queen_move_test.cpp
	$(CPP) -I thirdparty -I src $(CFLAGS) -o $(T)queen_move_test.o -c test/queen_move_test.cpp
$(T)king_move_test.o: test/king_move_test.cpp
	$(CPP) -I thirdparty -I src $(CFLAGS) -o $(T)king_move_test.o -c test/king_move_test.cpp

clean:
	rm -rf $(C)*.o $(T)*.o bin/*.exe
