// Method:
// *Traverse the linkedlist using a pointer
// *Swap the prev and next Pointers for all nodes
// *At last change the head Pointer of the doubly linked list

Node* reverseDLL(Node * head)
{
    //Your code here
    Node* next;
    Node* current = head;
    Node* prev = NULL;

    while(current!=NULL){
    next = current->next;
    current->next = prev;
    current->prev = next;
    prev = current;
    current = next;
}
return prev;
}