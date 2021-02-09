/*
Write a function that moves the last element to the front in a given Singly Linked List. For example,
if the given Linked List is 1->2->3->4->5, then the function should change the list to 5->1->2->3->4.

*/

#include <iostream>
using namespace std;
 
struct Node{
	int data;
	Node *next;
 
	Node(int data){
		this->data = data;
		this->next = NULL;
	}
};
 
void moveLastNode(Node *root){
	if(root==NULL){
		return;
	}
	Node *cur = root;
	Node *prev = NULL;
 
	while(cur->next){
		cout<<cur->data<<"->";
		prev = cur;
		cur = cur->next;
	}
	cout<<endl;
	prev->next = NULL;
	cur->next = root;
	root = cur;
	// cout<<prev->data<<" "<<cur->data<<endl;
 
	cur = root;
	while(cur){
		cout<<cur->data<<"->";
		cur = cur->next;
	}
}
 
int main() {
	// your code goes here
	Node *head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	head->next->next->next = new Node(4);
	head->next->next->next->next = new Node(5);
 
	moveLastNode(head);
	return 0;
}
