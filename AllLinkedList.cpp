#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *next = NULL;
}*front=NULL, *back=NULL;


int size = 0;
Node* pushFront(Node *head,int data){
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = head;
	if(back==NULL){
		back = head;
	}
	head = newNode;
	size++;
	front=head;
	return head;
}

Node* pushEnd(Node* head, int data){
	Node* newNode = new Node;
	newNode->data=data;
	Node* curr = head;
	while(curr->next){
		curr = curr->next;
	}
	curr->next = newNode;
	newNode->next = NULL;
	size++;
	back=newNode;
	return head;
}

Node* insertMid(Node* head,int data){
	Node* newNode = new Node;
	newNode->data = data;
	int curCount = 0,mid = size/2;
	Node* curr = head;
	while(curr && curCount!=mid){
		curCount++;
		curr = curr->next;
	}
	newNode->next = curr->next;
	curr->next = newNode;
	size++;
	
	return head;
}

int getMiddle(Node* head){
	int curCount = 0;
	int mid = size/2;
	Node* curr = head;
	while(curCount!=mid){
		curCount++;
		curr = curr->next;
	}
	return curr->data;
}

int getFront(){
	if(front==NULL){
		return -1;
	}
	return front->data;
}

int getBack(){
	if(back==NULL){
		return -1;
	}
	return back->data;
}

// Deletion
Node* removeFront(Node* head){
	if(!head){
		return NULL;
	}
	Node* curr = head;
	head = head->next;
	delete curr;
	front = head;
	size--;
	return head;
}

Node* removeBack(Node* head){
	if(head==NULL){
		return NULL;
	}
	Node* curr = head;
	Node* prev=NULL;
	while(curr->next){
		prev = curr;
		curr = curr->next;
	}
	delete curr;
	prev->next = NULL;
	back = prev;
	size--;
	return head;
}

Node* removeMid(Node* head){
	int curCount = 0;
	int mid = size/2;
	if(mid==0){
		delete head;
		return NULL;
	}
	Node* curr = head;
	Node* prev=NULL;
	while(curCount!=mid){
		curCount++;
		prev = curr;
		curr = curr->next;
	}
	prev->next = curr->next;
	delete curr;
	size--;
	return head;
}

void printList(Node* head){
	while(head){
		cout<<head->data;
		if(head->next){
			cout<<"->";
		}
		head = head->next;
	}
	cout<<endl;
}

int main() {
	// your code goes here
	Node *head = NULL;
	head = pushFront(head,10);
	head = pushFront(head,20);
	head = pushFront(head,30);
	head = pushFront(head,40);
	printList(head);
	cout<<" And Size is "<<size<<endl;
	cout<<"Middle Element :"<<getMiddle(head)<<endl;
	cout<<"Front :"<<getFront()<<endl;
	cout<<"Back : "<<getBack()<<endl;
	
	// Adding in the end
	head = pushEnd(head,50);
	head = pushEnd(head,60);
	head = pushEnd(head,70);
	printList(head);
	
	cout<<" And Size is "<<size<<endl;
	cout<<"Middle Element :"<<getMiddle(head)<<endl;
	cout<<"Front :"<<getFront()<<endl;
	cout<<"Back : "<<getBack()<<endl;
	
	// Insert In the middle
	head = insertMid(head,41);
	head = insertMid(head,42);
	head = insertMid(head,43);
	printList(head);
	
	cout<<" And Size is "<<size<<endl;
	cout<<"Middle Element :"<<getMiddle(head)<<endl;
	cout<<"Front :"<<getFront()<<endl;
	cout<<"Back : "<<getBack()<<endl;
	
	
	// Deletion
	cout<<"Deletion"<<endl;
	head = removeFront(head);
	printList(head);
	cout<<" And Size is "<<size<<endl;
	cout<<"Middle Element :"<<getMiddle(head)<<endl;
	cout<<"Front :"<<getFront()<<endl;
	cout<<"Back : "<<getBack()<<endl;
	
	head = removeBack(head);
	printList(head);
	cout<<" And Size is "<<size<<endl;
	cout<<"Middle Element :"<<getMiddle(head)<<endl;
	cout<<"Front :"<<getFront()<<endl;
	cout<<"Back : "<<getBack()<<endl;
	
	head = removeMid(head);
	printList(head);
	cout<<" And Size is "<<size<<endl;
	cout<<"Middle Element :"<<getMiddle(head)<<endl;
	cout<<"Front :"<<getFront()<<endl;
	cout<<"Back : "<<getBack()<<endl;
	return 0;
}

