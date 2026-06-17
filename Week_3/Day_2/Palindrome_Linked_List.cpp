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
    bool isPalindrome(ListNode* head) {
        ListNode* demoNode= new ListNode();
        ListNode* mid=demoNode, *end=demoNode;
        demoNode->next=head;

        while(end && end->next ){
            mid=mid->next;
            end=end->next->next;
        }
        if(mid==head && end ==NULL) return true;
        ListNode* cur= mid->next, *nex= cur->next,* prev=NULL;
        while(cur){
            cur->next=prev;
            prev=cur;
            cur=nex;
            if(nex==NULL){
                nex=NULL;
            }
            else{
                 nex=nex->next;
            }
           
        }
        mid->next=prev;
        ListNode* temp= head;
        while( mid->next){
            if(temp->val!= mid->next->val)return false;
            temp=temp->next;
            mid=mid->next;
        }
        return true;

    }
};