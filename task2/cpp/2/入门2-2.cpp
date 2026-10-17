#include <stdio.h>
#include <math.h>
int main(void)
{
	int goal, an, ap, bn, bp, cn, cp;//输入的七个数
	int am, bm, cm;//三种笔满足要求时购买的套数
	scanf("%d\n%d %d\n%d %d\n%d %d", &goal, &an, &ap, &bn, &bp, &cn, &cp);
	am = ceil(1.0 * goal / an);
	bm = ceil(1.0 * goal / bn);
	cm = ceil(1.0 * goal / cn);//算出三种笔满足要求时购买的套数
	ap = am * ap;
	bp = bm * bp;
	cp = cm * cp;//每种方案需要的钱数
	(ap < bp) ? (goal = ap) : (goal = bp);
	(goal < cp) ? (goal = goal) : (goal = cp);//三目运算，谁更便宜
	printf("%d", goal);
	return 0;
}
