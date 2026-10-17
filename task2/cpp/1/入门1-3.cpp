#include <stdio.h>
int main(void)
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	a = 60 * a + b;//初总分钟
	c = 60 * c + d + 1440;//末总分钟，加上一天
	b = (c - a) / 60 % 24;//小时差
	d = (c - a) % 60;//分钟差
	printf("%d %d",b,d);
	return 0;
}
