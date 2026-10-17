#include <stdio.h>
#include <math.h>
int main(void)
{
	int v,t=1920,u;
	float s;
	scanf("%f %d", &s,&v);
	u = ceil(s / v)+10;    //此时s表示所需时间而非路程
	v = (1920 - u) / 60%24;    //此时v表示几时
	t = (1920 - u) % 60;    //此时t表示几分
	printf("%02d:%02d", v,t);
	return 0;
}
