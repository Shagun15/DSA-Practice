SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {

SinglyLinkedListNode *temp=llist ; 
SinglyLinkedListNode *new_node= new SinglyLinkedListNode(data) ;


temp= llist;
while(position>1)
{
    temp = temp->next;
    position--;
}
  
new_node ->next = temp->next;
temp ->next= new_node;
return llist;
  
}
