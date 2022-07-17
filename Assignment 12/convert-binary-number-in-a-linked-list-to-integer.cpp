class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res=0,count=0;
     
        ListNode *temp = head;
      
        while(temp!=NULL)
        {
           
            temp = temp->next;
            count++;
        }
      
         temp = head;
          count--;
   
     
        while(temp!=NULL)
        {
            res +=( (temp->val) * pow(2,count));
           temp = temp->next;
            count--;
          
       }
        
       
        return res;
    }
};
