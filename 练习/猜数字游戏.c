#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int shurushuzhi(int, int, int);
int main()
{
	int suijishu;
	int caideshuzhi, caidechishu;
	int temp1, temp2;
	srand((unsigned)time(NULL));
start:
	suijishu = (rand() % 100);
	temp1 = -1;
	temp2 = 101;
	caidechishu = 1;
	system("cls");
	printf("*****************************\n          ը����Ϸ               \n*****************************\n");
	caideshuzhi = shurushuzhi(temp1, temp2, caidechishu);
	++caidechishu;
	while (suijishu != caideshuzhi)
	{
		if (caideshuzhi > suijishu)
		{
			printf("ը�����ƫ����\n");
			temp2 = caideshuzhi + 1;
			caideshuzhi = shurushuzhi(temp1, temp2, caidechishu);
			++caidechishu;
		}
		else
		{
			printf("ը�����ƫС��\n");
			temp1 = caideshuzhi - 1;
			caideshuzhi = shurushuzhi(temp1, temp2, caidechishu);
			++caidechishu;
		}
	}
	printf("ը����ը�ˣ�ը������ǣ�%d\n", suijishu);
	system("pause");
	goto start;
}

int shurushuzhi(int temp1, int temp2, int caidechishu)
{
	int caideshuzhi;
cai:
	printf("����%d��%d��ŷ�Χ֮�ڵ����֣������ǵ�%d�Σ�", temp1 + 1, temp2 - 1, caidechishu);
	scanf_s("%d", &caideshuzhi);
	if (caideshuzhi <= temp1 + 1 || caideshuzhi >= temp2 - 1)
	{
		goto cai;
	}
	return caideshuzhi;
}
