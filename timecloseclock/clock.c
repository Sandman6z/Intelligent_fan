#include <STC15F2K60S2.H>
#include <intrins.h>

sbit relay = P0^0;

void Delay1000ms()		//@11.0592MHz  
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

void main()
{
	int i = 1200,j = 20000;
	
	relay = 0;
	while(i)
	{
		Delay1000ms();
		i--;
	}
	
	relay = 1;
	while(j)
	{
		Delay1000ms();
		j--;
	}
}