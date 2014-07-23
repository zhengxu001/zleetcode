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
    void reorderList(ListNode *head) {
        ListNode * slow=head;
        ListNode * fast=head;
        
        if(head != NULL && head->next != NULL)
        {
            while(fast!=NULL && fast->next != NULL)
            {
                slow=slow->next;
                fast=fast->next->next;
            }
            
            ListNode * tmp = slow->next;
            slow->next = NULL;
            ListNode * p2= head;
            ListNode * p1 =NULL;
            while(tmp!=NULL)
            {
                ListNode* t = p1;
                p1=tmp;
                tmp=tmp->next;
                p1->next = t;
            }
            tmp =NULL;
            while(p1!=NULL && p2!=NULL)
            {
                if(tmp==NULL)
                {
                    tmp=p2;
                }
                else
                {
                    tmp->next = p2;
                    tmp=tmp->next;
                }
                p2=p2->next;
                tmp->next =p1;
                p1=p1->next;
                tmp=tmp->next;
                tmp->next = NULL;
            }
            
            if(p1!=NULL)
            {
                if(tmp==NULL)
                {
                    tmp=p1;
                    
                }
                else
                {
                    tmp->next=p1;
                }
            }
            
            if(p2!=NULL)
            {
                if(tmp==NULL)
                {
                    tmp=p2;
                }
                else
                {
                    tmp->next=p2;
                }
            }
        }
    }
};