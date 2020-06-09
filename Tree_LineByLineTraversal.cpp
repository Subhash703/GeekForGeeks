/*
Your Task:
This is a function problem. You don't need to read input. Just complete the function levelOrder() that takes nodes as parameter and prints level order line-by-line. The newline for every test case is automatically appended by the driver code.
Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

*/

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

void levelOrder(Node* node)
{
  //Your code here
  if(node==NULL) return;
    queue<Node*>q;
    q.push(node);
    q.push(NULL);
    while(q.size()>1){
        Node *curr = q.front();
        q.pop();
        if(curr==NULL){
            cout<<"$ ";
            q.push(NULL);
            continue;
        }
        cout<<curr->data<<" ";
        
        if(curr->left != NULL)
            q.push(curr->left);
        if(curr->right != NULL)
            q.push(curr->right);
    }
    if(q.size()==1)
        cout<<"$";
}
