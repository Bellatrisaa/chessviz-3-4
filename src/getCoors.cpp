#include "deskchess.h"

void takecoordinates(const char* input, unsigned short int &numi, unsigned short int &numj, unsigned short int &numi_, unsigned short int &numj_)
{
	char x0 = input[0], y0 = input[1], x1 = input[3], y1 = input[4];
	
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			if(desk_chess[i][j] == y0)
			{
				numi = i;
			}
		}
	}
	
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			if(desk_chess[i][j] == y1)
			{
				numi_ = i;
			}
		}
	}
	
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			
			if(desk_chess[i][j] == x0)
			{
				numj = j;
			}
		}
	}
	
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			if(desk_chess[i][j] == x1)
			{
				numj_ = j;
			}
		}
	}
}
