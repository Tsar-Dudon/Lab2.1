#include <iostream>
#include "func.hpp"

bool isPalindrome(int x) 
{
    if (x % 10 == 0 || x < 10) 
    {
        return false;
    }
    int reversedNumber = 0;
    while (x > reversedNumber) 
    {
        reversedNumber = reversedNumber * 10 + x % 10;
        x /= 10; 
    }
    return x == reversedNumber || x == reversedNumber / 10;
}

void Pushback(Node* sent, int data)
{
    Node*p = new Node;
    p->data = data;
    p->next = sent;
    p->prev = sent->prev;
    sent->prev->next = p;
    sent->prev = p;
}

void Clear(Node* sent)
{
    Node*p = sent->next;
    while(p != sent)
    {
        Node* tmp = p;
        p = p->next;
        delete tmp;
    }
}

void Print(Node* sent)
{
    Node*p = sent->next;
    while(p != sent)
    {
        std::cout << p->data << std::endl;
        p = p->next;
    }
}