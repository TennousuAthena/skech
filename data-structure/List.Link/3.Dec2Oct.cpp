#include<iostream>
#include<cmath>
using namespace std;

typedef int NodeContent;
typedef struct ArrayStack{
	NodeContent* data;
	unsigned int size;
}ArrayStack;

/**
 * @brief 初始化顺序栈
 * 
 * @param max_size 栈元素数量
 * 
 * @return 
 */
ArrayStack *newArrayStack(unsigned int max_size){
	ArrayStack *stack = (ArrayStack*)malloc(sizeof(ArrayStack));
	
	stack->data = (NodeContent*)malloc(sizeof(int) * max_size);
	stack->size = 0;
	
	return stack;
}

NodeContent pushArrayStack(ArrayStack *stack, NodeContent data){
	cout << "已将'" << data << "'入栈" << endl;
	return stack->data[++stack->size] = data;
}

NodeContent popArrayStack(ArrayStack *stack){
	cout << "已将'" << stack->data[stack->size] << "'退栈" << endl;
	return stack->data[stack->size--];
}

NodeContent peekArrayStack(ArrayStack *stack){
	if (!stack->size)
		cerr << "Err:Stack is empty" <<endl;
	return stack->data[stack->size];
}

unsigned printDec2Oct(unsigned int dec){
	unsigned oct = 0;
	unsigned int dec0 = dec;
	ArrayStack *convertStack = newArrayStack(100);
	while(dec >0){
		pushArrayStack(convertStack, dec%8);
		dec /= 8;
	}
	while(convertStack->size >0){
		oct += popArrayStack(convertStack) * pow(10, convertStack->size);
	}
	cout << "DEC(" << dec0 << ") = OCT(" << oct << ")" << endl << endl;
	return oct;
}

int main(){
	ArrayStack *myStack = newArrayStack(100);
	for(int i=1;i<=10;i++)
		pushArrayStack(myStack, i*2);
	for(int i=1;i<=10;i++)
		popArrayStack(myStack);
	printDec2Oct(5678);
}
