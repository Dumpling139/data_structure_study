#include"StackList.h"
#include<math.h>
#include<stdlib.h>

//����
float Count(char* a, char end);
//���ַ���ת��Ϊ������
float Float_char(char* a, int pos, int left, int right);
//����һ�γ˳�
float pre_count(FloatNode* numnode, CharNode* symnode);
//�������мӼ�
float lag_count(FloatNode* numnode, CharNode* symnode);
