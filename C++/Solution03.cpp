class Solution {
private:
    vector<int> res;
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        if (head != NULL) {
            printListFromTailToHead(head->next);
            res.push_back(head->val);
        }
        return res;
    }
};
