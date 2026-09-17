#include<bits/stdc++.h>
using namespace std;

class Node{
public:
string data;
Node* next;
Node* prev;

Node(string value){
    data=value;
    next=NULL;
    prev=NULL;
}
};

Node* head=NULL;
Node* tail=NULL;

void addAtBeginning(string song){
    Node* temp=new Node(song);

    if(head==NULL){
        head=tail=temp;
    }
    else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

void addAtEnd(string song){
    Node* temp=new Node(song);

    if(head==NULL){
        head=tail=temp;
    }
    else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}

void insertAfterK(string song,int k){
    Node* temp=head;

    while(temp!=NULL && k>1){
        k--;
        temp=temp->next;
    }
    if(temp==NULL){
        return;
    }

    Node* newNode=new Node(song);
    Node* front=temp->next;

    newNode->next=front;
    newNode->prev=temp;
    temp->next=newNode;

    if(front!=NULL){
        front->prev=newNode;
    }
    else{
        tail=newNode;
    }
}

void removeFirst(){
    if(head==NULL){
        return;
    }
    Node* temp=head;

    if(head==tail){
        head=tail=NULL;
    }
    else{
        head=head->next;
        head->prev=NULL;
    }
    delete temp;
}

int count(){
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    addAtBeginning("song1");
    display();

    addAtEnd("song2");
    display();

    insertAfterK("song3",1);
    display();

    removeFirst();
    display();

    cout<<count()<<endl;

    return 0;
}