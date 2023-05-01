#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//链表

//一个简单的单链表节点类定义
class ListNode {
public:
    int val; //储存节点的值
    ListNode *next; //指向下一个节点的指针

    //构造函数，初始化节点的值和指针
    ListNode(int x) : val(x), next(nullptr) {}
};

//创建一个链表类来管理链表节点
class LinkedList {
public:
    ListNode *head; //指向链表头部的指针

    //构造函数，初始化链表头部指针
    LinkedList() : head(nullptr) {}

    //成员函数，用于在链表头部插入一个节点
    void insert(int x) {
        ListNode *newNode = new ListNode(x);
        newNode -> next = head;
        head = newNode;
    }


};

