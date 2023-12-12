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
        // if(head == nullptr || head->next == nullptr)return head;
        ListNode * cur = head;
        ListNode * prev = nullptr;
        while(cur != nullptr){
            if(!cur->next){
                head = cur;
                head -> next = prev;
                break;
            }
            else{
                ListNode * next = cur->next;
                cur->next = prev;
                prev = cur;
                cur = next;
            }
        }
        return head;
    }
};