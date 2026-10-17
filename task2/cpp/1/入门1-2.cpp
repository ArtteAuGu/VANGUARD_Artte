#include <stdio.h>
#include <math.h>
int main(void)
{
	int h,r;
	float v;
	scanf("%d %d", &h,&r);
	v = h * r * r * 3.14/1000;
	h = ceil(20 / v);
	printf("%d", h);
	return 0;
}
