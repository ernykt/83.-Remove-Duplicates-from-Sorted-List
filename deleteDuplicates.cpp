class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode result;
        ListNode* tail = &result;
        map<int,int> freq;
        while(head!=NULL){
            freq[head->val]++;
            if( freq[head->val]==1){
             tail->next = new ListNode(head->val);  
             tail = tail->next;         
            }
            head = head->next;
        }
        return result.next;
    }
};
