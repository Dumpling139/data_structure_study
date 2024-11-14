#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

bool IsKF(char* virus, char* human, int virus_size, int human_size)
{
	int vflag = 0;
	int hflag = 0;
	int flag = 1;
	int hback = 0;
	for (hflag = 0; hflag < human_size-virus_size+1; hflag++)
	{
		hback = hflag;
		if (virus[vflag] == human[hflag])
		{
			for (int i = 0; i < virus_size; i++)
			{
				if (virus[vflag] != human[hflag])
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
			{
				return true;
			}
		}
		vflag = 0;
		hflag = hback;

	}
	return false;
}

void test()
{
	while (1)
	{
		int flag = 0;
		char virus[256] = { 0 };
		char human[256] = { 0 };
		scanf("%s", virus);
		//修改成两倍
		int p = strlen(virus);
		for (int i = 0; i < p; i++)
		{
			virus[p + i] = virus[i];
		}
		virus[2 * p] = '\0';
		scanf("%s", human);
		if (virus[0] == '0')
			break;
		for (int i = 0; i < p; i++)
		{
			if (IsKF(virus + i, human, p, strlen(human)))
			{
				printf("YES\n");
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			printf("NO\n");
		}
	}
}
int main() {
	test();
	printf("网工1班，李俊熙，2023213942");
	return 0;
}