Node* constructDLL(vector<int> &arr){

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i=1;i<n;i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev -> next = temp;
        prev = temp;
    }
    return head;
}

// This is the simple c++ code which convert an array to Doubly Linkedlist 
// compare to linkedlist it just adds up a previous value to each node.       