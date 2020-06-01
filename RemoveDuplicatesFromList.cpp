Node *removeDuplicates(Node *root)
{
 // your code goes here
 
    Node *current = root;
    Node *index = NULL;
    Node *temp = NULL;  
      
    if(root == NULL) {  
        return root;  
    }  
    else {  
        while(current != NULL){  
            //Node temp will point to previous node to index.  
            temp = current;  
            //Index will point to node next to current  
            index = current->next;  
              
            while(index != NULL) {  
                //If current node's data is equal to index node's data  
                if(current->data == index->data) {  
                    //Here, index node is pointing to the node which is duplicate of current node  
                    //Skips the duplicate node by pointing to next node  
                    temp->next = index->next;  
                }  
                else {  
                    //Temp will point to previous node of index.  
                    temp = index;  
                }  
                index = index->next;  
            }  
            current = current->next;  
        }          
    }  
 
    return root;
}
