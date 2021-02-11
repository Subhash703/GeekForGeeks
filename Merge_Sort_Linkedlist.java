/*
Given Pointer/Reference to the head of the linked list, the task is to Sort the given linked list using Merge Sort.
Note: If the length of linked list is odd, then the extra node should go in the first list while splitting.


N = 5
value[]  = {3,5,2,4,1}
Output: 1 2 3 4 5

*/


class LinkedList
{
    public static Node merge(Node left, Node right){
        if(left==null){
            return right;
        }
        if(right==null){
            return left;
        }
        
        Node res = null;
        
        if(left.data<=right.data){
            res = left;
            res.next = merge(left.next, right);
        }else{
            res = right;
            res.next = merge(left,right.next);
        }
        
        return res;
    }
    
    // function to get the middle of the linked list 
    public static Node getMiddle(Node head) 
    { 
        if (head == null) 
            return head; 
  
        Node slow = head, fast = head; 
  
        while (fast.next != null && fast.next.next != null) { 
            slow = slow.next; 
            fast = fast.next.next; 
        } 
        return slow; 
    } 
    
    static Node mergeSort(Node head)
    {
        // add your code here
        if(head==null || head.next==null){
            return head;
        }
        
        Node middle = getMiddle(head);
        
        Node nextOfMiddle = middle.next;
        
        middle.next=null;
        
        Node left = mergeSort(head);
        Node right = mergeSort(nextOfMiddle);
        
        Node headAfterSort = merge(left,right);
        
        return headAfterSort;
        
        /*
        
            3 5 2 4 1
            
        */
        /*
        3->5
        left = mergeSort(3,5)
        left = mergeSort(3,2)
        mergeSort(3,1)
        */
    }
}
