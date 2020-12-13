#include <stdio.h>
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

int getHeight(Node* root){
  //Write your code here
  int left_height = 0;
  int right_height = 0;

  if (root == NULL)
	  return 0;
  else {
	  if(root->left != NULL)
		  left_height = getHeight(root->left) + 1;
	  if (root->right != NULL)
		  right_height = getHeight(root->right) + 1;
  }

  return (left_height > right_height) ? left_height : right_height;
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
    int height=getHeight(root);
    printf("%d\n",height);
    return 0;
    
}
