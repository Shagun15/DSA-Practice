class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head)
            return false;
        ListNode *temp = head ;
        ListNode *s =head;
        while(temp!=NULL&&temp->next !=NULL)
        {
                temp= temp->next ->next;
                s= s->next;
            if(s==temp)
                return true;
        }
        return false;
    }

};
