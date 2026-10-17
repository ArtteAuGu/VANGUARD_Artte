#include <stdio.h>
int main(void)
{
	int x, n, d, s1, s2;
	scanf("%d %d", &x, &n);
	s1 = n / 7 * 5;
	d = n % 7;//未满一周的天数
	if (d != 0)
		if (d <= 6 - x)
			s2 = d;//周末前的天数
		else if (d == 7 - x || d == 8 - x)
			if (x >= 1 && x <= 5)
				s2 = 6 - x;//周末不游
			else
				s2 = 0;
		else
			if (x >= 1 && x <= 5)
				s2 = (6 - x) + d - (8 - x);//周末前后天数和
			else
				s2 = d - (8 - x);
	else
		s2 = 0;
	printf("%d", 250*(s1 + s2));
	return 0;
}
