#include <cctype>
#include "deskchess.h"
#include "diagonal.h"

void hodPawn(unsigned short int numi, unsigned short int numj, unsigned short int numi_, unsigned short int numj_)
{
	if(desk_chess[numi][numj] == 'p')
	{
		if(numi >= numi_ or numj != numj_ or (numi_ - numi) > 2 or islower(desk_chess[numi_][numj_]) 
		or(numi_ - numi == 2 and islower(desk_chess[numi_ - 1][numj_])) or (numi_ - numi == 2 and numi != 1))
		{
		}
		else
		{
			char temp = desk_chess[numi_][numj_];
			desk_chess[numi_][numj_] = desk_chess[numi][numj];
			desk_chess[numi][numj] = temp;
		}
	}
	else if(desk_chess[numi][numj] == 'P')
	{
		if(numi <= numi_ or numj != numj_ or (numi_ - numi) < -2 or isupper(desk_chess[numi_][numj_]) 
		or(numi_ - numi == -2 and isupper(desk_chess[numi_ + 1][numj_])) or (numi_ - numi == -2 and numi != 6))
		{
		}
		else
		{
			char temp = desk_chess[numi_][numj_];
			desk_chess[numi_][numj_] = desk_chess[numi][numj];
			desk_chess[numi][numj] = temp;
		}
	}
}

void hodRook(unsigned short int numi, unsigned short int numj, unsigned short int numi_, unsigned short int numj_)
{
	if(desk_chess[numi][numj] == 'r')
	{
		if((numi == numi_ and numj_ != numj) or (numj_ == numj and numi != numi_))
		{
			if(numi == numi_)
			{
				int x, side;
				if(numj > numj_)
				{
					x = numj_;
					side = numj - 1;
				}
				else if(numj < numj_)
				{
					x = numj + 1;
					side = numj_;
				}
				bool dontchange = false;
				char sym;
				for(int i = numi; i == numi; i++)
				{
					for(int j = x; j <= side; j++)
					{
						sym = desk_chess[i][j];
						if(islower(sym))
						{
							dontchange = true;
							break;
						}
					}
					if(dontchange)
					{
						break;
					}
					else
					{
						char temp = desk_chess[numi_][numj_];
						desk_chess[numi_][numj_] = desk_chess[numi][numj];
						desk_chess[numi][numj] = temp;
					}
				}
			}
			else if(numj == numj_)
			{	
				int x, side;
				if(numi > numi_)
				{
					x = numi_;
					side = numi - 1;
				}
				else if(numi < numi_)
				{
					x = numi + 1;
					side = numi_;
				}
				bool dontchange = false;
				char sym;
				for(int i = numj; i == numj_; i++)
				{
					for(int j = x; j <= side; j++)
					{
						sym = desk_chess[j][i];
						if(islower(sym))
						{
							dontchange = true;
							break;
						}
					}
					if(dontchange)
					{
						break;
					}
					else
					{
						char temp = desk_chess[numi_][numj_];
						desk_chess[numi_][numj_] = desk_chess[numi][numj];
						desk_chess[numi][numj] = temp;
					}
				}
			}
		}
	}
	else if(desk_chess[numi][numj] == 'R')
	{
		if((numi == numi_ and numj_ != numj) or (numj_ == numj and numi != numi_))
		{
			if(numi == numi_)
			{
				int x, side;
				if(numj > numj_)
				{
					x = numj_;
					side = numj - 1;
				}
				else if(numj < numj_)
				{
					x = numj + 1;
					side = numj_;
				}
				bool dontchange = false;
				char sym;
				for(int i = numi; i == numi; i++)
				{
					for(int j = x; j <= side; j++)
					{
						sym = desk_chess[i][j];
						if(isupper(sym))
						{
							dontchange = true;
							break;
						}
					}
					if(dontchange)
					{
						break;
					}
					else
					{
						char temp = desk_chess[numi_][numj_];
						desk_chess[numi_][numj_] = desk_chess[numi][numj];
						desk_chess[numi][numj] = temp;
					}
				}
			}
			else if(numj == numj_)
			{	
				int x, side;
				if(numi > numi_)
				{
					x = numi_;
					side = numi - 1;
				}
				else if(numi < numi_)
				{
					x = numi + 1;
					side = numi_;
				}
				bool dontchange = false;
				char sym;
				for(int i = numj; i == numj_; i++)
				{
					for(int j = x; j <= side; j++)
					{
						sym = desk_chess[j][i];
						if(isupper(sym))
						{
							dontchange = true;
							break;
						}
					}
					if(dontchange)
					{
						break;
					}
					else
					{
						char temp = desk_chess[numi_][numj_];
						desk_chess[numi_][numj_] = desk_chess[numi][numj];
						desk_chess[numi][numj] = temp;
					}
				}
			}
		}
	}
}

