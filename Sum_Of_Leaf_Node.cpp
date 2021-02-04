/*
  => => Find the sum of all the leaf nodes of tree
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
 
int sumOfAllLeafNodes(node *root){
	if(root==NULL){
		return 0;
	}
	if(root->left == NULL && root->right == NULL){
		return root->data;
	}
	return (sumOfAllLeafNodes(root->left)+sumOfAllLeafNodes(root->right));
 
}
 
 
int main() {
	// your code goes here
	/*
			1
		2		3
	  4   5	  7	  8
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
	cout<<sumOfAllLeafNodes(root);
	return 0;
}
