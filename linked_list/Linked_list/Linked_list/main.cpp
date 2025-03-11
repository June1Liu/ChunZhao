#include<stdio.h>

using namespace std;

struct ListNode {
	int value;
	ListNode* next;
	ListNode() : value(0), next(nullptr) {}
	ListNode(int a) : value(a), next(nullptr) {}
	ListNode(int a, ListNode* node) : value(a), next(node) {}
};

int main() {
	ListNode* n0 = new ListNode(0);
	ListNode* n1 = new ListNode(1);
	ListNode* n2 = new ListNode(2);
	ListNode* n3 = new ListNode(3);

	n0->next = n1;
	n1->next = n2;
	n2->next = n3;


}
void insert(ListNode* n0, ListNode* p) {
	ListNode* n1 = n0->next;
	p->next = n1;
	n0->next = p;
}
//delete the first listNode after n0
void remove(ListNode* n0) {
	if (n0->next == nullptr)
		return;
	ListNode* p = n0->next;
	ListNode* n1 = p-> next;
	n0->next = p->next;

}