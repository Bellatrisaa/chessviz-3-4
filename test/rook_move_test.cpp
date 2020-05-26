#include <catch.hpp>
#include "deskchess.h"
#include "hodFigures.h"

//ONWORD MOVEMENT
//--------------------------------------------------------------------------------------------------------------------------------------------------
TEST_CASE("If the any figure is in front of the rook (onward movement)", "File rook_move_test.cpp")
{
	unsigned short int i = 0, j = 1, i_ = 5, j_ = 1;
	
	hodRook(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == ' ');//it means that the movement did not happen because the bishop could not change its location due to the figure
}

TEST_CASE("If the non-figure is in front of the rook (onward movement)", "File rook_move_test.cpp")
{
	unsigned short int i = 0, j = 1, i_ = 5, j_ = 1;
	
	desk_chess[1][1] = ' ';//delete the figure is in front of the rook
	hodRook(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'r');
	
	desk_chess[1][1] = 'p';
	desk_chess[i_][j_] = ' ';
	desk_chess[i][j] = 'r';
}
//----------------------------------------------------------------------------------------------------------------------------------------------------

//MOVE RIGHT
//----------------------------------------------------------------------------------------------------------------------------------------------------
TEST_CASE("If the figure is in front of the rook (move right)", "File rook_move_test.cpp")
{
	unsigned short int i = 0, j = 1, i_ = 0, j_ = 3;

	hodRook(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'b');//it means that the movement did not happen because the bishop could not change its location due to the figure
}

TEST_CASE("If the non-figure is in front of the rook (move right)", "File rook_move_test.cpp")
{
	unsigned short int i = 0, j = 1, i_ = 0, j_ = 2;//coordinates
	
	desk_chess[i_][j_] = ' ';//delete the figure is in front of the rook
	hodRook(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'r');
	
	desk_chess[i_][j_] = 'n';//return the value of the figure
	desk_chess[i][j] = 'r';
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------

//MOVE LEFT
//-------------------------------------------------------------------------------------------------------------------------------------------------------
TEST_CASE("If the figure is in front of the rook (move left)", "File rook_move_test.cpp")
{
	unsigned short int i = 3, j = 4, i_ = 3, j_ = 2;
    
    desk_chess[i][j] = 'r';//move the rook to the center
    desk_chess[i][j - 1] = 'p';//move the pawn to the left side of the rook
    
	hodRook(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == ' ');//it means that the movement did not happen because the bishop could not change its location due to the figure
	
	desk_chess[i][j] = ' ';
    desk_chess[i][j - 1] = ' ';//return values
}

TEST_CASE("If the non-figure is in front of the rook (move left)", "File rook_move_test.cpp")
{
	unsigned short int i = 3, j = 4, i_ = 3, j_ = 2;
    
    desk_chess[i][j] = 'r';//move the rook to the center
    
	hodRook(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'r');
	
    desk_chess[i_][j_] = ' ';//return values
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------

//MOVE BACK
//-------------------------------------------------------------------------------------------------------------------------------------------------------
TEST_CASE("If the figure is in front of the rook (move back)", "File rook_move_test.cpp")
{
	unsigned short int i = 3, j = 4, i_ = 2, j_ = 4;
    
    desk_chess[i][j] = 'r';//move the rook to the center
    desk_chess[i-1][j] = 'p';//move the pawn to the back side of the rook
    
	hodRook(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'p');//it means that the movement did not happen because the bishop could not change its location due to the figure
	
	desk_chess[i][j] = ' ';
    desk_chess[i_][j_] = ' ';//return values
}

TEST_CASE("If the non-figure is in front of the rook (move back)", "File rook_move_test.cpp")
{
	unsigned short int i = 3, j = 4, i_ = 2, j_ = 4;
    
    desk_chess[i][j] = 'r';//move the rook to the center
    
	hodRook(i, j, i_, j_);
	
	REQUIRE(desk_chess[i_][j_] == 'r');
	
    desk_chess[i_][j_] = ' ';//return values
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------
