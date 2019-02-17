#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include "TreeNode.h"

void helloWorld(void) {

	printf("Hello makefiles!\n");

	struct TreeNode l = {2};
	struct TreeNode r = {13};
	struct TreeNode root = {5, &l, &r};
	printTreeNode(&root, 0); 
	convertBST(&root);
	printTreeNode(&root, 0); 

	TreeNode2 ll2 = {4};
	TreeNode2 lr2 = {5};
	TreeNode2 rl2 = {6};
	TreeNode2 l2  = {2, &ll2, &lr2};
	TreeNode2 r2  = {3, &rl2};
	TreeNode2 root2 = {1, &l2, &r2};

	printf("\n");

	printTreeNode2Inorder(&root2); 

	printf("\n");
	return;
}

int sum = 0;

// some random leetcode question
void convertBST(struct TreeNode *root) {
	if (root != NULL) {
		convertBST(root->right);
		sum += root->val;
		root->val = sum;
		convertBST(root->left);
	}
}

void printTreeNodePreorder(struct TreeNode *root) {
	printf("%d ", root->val);
	if (root->left != NULL) {
		printTreeNodePreorder(root->left);
	}
	if (root->right != NULL){
		printTreeNodePreorder(root->right);
	}
}

void printTreeNodeInorder(struct TreeNode *root) {
	if (root->left != NULL) 
		printTreeNodeInorder(root->left);
	printf("%d ", root->val);
	if (root->right != NULL)
		printTreeNodeInorder(root->right);
}

void printTreeNode2Inorder(TreeNode2 *root) {
	if (root->left != NULL) 
		printTreeNode2Inorder(root->left);
	printf("%d ", root->val);
	if (root->right != NULL)
		printTreeNode2Inorder(root->right);
}

void printTreeNodePostorder(struct TreeNode *root) {
	if (root->left != NULL) 
		printTreeNodePostorder(root->left);
	if (root->right != NULL)
		printTreeNodePostorder(root->right);
	printf("%d ", root->val);
}

/* 
	mode: 0 (preorder) 1 (inorder) 2 (postorder)
*/	
void printTreeNode(struct TreeNode *root, int mode) {
	switch (mode) {
		case 0:
			printf("\npreorder print: ");
			printTreeNodePreorder(root);
		case 1:
			printf("\ninorder print: ");
			printTreeNodeInorder(root);
		case 2:
			printf("\npostorder print: ");
			printTreeNodePostorder(root);
	}
}