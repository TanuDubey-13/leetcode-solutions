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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* list1= headA;
        ListNode* list2= headB;
        while(list1!=list2){
            if(list1==NULL){
                list1=headB;
            }
            else{
                list1=list1->next;
            }
            if(list2==NULL) list2=headA;
            else list2=list2->next;
        }
        return list1;
    }
};