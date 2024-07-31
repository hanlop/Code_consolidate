#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
typedef char BTNDataType;
typedef struct BinaryTreeNode
{
    struct BinaryTreeNode* left;
    struct BinaryTreeNode* right;
    BTNDataType x;
}BTNode;
BTNode* BuyNode(char* arr, int* i)
{
    BTNode* newNode = (BTNode*)malloc(sizeof(BTNode));
    newNode->x = arr[*i];
    newNode->left = newNode->right = NULL;

    return newNode;
}
BTNode* creatBinaryTree(BTNode* root, char* arr, int* i)
{
    if (arr[*i] == '#')
    {
        (*i)++;
        return NULL;
    }

    root = BuyNode(arr,i);
    (*i)++;

    root->left = creatBinaryTree(root->left, arr, i);
    root->right = creatBinaryTree(root->right, arr, i);

    return root;
}
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

int main() {
    char arr[100] = { 0 };
    scanf("%s", arr);
    int i = 0;
    BTNode root;
    root.x = 0;
    root.left = root.right = NULL;
    BTNode* ret = creatBinaryTree(&root, arr, &i);

    InOrder(ret);
}