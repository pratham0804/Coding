#include<bits/stdc++.h>
using namespace std;
bool kthbit(int n,int k){
    int x = 1<<(k);

    return  n & (x); 
}
int main(){
    int n,k;
    cin>>n>>k;

    cout<<kthbit(n,k);

    return 0;
}