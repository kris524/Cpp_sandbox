#include<iostream>

using namespace std;

void weird_algorithm(long long n){

    if (n==1){
        return;

    }

    if(n%2==0){
        n=n/2;
        cout << n << " ";
    }
    else {
        n = 3*n + 1;
        cout << n << " ";
    }
    weird_algorithm(n);
    
}


int main(){
    long long x;
    cin >> x;
    cout << x << " ";
    weird_algorithm(x);
}