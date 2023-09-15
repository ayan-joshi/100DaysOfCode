Node* sortList(Node *head){
    // Write your code here.
    Node *temp = head;
    int zero = 0, one = 0, two = 0;
    while(temp != NULL){
        if(temp -> data == 0) zero++;
        else if(temp -> data == 1) one++;
        else two++;
        temp = temp -> next;
    }
    temp = head;
    while(zero != 0){
        temp -> data = 0;
        temp = temp -> next;
        zero--;
    }
    while(one != 0){
        temp -> data = 1;
        temp = temp -> next;
        one--;
    }
    while(two != 0){
        temp -> data = 2;
        temp = temp -> next;
        two--;
    }
    return head;
}

//sort the linked list as 0 -> 1 -> 2
// firstly iterate to increase the count of one , zero and two
// then in the temp stored first zero then 1 then 2 and then return head
