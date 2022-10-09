 class Solution {
public:
    ListNode* mergeTwoLists(ListNode* A,ListNode* B){
        if(A==NULL) return B;
        if(B==NULL) return A;
        ListNode* C = NULL;
        if(A->val > B->val){
            C = B;
            C->next = mergeTwoLists(A,B->next);
        }
        else{ 
            C = A;
            C->next = mergeTwoLists(A->next,B);
        }
        return C;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return nullptr;
       ListNode* res = lists[0];
        
        for(int i=1;i<lists.size();i++){
            res = mergeTwoLists(lists[i],res);
        }
        return res;
    }
};