void hodKnight(unsigned short int numi, unsigned short int numj, unsigned short int numi_, unsigned short int numj_)
{
	if(desk_chess[numi][numj] == 'n')
	{
		if((desk_chess[numi_][numj_] == ' ') and ((numi_ - numi == -2 and numj_ - numj == 1) 
		or (numi_ - numi == -2 and numj_ - numj == -1) or (numj_ - numj == -2 and numi_ - numi == 1)
		or (numj_ - numj == -2 and numi_ - numi == -1) or (numj_ - numj == 2 and numi_ - numi == 1)
		or (numj_ - numj == 2 and numi_ - numi == -1) or (numi_ - numi == 2 and numj_ - numj == 1)
		or (numi_ - numi == 2 and numj_ - numj == -1)))
		{
			char temp = desk_chess[numi_][numj_];
			desk_chess[numi_][numj_] = desk_chess[numi][numj];
			desk_chess[numi][numj] = temp;
		}
	}
	else if(desk_chess[numi][numj] == 'N') 
	{
		if((desk_chess[numi_][numj_] == ' ') and ((numi_ - numi == -2 and numj_ - numj == 1) 
		or (numi_ - numi == -2 and numj_ - numj == -1) or (numj_ - numj == -2 and numi_ - numi == 1)
		or (numj_ - numj == -2 and numi_ - numi == -1) or (numj_ - numj == 2 and numi_ - numi == 1)
		or (numj_ - numj == 2 and numi_ - numi == -1) or (numi_ - numi == 2 and numj_ - numj == 1)
		or (numi_ - numi == 2 and numj_ - numj == -1)))
		{
			char temp = desk_chess[numi_][numj_];
			desk_chess[numi_][numj_] = desk_chess[numi][numj];
			desk_chess[numi][numj] = temp;
		}
	}
} 

void hodBishop(unsigned short int numi, unsigned short int numj, unsigned short int numi_, unsigned short int numj_)
{
	if(desk_chess[numi][numj] == 'b')
	{
		if(numi_ != numi and numj_ != numj and diagonal(numi, numj, numi_, numj_))
		{
			char temp = desk_chess[numi_][numj_];
			desk_chess[numi_][numj_] = desk_chess[numi][numj];
			desk_chess[numi][numj] = temp;
		}
	}
	else if(desk_chess[numi][numj] == 'B')
	{
		if(numi_ != numi and numj_ != numj and diagonal(numi, numj, numi_, numj_))
		{
			char temp = desk_chess[numi_][numj_];
			desk_chess[numi_][numj_] = desk_chess[numi][numj];
			desk_chess[numi][numj] = temp;
		}
	}
}

