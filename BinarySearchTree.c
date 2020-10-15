#include<stdio.h>
#include<stdlib.h>
 
struct node{
	int key;
	struct node *left, *right;
};

struct node *root = NULL;
   
struct node *newNode(int item){
	struct node *temp =  (struct node *)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}
   
void printInorder(struct node *root){
	if (root != NULL){
    	printInorder(root->left);
    		printf("%d ", root->key);
    		printInorder(root->right);
	}
}
void printPreorder(struct node* node){
 	if (node == NULL)
      		return;
 	printf("%d ", node->key);   
 	printPreorder(node->left);   
 	printPreorder(node->right);
}
void printPostorder(struct node* node){
 	if (node == NULL)
    		return;
 	printPostorder(node->left);
 	printPostorder(node->right);
 	printf("%d ", node->key);
}
struct node* insert(struct node* node,int key){
	if (node == NULL)
    		return newNode(key);
	if (key < node->key)
    		node->left  = insert(node->left, key);
	else if (key > node->key)
    		node->right = insert(node->right, key);    
	return node;
}
struct node * minValueNode(struct node* node){
	struct node* current = node;
	while (current && current->left != NULL)
    		current = current->left;
	return current;
}
struct node* deleteNode(struct node* root, int key){
	if (root == NULL)
    		return root;
	if (key < root->key)
    		root->left = deleteNode(root->left, key);
	else if (key > root->key)
    		root->right = deleteNode(root->right, key);
	else if(root->left == NULL){
        		struct node *temp = root->right;
        		free(root);
        		return temp;
    	else if (root->right == NULL){
        	struct node *temp = root->left;
        		free(root);
        		return temp;
    	}
    	struct node* temp = minValueNode(root->right);
    	root->key = temp->key;
    	root->right = deleteNode(root->right, temp->key);
	}
	return root;
}
void printMenu(){
    printf("-------------------------------------\n");
    printf("1. Insert a node into the BST.\n");
    printf("2. Delete a node from the BST.\n");
    printf("3. Display the preorder traversal of the BST.\n");
    printf("4. Display the inorder traversal of the BST.\n");
    printf("5. Display the postorder traversal of the BST.\n");
    printf("6. Exit\n");
    printf("-------------------------------------\n");
    printf("Enter your choice: ");
}
void main(){
    int c = 1;
    while(1){
   	 int choice;
   	 printMenu();
   	 int k;
   	 scanf("%d", &choice);
   	 switch(choice){
   		 case 1:
   			 scanf("%d",&k);
   			 if(c){
   				 root = insert(root,k);
   				 c = 0;
   			 }
   			 else
   				 insert(root,k);
   			 break;
   		 case 2:
   			 scanf("%d",&k);
   			 deleteNode(root,k);
   			 break;
   		 case 3:
   			 printPreorder(root);
   			 printf("\n");
   			 break;
   		 case 4:
   			 printInorder(root);
   			 printf("\n");
   			 break;
   		 case 5:
   			 printPostorder(root);
   			 printf("\n");
   			 break;
   		 case 6:
   			 exit(0);
   		 default:
   			 printf("Invalid Choice\n");
   			 break;
   	 };
    }
}
