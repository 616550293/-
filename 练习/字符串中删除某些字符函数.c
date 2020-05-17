#include<stdio.h>
void squeeze(char s[], char c[])
{
	int i, j, t = 0;
	while (c[t] != '\0')
	{
		for (i = j = 0; s[i] != '\0'; i++)
			if (s[i] != c[t]){ 
				s[j++] = s[i]; 
			}
		s[j] = '\0';
		t++;
	}
}

int main()
{
	char s[1000];
	char c[1000];
	int i, j, n;
	for (i = 0; (n = getchar()) != EOF; ++i)
		s[i] = n;
	s[i] = '\0';
	for (j = 0; (n = getchar()) != EOF; ++j)
		c[j] = n;
	c[j] = '\0';
	printf("原字符串为：%s要删除的字符为：%s", s, c);
	squeeze(s, c);
	printf("结果为：%s", s);
	return 0;
}