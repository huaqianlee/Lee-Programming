#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node{
    struct Node* left;
    struct Node* right;
    int data;
}Node;
Node* newNode(int data){
    Node* node=(Node*)malloc(sizeof(Node));
    node->left=node->right=NULL;
    node->data=data;
    return node;
}

void levelOrder(Node* root){
    //Write your code here
    Node* queue[1000] = {NULL}; 
    Node* n = root;
    int i = 0, j = 0;

    while(n != NULL){
	i == 0 || printf(" ");
	//printf("%d ",n->data);
	printf("%d",n->data);

        if( n->left  != NULL ) queue[i++] = n->left;
        if( n->right != NULL ) queue[i++] = n->right;

        if(i != j) {
		n = queue[j++];
        } else {
        	n = NULL;
        }
    }
    printf("\n");
}

Node* insert(Node* root,int data){
    if(root==NULL)
        return newNode(data);
    else{
        Node* cur;
        if(data<=root->data){
            cur=insert(root->left,data);
            root->left=cur;                
        }
        else{
            cur=insert(root->right,data);
            root->right=cur;
        }
        
    }
    return root;
}
int main(){
    Node* root=NULL;
    int T,data;
    scanf("%d",&T);
    while(T-->0){
        scanf("%d",&data);
        root=insert(root,data);
    }
    levelOrder(root);
    return 0;
    
}
