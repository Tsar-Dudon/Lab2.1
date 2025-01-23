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
    for(short i = 0; i < len; i ++)
    {
        int data;
        std::cin >> data;
        Pushback(sent, data);
    }

    Print(sent);

    Clear(sent);
    delete sent;
    return 0;
}