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

void visit(string page){
    Node* temp=new Node(page);

    temp->next=head;
    head=temp;

    cout<<head->data<<endl;
}

void back(){
    if(head==NULL){
        cout<<"no history"<<endl;
        return;
    }

    Node* temp=head;
    head=head->next;

    delete temp;

    if(head==NULL){
        cout<<"no page"<<endl;
    }
    else{
        cout<<head->data<<endl;
    }
}

int main(){
    cout<<"\nstack using ll \n";
    cout<<"====== insert element ====== \n";
    visit("ABC.com");
    visit("PQR.com");
    visit("XYZ.com");

    cout<<"\n====== delete element ====== \n";
    back();
    back();
    back();
    back();

    return 0;
}