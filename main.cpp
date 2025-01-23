#include <iostream>
#include "func.hpp"

int main()
{	
    Node* sent = new Node;
    sent->prev = sent;
    sent->next = sent;

    short len;
    std::cout << "Enter length: ";
    std::cin >> len;
    for(short i = 0; i < len; i++)
    {
        int data;
        std::cin >> data;
        Pushback(sent, data);
    }

    if(HavePalindrome(sent))
        bubbleSort(sent);
    else
    {
        Node* p = sent->next;
        while(p != sent)
        {
            if(p->data % 10 == 0)
            {
                Node* tmp = p;
                p->prev->next = p->next;
                p->next->prev = p->prev;
                p = p->prev;
                delete tmp;
            }
            else if(IsPrime(p->data))
            {
                Node* q = new Node;
                q->data = p->data;
                q->next = p;
                q->prev = p->prev;
                p->prev->next = q;
                p->prev = q;
            }
            p = p->next;
        }
    }

    Print(sent);

    Clear(sent);
    delete sent;

    return 0;
}