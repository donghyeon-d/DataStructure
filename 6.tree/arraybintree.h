#ifndef _ARRAY_BIN_TREE_
#define _ARRAY_BIN_TREE_

typedef struct ArrayBinTreeNodeType
{
	int data;
} ArrayBinTreeNode;

typedef struct ArrayBinTreeType
{
	int maxElementCount;		// 최대 원소 개수
	int currentElementCount;	// 현재 원소의 개수
	ArrayBinTreeNode *pElement;	// 원소 저장을 위한 1차원 배열
} ArrayBinTree;

ArrayBinTree	*makeArrayBinTree(int maxElementCount);
int				insertLeftChildNodeABT(ArrayBinTree	*bintree, int rootIndex, int data);//index return
int				insertRightChildNodeABT(ArrayBinTree	*bintree, int rootIndex, int data);//index return
void			insertInorder(ArrayBinTree	*bintree, int data);
int				 findDataIndex(ArrayBinTree	*bintree, int data);
void			displayArrayBinTree(ArrayBinTree	*arraybintree);

#endif