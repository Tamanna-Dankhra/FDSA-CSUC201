#include<bits/stdc++.h>
using namespace std;
bool binary_search(vector<int>&a,int low,int high,int n,int target){
    if(low>high){
        return false;
    }
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==target){
            cout<<" position is : "<<mid+1;
            return true;
        }
        else if(a[mid]<target){
            low=mid+1;
            binary_search(a,low,high,n,target);
        }
        else if(a[mid]>target){
            high=mid-1;
            binary_search(a,low,high,n,target);
        }
    }
    return false;
}
int main(){
     // no of vehicle
    int n;
    cout<<" no of book codes ";
    cin>>n;
    vector<int>bookCode(n);
    // enter book code in sorted order 
    for(int i=0;i<n;i++){
        cin>>bookCode[i];
    }
    int target;
    cin>>target;
    if(!binary_search(bookCode,0,n-1,n,target)){
        cout<<" element is not found ";
    }
    return 0;
}