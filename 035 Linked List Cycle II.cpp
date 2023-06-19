/****************************************************************

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


*****************************************************************/

Node *firstNode(Node *head)
{
    Node *a=head,*b=head;

    while (a!=NULL and b!=NULL)
    {
        a = a->next;
        b = b->next;
        if (b==NULL)
            return NULL;
        b = b->next;
        if (a==b)
        {
            while (true)
            {
                if (a==head)
                    return a;
                a = a->next;
                head = head->next;
            }
        }
    }
    return NULL;















}
