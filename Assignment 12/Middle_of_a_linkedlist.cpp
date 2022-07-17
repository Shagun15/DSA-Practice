class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count=0, i=0;
        ListNode* temp =head;
       
        while(temp!=NULL)
        {
            
            temp = temp ->next;
            count++;
        }
        
        if(count==1){
            return head;
        }
      
            count = count/2;
    
        temp = head;
      
        while(i<count)
        {
            temp = temp ->next;
            i++;
        }
        return temp;
    }
};
