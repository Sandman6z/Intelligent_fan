#include <STC15F2K60S2.H>
#include <intrins.h>

void Delay()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	_nop_();
	i = 43;
	j = 6;
	k = 203;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

int main(void)
{
	int i;
	for(i = 10; i>0; i--)
	{
	P00 = 0;
	Delay();
	P00 = 1;
	Delay();
	}
	return 0;
}
