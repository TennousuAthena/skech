/**
 * 4.假设以带头结点的循环链表表示队列，并且只设一个指针指向队尾元素结点（注意不设头指针），
 * 试编写相应的初始化、入队列和出队列的算法。注意：队列只有一个元素时，出队列需单独处理。
 */
#include <iostream>
using namespace std;

typedef int dataType;

typedef struct LinkedNode
{
    dataType data;
    struct LinkedNode *next;
} LinkedNode;

typedef struct LinkedQueue
{
    LinkedNode *rear;
    unsigned int size;
} LinkedQueue;

LinkedQueue *initLinkedQueue()
{
    LinkedQueue *myLQ = new LinkedQueue;
    myLQ->size = 0;
    myLQ->rear = nullptr;
    return myLQ;
}

void displayQueue(LinkedQueue *myLQ)
{
    if (myLQ->rear == nullptr)
    {
        std::cout << "Queue is empty.\n";
        return;
    }

    LinkedNode *temp = myLQ->rear->next;
    do
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    } while (temp != myLQ->rear->next);

    std::cout << "\n";
}

void pushToLQ(LinkedQueue *myLQ, dataType myData)
{
    if (myLQ->size == 0)
    {
        myLQ->rear = new LinkedNode;
        myLQ->rear->data = myData;
        myLQ->rear->next = myLQ->rear;
    }
    else
    {
        LinkedNode *newNode = new LinkedNode;
        newNode->data = myData;
        newNode->next = myLQ->rear->next;
        myLQ->rear->next = newNode;
        myLQ->rear = newNode;
    }
    displayQueue(myLQ);
    myLQ->size++;
}

dataType popLQ(LinkedQueue *myLQ)
{
    if (myLQ->size == 0)
    {
        cout << "Queue is empty";
        return -1;
    }
    if (myLQ->size == 1)
    {
        dataType tmp = myLQ->rear->data;
        delete myLQ->rear;
        myLQ->rear = nullptr;
        myLQ->size--;
        return tmp;
    }
    LinkedNode *tmp = myLQ->rear->next;
    myLQ->rear->next = tmp->next;
    myLQ->size--;
    displayQueue(myLQ);
    return tmp->data;
}

int main()
{
    LinkedQueue *mylq = initLinkedQueue();
    pushToLQ(mylq, 1);
    pushToLQ(mylq, 2);
    pushToLQ(mylq, 3);
    popLQ(mylq);
    pushToLQ(mylq, 4);
    pushToLQ(mylq, 5);
}