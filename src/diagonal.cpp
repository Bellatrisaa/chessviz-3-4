#include <cctype>
#include "deskchess.h"

bool diagonal(unsigned short int numi, unsigned short int numj, unsigned short int numi_, unsigned short int numj_)
{
	bool left = false, right = false, top = false, bottom = false, result;  
	
	if(numi_ < numi and numj_ > numj)
	{
		right = true;
		top = true;
	}
	else if(numi_ < numi and numj_ < numj)
	{
		left = true;
		top = true;
	}
	else if(numi_ > numi and numj_ > numj)
	{
		bottom = true;
		
		right = true;
	}
	else if(numi_ > numi and numj_ < numj)
	{
		bottom = true;
		left = true;
	}
	
	if(right and top)
	{
		unsigned short int x0 = numi, y0 = numj, x = numi_, y = numj_;
		bool go = true;
		while(x0 > x)
		{
			x0--;
			y0++;
			if(islower(desk_chess[x0][y0]) or isupper(desk_chess[x0][y0]))
			{
				result = false;
				go = false;
				break;
			}
		}
		if(x0 == x and y0 == y and go)
		{
			result = true;
		}
		else
		{
			result = false;
		}
	}
	else if (left and top)
	{
		unsigned short int x0 = numi, y0 = numj, x = numi_, y = numj_;
		bool go = true;
		while(x0 > x)
		{
			x0--;
			y0--;
			if(islower(desk_chess[x0][y0]) or isupper(desk_chess[x0][y0]))
			{
				result = false;
				go = false;
				break;
			}
		}
		if(x0 == x and y0 == y and go)
		{
			result = true;
		}
		else
		{
			result = false;
		}
	}
	else if(right and bottom)
	{
		unsigned short int x0 = numi, y0 = numj, x = numi_, y = numj_;
		bool go = true;
		while(x0 < x)
		{
			x0++;
			y0++;
			if(islower(desk_chess[x0][y0]) or isupper(desk_chess[x0][y0]))
			{
				result = false;
				go = false;
				break;
			}

		}
		if(x0 == x and y0 == y and go)
		{
			result = true;
		}
		else
		{
			result = false;
		}
	}
	else if(left and bottom)
	{
		unsigned short int x0 = numi, y0 = numj, x = numi_, y = numj_;
		bool go = true;
		while(x0 < x)
		{
			x0++;
			y0--;
			if(islower(desk_chess[x0][y0]) or isupper(desk_chess[x0][y0]))
			{
				result = false;
				go = false;
				break;
			}
		}
		if(x0 == x and y0 == y and go)
		{
			result = true;
		}
		else
		{
			result = false;
		}
	}
	
	return result;
}
