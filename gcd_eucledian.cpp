//wap to find GCD of two large integer using eucledian algorithm

#include<bits/stdc++.h>

using namespace std;

long long gcd(long long a , long long b){
    if(a==0)
        return b;

    else
        return gcd(b%a,a);
}

int main(){
    long long a,b;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}