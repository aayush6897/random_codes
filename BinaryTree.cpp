#include<iostream>
#include<queue>
using namespace std;

template <typename T>
class BinaryTreeNode {
public:
	T data;
	BinaryTreeNode<T>* left;
	BinaryTreeNode<T>* right;

	BinaryTreeNode(T data) {
		this -> data = data;
		left = NULL;
		right = NULL;
	}
};

BinaryTreeNode<int>* insert() {
	int data;
	cout << "Enter the root" << endl;
	cin >> data;
	if(data == -1) {
		return NULL;
	}
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(data);
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size() != 0) {
		BinaryTreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		int leftdata;
		cout << "Enter the left child of " << front -> data << endl;
		cin >> leftdata;
		if(leftdata != -1) {
			BinaryTreeNode<int>* leftchild = new BinaryTreeNode<int>(leftdata);
			front -> left = leftchild;
			pendingNodes.push(leftchild);
		}
		int rightdata;
		cout << "Enter the right child of " << front -> data << endl;
		cin >> rightdata;
		if(rightdata != -1) {
			BinaryTreeNode<int>* rightchild = new BinaryTreeNode<int>(rightdata);
			front -> right = rightchild;
			pendingNodes.push(rightchild);
		}
	}
	return root;
}

void printTree(BinaryTreeNode<int>* root) {
	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while(pendingNodes.size() != 0) {
		BinaryTreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << front -> data << ":";
		BinaryTreeNode<int>* left = front -> left;
		BinaryTreeNode<int>* right = front -> right;
		if(left != NULL) {
			cout << "L" << left -> data << ",";
			pendingNodes.push(left);
		}
		else {
			cout << "L-1,";
		}
		if(right != NULL) {
			cout << "R" << right -> data << endl;
			pendingNodes.push(right);
		}
		else {
			cout << "R-1" << endl;
		}
	}
}

int main() {

	BinaryTreeNode<int>* root = insert();
	printTree(root);
	return 0;
}