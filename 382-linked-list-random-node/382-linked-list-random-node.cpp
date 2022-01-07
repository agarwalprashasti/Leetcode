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
    ListNode *headnode;
    Solution(ListNode* head) {
        headnode=head;
    }
    
    int getRandom() {
        ListNode* temp = headnode;
        int len=0;
        while(temp){
            len++;
            temp=temp->next;
        }
        temp=headnode;
        int randomIndex= rand()%len;
        for(int i=0;i<randomIndex;i++){
            temp=temp->next;
        }
        return temp->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */