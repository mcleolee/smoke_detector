#include <reg51.h>

sbit led=P1^0;

void delay(unsigned int i)
{
	unsigned int j;
	unsigned char k;
	for(j=i;j>0;j--)
		for(k=125;k>0;k--);
}

void main()
{
	unsigned char m;
	for(m=20;m>0;m--)
	{
		led=~led;	//没隔一段时间即对输出取反。
		delay(3000); //闪烁间隔。
	}
	while(1); //闪烁十次后，到此不再闪烁。
}