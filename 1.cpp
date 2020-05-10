#include <iostream>
using namespace std;
int sumaElementos(int A[], int tam){
 int suma;
 for(int i=0;i<tam;i++)
        suma+=A[i];
  return suma;	
}

int sumaEl(int A[], int tam){
 int suma=0;
 if(tam==0)
   	return 0;
 else {
 	suma+=A[tam-1]+sumaEl(A,tam-1);
 }
 return suma;
 
}

int main()
{   int A[]={7,3,1,6,7,1,7,6,5};
    int tam=9;
    cout<<sumaElementos(A,tam)<<endl;
	cout<<sumaEl(A,tam)<<endl;
	return 0;
} 
