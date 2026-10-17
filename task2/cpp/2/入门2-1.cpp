#include <stdio.h>
int main(void)
{
	int a1, a2, b1, b2, c1, c2, d1, d2, e1, e2, f1, f2, g1, g2, maxh, maxd;
	scanf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n%d %d", &a1, &a2, &b1, &b2, &c1, &c2, &d1, &d2, &e1, &e2, &f1, &f2, &g1, &g2);//暴力输入
	a1 += a2;
	b1 += b2;
	c1 += c2;
	d1 += d2;
	e1 += e2;
	f1 += f2;
	g1 += g2;//合并每日小时数
	(a1 >= b1) ? (maxd = 1, maxh = a1) : (maxd = 2, maxh = b1);
	(maxh >= c1) ? (maxd = maxd, maxh = maxh) : (maxd = 3, maxh = c1);
	(maxh >= d1) ? (maxd = maxd, maxh = maxh) : (maxd = 4, maxh = d1);
	(maxh >= e1) ? (maxd = maxd, maxh = maxh) : (maxd = 5, maxh = e1);
	(maxh >= f1) ? (maxd = maxd, maxh = maxh) : (maxd = 6, maxh = f1);
	(maxh >= g1) ? (maxd = maxd) : (maxd = 7);//不断取最不开心的日子及对应小时数
	if (maxh > 8) printf("%d", maxd);
	else printf("0");//根据是否会不开心输出
	return 0;
}
