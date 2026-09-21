/*

*/
#include <bits/stdc++.h>
using namespace std;

bool ehPalindromo(char a[], int n){  
if(n<=1) return true;
if(a[0]==a[n-1])
    return ehPalindromo(a+1 , n-2);
else 
    return false;
}

int main(){
    char a[100];  
    cin.getline(a,100); 
    int n=strlen(a);
    bool resp = ehPalindromo(a, n);
    if(resp == true ) cout<< "palindromo\n";
    else cout<< " não-palindromo\n";
    return 0;
}