#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *next;
};

node* create(int x){
	node *newNode = new node;
	newNode -> data = x;
	newNode -> next = NULL;
	return newNode;
}

void duyet(node *head){
	while (head != NULL){
		cout<<head<<endl;
		cout<<head->data;
		head = head -> next;
	}
}

node* themdau(node *&head, int x){
	node *moi = create(x);
	moi -> next = head;
	// cap nhat lai head
	head = moi;
	return head;
}

void themcuoi(node *&head, int x){
	node *moi = create(x);
	node *tmp = head; //dung de duyet
	if(head == NULL){
		head = moi;
		return;
	}
	while(tmp->next != NULL){
		tmp = tmp -> next;
	}
	//tmp la node cuoi
	tmp -> next = moi; 
}
int main() {
    node *head = create(3);
    cout<<head->data;
    cout<<head->next;

    node *p = create(5);
    
    return 0;
}