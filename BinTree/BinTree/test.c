#define _CRT_SECURE_NO_WARNINGS 1


#include"BinTree.h" 



int TreeHight(BTNode* root)
{
	if (root == NULL)
		return 0;
	else
	{
		int a = TreeHight(root->left);
		int b = TreeHight(root->right);
		if (a < b)
			a = b;
		return a + 1;
	}
}


int main()
{
	char a1[] = "ABD##E#H##CF##G##";
	char a2[] = "ABDH###E##CF##G##";
	int p1 = 0;
	int p2 = 0;
	BTNode* root1 = BinaryTreeCreate(a1, (sizeof(a1) - 1) / sizeof(char), &p1);
	BTNode* root2 = BinaryTreeCreate(a2, (sizeof(a2) - 1) / sizeof(char), &p2);
	printf("%d\n", BinaryTreeComplete(root1));
	printf("%d", BinaryTreeComplete(root2));
	return 0;
}