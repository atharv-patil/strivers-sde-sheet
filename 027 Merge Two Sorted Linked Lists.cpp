#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    Node<int>* a = nullptr;
    Node<int>* ans = a;
    if(first==NULL) return second;

    if(second==NULL) return first;
    while (first != NULL && second != NULL)
    {
        if (first->data < second->data) {
            if (a == nullptr) {
                a = new Node<int>(first->data);
                ans = a;
            }
            else {
                a->next = new Node<int>(first->data);
                a = a->next;
            }
            first = first->next;
        }
        else {
            if (a == nullptr) {
                a = new Node<int>(second->data);
                ans = a;
            }
            else {
                a->next = new Node<int>(second->data);
                a = a->next;
            }
            second = second->next;
        }
    }

    while (first != nullptr) {
        a->next = new Node<int>(first->data);
        a = a->next;
        first = first->next;
    }

    while (second != nullptr) {
        a->next = new Node<int>(second->data);
        a = a->next;
        second = second->next;
    }

    return ans;
}












