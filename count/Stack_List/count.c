#include"count.h"
static int End_pos = 0;
float Count(char* a,char end)
{
	FloatNode* main_numnode = (FloatNode*)malloc(sizeof(FloatNode));
	CharNode* main_symnode = (CharNode*)malloc(sizeof(CharNode));
	InitStack2(main_numnode);
	InitStack(main_symnode);
	int flag = 0;
	//上一个运算符
	int last_i = -1;
	//判断上一个数字是否带小数点
	int Is_float = 0;
	//小数点的位置
	int Float = 0;
	//运算符的优先级
	int pre = 0;
	//括号计算的数字
	float quate = 0;
	//是否有括号
	bool Is_quate = false;
	//上一个数字
	float last_num = 0;
	do
	{
		//括号里的先计算
		if (a[flag] == '(')
		{
			quate = Count(a +flag+ 1, ')');
			Is_quate = true;
			flag += End_pos+1;
		}
		//判断是否带小数点，提前算好位置
		else if (a[flag] == '.')
		{
			Is_float = 1;
			Float = flag;
		}
		//运算符位置
		else if (a[flag] == '+' || a[flag] == '-' || a[flag] == '*' || a[flag] == '/'||a[flag] == end)//结束标志为'\0'
		{
			//判断有没有括号
			if (Is_quate)
			{
				StackPush2(main_numnode, quate);
				Is_quate = 0;
			}
			else
			{
				//判断小数点存在性
				if (Is_float)
					StackPush2(main_numnode, Float_char(a, Float, last_i, flag));
				else
					StackPush2(main_numnode, Float_char(a, flag, last_i, flag));
			}
			//判断优先级
			if (pre)
				StackPush2(main_numnode,(pre_count(main_numnode, main_symnode)));
			if (a[flag] == '*' || a[flag] == '/')
				pre = 1;
			else
				pre = 0;
			//运算符压栈
			StackPush(main_symnode, a[flag]);
			//调整小数点存在性
			Is_float = 0;
			//调整上一个运算符位置
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
		printf("输入错误，请检查格式");
		exit;
	}
	return sum;
}