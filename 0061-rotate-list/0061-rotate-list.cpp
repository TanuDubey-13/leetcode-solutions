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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return NULL;
        int n=1;
        ListNode* last=head;
        while(last->next!=NULL){
            n++;
            last=last->next;
        }
        k=k%n;
        if(k==0) return head;
        int count=1;
        ListNode* t=head;
        while(t!=NULL){
            if(count==(n-k)) break;
            count++;
            t=t->next;
        }
        last->next=head;
        ListNode* res = t->next;
        t->next=NULL;
        return res;
    }
};