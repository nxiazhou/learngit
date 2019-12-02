#include <stdio.h>

typedef void(*FUNPTR)(int);//指针类型，指向一个函数
typedef struct node
{
    int data;
    struct node *next; /*定义一个结构*/ //foo是类型不是变量
} NODE,*NODEPTR;//未完成类型

void traverse(NODEPTR head,FUNPTR callback)//callback 为回调函数
{
    NODEPTR p= head;
    while(p!=NULL)//改成p也行
    {
        callback(p->data);
        p=p->next;
    }
}

void print(int v)
{
    printf("%d\n",v)
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