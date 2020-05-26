#include <catch.hpp>
#include "deskchess.h"
#include "hodFigures.h"
#include "diagonal.h"

//MOVE FOWARD AS A ROOK
//--------------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the queen (move foward as a rook)", "queen_move_test.cpp")
{
	unsigned short int i = 0, j = 4, i_ = 2, j_ = 4; //coordinates
	
	hodQueen(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == ' ');
}

TEST_CASE("If the non-figure is in front of the queen (move foward as a rook)", "queen_move_test.cpp")
{
	unsigned short int i = 0, j = 4, i_ = 2, j_ = 4; //coordinates
	
	desk_chess[i + 1][j] = ' ';
	
	hodQueen(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'q');
	
	desk_chess[i][j] = 'q';
	desk_chess[i_][j_] = ' ';
	desk_chess[i + 1][j] = 'p'; //return values
}
//---------------------------------------------------------------------------------------------------

//MOVE RIGHT AS A ROOK
//---------------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the queen (move right as a rook)", "queen_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 4, j_ = 7;
	
	desk_chess[i][j] = 'q'; //setup queen to the center
	desk_chess[i][j + 1] = 'p'; // setup pawn to the right side of queen 
	
	hodQueen(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == ' ');
	
	desk_chess[i][j] = ' ';
	desk_chess[i][j + 1] = ' '; //return values
}

TEST_CASE("If the non-figure is in front of the queen (move right as a rook)", "queen_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 4, j_ = 7; //coordinates
	
	desk_chess[i][j] = 'q';
	
	hodQueen(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'q');
	
	desk_chess[i_][j_] = ' '; //return value
}
//---------------------------------------------------------------------------------------------------

//MOVE LEFT AS A ROOK
//---------------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the queen (move left as a rook)", "queen_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 4, j_ = 1;
	
	desk_chess[i][j] = 'q'; //setup queen to the center
	desk_chess[i][j - 1] = 'p'; // setup pawn to the left side of queen 
	
	hodQueen(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == ' ');
	
	desk_chess[i][j] = ' ';
	desk_chess[i][j - 1] = ' '; //return values
}

TEST_CASE("If the non-figure is in front of the queen (move left as a rook)", "queen_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 4, j_ = 1; //coordinates
	
	desk_chess[i][j] = 'q';
	
	hodQueen(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'q');
	
	desk_chess[i_][j_] = ' '; //return value
}
//----------------------------------------------------------------------------------------------------

//MOVE BACK AS A ROOK
//----------------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the queen (move back as a rook)", "queen_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 2, j_ = 4;
	
	desk_chess[i][j] = 'q'; //setup queen to the center
	desk_chess[i - 1][j] = 'p'; // setup pawn to the back side of queen 
	
	hodQueen(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == ' ');
	
	desk_chess[i][j] = ' ';
	desk_chess[i - 1][j] = ' '; //return values
}

TEST_CASE("If the non-figure is in front of the queen (move back as a rook)", "queen_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 2, j_ = 4; //coordinates
	
	desk_chess[i][j] = 'q';
	
	hodQueen(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'q');
	
	desk_chess[i_][j_] = ' '; //return value
}
//----------------------------------------------------------------------------------------------------

//MOVE BOTTOM-RIGHT(DIAGONAL) AS A BISHOP
//-----------------------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the queen (move bottom-right as a bishop)", "queen_move_test.cpp")
{
	unsigned short int i = 0, j = 4, i_ = 2, j_ = 6;
	
	hodQueen(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == ' ');
}

TEST_CASE("If the no-figure is in front of the queen (move bottom-right as a bishop)", "queen_move_test.cpp")
{
	unsigned short int i = 0, j = 4, i_ = 2, j_ = 6;
	
	desk_chess[i + 1][j + 1] = ' '; // delete pawn 
	
	hodQueen(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'q');
	
	desk_chess[i_][j_] = ' ';
	desk_chess[i][j] = 'q';
	desk_chess[i + 1][j + 1] = 'p';
}
//------------------------------------------------------------------------------------------------------------

//MOVE BOTTOM-LEFT(DIAGONAL) AS A BISHOP
//------------------------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the queen (move bottom-left as a bishop)", "queen_move_test.cpp")
{
	unsigned short int i = 0, j = 4, i_ = 2, j_ = 2;
	
	hodQueen(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == ' ');
}

TEST_CASE("If the no-figure is in front of the queen (move bottom-left as a bishop)", "queen_move_test.cpp")
{
	unsigned short int i = 0, j = 4, i_ = 2, j_ = 2;
	
	desk_chess[i + 1][j - 1] = ' '; // delete pawn 
	
	hodQueen(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'q');
	
	desk_chess[i_][j_] = ' ';
	desk_chess[i][j] = 'q';
	desk_chess[i + 1][j - 1] = 'p';
}
//------------------------------------------------------------------------------------------------------------

//MOVE TOP-LEFT(DIAGONAL) AS A BISHOP
//------------------------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the queen (move top-left as a bishop)", "queen_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 2, j_ = 2;
	
	desk_chess[i][j] = 'q'; // setup queen to the center
	desk_chess[i - 1][j - 1] = 'p'; // setup pawn on the diagonal
	
	hodQueen(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == ' ');
	
	desk_chess[i][j] = ' ';
	desk_chess[i - 1][j - 1] = ' ';
}

TEST_CASE("If the no-figure is in front of the queen (move top-left as a bishop)", "queen_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 2, j_ = 2;
	
	desk_chess[i][j] = 'q'; // setup queen to the center
	
	hodQueen(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'q');
	
	desk_chess[i_][j_] = ' ';
}
//------------------------------------------------------------------------------------------------------------

//MOVE TOP-RIGHT(DIAGONAL) AS A BISHOP
//------------------------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the queen (move top-right as a bishop)", "queen_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 2, j_ = 6;
	
	desk_chess[i][j] = 'q'; // setup queen to the center
	desk_chess[i - 1][j + 1] = 'p'; // setup pawn on the diagonal
	
	hodQueen(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == ' ');
	
	desk_chess[i][j] = ' ';
	desk_chess[i - 1][j + 1] = ' '; //return values
}

TEST_CASE("If the no-figure is in front of the queen (move top-right as a bishop)", "queen_move_test.cpp")
{
	unsigned short int i = 4, j = 4, i_ = 2, j_ = 6;
	
	desk_chess[i][j] = 'q'; // setup queen to the center
	
	hodQueen(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'q');
	
	desk_chess[i_][j_] = ' ';
}
