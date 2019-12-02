#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next; /*定义一个结构*/ //foo是类型不是变量
} NODE,*NODEOTR;//未完成类型

void traverse(NODEPTR head)
{
    NODEPTR p= head;
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
}
int main()
{
    NODEPTR head, p;
    NODE a={1,NULL},b={2,NULL},c={3,NULL};//NULL零的同义语为空指针
    a.next = &b;
    b.next = &c;
    head = &a;//指向链表头部的指针
    traverse(head);

    return 0;

}