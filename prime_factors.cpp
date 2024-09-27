#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n <= 1) return false;
    if(n == 2 || n == 3) return true;

    if(n%2 == 0 || n%3 == 0) return false;

   int x = sqrt(n);
    for(int i=5 ; i<=x; i+=6){
        if(n%i == 0 || n%(i+2) == 0) return false;
    }

    return true;
}
int main(){
    int n;
    cin>>n;
   
   
    for(int i=2 ; i*i<=n ; i++){
        if(isPrime(i)){
            

            while(n%i == 0){
                cout<<i<<" ";
                n/=i;
            }
            
        }
    }
    // this step is when n is still greater than 1 ...(for ex. n = 88 , this last step prints 11).
    if (n > 1) {
        cout << n;
    }
    return 0;
}