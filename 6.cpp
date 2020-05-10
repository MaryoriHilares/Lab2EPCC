#include <iostream>
#include <string.h>
using namespace std;
void copiarCad(char a[],char b[])
{   int c=0; 
    c=strlen(b);
	for(int i=0;i < strlen(a) ; ++i) 
	        b[i]=a[i];
}
int main(){
	char a[]=" mundo XD";
	char b[]="Hola";
	copiarCad(a,b);
	cout<<b;
	return 0;
}
