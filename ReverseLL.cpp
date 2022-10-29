ListNode* rec(ListNode* prev , ListNode* curr)
    {
        if(curr != NULL)
        {
            ListNode* temp = rec(curr, curr->next);
            curr -> next = prev;
            return temp;
        }
        return prev;
    }
    ListNode* reverseList(ListNode* head) 
    {
        if(head == NULL || head -> next == NULL)
            return head;
        
        return rec(NULL,head);
    }
