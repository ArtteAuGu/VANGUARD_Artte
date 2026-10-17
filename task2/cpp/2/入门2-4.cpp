#include <stdio.h>
int main(void)
{
	int a, b, c, A, B, C;
	char j, k, l;
	scanf("%d %d %d\n", &a, &b, &c);
	j = getchar();
	k = getchar();
	l = getchar();
	C = (a > b ? a : b) > c ? (a > b ? a : b) : c;
	A = (a < b ? a : b) < c ? (a < b ? a : b) : c;
	B = (a + b + c) - A - C;
	if (j == 'A' && k == 'B' && l == 'C')  printf("%d %d %d", A, B, C);
	if (j == 'A' && k == 'C' && l == 'B')  printf("%d %d %d", A, C, B);
	if (j == 'B' && k == 'A' && l == 'C')  printf("%d %d %d", B, A, C);
	if (j == 'B' && k == 'C' && l == 'A')  printf("%d %d %d", B, C, A);
	if (j == 'C' && k == 'A' && l == 'B')  printf("%d %d %d", C, A, B);
	if (j == 'C' && k == 'B' && l == 'A')  printf("%d %d %d", C, B, A);
	return 0;
}
