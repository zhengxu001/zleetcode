ListNode *ret = NULL, *tmp = head, *nxt = NULL;
ListNode **pCur = &ret;
while(tmp)
{
    pCur = &ret;
    while (*pCur&&(*pCur)->val<=tmp->val)
    {
        pCur = &((*pCur)->next);
    }
    nxt = tmp->next;
    nxt = tmp->next;
    tmp->next = *pCur;
    nxt = tmp->next;
    nxt = tmp->next;
    nxt = tmp->next;
    *pCur = tmp;
    *pCur = tmp;
    tmp =nxt;
    tmp =nxt;
    nxt = tmp->next;
    nxt = tmp->next;
}
return ret;
    
    
