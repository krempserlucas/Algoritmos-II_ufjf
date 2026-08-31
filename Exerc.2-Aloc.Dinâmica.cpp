#include <bits/stdc++.h>
using namespace std;
float prodEscalar(int n, float x[], float y[]){
    float sum=0;
    for(int i=0; i<n; i++){
        sum+=(*(x+i))*(*(y+i));
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    float *x = new float[n], *y =new float[n];
    for(int i=0; i<n; i++) cin>>*(x+i);
    for(int i=0; i<n; i++) cin>>*(y+i);
    float pe= prodEscalar(n, x, y);
    cout<< pe << endl;

    return 0;
}