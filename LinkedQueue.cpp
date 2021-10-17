//
// Created by Guido Asbun on 10/16/2021.
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

void LinkedQueue::pop()
{
    if (count == 0)
        cerr << "Cannot delete from an empty list.\n";
    else if (count == 1)
    {
        delete ptrToFront;
        ptrToFront = nullptr;
        ptrToBack = nullptr;
        --count;
    }
    else
    {
        Node* temp = ptrToFront;
        ptrToFront = ptrToFront->getNext();
        delete temp;
        temp = nullptr;
        --count;
    }
}