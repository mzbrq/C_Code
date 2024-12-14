#define _CRT_SECURE_NO_WARNINGS 1


//二叉数 遍历结构
// 
#include<stdio.h>
#include<stdlib.h>

typedef char BTDataType;

typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;

}BTNode;

//先根遍历 顺序：根 左子数 右子数

void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	printf("%c ", root->data);

	PrevOrder(root->left);
	PrevOrder(root->right);
}

//中根遍历 顺序：左子树 根 右子树
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	InOrder(root->left); // 左子树
	printf("%c ", root->data);//根
	InOrder(root->right);//右子树
}

int main()
{
	BTNode* A = (BTNode*)malloc(sizeof(BTNode));
	if (A == NULL)
	{
		exit(-1);
	}
	A->data = 'A';

	BTNode* B = (BTNode*)malloc(sizeof(BTNode));
	B->data = 'B';

	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
	C->data = 'C';

	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
	D->data = 'D';

	BTNode* E = (BTNode*)malloc(sizeof(BTNode));
	E->data = 'E';

	BTNode* F = (BTNode*)malloc(sizeof(BTNode));
	F->data = 'F';


	A->left = B;
	A->right = C;

	B->left = D;
	B->right = E;

	D->right = D->left = NULL;
	E->right = E->left = NULL;

	C->left = F;
	C->right = NULL;

	F->left = F->right = NULL;

	//PrevOrder(A);
	InOrder(A);

	return 0;
}