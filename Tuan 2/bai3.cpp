#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct doublyLinkedList {
	Node *head;
	Node *tail;
};

struct Node* tail = NULL;
struct Node* head = NULL;
/*
void push(Node *head, int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(head==NULL) {
        newNode->next=NULL;
        newNode->prev=NULL;
        newNode->data=data;
        head=newNode;
    }
    else {
        newNode->data=data;
        newNode->prev=NULL;
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}
*/
void insert(int data) {
  //  cout<<"\nBat dau insert " << data << endl;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    if(head==NULL) {
      //  cout << "head==NULL" <<endl;
        newNode->next=NULL;
        newNode->prev=NULL;
        head=newNode;
        tail=newNode;
      //  cout<< "Head data " << head->data << endl;
        //cout<<"Tail data"<<tail->data<<endl;
    }
    else {
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
        newNode->next=NULL;
     //   cout<< "Head data " << head->data << endl;
       // cout<<"Tail data "<<tail->data<<endl;

    }
}


int countTriplets() {
    int count=0;
   // cout << "Batdau dem\n";
    Node *current = head->next;
    int sum;
    while(current!=tail) {
            sum=0;
            sum=current->prev->data + current->data + current->next->data;
        if (sum == 0)
            count++;
        current=current->next;

    }
  //  cout<<"Ket thuc dem\n";
    return count;
}

void print() {
    Node* cur = head;
    while(cur!=NULL){
     //   cout << cur->data;
        if (cur->next) {
     //       cout << " ";
        }
        cur = cur->next;
    }
   // cout << endl;

}


int main () {
   // struct Node* head = NULL;
    int n;
    cin>>n;
    int data;
    if (n<3) {
    	cout<<"countTriplets = 0";
	} else{
		for(int i=0;i<n;i++){
        cin>>data;
        insert(data);
     //   cout<<data<<" "<<endl;
		}
		print();
    //	cout<<"before counting "<< head->data<<endl;
		cout<<"countTriplets = "<<countTriplets();
	}


    return 0;


}
