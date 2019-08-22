#include<stdio.h>
#define maxline 1000
int htoi(char s[]);
void main(void)
{
	char ff[maxline];
	int c,i,daan;
	for (i = 0; (c = getchar()) != EOF; ++i)
		ff[i] = c;
	daan=htoi(ff);
	printf("%d", daan);
	return 0;
}
int htoi(char s[])
{
	int i, p = 0;
	for (i = 0; s[i] != '\n'; ++i) 
	{
		if (s[i] >= '0'&&s[i] <= '9')
			p = 16 * p + (s[i] - '0');
		else if (s[i] >= 'a'&&s[i] <= 'f')
			p = 16 * p + (s[i] - 'a' + 10);
		else if (s[i] >= 'A'&&s[i] <= 'F')
			p = 16 * p + (s[i] - 'A' + 10);
	}
	return p;
}