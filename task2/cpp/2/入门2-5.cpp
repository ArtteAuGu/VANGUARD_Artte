#include <stdio.h>
int main(void)
{
	int a, b, c, d, e, f, g, h, i, s1, s2;//9位数字和两个可能的运算结果
	char j;
	scanf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%c", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
	s1 = (a * 1 + b * 2 + c * 3 + d * 4 + e * 5 + f * 6 + g * 7 + h * 8 + i * 9) % 11;
	if (j == 'X')
		s2 = 10;
	else
		s2 = j-'0';//快速把字符型数字转为整型，无需ASCII转换
	if (s1 == s2)
		printf("Right");
	else
		if (s1 == 10)
			printf("%d-%d%d%d-%d%d%d%d%d-X", a, b, c, d, e, f, g, h, i);
		else
			printf("%d-%d%d%d-%d%d%d%d%d-%d", a, b, c, d, e, f, g, h, i, s1);
	return 0;
}
