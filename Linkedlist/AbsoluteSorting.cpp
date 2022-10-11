void sortList(Node** head)
    {
        // Your Code Here
   Node* prev = (*head);
   Node* curr = (*head)->next;
  
  while(curr != NULL){
      if(curr->data < prev->data){
         prev->next = curr->next;
         curr->next = (*head);
         (*head) = curr;
         curr = prev;
      }else{
          prev = curr;
      }
          curr = curr->next;
  }