#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<" no of items : ";
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int h;
    cout<<" no of hour ";
    cin>>h;
    h=h%n;
    for(int i=0;i<h;i++){
        string first=arr[0];
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=first;
        cout<<" after hour : "<<i+1<<endl;
        for(int i=0;i<n;i++){
            if(i==n-1){
                cout<<arr[i];
            }
            else{
            cout<<arr[i]<<",";
            }
        }
        cout<<"\n";
    }
  
    return 0;
}