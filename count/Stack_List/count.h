#include"StackList.h"
#include<math.h>
#include<stdlib.h>

//计算
float Count(char* a, char end);
//将字符串转化为浮点数
float Float_char(char* a, int pos, int left, int right);
//计算一次乘除
float pre_count(FloatNode* numnode, CharNode* symnode);
//计算所有加减
float lag_count(FloatNode* numnode, CharNode* symnode);
