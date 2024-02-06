Node * deleteFromHead(Node * head){
    if(head == NULL || head - next == NULL) return NULL;

    Node* prev = head;
    head = head -> next;

    prev -> next = nullptr;
    head -> prev = nullptr;

    delete prev;
    return head;
}

// Here we are deleting head from the DLL , it's almost similar to the singly linkeldist logic 