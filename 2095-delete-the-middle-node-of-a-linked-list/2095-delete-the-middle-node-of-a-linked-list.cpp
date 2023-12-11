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
    ListNode* deleteMiddle(ListNode* head) {
        int n= 0;
        for(ListNode * cur = head; cur ; cur = cur->next,n++){}
        if(n == 1)return nullptr;
        int idx = 0 , middle = n / 2;
        for(ListNode * cur = head; cur ; cur = cur -> next,idx++){
                if(idx+1 == middle){
                    ListNode * prev = cur;
                    ListNode *del = cur->next;
                    ListNode * next;
                    if(del->next){
                        next = del->next;
                        prev -> next = next;
                        delete del;
                    }
                    else{
                        delete del;
                        prev->next = nullptr;
                    }
                }
        }
        return head;
        
    }
};