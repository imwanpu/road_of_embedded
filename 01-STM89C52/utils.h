#include <reg52.h>


/*
控制J22_P00灯的亮灭
is_on为1时, 灯亮
is_on为0时, 灯灭
*/
sbit LED_j22_p00 = P0^0;
void turn_j22_p00_on(int is_on)
{
	LED_j22_p00= is_on;
}