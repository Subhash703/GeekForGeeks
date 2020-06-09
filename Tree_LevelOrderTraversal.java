/*
Input:
2
1 3 2
10 20 30 40 60 N N
Output:
1 3 2
10 20 30 40 60
*/

class Node
{
    int data;
    Node left, right;

    Node(int item)
    {
        data = item;
        left = right = null;
    }
}

static void levelOrder(Node root) 
    {
        // Your code here
        if(root==null) return;
        Queue<Node>q = new LinkedList<>();
        q.add(root);
        while(q.isEmpty()==false){
            Node curr = q.poll();
            System.out.print(curr.data+" ");
            if(curr.left!=null)
                q.add(curr.left);
            if(curr.right!=null)
                q.add(curr.right);
        }
    }
