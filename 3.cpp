#include <iostream>
using namespace std;
void ordenar(int A[], int tam){
 int n;
 for(int i=0;i<tam;i++){
    for(int j=0;j<tam;j++)
       if (A[i]<A[j]){
           n=A[i];       	   
			A[i]=A[j];
			A[j]=n;
	   }
		}	
}

int main()
{   int A[]={0,2,1,4,3,1,7,8,9};
    int tam=9;
    int suma=0;
    ordenar(A,tam);
    for(int i=0;i<tam;i++)
    cout<<A[i]<<" ";
	return 0;
}
