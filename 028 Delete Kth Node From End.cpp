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

Node* removeKthNode(Node* head, int k)
{
    Node *b = head,*c=head;
    int a=0;
    while (head!=NULL)
    {
        head = head->next;
        a++;
    }
    if (k==a)
        return b->next;
    else
    {
        a -= k;
        int m=0;
        while (c!=NULL)
        {
            m++;
            if (m==a)
            {
                c->next = c->next->next;
                break;
            }
            c = c->next;

        }
        return b;
    }
}
