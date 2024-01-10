class Solution {
public:
    void deleteNode(ListNode* node) {
    ListNode* temp = node -> next;
    node -> val = node -> next -> val;
    node -> next = node -> next -> next;
    delete temp;
    }
};


// leetcode question to delete a gievn node without giving the head of linked list 
// we first , make the node be the next node in the list and then delete the next node hence the remain linkedlist 
// is without the given node 