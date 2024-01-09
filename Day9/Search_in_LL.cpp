int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
   if(head==NULL){
       return 0;
   }
   else  if(head->data==k){
       return 1;
   }
   return searchInLinkedList(head->next,k);
}