////#define _CRT_SECURE_NO_WARNINGS 1
///*************************************************************
//    date: June 2017
//    copyright: Zhu En（祝恩）
//    DO NOT distribute this code.
//**************************************************************/
//// 链接存储的栈实现文件
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "LnkStack.h"
//
///*创建栈*/
//LinkStack* LS_Create()
//{
//    LinkStack* ls = (LinkStack*)malloc(sizeof(LinkStack));
//    ls->top = NULL;
//    ls->len = 0;
//    return ls;
//}
//
///*释放栈*/
//void LS_Free(LinkStack* ls)
//{
//    LNode* curr = ls->top;
//    while (curr) {
//        LNode* next = curr->next;
//        free(curr);
//        curr = next;
//    }
//    free(ls);
//}
//
///*将栈变为空栈*/
//void LS_MakeEmpty(LinkStack* ls)
//{
//    LNode* curr = ls->top;
//    while (curr) {
//        LNode* next = curr->next;
//        free(curr);
//        curr = next;
//    }
//    ls->top = NULL;
//    ls->len = 0;
//}
//
///*判断栈是否为空*/
//bool LS_IsEmpty(LinkStack* ls)
//{
//    // 请在这里补充代码，完成本关任务
//    /********** Begin *********/
//    if (ls->len == 0)
//        return true;
//    else
//        return false;
//    /********** End **********/
//}
//
///*获取栈的长度*/
//int LS_Length(LinkStack* ls)
//{
//    // 请在这里补充代码，完成本关任务
//    /********** Begin *********/
//    return ls->len;
//    /********** End **********/
//}
//
///*将x进栈*/
//void LS_Push(LinkStack* ls, T x)
//{
//    // 请在这里补充代码，完成本关任务
//    /********** Begin *********/
//    LNode P;
//    P.data = x;
//    P.next = ls->top;
//    ls->top = &P;
//    ls->len++;
//    /********** End **********/
//}
//
///*出栈。出栈元素放入item；如果空栈，将返回false*/
//bool LS_Pop(LinkStack* ls, T& item)
//{
//    // 请在这里补充代码，完成本关任务
//    /********** Begin *********/
//    if (LS_IsEmpty(ls))
//    {
//        return false;
//    }
//    else
//    {
//        item = ls->top->data;
//        LNode* p = ls->top;
//        ls->top = p->next;
//        free(p);
//        ls->len--;
//
//        return true;
//    }
//    /********** End **********/
//}
//
///*读栈顶元素放入item。如果空栈，将返回false*/
//bool LS_Top(LinkStack* ls, T& item)
//{
//    // 请在这里补充代码，完成本关任务
//    /********** Begin *********/
//    if (LS_IsEmpty(ls))
//    {
//        return false;
//    }
//    else
//    {
//        item = ls->top->data;
//
//        return true;
//    }
//    /********** End **********/
//}
//
///*从栈顶到栈底打印各结点数据*/
//void LS_Print(LinkStack* ls)
//{
//    if (ls->len == 0) {
//        printf("The stack: Empty!");
//        return;
//    }
//    printf("The stack (from top to bottom):");
//    LNode* curr = ls->top;
//    while (curr) {
//        printf(" %d", curr->data);
//
//        curr = curr->next;
//    }
//    // printf("\n");
//}
