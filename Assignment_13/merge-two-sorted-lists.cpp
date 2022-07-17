class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       
        ListNode *temp=NULL,*head=NULL;
        
       if(list1==NULL)
       {
           return list2;
       }
      
        if(list2==NULL)
        {
            return list1;
        }
      
           ListNode* NewList= new ListNode;
      
             if(list1->val<=list2->val)
            {   
                NewList->val = list1->val;
                head =NewList;
                list1=list1->next;
                 NewList->next=NULL;
            }
      
            else
            {
                NewList->val = list2->val;
                head = NewList;
                list2=list2->next;
                NewList->next=NULL;
            }
            
        
        
            temp =head;
            
        while(list1 && list2)
        {
             ListNode* NewList= new ListNode;
          
            if(list1->val<=list2->val)
            {   
                NewList->val = list1->val;
                temp->next=NewList;
               
                temp =NewList;
                list1=list1->next;
            }
          
            else
              
            {
                NewList->val = list2->val;
                 temp->next=NewList;
                temp =NewList;
                list2=list2->next;
            }
        }
      
       while(list1)
       {     ListNode* NewList= new ListNode;
            NewList->val = list1->val;
                 temp->next=NewList;
           temp=NewList;
            list1=list1->next;
       }
      
        while(list2)
             {   ListNode* NewList= new ListNode;
                NewList->val = list2->val;
               temp->next=NewList;
                temp =NewList;
                list2=list2->next;
            }
        
        return head;
        
    }
};
