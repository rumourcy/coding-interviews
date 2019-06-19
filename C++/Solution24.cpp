/*
  struct RandomListNode {
  int label;
  struct RandomListNode *next, *random;
  RandomListNode(int x) :
  label(x), next(NULL), random(NULL) {}
  };
*/
class Solution {
public:
  RandomListNode* Clone(RandomListNode* pHead)
  {
    if (pHead == NULL) return NULL;
    RandomListNode* cur = pHead;
    while (cur != NULL) {
      RandomListNode *tmp = new RandomListNode(cur->label);
      tmp->next = cur->next;
      cur->next = tmp;
      cur = tmp->next;
    }
    cur = pHead;
    while (cur != NULL) {
      cur->next->random = (cur->random != NULL) ? cur->random->next : NULL;
      cur = cur->next->next;
    }
    cur = pHead;
    RandomListNode* clone = pHead->next;
    while (cur != NULL) {
      RandomListNode *tmp = cur->next;
      cur->next = tmp != NULL ? tmp->next : NULL;
      cur = tmp;
    }
    return clone;
  }
};
