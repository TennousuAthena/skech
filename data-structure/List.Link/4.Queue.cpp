#include <iostream>
using namespace std;

typedef int NodeContent;
typedef struct LinkNode
{
	NodeContent data;
	struct LinkNode *next;
} LinkNode;

typedef struct RLinkQueue
{
	LinkNode *tail;
	int queSize;
} RLinkQueue;

/** ⬇️  <- ------------------------------------------  ⬆️ 尾指针
 * 头节点 -> a_1 -> a_2 -> a_3 -> a_4 -> a_5 -> ... -> a_n
 */

RLinkQueue *newRLinkQueue()
{
	cout << "创建了新的循环链表队列" << endl;
	RLinkQueue *rlq = new RLinkQueue;
	rlq->queSize = 0;
	rlq->tail = nullptr;
	return rlq;
}

// LinkNode* findHeadPreviousNode(RLinkQueue *rlq){
//	cout << "正在寻找头节点.";
//	LinkNode *currentCursor = rlq->tail->next;
//	while(currentCursor->next->next != rlq->tail){
//		cout << ".";
//		currentCursor = currentCursor->next;
//	}
//	return currentCursor;
// }

void pushRLinkQueue(RLinkQueue *rlq, NodeContent data)
{
	cout << "将'" << data << "'添加到了队列,队列大小为" << rlq->queSize + 1 << endl;
	if (rlq->queSize == 0)
	{
		rlq->tail = new LinkNode;
		rlq->tail->data = data;
		rlq->tail->next = rlq->tail;
	}
	else if (rlq->queSize == 1)
	{
		LinkNode *newElem = new LinkNode;
		newElem->data = data;
		newElem->next = rlq->tail;
		rlq->tail->next = newElem;
		rlq->tail = newElem;
	}
	else
	{
		LinkNode *newElem = new LinkNode;
		newElem->data = data;
		newElem->next = rlq->tail;
		rlq->tail = newElem;
		rlq->tail->next = newElem;
	}
	rlq->queSize++;
}

NodeContent popRLinkQueue(RLinkQueue *rlq)
{
	NodeContent result;
	if (rlq->queSize == 0)
	{
		cerr << "错误：队列已经是空的了" << endl;
		return -1;
	}
	else if (rlq->queSize == 1)
	{
		result = rlq->tail->data;
		rlq->tail = nullptr;
	}
	else if (rlq->queSize == 2)
	{
		result = rlq->tail->next->data;
		//		delete rlq->tail->next;
		rlq->tail->next = rlq->tail;
	}
	else
	{
		//		LinkNode* currentCursor = findHeadPreviousNode(rlq);
		//		result = currentCursor->next->data;
		////		delete currentCursor->next;
		//		currentCursor->next = rlq->tail;
		LinkNode *oldHead = rlq->tail->next;
		result = oldHead->data;
		rlq->tail->next = rlq->tail;
		delete oldHead;
	}
	rlq->queSize--;
	cout << "队列中的元素'" << result << "'已出队,队列大小为" << rlq->queSize << endl;
	return result;
}

int main()
{
	RLinkQueue *myRLQ = newRLinkQueue();
	for (int i = 0; i <= 6; i++)
	{
		pushRLinkQueue(myRLQ, i);
	}
	for (int i = 0; i <= 6; i++)
	{
		popRLinkQueue(myRLQ);
	}
	popRLinkQueue(myRLQ);
}
