#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int value = this ->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memeory is free for "<<value<<endl;
    }

};

void insertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next=temp;
    temp=tail;
}

void insertAtPosition(Node* &head,Node* &tail,int position, int d){
    Node* temp = head;
    int cnt = 1;
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,d);   
        return;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position,Node* &head){
    //deleting first
    if(position==1){
        Node* temp = head;
        head = head->next;
        temp->next =NULL;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt =1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev ->next = curr->next;
        curr->next =NULL;
        delete curr;
    }
}

void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node *node1 = new Node(4);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to next
    Node *head = node1;
    Node *tail= node1;  
    display(head);
    insertAtHead(head, 12);
    display(head);
    insertAtTail(tail, 15);
    display(head);
    insertAtPosition(head,tail,3,10);
    display(head);
    deleteNode(3,head);
    display(head);
    deleteNode(1,head);
    display(head);
    return 0;
}