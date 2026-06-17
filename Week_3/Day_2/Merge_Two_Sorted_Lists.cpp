/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *temp1 = list1, *temp2 = list2;

        ListNode *ans = new ListNode(-1), *cur = ans;
        while (temp1 != NULL && temp2 != NULL)
        {
            if (temp1->val < temp2->val)
            {
                cur->next = temp1;
                cur = cur->next;
                temp1 = temp1->next;
            }
            else
            {

                cur->next = temp2;
                cur = cur->next;
                temp2 = temp2->next;
            }
        }
        if (temp1 != NULL)
        {

            cur->next = temp1;
        }
        if (temp2 != NULL)
        {
            cur->next = temp2;
        }
        return ans->next;
    }
};