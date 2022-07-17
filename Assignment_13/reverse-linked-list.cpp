class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       
        ListNode *temp=head,*prev=NULL;
        while(temp)
        {  
           ListNode* Nn=temp->next;
            temp->next=prev;
            prev=temp;
            temp=Nn;
        }
       
        return prev;
        
    }
};
