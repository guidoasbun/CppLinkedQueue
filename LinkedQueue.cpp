//
// Created by guido on 10/16/2021.
//

#include "LinkedQueue.h"

#include <iostream>
using namespace std;

void LinkedQueue::push(int newData)
{
    Node* newNode = new Node(newData, nullptr);

    if (ptrToFront == nullptr)
    {
        ptrToFront = newNode;
        ptrToBack = newNode;
    }
    else
    {
        ptrToBack->setNext(newNode);
        ptrToBack = newNode;
    }
    ++count;
}