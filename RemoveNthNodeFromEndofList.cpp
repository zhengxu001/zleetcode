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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        
        ListNode *p1=head;
        ListNode *p2=head;
        while(n--)
        {
            p2 = p2->next;
        }
        
        if(p2==NULL)
            return head->next;
        
        while(p2->next!=NULL)
        {
            p2=p2->next;
            p1=p1->next;
        }
        p1->next=p1->next->next;
        
        return head;
    }
};