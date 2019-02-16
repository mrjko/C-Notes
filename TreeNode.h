#ifndef TREENODE_H
#define TREENODE_H

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

void convertBST(struct TreeNode *root);
void printTreeNodeInorder(struct TreeNode *root);
void printTreeNodePreorder(struct TreeNode *root);
void printTreeNodePostorder(struct TreeNode *root);
void printTreeNode(struct TreeNode *root, int mode);

#endif