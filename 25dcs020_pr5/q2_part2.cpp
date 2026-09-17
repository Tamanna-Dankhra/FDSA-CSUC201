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

void addAtBeginning(string student){
    Node* temp=new Node(student);

    if(head==NULL){
        head=tail=temp;
        temp->next=head;
        temp->prev=head;
    }
    else{
        temp->next=head;
        temp->prev=tail;

        head->prev=temp;
        tail->next=temp;

        head=temp;
    }
}

void addAtEnd(string student){
    Node* temp=new Node(student);

    if(head==NULL){
        head=tail=temp;
        temp->next=head;
        temp->prev=head;
    }
    else{
        temp->prev=tail;
        temp->next=head;

        tail->next=temp;
        head->prev=temp;

        tail=temp;
    }
}

void addAfter(string givenStudent,string student){
    if(head==NULL){
        return;
    }
    Node* temp=head;

    do{
        if(temp->data==givenStudent){
            Node* newNode=new Node(student);
            newNode->next=temp->next;
            newNode->prev=temp;

            temp->next->prev=newNode;
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
    do{
        if(temp->data==student){
            if(head==tail){
                head=tail=NULL;
            }
            else{
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;

                if(temp==head){
                    head=temp->next;
                }
                if(temp==tail){
                    tail=temp->prev;
                }
            }
            if(head!=NULL){
                head->prev=tail;
                tail->next=head;
            }
            delete temp;
            return;
        }
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
    }while(temp!=head);
    cout<<endl;
    
}

int main(){

    addAtEnd("student1");
    display();

    addAtEnd("student2");
    display();

    addAtEnd("student3");
    display();

    addAfter("student1","student4");
    display();

    removeStudent("student2");
    display();

    return 0;
}