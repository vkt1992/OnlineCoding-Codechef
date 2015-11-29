#include <iostream>
#include <stdio.h>

struct node
{
	char data;
	node *left;
	node *right;
}*root;

int search(char arr[],int strt,int end,char value)
{
	int i;
	for(i=strt;i<=end;i++)
	{
		if(arr[i]==value)
			return i;
	}
}

node *buildTree(char in[],char pre[],int instrt,int inend)
{
	static int preindex=0;

	if(instrt > inend)	return NULL;

	node *tnode=new node;
	tnode->data=pre[preindex++];
	tnode->left=NULL;
	tnode->right=NULL;

	if(inend==instrt)	return tnode;

	int finderkey=search(in,instrt,inend,tnode->data);

	tnode->left=buildTree(in,pre,instrt,finderkey-1);
	tnode->right=buildTree(in,pre,finderkey+1,inend);

	return tnode;
}

void printInorder(struct node* node)
{
  if (node == NULL)
     return;

  printInorder(node->left);
  printf("%c ", node->data);
  printInorder(node->right);
}

int main()
{
	
  char in[] = {'D', 'B', 'E', 'A', 'F', 'C'};
  char pre[] = {'A', 'B', 'D', 'E', 'C', 'F'};

  root = buildTree(in, pre, 0, 5);
 
  printf("\n Inorder traversal of the constructed tree is \n");
  printInorder(root);
  return 0;
}