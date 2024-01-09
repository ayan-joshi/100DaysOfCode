int length(Node *head)
{
	//Write your code here
    int cnt = 0;
    while(head != NULL){
           head = head -> next;
        cnt++;
     
    }
    return cnt;
}

// Length of linkedlistis calculated