#include<stdio.h>
void squeeze(char s[], char c[]) 
{
	int i, j, t = 0;
	while (c[t++] != '\0')
	{
		for (i = j = 0; s[i] != '\0'; i++)
			if (s[i] != c[t])
				s[j++] = s[i];
		s[j] = '\0';
	}
}