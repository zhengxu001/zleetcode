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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        
        ListNode *head=NULL;
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        if(l1->val<=l2->val)
        {
            head=l1;
            l1=l1->next;
        }
        else
        {
            head=l2;
            l2=l2->next;
        }
        
        ListNode *root=head;
        while(l1!=NULL&&l2!=NULL)
        {
            if(l1!=NULL&&l2!=NULL&&l1->val<=l2->val)
            {
                root->next=l1;
                root=root->next;
                l1=l1->next;
            }
            else if(l1!=NULL&&l2!=NULL)
            {
                root->next=l2;
                root=root->next;
                l2=l2->next;
            }
        }
        
        if(l1==NULL||l2==NULL)
        {
            if(l1!=NULL)
                root->next=l1;
            if(l2!=NULL)
                root->next=l2;
        }
        return head;
    }
};