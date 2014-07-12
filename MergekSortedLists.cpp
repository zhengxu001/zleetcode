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
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        int K = lists.size();
        if (K == 0) return NULL;
        else if (K == 1) return lists[0];
        
        ListNode *listHead(NULL), *listRear(NULL);
        ListNode *node(NULL);
        priority_queue<ListNode*, vector<ListNode*>, cmp> h;
        
        // push K list heads into heap
        for(int i=0; i<K; ++i)
            if(lists[i] != NULL){
                h.push(lists[i]);
                lists[i] = lists[i]->next;
            }
        
        while(!h.empty()){
            //pop the min of k nodes
            node = h.top(); h.pop();
            if(node->next)
                h.push(node->next);
            
            //insert node into new list
            if(listRear){
                listRear->next = node;
                listRear = listRear->next;
            }
            else{
                listHead = listRear = node;
            }
        }
        
        return listHead;
    }
private:
    struct cmp{
        bool operator()(ListNode* lhs, ListNode *rhs){
            if(lhs->val < rhs->val) return false;
            else return true;
        }
    };
};