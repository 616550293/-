#include<stdio.h>
int power(int m, int n);
int main(void)
{
	int i;
	i = 3;
	printf("%d %d %d", i, power(2, i), power(-3, i));
	return 0;
}	
int power(int m, int n)
{
	int i, p;
	p = 1;
	for (i = 0;i < n; ++i)
		p = p * m;
	return p;
}