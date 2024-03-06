#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x;
    cin>>x;
    int count=0;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(v[i]+v[j]+v[k]==x){
                count++;
            }
        }
    }
   }
   cout<<"count:  "<<count;
}