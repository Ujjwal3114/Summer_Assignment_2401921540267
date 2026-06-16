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
    ListNode* reverseList(ListNode* head) {
        ListNode * prev=NULL, *cur= NULL, *nex=NULL;
        if(head == NULL || head->next== NULL) return head;

        else {
            cur=head;
            nex=head->next;
            while( cur!= NULL){
                cur->next= prev;
                prev=cur;
                cur=nex;
                if( nex!= NULL)nex=nex->next;
                
            }
            head= prev;
        }
        return head;
    }
};