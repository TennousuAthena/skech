//Data structure:Page 24
//顺序表

#include<iostream>
#include<cstdlib>
#define OK         1
#define ERROR      0
#define NOT_FOUND  -1
#define OVERFLOW   -2
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

using namespace std;
typedef int ElemType;

typedef short int Status;
typedef struct sqList{
        ElemType* elem;
        int length;
        int listsize;
}SqList;

/**
 * @brief 顺序表的初始化
 * @param L 
 * @return Status
 */
Status InitList_Sq(SqList &L){
	cout << "初始化一个大小为" << LIST_INIT_SIZE << "的顺序表" <<endl;
	L.elem=(ElemType*)malloc(LIST_INIT_SIZE*sizeof(ElemType));
	if(!L.elem)
		exit(OVERFLOW);
	L.length=0;
	L.listsize=LIST_INIT_SIZE;
    return OK; 
}

/**
 * @brief 顺序表插入
 * 
 * @param L 顺序表
 * @param e 插入位置
 * @param i 元素内容
 * 
 * @return Status
 */
Status ListInsert_Sq(SqList& L,int i,ElemType e){ //DS:page 24
	cout << "向顺序表位置#"<<i<<"插入元素'"<<e<<"'" << endl;
	//用于申请新空间
	//       if(i<1||i>(L.length+1)) return ERROR;
	//       if(L.length>=L.listsize){
	//          ElemType* newbase=(ElemType*)realloc(L.elem,(L.listsize+LISTINCREMENT)*sizeof(ElemType));
	//          if(!newbase) exit(OVERFLOW);
	//          L.elem=newbase;
	//          L.listsize+=LISTINCREMENT;
	//          }
       ElemType *q=&(L.elem[i-1]),*p;
       for(p=&(L.elem[L.length-1]);p>=q;--p)
          *(p+1)=*p;
       *q=e;
       ++(L.length);
       return OK;
}

/**
 * @brief 顺序表删除元素
 * 
 * @param L 顺序表
 * @param pos 删除位置
 * 
 * @return Status
 */
Status ListDel_Sq(SqList& L, int pos){
	cout << "正在删除位置#"<< pos << "的元素" << endl;
	if(pos >= L.length)
		return OVERFLOW;
	// 从后向前移动元素,覆盖删除位置
	for (int i = pos; i < L.length; i++) {
		L.elem[i - 1] = L.elem[i];
	}
	
	L.length--;
	return OK;
}

/**
 * @brief 顺序表查找第一个内容
 * 
 * @param L 表
 * @param content 查找内容
 * 
 * @return 位置
 */
Status ListFind_Sq(SqList& L, ElemType content){
	for(int pos=0; pos<L.listsize; pos++){
		if(L.elem[pos] == content)
		{	
			cout << "顺序表值为'" << content <<"'的元素位于#" << pos << endl;
			return pos;
		}
	}
	cout << "未能找到值为'" << content <<"'的元素" << endl;
	return NOT_FOUND;
}

int main(){
	cout<<"大家好啊，我是顺序表，今天来点大家想看的东西\n";
    int i;
    SqList L;
    InitList_Sq(L);
	 
    for(i=1;i<=10;i++){
       ListInsert_Sq(L,i,i);
    }
    for(i=0;i<L.length;i++){
       cout<< "我是序号#" << i<<"我的值是'"<<L.elem[i]<<"'\n";
    }
	
	ListDel_Sq(L, 2);
	ListFind_Sq(L, 3);
    return 0;
}


