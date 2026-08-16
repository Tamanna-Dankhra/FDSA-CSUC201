#include<bits/stdc++.h>
using namespace std;
bool binarySearch(vector<int>&bookCode,int n,int target){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(bookCode[mid]==target){
            cout<<"podsition is "<<mid+1;
            return true;
        }
        else if(bookCode[mid]>target){
            high=mid-1;
        }
        else if(bookCode[mid]<target){
            low=mid+1;
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
    cout<<"target is : ";
    cin>>target;
    // int x=binarySearch ....
    // if(x==-1){
    //     cout<<" not found ";
    // }
    // else if(x!=-1){
    //     cout<<" position is "<<x;
    // }
    if(!binarySearch(bookCode,n,target)){
        cout<<" not found ";
    }
    return 0;
}
