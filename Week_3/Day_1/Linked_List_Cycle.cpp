/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* pt1= head, *pt2 = head;

        if( head== NULL||head-> next == NULL)    return false;
        else {
            
            while (pt1!=NULL && pt2!= NULL&& pt2->next!=NULL ){
                pt1=pt1-> next;
                pt2=pt2->next->next;
                if(  pt1==pt2){
                     return true;
                }
           
            }
        }
        return false;
    }
};