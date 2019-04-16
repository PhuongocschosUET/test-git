#include <iostream>
#include <string>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct LinkedList{
    Node* head;

    LinkedList();
    ~LinkedList();
    void insert(int p, int x);
    void del(int p);
    void print();
};

LinkedList::LinkedList(){
    this->head = NULL;
}

LinkedList::~LinkedList(){
    std::cout << "LIST DELETED";
}

void LinkedList::insert(int p, int x){
    Node* node = new Node();
    node->data = x;

    if (p==0) {
        node->next = this->head;
        this->head = node;
    } else {
        Node* currentNode;
        currentNode = this->head;
        for (int i = 1; i < p; i++) {
            currentNode = currentNode->next;
        }
        node->next = currentNode->next;
        currentNode->next = node;
    }
}

void LinkedList::del(int p){
    if (p == 0) {
        this->head = this->head->next;
    } else {
        Node* currentNode = this->head;
        for (int i = 1; i < p; i++) {
            currentNode = currentNode->next;
        }
        currentNode->next = currentNode->next->next;
    }
}

void LinkedList::print(){
    Node* head = this->head;
    while(head){
        cout << head->data;
        if (head->next) {
            cout << " ";
        }
        head = head->next;
    }
    cout << endl;
}

int main()
{
    LinkedList* list = new LinkedList();
    int n;
    cin >> n;

    string command;
    int p, x;
    for (int i = 0; i < n; i++) {
        cin >> command;
        if (command == "insert") {
            cin >> p >> x;
            list->insert(p, x);
        } else {
            cin >> p;
            list->del(p);
        }
    }
    list->print();
}
