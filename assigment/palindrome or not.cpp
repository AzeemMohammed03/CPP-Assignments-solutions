#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(5);
    for(int& ele:v){
        cin>>ele;
    }
    int n=v.size();
    bool flag=0;
    for(int i=0;i<n;i++){
       if(v[i]!=v[n-i-1]){
        cout<<"array is not a palindrome";
        flag=1;
        break;
       }
    }
    if(flag==0){
        cout<<"array is palindrome";
    }
}