#define _CRT_SECURE_NO_WARNINGS 1
#include "BinaryTree.h"
BTNode* BuyNode(BTNDataType x)
{
	BTNode* ret = (BTNode*)malloc(sizeof(BTNode));
	ret->left = ret->right = NULL;
	ret->x = x;

	return ret;
}
void test()
{
	BTNode* n1 = BuyNode(1);
	BTNode* n2 = BuyNode(2);
	BTNode* n3 = BuyNode(3);
	BTNode* n4 = BuyNode(4);
	BTNode* n5 = BuyNode(5);
	//BTNode* n6 = BuyNode(6);

	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;
	//n4->left = n6;


	//printf("%d ", BinaryTreeFind(n1, 4)->x);
	//LevelOrder(n1);
	//printf("\n");
	//if (BinaryTreeComplete(n1))
	//{
	//	printf("是完全二叉树");
	//}
	//else
	//{
	//	printf("不是完全二叉树");
	//}
	//PerOrder(n1);
	//printf("\n");
	//InOrder(n1);
	//printf("\n");
	//PostOrder(n1);
	//printf("\n");

	//printf("结点个数:%d\n", BinaryTreeSize(n1));
	//printf("叶子结点个数:%d\n", BinaryTreeLeafSize(n1));
	//printf("k层结点个数:%d\n", BinaryTreeLeavelKSize(n1,3));
	//printf("树的深度:%d\n", BinaryTreeDepth(n1));

	BinaryTreeDestory(&n1);
}

int main()
{
	test();

	return 0;
}