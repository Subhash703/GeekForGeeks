if(head==NULL || head->next== NULL){
        return head;
    }
    int len = 0;
    
    for(Node *cur = head; cur!=NULL; cur = cur->next){
        len++;
    }
    Node *prev = head;
    Node *curr = head->next;
    for(int i = 1; i<=(len/2); i++){
        int tmp = prev->data;
        prev->data = curr->data;
        curr->data = tmp;
        if(curr->next){
            prev = prev->next->next;
            curr = curr->next->next;
        }
    }
    return head;
