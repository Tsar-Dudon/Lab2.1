#pragma once

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

bool isPalindrome(int x);
void Pushback(Node* sent, int data);
void Clear(Node* sent);
void Print(Node* sent);