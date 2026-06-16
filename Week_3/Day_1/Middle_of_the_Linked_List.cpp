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
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *mid =NULL, * end=NULL;
        if(head== NULL ) return head;
        else{
            mid=head, end=head;
            while (end->next!=NULL){
                mid=mid->next;
                if( end->next->next== NULL) {
                    end=end->next;
                }
                else 
                  end=end->next->next;
                   
                
            }
        }
       return mid;

    }
};