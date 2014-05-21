//
//  main.cpp
//  text
//
//  Created by zen on 5/21/14.
//  Copyright (c) 2014 zen. All rights reserved.
//

#include <iostream>

#include <stdio.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *insertionSortList(ListNode *head) {
    if(head==NULL||head->next==NULL)
        return head;
    ListNode *p= head;
    ListNode **k=NULL;
    while(p)
    {
        ListNode **prev=&head;
        ListNode *q=head;
        while((q=*prev)!=NULL&&q->val<=p->val&&q!=p)
        {
            prev= &q->next;
        }
        if(p!=q)
        {
            ListNode *tmp=p->next;
            *prev=p;
            p->next=q;
            p=tmp;
            *k=tmp;
            continue;
            
        }
        k= &p->next;
        p=p->next;
    }
    return head;
}

int main()
{
    ListNode *head=new ListNode(3);
    ListNode *p=new ListNode(2);
    head->next=p;
    ListNode *q=new ListNode(4);
    p->next=q;
    head=insertionSortList(head);
    while (head) {
        printf("%d/n",head->val);
        head=head->next;
    }
    return 0;
}
