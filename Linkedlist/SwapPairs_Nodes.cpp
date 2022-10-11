// Method:
// Traverse through the link next and prev,curr concept



 Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        if(head == NULL || head->next==NULL)
            return head;
        Node* curr = head->next->next;
        Node* prev = head;
        head = head->next;
        head->next = prev;
        
        while(curr != NULL && curr->next != NULL){
            prev->next = curr->next;
            prev=curr;
            Node* temp = curr->next->next;
            curr->next->next = curr;
            curr = temp;
          }
        prev->next = curr;
        return head;
    }