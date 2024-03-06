#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(5);
    for(int ele:v){
        cin>>ele;
        v.push_back(ele);
    }
    int x;
    cin>>x;
    int count=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]>x){
            count=count+1;
        }
    }
    cout<<count;
}