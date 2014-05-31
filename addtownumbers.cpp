/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

int add(int a, int b, int &carry)
{
    int c = a + b + carry;
    
    carry = c / 10;
    return c % 10;
}

ListNode *add_two_numbers(ListNode *l1, ListNode *l2)
{
    ListNode *head = NULL, *rear = NULL;
    
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;
    
    int carry = 0;
    
    while (l1 != NULL || l2 != NULL)
    {
        int val = 0;
        
        if (l1 == NULL)
        {
            val = add(0, l2->val, carry);
            l2 = l2->next;
        }
        else if (l2 == NULL)
        {
            val = add(l1->val, 0, carry);
            l1 = l1->next;
        }
        else
        {
            val = add(l1->val, l2->val, carry);
            l1 = l1->next;
            l2 = l2->next;
        }
        
        ListNode *new_node = new ListNode(val);
        
        if (head == NULL) head = new_node;
        if (rear == NULL)
        {
            rear = new_node;
        }
        else
        {
            rear->next = new_node;
            rear = rear->next;
        }
    }
    
    if (carry != 0 && rear != NULL)
    {
        rear->next = new ListNode(carry);
    }
    
    return head;
}