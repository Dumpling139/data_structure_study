#include"count.h"
static int End_pos = 0;
float Count(char* a,char end)
{
	FloatNode* main_numnode = (FloatNode*)malloc(sizeof(FloatNode));
	CharNode* main_symnode = (CharNode*)malloc(sizeof(CharNode));
	InitStack2(main_numnode);
	InitStack(main_symnode);
	int flag = 0;
	//��һ�������
	int last_i = -1;
	//�ж���һ�������Ƿ��С����
	int Is_float = 0;
	//С�����λ��
	int Float = 0;
	//����������ȼ�
	int pre = 0;
	//���ż��������
	float quate = 0;
	//�Ƿ�������
	bool Is_quate = false;
	//��һ������
	float last_num = 0;
	do
	{
		//��������ȼ���
		if (a[flag] == '(')
		{
			quate = Count(a +flag+ 1, ')');
			Is_quate = true;
			flag += End_pos+1;
		}
		//�ж��Ƿ��С���㣬��ǰ���λ��
		else if (a[flag] == '.')
		{
			Is_float = 1;
			Float = flag;
		}
		//�����λ��
		else if (a[flag] == '+' || a[flag] == '-' || a[flag] == '*' || a[flag] == '/'||a[flag] == end)//������־Ϊ'\0'
		{
			//�ж���û������
			if (Is_quate)
			{
				StackPush2(main_numnode, quate);
				Is_quate = 0;
			}
			else
			{
				//�ж�С���������
				if (Is_float)
					StackPush2(main_numnode, Float_char(a, Float, last_i, flag));
				else
					StackPush2(main_numnode, Float_char(a, flag, last_i, flag));
			}
			//�ж����ȼ�
			if (pre)
				StackPush2(main_numnode,(pre_count(main_numnode, main_symnode)));
			if (a[flag] == '*' || a[flag] == '/')
				pre = 1;
			else
				pre = 0;
			//�����ѹջ
			StackPush(main_symnode, a[flag]);
			//����С���������
			Is_float = 0;
			//������һ�������λ��
			last_i = flag;
		}
		else
		{

		}
		flag++;
	} while (a[flag - 1] != end || Is_quate == 1);
	End_pos = flag - 1;
	StackPop(main_symnode);
	float final = lag_count(main_numnode, main_symnode);
	return final;
}

float Float_char(char* a, int pos,int left,int right)
{
	float sum = 0;
	float n = 0;
	for (int i = pos - 1; i > left; i--)
	{
		sum += (float)(a[i] - 48) * (float)pow(10, n);
		n++;
	}
	n = 1;
	for (int i = pos + 1; i < right; i++)
	{
		sum += (float)(a[i] - 48) * (float)pow(10, -n);
	}
	return sum;
}



float pre_count(FloatNode* numnode, CharNode* symnode)
{
	float a = StackTop2(numnode);
	StackPop2(numnode);
	float b = StackTop2(numnode);
	StackPop2(numnode);
	float c = 0;
	if (StackTop(symnode) == '*')
		c =  a * b;
	else 
		c =  a / b;
	StackPop(symnode);
	return c;
}

float lag_count(FloatNode* numnode, CharNode* symnode)
{
	float sum = StackTop2(numnode);
	StackPop2(numnode);
	while (!StackEmpty2(numnode))
	{
		if ((StackTop(symnode)) == '+')
			sum += StackTop2(numnode);
		else
			sum -= StackTop2(numnode);
		StackPop2(numnode);
		StackPop(symnode);
	}
	if (!StackEmpty(symnode))
	{
		printf("������������ʽ");
		exit;
	}
	return sum;
}