#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"

//前序遍历 根左右
void PerOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	printf("%d ", root->x);
	PerOrder(root->left);
	PerOrder(root->right);
}

//中序遍历 左根右
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	InOrder(root->left);
	printf("%d ", root->x);
	InOrder(root->right);
}

//前序遍历 左右根
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->x);
}

//二叉树的节点个数
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	return 1 + BinaryTreeSize(root->left) + BinaryTreeSize(root->right);
}

//二叉树叶子结点个数
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}

	return BinaryTreeLeafSize(root->left) + BinaryTreeLeafSize(root->right);
}

// ⼆叉树第k层结点个数
int BinaryTreeLeavelKSize(BTNode* root, int k)
{
	if (root == NULL)
	{
		return 0;
	}

	if (k == 1)
	{
		return 1;
	}

	return BinaryTreeLeavelKSize(root->left, k - 1) + BinaryTreeLeavelKSize(root->right, k - 1);
}

int BinaryTreeDepth(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	//if (root->left == NULL && root->right == NULL)
	//{
	//	return 1;
	//}

	int numLeft = BinaryTreeDepth(root->left);
	int numRight = BinaryTreeDepth(root->right);

	return 1 + (numLeft > numRight ? numLeft : numRight);
}

//找到结点为x的值
BTNode* BinaryTreeFind(BTNode* root, BTNDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}

	if (root->x == x)
	{
		return root;
	}

	BTNode* retLeft = BinaryTreeFind(root->left, x);
	if (retLeft)
		return retLeft;

	BTNode* retRight = BinaryTreeFind(root->right, x);
	if (retRight)
		return retRight;

	return NULL;
}

//二叉树的销毁
void BinaryTreeDestory(BTNode** root)
{
	if (*root == NULL)
	{
		return;
	}

	BTNode* leftTree = (*root)->left;
	BTNode* rightTree = (*root)->right;
	free(*root);
	*root = NULL;
	BinaryTreeDestory(&leftTree);
	BinaryTreeDestory(&rightTree);
}

void LevelOrder(BTNode* root)
{
	Queue pq;
	QueueInit(&pq);
	//将根结点放入队列中

	QueuePush(&pq, root);

	while (!QueueEmpty(&pq))
	{
		if (QueueFront(&pq) != NULL)
			printf("%d ", QueueFront(&pq)->x);
		else
			printf("NULL ");

		if (QueueFront(&pq) != NULL)
		{
			QueuePush(&pq, QueueFront(&pq)->left);
			QueuePush(&pq, QueueFront(&pq)->right);
		}

		QueuePop(&pq);
	}

	QueueDestory(&pq);
}

bool BinaryTreeComplete(BTNode* root)
{
	Queue pq;
	QueueInit(&pq);

	QueuePush(&pq, root);

	while (QueueFront(&pq)!=NULL)
	{
		QueuePush(&pq, QueueFront(&pq)->left);
		QueuePush(&pq, QueueFront(&pq)->right);

		QueuePop(&pq);
	}

	while (!QueueEmpty(&pq))
	{
		if (QueueFront(&pq) != NULL)
		{
			QueueDestory(&pq);
			return false;
		}
		QueuePop(&pq);
	}

	QueueDestory(&pq);
	return true;
}