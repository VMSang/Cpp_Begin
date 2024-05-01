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
	int dem = 0;
	while (head != NULL){
		cout<<head<<endl;
		cout<<head->data;
		head = head -> next;
		dem++;
	}
	return dem;
}

node* themdau(node *&head, int x){
	node *moi = create(x);
	moi -> next = head;
	// cap nhat lai head
	head = moi;
	return head;
}

// chu y them vao dslk rong
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

// chu y them vao dau
void themgiua(node *head, int data, int position){
	node *moi = new node;
	if(k<1 || k>=duyet(head)+1)
		return;
	if(k==1){
		themdau(head, data);
		return;
	}
	node *tmp = head;
	for(int i = 1; i<=k-2; i++){
		tmp = tmp -> next;
	}
	moi -> next = tmp -> next;
	tmp -> next = moi;
}
int main() {
    node *head = create(3);
    cout<<head->data;
    cout<<head->next;

    node *p = create(5);
    
    return 0;
}