/*
Given a binary tree of size N, you have to count number of nodes in it. For example, count of nodes in below tree is 4.

        1
     /      \
   10      39
  /
5
*/
 struct Node
 {
     int data;
     Node* left;
     Node* right;
}; */

/* Computes the number of nodes in a tree. */
int getSize(Node* root)
{
   // Your code here
   if(root == NULL){
       return 0;
   }
   return (getSize(root->left)+getSize(root->right))+1;
}