void hodQueen(unsigned short int numi, unsigned short int numj, unsigned short int numi_, unsigned short int numj_)
{
	if(desk_chess[numi][numj] == 'q')
	{
		if((numi == numi_ and numj_ != numj) or (numj_ == numj and numi != numi_))
		{
			
			if(numi == numi_)
			{
				int x, side;
				if(numj > numj_)
				{
					x = numj_;
					side = numj - 1;
				}
				else if(numj < numj_)
				{
					x = numj + 1;
					side = numj_;
				}
				bool dontchange = false;
				char sym;
				for(int i = numi; i == numi; i++)
				{
					for(int j = x; j <= side; j++)
					{
						sym = desk_chess[i][j];
						if(islower(sym))
						{
							dontchange = true;
							break;
						}
					}
					if(dontchange)
					{
						break;
					}
					else
					{
						char temp = desk_chess[numi_][numj_];
						desk_chess[numi_][numj_] = desk_chess[numi][numj];
						desk_chess[numi][numj] = temp;
					}
				}
			}
			else if(numj == numj_)
			{	
				int x, side;
				if(numi > numi_)
				{
					x = numi_;
					side = numi - 1;
				}
				else if(numi < numi_)
				{
					x = numi + 1;
					side = numi_;
				}
				bool dontchange = false;
				char sym;
				for(int i = numj; i == numj_; i++)
				{
					for(int j = x; j <= side; j++)
					{
						sym = desk_chess[j][i];
						if(islower(sym))
						{
							dontchange = true;
							break;
						}
					}
					if(dontchange)
					{
						break;
					}
					else
					{
						char temp = desk_chess[numi_][numj_];
						desk_chess[numi_][numj_] = desk_chess[numi][numj];
						desk_chess[numi][numj] = temp;
					}
				}
			}
		}
		else if(numi_ != numi and numj_ != numj and diagonal(numi, numj, numi_, numj_))
		{
			char temp = desk_chess[numi_][numj_];
			desk_chess[numi_][numj_] = desk_chess[numi][numj];
			desk_chess[numi][numj] = temp;
		}
	}
	else if(desk_chess[numi][numj] == 'Q')
	{
		if((numi == numi_ and numj_ != numj) or (numj_ == numj and numi != numi_))
		{
			if(numi == numi_)
			{
				int x, side;
				if(numj > numj_)
				{
					x = numj_;
					side = numj - 1;
				}
				else if(numj < numj_)
				{
					x = numj + 1;
					side = numj_;
				}
				bool dontchange = false;
				char sym;
				for(int i = numi; i == numi; i++)
				{
					for(int j = x; j <= side; j++)
					{
						sym = desk_chess[i][j];
						if(islower(sym))
						{
							dontchange = true;
							break;
						}
					}
					if(dontchange)
					{
						break;
					}
					else
					{
						char temp = desk_chess[numi_][numj_];
						desk_chess[numi_][numj_] = desk_chess[numi][numj];
						desk_chess[numi][numj] = temp;
					}
				}
			}
			else if(numj == numj_)
			{	
				int x, side;
				if(numi > numi_)
				{
					x = numi_;
					side = numi - 1;
				}
				else if(numi < numi_)
				{
					x = numi + 1;
					side = numi_;
				}
				bool dontchange = false;
				char sym;
				for(int i = numj; i == numj_; i++)
				{
					for(int j = x; j <= side; j++)
					{
						sym = desk_chess[j][i];
						if(islower(sym))
						{
							dontchange = true;
							break;
						}
					}
					if(dontchange)
					{
						break;
					}
					else
					{
						char temp = desk_chess[numi_][numj_];
						desk_chess[numi_][numj_] = desk_chess[numi][numj];
						desk_chess[numi][numj] = temp;
					}
				}
			}
		}
		else if(numi_ != numi and numj_ != numj and diagonal(numi, numj, numi_, numj_))
		{
			char temp = desk_chess[numi_][numj_];
			desk_chess[numi_][numj_] = desk_chess[numi][numj];
			desk_chess[numi][numj] = temp;
		}
	}
}

void hodKing(unsigned short int numi, unsigned short int numj, unsigned short int numi_, unsigned short int numj_)
{
	if(desk_chess[numi][numj] == 'k')
	{
		if((desk_chess[numi_][numj_] == ' ') and ((numi_ - numi == 1 and numj == numj_) or (numj_ - numj == 1 and numi == numi_)
		or (numi_ - numi == -1 and numj == numj_) or (numi_ - numi == 1 and numj_ - numj == 1)
		or (numj_ - numj == -1 and numi_ == numi) or (numi_ - numi == -1 and numj_ - numj == 1)
		or (numi_ - numi == -1 and numj_ - numj == -1) or (numi_ - numi == 1 and numj_ - numj == -1)))
		{
			char temp = desk_chess[numi_][numj_];
			desk_chess[numi_][numj_] = desk_chess[numi][numj];
			desk_chess[numi][numj] = temp;
		}
	}
	else if(desk_chess[numi][numj] == 'K')
	{
		if((numi_ - numi == 1 and numj == numj_) or (numj_ - numj == 1 and numi == numi_)
		or (numi_ - numi == -1 and numj == numj_) or (numi_ - numi == 1 and numj_ - numj == 1)
		or (numj_ - numj == -1 and numi_ == numi) or (numi_ - numi == -1 and numj_ - numj == 1)
		or (numi_ - numi == -1 and numj_ - numj == 1) or (numi_ - numi == 1 and numj_ - numj == -1))
		{
			char temp = desk_chess[numi_][numj_];
			desk_chess[numi_][numj_] = desk_chess[numi][numj];
			desk_chess[numi][numj] = temp;
		}
	}
}
