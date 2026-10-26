#include <bits/stdc++.h>
using namespace std;

int fibit(int n){
    int sum=1, ant=1, aux;//1
    cin>>n;//1
    for(int i=1; i<n-1; i++){//n-1
    aux = sum;//n-2
    sum += ant;//n-2
    ant = aux;//n-2
    }
    cout<<sum<<endl;//1
}//total: 4n -4 --> O(n)

int fibrec(int n)
{
if(n == 0 || n == 1)//
return n;
else
return fibrec(n-1) + fibrec(n-2);
}//O(2 a n) >> O(n)