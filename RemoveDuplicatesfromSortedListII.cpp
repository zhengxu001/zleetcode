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
    ListNode *deleteDuplicates(ListNode *head) {
        if(head==NULL||head->next==NULL)
            return head;
        
        ListNode *p = head;
        while(p!=NULL)
        {
            int temp=p->val;
            if(p->next!=NULL&&p->next->val==temp)
            {
                ListNode *q=p->next;
                while(q!=NULL&&q->val==temp)
                {
                    q=q->next;
                }
                p=q;
            }
            else
                break;
        }
        head=p;
        if(head==NULL)
            return head;
        ListNode **pre = &(head->next);
        p=*pre;
        while(p!=NULL&&p->next!=NULL)
        {
            if(p->val!=p->next->val)
            {
                pre = &(p->next);
                p=p->next;
            }
            else if(p->val==p->next->val)
            {
                int temp=p->val;
                while(p!=NULL&&p->val==temp)
                    p=p->next;
                *pre=p;
            }
        }
        return head;
    }
};