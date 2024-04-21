// 链表

#include <iostream>
using namespace std;

typedef int NodeContent;
typedef struct ListNode
{
	NodeContent data;
	struct ListNode *next;
} ListNode;

/**
 * @brief 初始化链表
 *
 * @param data
 *
 * @return 返回链表的指针
 */
ListNode *newListNode(NodeContent data)
{
	cout << "大家好啊，我是新造的链表，我的值是'" << data << "'" << endl;
	ListNode *node = (ListNode *)malloc(sizeof(ListNode)); // 为malloc获取的指针显示赋予类型
	if (node == nullptr)
	{
		cout << "内存分配失败!" << endl;
		return nullptr;
	}
	node->data = data;
	node->next = nullptr;

	return node;
}

/**
 * @brief 向链表插入节点
 * (1) node0 -> node1
 *        nodeNew
 * (2) node0 -> noode1
 *          nodeNew↑
 * (3) node0     node1
 *       ↓ nodeNew ↑
 * @param newNode 新的节点
 * @param node0 被插入的节点
 */
void insertListNode(ListNode *node0, ListNode *nodeNew)
{
	if (node0 == nullptr || nodeNew == nullptr)
	{
		cout << "插入节点失败,节点指针为空!" << endl;
		return;
	}
	cout << "向值为'" << node0->data << "'的节点插入了值为'" << nodeNew->data << "'的节点" << endl;
	ListNode *node1 = node0->next;
	nodeNew->next = node1;
	node0->next = nodeNew;
}

/**
 * @brief 删除链表指向的下一个节点
 *
 * @param node0
 */
void delNextNode(ListNode *node0)
{
	if (node0 == nullptr || node0->next == nullptr)
	{
		cout << "删除节点失败,节点指针为空!" << endl;
		return;
	}
	cout << "删除了一个值为" << node0->next->data << "的节点" << endl;
	if (node0->next == nullptr)
		return;
	ListNode *nodeDel = node0->next;
	ListNode *node1 = nodeDel->next;
	node0->next = node1;

	delete nodeDel;
}

/**
 * @brief 迭代链表元素
 *
 * @param initNode
 * @param nodeToProcess
 */
void LinkIterate(ListNode *initNode, void(Operation)(ListNode *))
{
	cout << "<-----开始迭代链表咯~" << endl;
	ListNode *nextNode = initNode;
	while (1)
	{
		Operation(nextNode);
		nextNode = nextNode->next;
		if (nextNode == nullptr)
			break;
	}
	cout << "----->链表迭代完成咯~" << endl;
}

/**
 * @brief 打印节点的值
 *
 * @param nodeToPrint
 */
void printElemnt(ListNode *nodeToPrint)
{
	cout << "我的值是'" << nodeToPrint->data << "'" << endl;
}

/**
 * @brief 查删
 *
 * @param startNode
 */
void findAndDel(ListNode *startNode, NodeContent matchValue)
{
	cout << "<-----开始查找元素'" << matchValue << "'~" << endl;
	ListNode *nextNode = startNode;
	while (1)
	{
		if (nextNode->next->data == matchValue)
		{
			cout << "查找到了一个元素并将其删除" << endl;
			delNextNode(nextNode);
		}
		nextNode = nextNode->next;
		if (nextNode->next == nullptr)
			break;
	}
	cout << "----->元素查找删除完毕" << endl;
}

int main()
{
	/* 初始化链表 1 -> 3 -> 2 -> 5 -> 4 */
	// 初始化各个节点
	ListNode *n0 = newListNode(1);
	ListNode *n1 = newListNode(2);
	ListNode *n2 = newListNode(3);
	ListNode *n3 = newListNode(4);
	ListNode *n4 = newListNode(5);
	ListNode *n5 = newListNode(6);
	// 构建节点之间的引用
	n0->next = n1;
	n1->next = n3;
	n3->next = n4;
	n4->next = n5;
	LinkIterate(n0, printElemnt);
	insertListNode(n1, n2);
	LinkIterate(n0, printElemnt);
	findAndDel(n0, 4);
	LinkIterate(n0, printElemnt);
}
