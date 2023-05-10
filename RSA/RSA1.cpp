#include <iostream>
#include <bits/stdc++.h>
int main() {
    int p,q,e,m;
    cin>>p>>q>>e>>m;
    int n=p*q;
    int f=(p-1)*(q-1);
    int d = (1+f)/e ;
    int C = pow(m,e) % n ;
    int M = C^d % n;
    cout<<"M = "<<M<<", C = "<<C<<endl;
}