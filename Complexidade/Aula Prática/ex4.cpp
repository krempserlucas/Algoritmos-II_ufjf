#include <bits/stdc++.h>
using namespace std;
void imprimeSemRepeticao(int v[], int n){
    int vaux[n] = {};//n
    for(int i=0; i<n; i++){// n+1
        if(vaux[v[i]]==false) { //n
            cout<<v[i]<< " "; //melhor: 1 / pior: n
            vaux[v[i]] = true;//melhor: 1 / pior: n
        }
    }
    cout<< endl;//1
}
//O(n)

int main(){
    int n; cin>>n;
    int v[n];
    for(int i=0; i<n; i++) cin>>v[i];
    imprimeSemRepeticao(v,n);
    return 0;
}