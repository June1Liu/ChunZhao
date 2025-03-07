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




}