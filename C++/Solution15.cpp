/*
  struct ListNode {
  int val;
  struct ListNode *next;
  ListNode(int x) :
  val(x), next(NULL) {}
  };
*/
class Solution {
public:
  ListNode* ReverseList(ListNode* pHead) {
    ListNode* prev = NULL;
    ListNode* cur = pHead;
    ListNode* tmp = NULL;
    while (cur != NULL) {
      tmp = cur->next;
      cur->next = prev;
      prev = cur;
      cur = tmp;
    }
    return prev;
  }
};
