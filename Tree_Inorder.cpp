//Given a binary tree, find its preorder traversal.


/* A binary tree node has data, pointer to left child
   and a pointer to right child  

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
void helper(Node *root, vector<int>&tmp){
    if(root == NULL){
        return;
    }
    tmp.push_back(root->data);
    helper(root->left,tmp);
    helper(root->right,tmp);
}
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>res;
  helper(root,res);
  return res;
}
