#include <reg52.h>
sbit LED=P0^0;

void lesson2_LED()
{
	long i;
	while(1){
		LED = 1;
		for(i=0;i<30000;i++);
		LED = 0;
		for(i=0;i<30000;i++);
	};
}
