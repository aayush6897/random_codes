#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int data) {
		this -> data = data;
		this -> next = NULL;
	}
};

Node* insert() {
	Node* head = NULL;
	Node* tail = NULL;
	int data;
	cin >> data;
	while(data != -1) {
		Node* node = new Node(data);
		if(head == NULL) {
			head = node;
			tail = node;
		}
		else {
			tail -> next = node;
			tail = node;
		}
		cin >> data;
	}
	return head;
}

Node* reverseLL(Node* head) {
	Node* prev = NULL;
	Node* curr = head;
	while(curr != NULL) {
		Node* next = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}

void printLL(Node* head) {
	Node* temp = head;
	while(temp != NULL) {
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}
int main() {

	Node* head = insert();
	Node* newHead = reverseLL(head);
	printLL(newHead);
	return 0;
}