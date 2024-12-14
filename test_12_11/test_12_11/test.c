#define _CRT_SECURE_NO_WARNINGS 1


//������ �����ṹ
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

//�ȸ����� ˳�򣺸� ������ ������

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

//�и����� ˳�������� �� ������
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}

	InOrder(root->left); // ������
	printf("%c ", root->data);//��
	InOrder(root->right);//������
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