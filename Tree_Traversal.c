 /*Creating a BST Traversal Program*/
#include <stdio.h>
#include <stdlib.h>
//Creating a node for tree
struct node {
    int data;
    struct node* left;
    struct node* right;
};
 
struct node* newNode(int data)
{
    struct node* node
        = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return (node);
}
int main()
{
    struct node* root = newNode(1);        Adding Values in the node of BT
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    printf("\nPreorder traversal of binary tree is \n");    //Pre-Order
    printPreorder(root);
 
    printf("\nInorder traversal of binary tree is \n");     //In-Order
    printInorder(root);
 
    printf("\nPostorder traversal of binary tree is \n");   //Post-Order
    printPostorder(root); 
 
    return 0;
}
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* node)
{
    if (node == NULL)
        return;
 
    /* first print data of node */
    printf("%d ", node->data);
 
    /* then recur on left subtree */
    printPreorder(node->left);
 
    /* now recur on right subtree */
    printPreorder(node->right);
}
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder(node->left);
 
    /* then print the data of node */
    printf("%d ", node->data);
 
    /* now recur on right child */
    printInorder(node->right);
}
 /* Given a binary tree, print its nodes in postorder*/
void printPostorder(struct node* node)
{
    if (node == NULL)
        return;
 
    printPostorder(node->left); // first recur on left subtree
 
    printPostorder(node->right); // then recur on right subtree

 
    // now deal with the node
    printf("%d ", node->data);
} 

//Using user input 

/*
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* lchild;
	struct node* rchild;
};
struct node* root= NULL;

void preOrder(struct node* root){
	
	if(root != NULL){
		printf("%d ", root->data);
		preOrder(root->lchild);
		preOrder(root->rchild);			
	}
}

void postOrder(struct node* root){
	
	if(root != NULL){
		postOrder(root->lchild);
		postOrder(root->rchild);
		printf("%d ", root->data);
	}
}

void inOrder(struct node* root){
	
	if(root != NULL){
		inOrder(root->lchild);
		printf("%d ", root->data);
		inOrder(root->rchild);		
	}
}

void insert(struct node** pos, int data){
	struct node* child = (struct node*) malloc(sizeof(struct node));
	child->data=data;
	char choice;

	
	printf("\ndoes %d have left child? (y/n): ", child->data);
	scanf(" %c", &choice);
	if(choice == 'n'){
		child->lchild=NULL;
	}
	else{
		int val;
		printf("\nEnter value of left child: ");
		scanf("%d", &val);
		insert(&child->lchild, val);
	}
	
	printf("\ndoes %d have right child? (y/n): ", child->data);
	scanf(" %c", &choice);
	if(choice == 'n'){
		child->rchild=NULL;
	}
	else{
		int val;
		printf("\nEnter value of right child: ");
		scanf("%d", &val);
		insert(&child->rchild, val);
	}
	
	*pos = child;
		
}

int main(){
	int n;
	printf("Enter value of root: ");
	scanf("%d", &n);
	insert(&root, n);
	
	printf("\nPreorder: ");
	preOrder(root);
	
	printf("\nPostorder: ");
	postOrder(root);
	
	printf("\nInorder: ");
	inOrder(root);

}
*/
