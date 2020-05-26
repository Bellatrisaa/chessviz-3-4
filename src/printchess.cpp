#include <stdio.h>
void Chessviz(char c[9][9])
{
    for (int i=0;i<9;i++)
    {
       for (int j=0;j<9;j++)
       {
	      printf("%c ", c[i][j]);        
       }
       printf("\n");
    }
}
