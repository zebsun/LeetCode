#include<iostream>
#include<vector>

using namespace std;

int main()
{

}

class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode *forward(head), *backward(head);
		while (forward && n--) forward = forward->next;
		if (forward == NULL) return backward->next;
		while (forward->next) {
			forward = forward->next;
			head = head->next;
		}
		head->next = head->next->next;
		return backward;
	}
};