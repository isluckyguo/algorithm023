class Solution {
public:
	ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
		ListNode *newList = new ListNode(-1);
		ListNode *pHead = newList;
		while (l1 != nullptr && l2 != nullptr) {
			if (l1->val < l2->val) {
				newList->next = l1;
				l1 = l1->next;
			} else {
				newList->next = l2;
				l2 = l2->next;
			}
			newList = newList->next;
		}
		newList->next = l1 == nullptr ? l2 : l1;
		return pHead->next;
	}
};