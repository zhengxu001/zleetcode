class Solution {
public:
    ListNode *reverseKGroup(ListNode *head, int k) {
        int n=k;
        int len=0;
        ListNode *p=head;
        if (head == NULL || head->next == NULL||k<=1) return head;
        while (p)
        {
            len++;
            p=p->next;
        }
        if (n > len) return head;
        ListNode *q=head;
        p = NULL;
        while (q && n>0)
        {
            ListNode *ne=q->next;
            q->next = p;
            p=q;
            q=ne;
            n--;
        }
        if (len - k >= k)
            head->next = reverseKGroup(q,k);
        else
            head->next = q;
        return p;
    }
};