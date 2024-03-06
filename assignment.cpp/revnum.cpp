#include<bits/stdc++.h>
using namespace std;
void rev(int r,int n){
    if(n==0){
        cout<<r;
        return;
    }
    // r=r*10;
    // r+=(n%10);
    // n/=10;
    // return rev(r+=(n%10),n/10);
    return rev(r*10 +(n%10),n/10);
}
int main(){
    rev(0,123);
}