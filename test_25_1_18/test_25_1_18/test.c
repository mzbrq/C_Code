#define _CRT_SECURE_NO_WARNINGS 1

//��������

bool hasCycle(struct ListNode* head)
{
    struct ListNode* slow = head, * fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}


//�ϲ�������������

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
    if (list1 == NULL)
    {
        return list2;
    }
    if (list2 == NULL)
    {
        return list1;
    }

    struct ListNode* n1 = list1, * n2 = list2;
    struct ListNode* head = NULL, * cur = NULL;

    if (n2->val < n1->val)
    {
        cur = head = n2;
        n2 = n2->next;
    }
    else
    {
        cur = head = n1;
        n1 = n1->next;
    }

    while (n1 && n2)
    {
        if (n2->val < n1->val)
        {
            cur->next = n2;
            n2 = n2->next;
        }
        else
        {
            cur->next = n1;
            n1 = n1->next;
        }

        cur = cur->next;
    }

    if (n1 == NULL)
    {
        cur->next = n2;
    }
    else
    {
        cur->next = n1;
    }

    return head;
}



//������м�ڵ�

struct ListNode* middleNode(struct ListNode* head) {

    struct ListNode* slow = head, * fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

    }

    return slow;

}