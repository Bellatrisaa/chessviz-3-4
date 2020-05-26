#include <catch.hpp>
#include "hodFigures.h"
#include "deskchess.h"


//MOVE FORWARD
//---------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the king (move foward)", "king_move_test.cpp")
{
	unsigned short int i = 0, j = 5, i_ = 1, j_ = 5; //coordinates
	
	hodKing(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'p');
}

TEST_CASE("If the no-figure is in front of the king (move foward)", "king_move_test.cpp")
{
	unsigned short int i = 0, j = 5, i_ = 1, j_ = 5; //coordinates
	
	desk_chess[i + 1][j] = ' ';
	
	hodKing(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'k');
	
	desk_chess[i + 1][j] = 'p';
	desk_chess[i][j] = 'k';
}
//----------------------------------------------------------------------------------------------

//MOVE BOTTOM-RIGHT(DIAGONAL)
//--------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the king (move bottom-right)", "king_move_test.cpp")
{
	unsigned short int i = 0, j = 5, i_ = 1, j_ = 6; //coordinates
	
	hodKing(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'p');
}

TEST_CASE("If the no-figure is in front of the king (move bottom-right)", "king_move_test.cpp")
{
	unsigned short int i = 0, j = 5, i_ = 1, j_ = 6; //coordinates
	
	desk_chess[i + 1][j + 1] = ' ';
	
	hodKing(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'k');
	
	desk_chess[i + 1][j + 1] = 'p';
	desk_chess[i][j] = 'k';
}
//----------------------------------------------------------------------------------------------------

//MOVE RIGHT
//----------------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the king (move right)", "king_move_test.cpp")
{
	unsigned short int i = 0, j = 5, i_ = 0, j_ = 6; //coordinates
	
	hodKing(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'b');
}

TEST_CASE("If the no-figure is in front of the king (move right)", "king_move_test.cpp")
{
	unsigned short int i = 0, j = 5, i_ = 0, j_ = 6; //coordinates
	
	desk_chess[i][j + 1] = ' ';
	
	hodKing(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'k');
	
	desk_chess[i][j + 1] = 'b';
	desk_chess[i][j] = 'k';
}
//-------------------------------------------------------------------------------------------------------

//MOVE TOP-RIGHT(DIAGONAL)
//-------------------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the king (move top-right)", "king_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 3, j_ = 5; //coordinates
	
	desk_chess[i][j] = 'k';
	desk_chess[i - 1][j + 1] = 'p';
	
	hodKing(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'p');
	
	desk_chess[i][j] = ' ';
	desk_chess[i - 1][j + 1] = ' ';
}

TEST_CASE("If the no-figure is in front of the king (move top-right)", "king_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 3, j_ = 5; //coordinates
	
	desk_chess[i][j] = 'k';
	
	hodKing(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'k');
	
	desk_chess[i_][j_] = ' ';
}
//-----------------------------------------------------------------------------------------------

//MOVE BACK
//-------------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the king (move back)", "king_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 3, j_ = 4; //coordinates
	
	desk_chess[i][j] = 'k';
	desk_chess[i - 1][j] = 'p';
	
	hodKing(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'p');
	
	desk_chess[i][j] = ' ';
	desk_chess[i - 1][j] = ' ';
}

TEST_CASE("If the no-figure is in front of the king (move back)", "king_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 3, j_ = 4; //coordinates
	
	desk_chess[i][j] = 'k';
	
	hodKing(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'k');
	
	desk_chess[i_][j_] = ' ';
}
//---------------------------------------------------------------------------------------

//MOVE TOP-LEFT(DIAGONAL)
//---------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the king (move top-left)", "king_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 3, j_ = 3; //coordinates
	
	desk_chess[i][j] = 'k';
	desk_chess[i - 1][j - 1] = 'p';
	
	hodKing(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'p');
	
	desk_chess[i][j] = ' ';
	desk_chess[i - 1][j - 1] = ' ';
}

TEST_CASE("If the no-figure is in front of the king (move top-left)", "king_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 3, j_ = 3; //coordinates
	
	desk_chess[i][j] = 'k';
	
	hodKing(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'k');
	
	desk_chess[i_][j_] = ' ';
}
//-------------------------------------------------------------------------------------------

//MOVE LEFT
//-------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the king (move left)", "king_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 4, j_ = 3; //coordinates
	
	desk_chess[i][j] = 'k';
	desk_chess[i][j - 1] = 'p';
	
	hodKing(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'p');
	
	desk_chess[i][j] = ' ';
	desk_chess[i][j - 1] = ' ';
}

TEST_CASE("If the no-figure is in front of the king (move left)", "king_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 4, j_ = 3; //coordinates
	
	desk_chess[i][j] = 'k';
	
	hodKing(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'k');
	
	desk_chess[i_][j_] = ' ';
}
