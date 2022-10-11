// Method:
// Iterate through the linked list. Maintain 3 pointers named zero, 
// one and two to point to current ending nodes of linked lists containing 0, 1, and 2 respectively. 
// For every traversed node, we attach it to the end of its corresponding list. Finally, we link all three lists. 
// To avoid many null checks, we use three dummy pointers zeroD, oneD and twoD that work as dummy headers of three lists.

Node* segregate(Node *head) {
        
        // Add code here
         if (!head || !(head->next))
        return head;
  
    // Create three dummy nodes to point to beginning of
    // three linked lists. These dummy nodes are created to
    // avoid many null checks.
    Node* zeroD = new Node(0);
    Node* oneD = new Node(0);
    Node* twoD = new Node(0);
  
    // Initialize current pointers for three
    // lists and whole list.
    Node *zero = zeroD, *one = oneD, *two = twoD;
  
    // Traverse list
    Node* curr = head;
    while (curr) {
        if (curr->data == 0) {
            zero->next = curr;
            zero = zero->next;
        }
        else if (curr->data == 1) {
            one->next = curr;
            one = one->next;
        }
        else {
            two->next = curr;
            two = two->next;
        }
        curr = curr->next;
    }
  
    // Attach three lists
    zero->next = (oneD->next) ? (oneD->next) : (twoD->next);
    one->next = twoD->next;
    two->next = NULL;
  
    // Updated head
    head = zeroD->next;
  
    // Delete dummy nodes
    delete zeroD;
    delete oneD;
    delete twoD;
    
    return head;
   }