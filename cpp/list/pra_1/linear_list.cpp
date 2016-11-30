#include<iostream>

//int型 date_tを定義
typedef int data_t;

//構造体としてnode_tを定義
typedef struct nodetag {
    data_t data;
    struct nodetag *next;
} node_t;

int main()
{
    node_t nd1, nd2, nd3;
    node_t *p;

    nd1.data = 1;
    nd1.next = &nd2;
    nd2.data = 2;
    nd2.next = &nd3;
    nd3.data = 3;
    nd3.next = NULL;

    p = &nd1;
    std::cout<<p->data<<std::endl;
    
    p = p->next;
    std::cout<<p->data<<std::endl;

    p = p->next;
    std::cout<<p->data<<std::endl;

    return 0;
}
