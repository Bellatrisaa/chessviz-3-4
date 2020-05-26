#include <catch.hpp>
#include "deskchess.h"
#include "hodFigures.h"

//MOVE FOWARD
//-------------------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the knight (move foward V.1)", "File knight_move_test.cpp")
{
	unsigned short int i = 0, j = 2, i_ = 2, j_ = 3;//coordinates
	
	hodKnight(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'n');
	
	desk_chess[i_][j_] = ' ';
	desk_chess[i][j] = 'n'; //return values
}

TEST_CASE("If the any non-figure is in front of the knight (move foward V.1)", "File knight_move_test.cpp")
{
	unsigned short int i = 0, j = 2, i_ = 2, j_ = 3;//coordinates
	desk_chess[i + 1][j] = ' ';
	
	hodKnight(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'n');
	
	desk_chess[i_][j_] = ' ';
	desk_chess[i][j] = 'n'; //return values
	desk_chess[i + 1][j] = 'p';
}

TEST_CASE("If the any figure is in front of the knight (move foward V.2)", "File knight_move_test.cpp")
{
	unsigned short int i = 0, j = 2, i_ = 2, j_ = 1;//coordinates
	
	hodKnight(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'n');
	
	desk_chess[i_][j_] = ' ';
	desk_chess[i][j] = 'n'; //return values
}

TEST_CASE("If the any non-figure is in front of the knight (move foward V.2)", "File knight_move_test.cpp")
{
	unsigned short int i = 0, j = 2, i_ = 2, j_ = 1;//coordinates
	desk_chess[i + 1][j] = ' ';
	
	hodKnight(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'n');
	
	desk_chess[i_][j_] = ' ';
	desk_chess[i][j] = 'n'; //return values
	desk_chess[i + 1][j] = 'p';
}
//----------------------------------------------------------------------------------------------------------------

//MOVE RIGHT
//----------------------------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the knight (move right V.1)", "File knight_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 5, j_ = 6;//coordinates
	
	desk_chess[i][j] = 'n'; // move to center
	desk_chess[i][j + 1] = 'p'; //move pawn to right side of the knight
	
	hodKnight(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'n');
	
	desk_chess[i_][j_] = ' ';
	desk_chess[i][j + 1] = ' '; //return values
}

TEST_CASE("If the any non-figure is in front of the knight (move right V.1)", "File knight_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 5, j_ = 6;//coordinates
	
	desk_chess[i][j] = 'n'; // move to center
	
	hodKnight(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'n');
	
	desk_chess[i_][j_] = ' ';//return values
}

TEST_CASE("If the any figure is in front of the knight (move right V.2)", "File knight_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 3, j_ = 6;//coordinates
	
	desk_chess[i][j] = 'n'; // move to center
	desk_chess[i][j + 1] = 'p'; //move pawn to right side of the knight
	
	hodKnight(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'n');
	
	desk_chess[i_][j_] = ' ';
	desk_chess[i][j + 1] = ' '; //return values
}

TEST_CASE("If the any non-figure is in front of the knight (move right V.2)", "File knight_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 3, j_ = 6;//coordinates
	
	desk_chess[i][j] = 'n'; // move to center
	
	hodKnight(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'n');
	
	desk_chess[i_][j_] = ' ';//return values
}
//---------------------------------------------------------------------------------------------------------

//MOVE BACK
//---------------------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the knight (move back V.1)", "File knight_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 2, j_ = 3;//coordinates
	
	desk_chess[i][j] = 'n'; // move to center
	desk_chess[i + 1][j] = 'p'; //move pawn to right side of the knight
	
	hodKnight(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'n');
	
	desk_chess[i_][j_] = ' ';
	desk_chess[i + 1][j] = ' '; //return values
}

TEST_CASE("If the any non-figure is in front of the knight (move back V.1)", "File knight_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 2, j_ = 3;//coordinates
	
	desk_chess[i][j] = 'n'; // move to center
	
	hodKnight(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'n');
	
	desk_chess[i_][j_] = ' ';//return values
}

TEST_CASE("If the any figure is in front of the knight (move back V.2)", "File knight_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 2, j_ = 5;//coordinates
	
	desk_chess[i][j] = 'n'; // move to center
	desk_chess[i + 1][j] = 'p'; //move pawn to right side of the knight
	
	hodKnight(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'n');
	
	desk_chess[i_][j_] = ' ';
	desk_chess[i + 1][j] = ' '; //return values
}

TEST_CASE("If the any non-figure is in front of the knight (move back V.2)", "File knight_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 2, j_ = 5;//coordinates
	
	desk_chess[i][j] = 'n'; // move to center
	
	hodKnight(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'n');
	
	desk_chess[i_][j_] = ' ';//return values
}

//MOVE LEFT
//----------------------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the knight (move left V.1)", "File knight_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 3, j_ = 2;//coordinates
	
	desk_chess[i][j] = 'n'; // move to center
	desk_chess[i][j - 1] = 'p'; //move pawn to right side of the knight
	
	hodKnight(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'n');
	
	desk_chess[i_][j_] = ' ';
	desk_chess[i][j - 1] = ' '; //return values
}

TEST_CASE("If the any non-figure is in front of the knight (move left V.1)", "File knight_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 3, j_ = 2;//coordinates
	
	desk_chess[i][j] = 'n'; // move to center
	
	hodKnight(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'n');
	
	desk_chess[i_][j_] = ' ';//return values
}

TEST_CASE("If the any figure is in front of the knight (move left V.2)", "File knight_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 5, j_ = 2;//coordinates
	
	desk_chess[i][j] = 'n'; // move to center
	desk_chess[i][j - 1] = 'p'; //move pawn to right side of the knight
	
	hodKnight(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'n');
	
	desk_chess[i_][j_] = ' ';
	desk_chess[i][j - 1] = ' '; //return values
}

TEST_CASE("If the any non-figure is in front of the knight (move left V.2)", "File knight_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 5, j_ = 2;//coordinates
	
	desk_chess[i][j] = 'n'; // move to center
	
	hodKnight(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'n');
	
	desk_chess[i_][j_] = ' ';//return values
}
//--------------------------------------------------------------------------------------------------------


