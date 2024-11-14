#include"BinTree.h"

//队列
typedef struct Queuenode {
	QueueDataType* data;
	struct Queuenode* next;
}Qnode;
typedef struct Queue {
	Qnode* qhead;
	Qnode* qtail;
}Queue;
//初始化队列
void Initqueue(Queue* pq) {
	assert(pq);
	pq->qhead = NULL;
	pq->qtail = NULL;
}
//销毁队列
void Destoryqueue(Queue* pq) {
	assert(pq);
	while (pq->qhead)
	{
		Qnode* p = pq->qhead;
		pq->qhead = pq->qhead->next;
		free(p);
	}
	pq->qhead = NULL;
	pq->qtail = NULL;
}
//入队列
void Pushqueue(Queue* pq, QueueDataType* a) {
	assert(pq);
	Qnode* tmp = (Qnode*)malloc(sizeof(Qnode));
	if (tmp == NULL)
	{
		perror("malloc error");
	}
	if (pq->qtail == NULL)
	{
		pq->qtail = tmp;
		pq->qhead = tmp;
	}
	else
	{
		pq->qtail->next = tmp;
		pq->qtail = pq->qtail->next;
	}
	pq->qtail->data = a;
	pq->qtail->next = NULL;
}
//出队列
void Popqueue(Queue* pq)
{
	assert(pq);
	if (pq->qhead == pq->qtail)
	{
		free(pq->qhead);
		pq->qhead = NULL;
		pq->qtail = NULL;
	}
	else
	{
		Qnode* tmp = pq->qhead;
		pq->qhead = pq->qhead->next;
		free(tmp);
	}
}
//判空
int QueueEmpty(Queue* pq)
{
	return (bool)pq->qhead;
}
//查看队头
QueueDataType* Topqueue(Queue* pq)
{
	return pq->qhead->data;
}
//创建节点
BTNode* CreatNode(DataType a)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		perror("malloc error");
	}
	node->val = a;
	node->left = NULL;
	node->right = NULL;
	return node;
}


// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BinaryTreeCreate(DataType* a, int n, int* pi)
{
	BTNode* root = NULL;
	if (*pi < n)
	{
		if (a[*pi] == '#')
		{
			(*pi)++;
			return NULL;
		}
		root = CreatNode(a[*pi]);
		(*pi)++;
		root->left = BinaryTreeCreate(a, n, pi);
		root->right = BinaryTreeCreate(a, n, pi);
	}
	return root;
}


// 二叉树销毁
void BinaryTreeDestory(BTNode** root)
{
	if (*root == NULL)
		return;
	BinaryTreeDestory(&(*root)->left);
	BinaryTreeDestory(&(*root)->right);
	free(*root);
}
// 二叉树节点个数
int BinaryTreeSize(BTNode* root)
{
	return root == NULL ? 0 : BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
}
// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
}
// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return  BinaryTreeLevelKSize(root->left, k - 1) + BinaryTreeLevelKSize(root->right, k - 1);
}
// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, DataType x)
{
	if (root == NULL)
		return NULL;
	if (root->val == x)
		return root;
	BTNode* tmp = BinaryTreeFind(root->left, x);
	if (tmp != NULL)
		return tmp;
	return BinaryTreeFind(root->right, x);
}
// 二叉树前序遍历 
void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("# ");
		return;
	}
	else
	{
		printf("%c ", root->val);
		BinaryTreePrevOrder(root->left);
		BinaryTreePrevOrder(root->right);
	}
}
// 二叉树中序遍历
void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
		return;
	else
	{
		BinaryTreeInOrder(root->left);
		printf("%d ", root->val);
		BinaryTreeInOrder(root->right);
	}
}
// 二叉树后序遍历
void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL)
		return;
	else
	{
		BinaryTreePostOrder(root->left);
		BinaryTreePostOrder(root->right);
		printf("%d ", root->val);
	}
}
// 层序遍历
void BinaryTreeLevelOrder(BTNode* root)
{
	Queue* pq = (Queue*)malloc(sizeof(Queue));
	if (pq == NULL)
	{
		perror("malloc error");
	}
	Initqueue(pq);
	Pushqueue(pq, root);
	while (QueueEmpty(pq)) 
	{
		BTNode* tmp = Topqueue(pq);
		Popqueue(pq);
		if (tmp != NULL)
		{
			Pushqueue(pq, tmp->left);
			Pushqueue(pq, tmp->right);
			printf("%c ", tmp->val);
		}
		else
			printf("# ");
	}
}
// 判断二叉树是否是完全二叉树
int BinaryTreeComplete(BTNode* root)
{
	int flag = 0;
	Queue* pq = (Queue*)malloc(sizeof(Queue));
	if (pq == NULL)
	{
		perror("malloc error");
	}
	Initqueue(pq);
	Pushqueue(pq, root);
	while (QueueEmpty(pq))
	{
		BTNode* tmp = Topqueue(pq);
		Popqueue(pq);
		if (tmp == NULL)
			break;
		Pushqueue(pq, tmp->left);
		Pushqueue(pq, tmp->right);
	}
	while (QueueEmpty(pq))
	{
		BTNode* tmp = Topqueue(pq);
		if (tmp != NULL)
			return 0;
		Popqueue(pq);
	}
	return 1;
}