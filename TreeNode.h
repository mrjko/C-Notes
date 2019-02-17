#ifndef TREENODE_H
#define TREENODE_H

/*
	use *struct if the data-rep is getting too large in mem
	-> can just pass in pointer instead of the whole data
	typedef struct can assign it a name
*/

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

// have to bring typedef outside first because we need to use it inside the TreeNode struct 
typedef struct TreeNode2 TreeNode2;

struct TreeNode2 {
	int val;
	TreeNode2 *left;
	TreeNode2 *right;
};

void convertBST(struct TreeNode *root);
void printTreeNodeInorder(struct TreeNode *root);
void printTreeNodePreorder(struct TreeNode *root);
void printTreeNodePostorder(struct TreeNode *root);
void printTreeNode(struct TreeNode *root, int mode);

void printTreeNode2Inorder(TreeNode2 *root);


#endif