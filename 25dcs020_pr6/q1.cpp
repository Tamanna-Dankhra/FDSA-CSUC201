#include<bits/stdc++.h>
using namespace std;

#define MAX 100
int n;
int top=-1;
string Stack[MAX];

void push(string data){
    if(top==n-1){
        cout<<"====== stack is full ====== \n"<<endl;
        return;
    }

    top++;
    Stack[top]=data;

    cout<<Stack[top]<<endl;
}

void pop(){
    if(top==-1){
        cout<<"\n====== stack is empty ======"<<endl;
        return;
    }
   
    cout<<"deleted : "<<Stack[top]<<"\n";
    top--;
}
int main(){
    n=3;
    push("value 1");
    push("value 2");
    push("value 3");
    push("value 4");

    pop();
    pop();
    pop();
    pop();

    return 0;
}