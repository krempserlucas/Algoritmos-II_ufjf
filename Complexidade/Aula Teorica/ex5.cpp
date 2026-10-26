//Qual a complexidade do algoritmo abaixo?
bool confere(int vetA[], int n)
{
for(int i = 0; i < n; i++)// melhor caso == 1; pior caso == n+1 
for(int j = i+1; j < n; j++)//  pior caso == ((n+1) n)/2
if(vetA[i] == vetA[j])// pior caso == ((n-1) n )/2
return true;
return false;//1
}
//melhor caso == 
// pior caso == 2