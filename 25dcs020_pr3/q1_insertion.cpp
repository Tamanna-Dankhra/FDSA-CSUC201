#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"insertion sort \n";
    cout<<"enter no of marks : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
