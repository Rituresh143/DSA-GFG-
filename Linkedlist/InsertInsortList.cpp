// Method:
// create a new Node check
// 1 = head->data >= newNode->data
// 2 = curr->next->data < newNode->data

 Node *sortedInsert(struct Node* head, int data)
    {
        struct Node* new_node = new Node(data);
        
        if (head == NULL || head->data >= new_node->data)
        {
            // if new node is needed at the start of list
            new_node->next = head;
            return new_node;
        }
        
        Node* current = head;
        while (current->next != NULL && current->next->data < new_node->data)
            current = current->next;
            // finding a node which has lesser value than new_node
            // but its successor should have greater (or equal) value
        
        // inserting new_node after current node
        new_node->next = current->next;
        current->next = new_node;
        
        return head;
    }