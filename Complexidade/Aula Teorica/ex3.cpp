//Qual a complexidade do algoritmo abaixo?
int maior(int v[], int n)
{
int m = v[0]; //1
for(int i = 1; i < n; i++)//n
if(v[i] >= m)//n -1
m = v[i]; // melhor caso == 0; pior caso == n - 1; caso médio == (n-1)/2
return m; //1
}
//melhor caso == 2n + 1
//pior caso == 3n
//caso médio == (5n/2) + 1