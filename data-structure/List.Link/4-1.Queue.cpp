#include <iostream>

struct Node
{
	int data;
	Node *next;
};

// 队尾指针
Node *rear = nullptr;

// 初始化队列
void initializeQueue(int value)
{
	Node *newNode = new Node;
	newNode->data = value;
	newNode->next = newNode; // 循环链表
	rear = newNode;
}

// 入队列
void enqueue(int value)
{
	Node *newNode = new Node;
	newNode->data = value;
	newNode->next = rear->next; // 新节点指向头节点
	rear->next = newNode;		// 尾节点指向新节点
	rear = newNode;				// 更新尾节点
}

// 出队列
void dequeue()
{
	if (rear == nullptr)
	{
		std::cout << "Queue is empty.\n";
		return;
	}

	// 当队列只有一个元素时
	if (rear->next == rear)
	{
		delete rear;
		rear = nullptr;
		return;
	}

	Node *temp = rear->next; // 头节点
	rear->next = temp->next; // 尾节点指向新的头节点
	delete temp;
}

// 显示队列元素
void displayQueue()
{
	if (rear == nullptr)
	{
		std::cout << "Queue is empty.\n";
		return;
	}

	Node *temp = rear->next;
	do
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	} while (temp != rear->next);

	std::cout << "\n";
}

int main()
{
	initializeQueue(1);
	enqueue(2);
	enqueue(3);
	displayQueue(); // 输出：1 2 3
	dequeue();		// 删除 1
	displayQueue(); // 输出：2 3
	return 0;
}
