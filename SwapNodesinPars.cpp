/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        if(head==NULL||head->next==NULL)
            return head;
        
        ListNode *temp=head;
        ListNode *right=head->next->next;
        head=head->next;
        head->next=temp;
        temp->next=right;
        ListNode **pre = &(temp->next);
        ListNode *first = *pre;
        while(first!=NULL)
        {
            ListNode *second = first->next;
            if(second==NULL)
                break;
            ListNode *tmp = second->next;
            *pre = second;
            second->next = first;
            
            pre=&(first->next);
            first->next= tmp;
            
            first = tmp;
        }
        return head;
    }
};
