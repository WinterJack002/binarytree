#include<stdio.h>
// #include"BinaryTree.h"
#include"Fun.h"

int Sumbt(BTNode *bt);
int main()
{
   
   int arr[7]={1,3,8,2,5,6,7};
   Tree tree;
   tree.root = NULL;

   int i;
   for(i=0;i<7;i++){
        insert(&tree,arr[i]); //把值插入到节点中以构造二叉树
   }
   int sum = 0;
   sum = Sumbt(tree.root); //求二叉树的和
   printf("二叉树的和为：\n%d",sum);

   printf("树的根的值是：\n%d",tree.root->data);
    return 0;


 // inorder(tree.root);

    /*
    int a;
    BTNode bt;
    bt.data = 10;
    //bt.lchild = 1;
    //bt.rchild = 2;
    a = Sumbt(&bt);

    printf("二叉树计算结果：\n");
    printf("%d:",a);

    */
}

