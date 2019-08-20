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
	printf("*****************************\n          炸弹游戏               \n*****************************\n");
	caideshuzhi = shurushuzhi(temp1, temp2, caidechishu);
	++caidechishu;
	while (suijishu != caideshuzhi)
	{
		if (caideshuzhi > suijishu)
		{
			printf("炸弹编号偏大了\n");
			temp2 = caideshuzhi + 1;
			caideshuzhi = shurushuzhi(temp1, temp2, caidechishu);
			++caidechishu;
		}
		else
		{
			printf("炸弹编号偏小了\n");
			temp1 = caideshuzhi - 1;
			caideshuzhi = shurushuzhi(temp1, temp2, caidechishu);
			++caidechishu;
		}
	}
	printf("炸弹爆炸了，炸弹编号是：%d\n", suijishu);
	system("pause");
	goto start;
}

int shurushuzhi(int temp1, int temp2, int caidechishu)
{
	int caideshuzhi;
cai:
	printf("输入%d到%d编号范围之内的数字，现在是第%d次：", temp1 + 1, temp2 - 1, caidechishu);
	scanf_s("%d", &caideshuzhi);
	if (caideshuzhi <= temp1 + 1 || caideshuzhi >= temp2 - 1)
	{
		goto cai;
	}
	return caideshuzhi;
}
