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

bool IsThreeSymb(int x)
{
    short length = 0;
    do {
        length++;
        x /= 10;
    } while (x != 0);

    if(length == 3)
        return true;
    return false;
}

void bubbleSort(Node* sent)
{
    if (sent->next == sent) return;

    bool swapped;
    do {
        swapped = false;
        Node* p = sent->next; 
        
        while (p->next != sent)
        {
            int k = p->data;
            int k1 = p->next->data;
            if (k > k1) 
            {
                std::swap(p->data, p->next->data);
                swapped = true;
            }
            p = p->next;
        }
    } while (swapped);
}

bool IsPrime(int x)
{
    if (x <= 1) return false; 

    for(int i = 2; i <= sqrt(x); i++)
    {
        if(x % i == 0) 
        {
            return false;
        }
    }
    return true;
}

bool HavePalindrome(Node* sent)
{
    Node* p = sent->next;
    while(p != sent)
    {
        if(IsThreeSymb(p->data))
        {
            if(isPalindrome(p->data))
            {
                return true;
            }
        }
        p = p->next;
    }
    return false;
}