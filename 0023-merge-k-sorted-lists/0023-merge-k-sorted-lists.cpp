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
    ListNode*mergeTwoList(ListNode*l1,ListNode*l2){
        ListNode*dummy=new ListNode(-1);
        ListNode*temp=dummy;
        while(l1 !=nullptr && l2 !=nullptr){
            if(l1->val<=l2->val){
                temp->next=l1;
                l1=l1->next;
            }
            else{
                temp->next=l2;
                l2=l2->next;
            }
            temp=temp->next;
        }
        if(l1 !=nullptr){
            temp->next=l1;
        }
        else{
            temp->next=l2;
        }
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode*ans=nullptr;
        for(int i=0;i<lists.size();i++){
            ans=mergeTwoList(ans,lists[i]);
        }
        return ans;
    }
};