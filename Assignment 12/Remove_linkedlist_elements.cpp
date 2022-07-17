class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
      
        if(!head)
        {
            return head;
        }
      
        ListNode *temp=head , *prev=NULL;
      
        while(temp)
        {
            if(val==head->val)
            {
                temp=temp->next;
                head=NULL;
                head=temp;
            }
            else if(temp->val==val)
            {
                 prev->next=temp->next;
                
                temp=prev->next;
            }
            else
            {
                prev=temp;
                temp=temp->next;
            }
        }
      
        return head;
      
        
    }
};
