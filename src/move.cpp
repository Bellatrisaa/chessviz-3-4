#include "info.h"
#include "tools.h"

void moveAll() 
{
	unsigned short int numi, numj, numi_, numj_;
	char input[5];
	correctData(input);
	takecoordinates(input, numi, numj, numi_, numj_);
	hod(numi, numj, numi_, numj_);
}
