#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter sentence: ";
    getline(cin, s);
    string word = "";
    string longest = "";
    for(int i=0;i<=s.length();i++){
        if(s[i]!=' ' && i!= s.length()){
            if(s[i]!=',' && s[i]!='!'){
                word=word+s[i];
            }
        }
        else{
            if(word.length()>longest.length()){
                longest=word;
            }
            word = "";
        }
    }
    cout<<"longest word : " <<longest<<endl;
    cout<<"length : " <<longest.length();
    return 0;
}