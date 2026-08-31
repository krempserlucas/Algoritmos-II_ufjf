#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum=0;
    cin>>n;
    int *vet = new int[n];
    for(int i=0; i<n; i++){
        cin>> *(vet+i);
        sum+=*(vet+i);
    }
    cout<< (float)sum/n <<endl;
    delete [] vet;
    return 0;
}