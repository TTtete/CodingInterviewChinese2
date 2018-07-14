/**
*************************************************************************
* @Author CHENDONGHAO
* @ V1.0
* @Brief This file contain the head of structing BinaryTree
****************************************************************************
**/

/**Define to Prevent recursive inclusion************************************/
#ifndef _BINARYTREE_H_
#define type int
/**Export Variables****************************************/
struct TreeNode
{
	struct TreeNode* pFather;
	struct TreeNode* pRight;
	struct TreeNode* pLeft;
	type value;
};


/**Export Function*********************************************************/
struct TreeNode* ConstructCore(type* PreOrder, type* InOrder, int Length);
void FreeTree(struct TreeNode* root);

#endif // !_BINARYTREE_H_

/*******END OF FILE*****************************************************/

