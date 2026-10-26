#include <bits/stdc++.h>
using namespace std;

void inverte(int v[], int n){
    int aux;//1
    for(int i=0; i < n/2; i++){ //n/2 + 1
        aux = v[i];//n/2
        v[i] = v[n-1-i];//n/2
        v[n-1-i] = aux;//n/2
    }
}

int main(){
    int n; cin>>n;
    int v[n];
    for(int i=0; i<n; i++)
         cin>>v[i];
    inverte(v,n);
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}