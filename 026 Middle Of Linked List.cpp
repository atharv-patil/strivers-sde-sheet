/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) {
    
    Node *t1 = head,*t2 = head;
    
    while (t1!=NULL and t2!=NULL)
    {
        if (t1->next==NULL)
        {
            return t1;
        }
        else
        {
            t2 = t2->next;

            if (t2==NULL)
                return t1;
            t2 = t2->next;
            if (t2==NULL)
                return t1->next;
            t1 = t1->next;

        }
    }
}

