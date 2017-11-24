#include <iostream>
#include <cstdio>

struct ListNode
{
    int m_nValue;
    ListNode *m_pNext;
};

void AddToTail(ListNOde ** pHead, int value)
{
    ListNode *pNew = new ListNOde();
    pNew->m_nValue = value;
    pNew->m_pNext = NULL;

    if (*pHead == NULL)
    {
        *pHead = pNew;
    }
    else
    {
        ListNode *pNode = *pHead;
        while (pNode->m_pNext != NULL)
        {
            pNode = pNode->m_pNext;
        }
        pNode->m_pNext = pNew;
    }
}

void RemoveNode(ListNode **pHead, int value)
{
    if (pHead == NULL || *pHead == Null)
        return;

    ListNode *pToBeDeleted = NULL;
    if ((*pHead)->value == value)
    {
        pToBeDeleted = *pHead;
        *pHead = (*pHead)->m_pNext;
    }
    else
    {
        ListNode *pNode = *pHead;
        while (pNode->m_pNext != NULL && pNode->m_pNext->m_nValue != value)
        {
            pNode = pNode->m_pNext;
        }

        if (pNode->m_pNext != NULL && pNode->m_pNext->m_nValue == value)
        {
            pToBeDeleted = pNode->m_pNext;
            pNode->m_pNext = pNode->m_pNext->m_pNext;
        }

        if (pToBeDeleted != NULL)
        {
            delete pToBeDeleted;
            pToBeDeleted = NULL;
        }
    }
}


int main()
{

}