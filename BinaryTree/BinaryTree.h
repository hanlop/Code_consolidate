#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Queue.h"
typedef int BTNDataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTNDataType x;
}BTNode;

//前序遍历
void PerOrder(BTNode* root);
//中序遍历
void InOrder(BTNode* root);
//前序遍历
void PostOrder(BTNode* root);


//二叉树的节点个数
int BinaryTreeSize(BTNode* root);

//二叉树叶子结点个数
int BinaryTreeLeafSize(BTNode* root);

// ⼆叉树第k层结点个数
int BinaryTreeLeavelKSize(BTNode* root, int k);

//二叉树的深度
int BinaryTreeDepth(BTNode* root);

//二叉树查找值为x的结点
BTNode* BinaryTreeFind(BTNode* root, BTNDataType x);

// ⼆叉树销毁
void BinaryTreeDestory(BTNode** root);

//二叉树的层序遍历
void LevelOrder(BTNode* root);

//判断二叉树是否为完全二叉树
bool BinaryTreeComplete(BTNode* root);