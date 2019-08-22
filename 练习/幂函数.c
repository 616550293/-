#include<stdio.h>
int power(int m, int n);
int main(void)
{
	int i = 3;
	printf("%d %d %d", i, power(2, i), power(-3, i));
	return 0;
}	
int power(int m, int n)
{
	int p = 1;
	for (p = 1; n > 0; n--)
		p = p * m;
	return p;
}