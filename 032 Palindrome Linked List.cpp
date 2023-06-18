#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    LinkedListNode<int> *slow=head;
    LinkedListNode<int> *fast=head;
    while(fast!=NULL && fast->next!=NULL){
          slow =slow->next;
          fast=fast->next->next;
    }
    LinkedListNode<int>*temp=slow;
    LinkedListNode<int>*prev=NULL,*next;
    while(temp!=NULL){
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    while(head!=slow){
        if(prev->data !=head->data){
            return false;
        }
        head=head->next;
        prev=prev->next;
    }
    return true;


}
