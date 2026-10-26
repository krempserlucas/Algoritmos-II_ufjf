//Qual a complexidade do algoritmo abaixo?
bool busca(int vetA[], int vetB[], int n,int x)
{
for(int i = 0; i < n; i++)// melhor caso == 1; pior caso == n+1
if(vetA[i] == x)//pior caso ==n
return true;//0
for(int i = 0; i < n; i++)//melhor caso == 1; pior caso == n + 1
if(vetB[i] == x)//pior caso ==n
return true;//0
return false;//1
}
//melhor caso == 3;
//pior caso == 4n + 3