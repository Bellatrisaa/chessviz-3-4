#include <stdlib.h>
#include <iostream>
#include "printchess.h"
#include "deskchess.h"

void correctData(char *input)
{
	bool correct = false;
	while(!correct)
	{
		std::cout << "Vvedite hod (primer: a2-a3): ";
		std::cin >> input;
		if((int)input[0] <= 104 and 97 <=(int)input[0] 
		and (int)input[1] <= 56 and 49 <= (int)input[1]
		and (int)input[2] == 45 and (int)input[3] <= 104 
		and 97 <=(int)input[3] and (int)input[4] <= 56 
		and 49 <= (int)input[4])
		{
			correct = true;
		}
		else
		{
			system("CLS");
			Chessviz(desk_chess);
		}
	}
}
