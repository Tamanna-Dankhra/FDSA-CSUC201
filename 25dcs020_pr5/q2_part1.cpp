#include<bits/stdc++.h>
using namespace std;
class Node{
public:
string data;
Node* next;

Node(string value){
    data=value;
    next=NULL;
}
};

Node* head=NULL;
Node* tail=NULL;

void addAtBeginning(string student){
    Node* temp=new Node(student);

    if(head==NULL){
        head=tail=temp;
        temp->next=head;
    }
    else{
        temp->next=head;
        head=temp;
        tail->next=head;
    }
}

void addAtEnd(string student){
    Node* temp=new Node(student);

    if(head==NULL){
        head=tail=temp;
        temp->next=head;
    }
    else{
        tail->next=temp;
        tail=temp;
        tail->next=head;
    }
}

void addAfter(string givenStudent,string student){
    Node* temp=head;
    if(head==NULL){
        return;
    }
    do{
        if(temp->data==givenStudent){
            Node* newNode=new Node(student);

            newNode->next=temp->next;
            temp->next=newNode;

            if(temp==tail){
                tail=newNode;
            }
            return;
        }
        temp=temp->next;

    }while(temp!=head);
}

void removeStudent(string student){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    Node* prev=tail;
    do{
        if(temp->data==student){
            if(head==tail){
                head=tail=NULL;
            }
            else{
                prev->next=temp->next;
                if(temp==head){
                    head=temp->next;
                    tail->next=head;
                }
                if(temp==tail){
                    tail=prev;
                    tail->next=head;
                }
            }
            delete temp;
            return;
        }
        prev=temp;
        temp=temp->next;

    }while(temp!=head);
}

void display(){
    if(head==NULL){
        cout<<endl;
        return;
    }
    Node* temp=head;

    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
    cout<<endl;
}

int main(){

    addAtEnd("student1");
    display();

    addAtEnd("student2");
    display();

    addAtEnd("student3");
    display();

    addAfter("atudent1","student4");
    display();

    removeStudent("student2");
    display();

    return 0;
}