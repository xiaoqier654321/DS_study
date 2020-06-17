// 单链表
#ifndef _LINKLIST_H_
#define _LINKLIST_H_
// 定义元素类型
typedef int ElemtType;
// 单链表
typedef struct LNode {
	// 数据域
	ElemtType data;
	// 指针域
	struct LNode* next;
}LNode, * LinkList;

// 1.头插法建立单链表：从头结点后插入，生成链表元素顺序与输入顺序相反
LinkList HeadInsertLinkList(LinkList* L);
// 2.尾插法建立单链表：从已完成链表尾部插入，生成链表元素顺序与输入顺序相同（需要一个尾指针r辅助）
LinkList TailInsertLinkList(LinkList* L);
// 3.按序号查找结点, 查找第i个元素
LNode* GetLinkListElem(LinkList L, int i);
// 4.按值查找，查找值为e的元素
LNode* LocateLinkListElem(LinkList L, ElemtType e);
// 5.插入结点，在第i个结点的位置插入e
int InsertLinkList(LinkList* L, int i, ElemtType e);
// 5.插入操作，在第i个结点前插入（前插）
int InsertLinkListAfter(LinkList* L, int i, ElemtType e);
// 6.删除结点，删除第i个结点，并返回被删除的元素
int DeleteLinkList(LinkList* L, int i, ElemtType* e);
// 7.获取单链表的长度
int LengthLinkList(LinkList L);
// 8.判空
int EmptyLinkList(LinkList L);
// 9.销毁单链表
int DestroyLinkList(LinkList* L);
// 10.打印单链表
void PrintLinkList(LinkList L);

//拓展
// 1Un.创建不带头结点的单链表
void CreateUnLinkList(LinkList* L);
// 2Un.打印不带头结点的单链表
void PrintUnLinkList(LinkList L);

// 功能测试
void MainLinkList();

// 题目解答
// 1.
// 王道书上的递归题解，因为C中没有引用，书上的思想无法实现
void LinkList_DelX1(LinkList* L, ElemtType x);
// LeetCode上的递归想法
LinkList LinkList_DelX2(LinkList L, ElemtType x);
void SolveLinkList1();
// 2.
// 从头至尾扫描单链表，pre指向当前结点p的前驱结点
void LinkList_DelX3(LinkList* L, ElemtType x);
// 用p指针扫描所有结点，将值等于x的释放，不等于x的链接到L之后
void LinkList_DelX4(LinkList* L, ElemtType x);
void SolveLinkList2();
// 3.
// 反向打印，通过递归
void RPrintLinkList(LinkList L);
void SolveLinkList3();
//4.
// 删除最小值
void DelMinLinkList(LinkList* L);
void SolveLinkList4();

#endif // !_LINKLIST_H_
