//19. Remove Nth Node From End of List

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *slow = head;
    struct ListNode *fast= head;
    while(n--){
        fast = fast->next;
    }
    if(fast==NULL){
        return head->next;
    }
    while(fast->next!=NULL){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return head;
}
