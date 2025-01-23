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
bool IsThreeSymb(int x);
void bubbleSort(Node* sent);
bool IsPrime(int x);
bool HavePalindrome(Node* sent);