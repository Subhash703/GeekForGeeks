/*
  - Print all the nodes with one node
*/

#include <iostream>
using namespace std;
struct node{
	int data;
	node *left, *right;
	node(int data){
		this->data= data;
		this->left = this->right = NULL;
	}
};
 
void inorder(node *root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	inorder(root->left);
	inorder(root->right);
}
 
void printWith1Node(node *root){
	if(root==NULL){
		return;
	}
	else if(root->left==NULL && root->right==NULL){
		return;
	}
	else if(root->left!=NULL && root->right==NULL){
		cout<<root->data<<" ";
 
	}
	else if(root->right!=NULL && root->left==NULL){
		cout<<root->data<<" ";
	}
	printWith1Node(root->left);
	printWith1Node(root->right);
}
 
int main() {
	// your code goes here
	/*
			1
		2		3
	  4   5
	6
	*/
	node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);
	root->left->left->left = new node(6);
	root->right->left = new node(7);
	root->right->right = new node(8);
	inorder(root);
	cout<<endl;
	printWith1Node(root);
	return 0;
}
