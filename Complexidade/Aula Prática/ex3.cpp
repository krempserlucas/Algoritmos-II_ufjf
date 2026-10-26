#include <bits/stdc++.h>
using namespace std;
void imprimeSemRepeticao(int v[], int n){
    for(int i=0; i<n; i++){//n+1
        int flag=0;//n

        for(int j=0; j<=i-1; j++)//(n+1)n/2
            if(v[j] == v[i]) //(n-1)n/2
                flag = 1;//(n-1)n/2

        if(flag==0) //n
            cout<<v[i]<< " ";//melhor:0 / pior:n
    }
    cout<< endl;//1
}
//O(n²)

int main(){
    int n; cin>>n;
    int v[n];
    for(int i=0; i<n; i++) cin>>v[i];
    imprimeSemRepeticao(v,n);
    return 0;
}