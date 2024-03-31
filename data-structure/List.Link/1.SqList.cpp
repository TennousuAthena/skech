//Data structure:Page 24
//˳���

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
 * @brief ˳���ĳ�ʼ��
 * @param L 
 * @return Status
 */
Status InitList_Sq(SqList &L){
	cout << "��ʼ��һ����СΪ" << LIST_INIT_SIZE << "��˳���" <<endl;
	L.elem=(ElemType*)malloc(LIST_INIT_SIZE*sizeof(ElemType));
	if(!L.elem)
		exit(OVERFLOW);
	L.length=0;
	L.listsize=LIST_INIT_SIZE;
    return OK; 
}

/**
 * @brief ˳������
 * 
 * @param L ˳���
 * @param e ����λ��
 * @param i Ԫ������
 * 
 * @return Status
 */
Status ListInsert_Sq(SqList& L,int i,ElemType e){ //DS:page 24
	cout << "��˳���λ��#"<<i<<"����Ԫ��'"<<e<<"'" << endl;
	//���������¿ռ�
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
 * @brief ˳���ɾ��Ԫ��
 * 
 * @param L ˳���
 * @param pos ɾ��λ��
 * 
 * @return Status
 */
Status ListDel_Sq(SqList& L, int pos){
	cout << "����ɾ��λ��#"<< pos << "��Ԫ��" << endl;
	if(pos >= L.length)
		return OVERFLOW;
	// �Ӻ���ǰ�ƶ�Ԫ��,����ɾ��λ��
	for (int i = pos; i < L.length; i++) {
		L.elem[i - 1] = L.elem[i];
	}
	
	L.length--;
	return OK;
}

/**
 * @brief ˳�����ҵ�һ������
 * 
 * @param L ��
 * @param content ��������
 * 
 * @return λ��
 */
Status ListFind_Sq(SqList& L, ElemType content){
	for(int pos=0; pos<L.listsize; pos++){
		if(L.elem[pos] == content)
		{	
			cout << "˳���ֵΪ'" << content <<"'��Ԫ��λ��#" << pos << endl;
			return pos;
		}
	}
	cout << "δ���ҵ�ֵΪ'" << content <<"'��Ԫ��" << endl;
	return NOT_FOUND;
}

int main(){
	cout<<"��Һð�������˳��������������뿴�Ķ���\n";
    int i;
    SqList L;
    InitList_Sq(L);
	 
    for(i=1;i<=10;i++){
       ListInsert_Sq(L,i,i);
    }
    for(i=0;i<L.length;i++){
       cout<< "�������#" << i<<"�ҵ�ֵ��'"<<L.elem[i]<<"'\n";
    }
	
	ListDel_Sq(L, 2);
	ListFind_Sq(L, 3);
    return 0;
}


