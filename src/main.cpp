#include <stdio.h>
#include <stdlib.h>
#include "move.h"
#include "printchess.h"
#include "deskchess.h"

int main()
{
	Chessviz(desk_chess);
	while(1)
	{
		moveAll();
		system("CLS");
		Chessviz(desk_chess);
	}
	return 0;
}
