//
// Created by guido on 10/16/2021.
//

#ifndef CPPLINKEDQUEUE_LINKEDQUEUE_H
#define CPPLINKEDQUEUE_LINKEDQUEUE_H

class Node
{
public:
    Node() : data(0), next(nullptr) {}
    Node(int theData, Node *newNext)
                 : data(theData), next(newNext){}
    Node* getNext() const { return next; }
    int getData( ) const { return data; }
    void setData(int theData) { data = theData; }
    void setNext(Node *newNext) { next = newNext; }
    ~Node(){}
private:
    int data;
    Node *next;    //pointer that points to next node
};

class LinkedQueue {
public:
    LinkedQueue();
    ~LinkedQueue();

    /****************************************
       Functions you will be implementing:
          push
          pop
          empty
          back
          front
          size

    ****************************************/
    void push(int);

private:
    Node* ptrToFront;
    Node* ptrToBack;
    int count;
};


#endif //CPPLINKEDQUEUE_LINKEDQUEUE_H
