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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        ListNode* temp3 = nullptr;
        ListNode* newList = nullptr;

        while(temp1 != nullptr && temp2 != nullptr) {
            if(temp1->val < temp2->val){
                if(newList == nullptr){
                    newList = new ListNode(temp1->val);
                    temp3 = newList;
                    temp1 = temp1 -> next;
                } else {
                    temp3 -> next = new ListNode(temp1->val);
                    temp3 = temp3->next;
                    temp1 = temp1 -> next;
                }
            } else {
                if(newList == nullptr){
                    newList = new ListNode(temp2->val);
                    temp3 = newList;
                    temp2 = temp2 -> next;
                } else {
                    temp3 -> next = new ListNode(temp2->val);
                    temp3 = temp3->next;
                    temp2 = temp2 -> next;
                }
            }
        }

                while (temp1 != nullptr) {
            if (newList == nullptr) {
                newList = new ListNode(temp1->val);
                temp3 = newList;
            } else {
                temp3->next = new ListNode(temp1->val);
                temp3 = temp3->next;
            }
            temp1 = temp1->next;
        }

        while (temp2 != nullptr) {
            if (newList == nullptr) {
                newList = new ListNode(temp2->val);
                temp3 = newList;
            } else {
                temp3->next = new ListNode(temp2->val);
                temp3 = temp3->next;
            }
            temp2 = temp2->next;
        }
        return newList;
    }
};
