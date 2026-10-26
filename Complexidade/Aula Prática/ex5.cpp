#include <bits/stdc++.h>
using namespace std;
void kBuscas(int v1[], int v2[], int n, int k){
for(int i=0; i< k; i++){//melhor: 0 // pior: k+1
    bool flag = false;//k
    for(int j=0; j< n; j++){//(n+1)k
        if(v1[j]==v2[i]) //nk
           flag = true; //nl
    }
    if(flag == true) //k
        cout<<v2[i]<<" encontrado"<<endl;//0
    else//k
        cout<<v2[i]<<" nao-encontrado"<<endl;//k
}
}//O(n*k)


int main(){
    int n, k;
    cin>>n>>k;
    int v1[n], v2[k];
    for(int i=0; i<n; i++) cin>>v1[i];
    for(int i=0; i<k; i++) cin>>v2[i];
    kBuscas(v1,v2,n,k);
    return 0;
}