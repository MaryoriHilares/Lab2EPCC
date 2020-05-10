#include <iostream>
#include <string.h>
using namespace std;
void concatenarCad(char a[],char b[])
{   int c=0; 
    c=strlen(b);
	for(int i=0;i < strlen(a) ; ++i) 
	        b[c+i]=a[i];
}

int main(){
	char a[]=" mundo XD";
	char b[20]="Hola";
	concatenarCad(a,b);
	cout<<b;
	return 0;
}
