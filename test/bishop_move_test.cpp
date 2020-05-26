#include <catch.hpp>
#include "diagonal.h"
#include "deskchess.h"

TEST_CASE("Test diagonal if the figure is standing in front of the bishop", "File: diagonal_test.cpp")
{
	REQUIRE(diagonal(0, 3, 2, 5) == 0);
}

TEST_CASE("Test diagonal if the no-figure is standing in front of the bishop", "File: diagonal_test.cpp")
{
	//the shift of the figure facing the bishop
	char temp = desk_chess[2][4];
	desk_chess[2][4] = desk_chess[1][4];
	desk_chess[1][4] = temp;
	
	REQUIRE(diagonal(0, 3, 2, 5) == 1);
}

