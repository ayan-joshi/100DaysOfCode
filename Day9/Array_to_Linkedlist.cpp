Node* constructAll( vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=0;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
            }
            return head;
}


// here we are converting array to linkedlist
