#include <iostream>
using namespace std;
void invertir(int A[], int tam){
 int n;
 for(int i=0;i<tam/2+1;i++){
        n=A[i];
		A[i]=A[tam-i-1];
		A[tam-i-1]=n;
		}	
}
void recInvertir(int A[],int tam,int a)
{ if(tam>a){
   int b=A[tam-1];
   A[tam-1]=A[a];
   A[a]=b;
   recInvertir(A,--tam,++a);}
 }

int main()
{   int A[]={0,2,3,4,5,6,7,8,9,10};
    int tam=10;
    invertir(A,tam);
    recInvertir(A,tam,0);
    for(int i=0;i<tam;i++)
      cout<<A[i]<<" ";
	return 0;
} 
