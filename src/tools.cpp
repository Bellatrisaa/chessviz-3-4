#include "hodFigures.h"
#include "deskchess.h"

void hod(unsigned short int numi, unsigned short int numj, unsigned short int numi_, unsigned short int numj_)
{
	char c = desk_chess[numi][numj];
	
	switch(c)
	{
		case 'p': hodPawn(numi, numj, numi_, numj_); break;
		case 'P': hodPawn(numi, numj, numi_, numj_); break;
		case 'r': hodRook(numi, numj, numi_, numj_); break;
		case 'R': hodRook(numi, numj, numi_, numj_); break; 
		case 'n': hodKnight(numi, numj, numi_, numj_); break;
		case 'N': hodKnight(numi, numj, numi_, numj_); break;
		case 'b': hodBishop(numi, numj, numi_, numj_); break;
		case 'B': hodBishop(numi, numj, numi_, numj_); break;
		case 'q': hodQueen(numi, numj, numi_, numj_); break;
		case 'Q': hodQueen(numi, numj, numi_, numj_); break;
		case 'k': hodKing(numi, numj, numi_, numj_); break;
		case 'K': hodKing(numi, numj, numi_, numj_); break;
	}
}
