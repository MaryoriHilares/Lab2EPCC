#include <iostream>
using namespace std;
int tamdeCadena(char cad[])
{   int a=0;
	while( cad[a] != '\0'){
	      a++;
}	return a;
}

int tamdeCadenaR(char cad[])
{
 int tam=0;
 if(cad[tam]=='\0')
   	return 0;
 else {
 	tam+=tamdeCadena(cad)+1;
 }
 return tam-1;
}
int main(){
	char palabra[]="dimeunapalabramasdificil";
	cout<<tamdeCadena(palabra)<<endl;
	cout<<tamdeCadenaR(palabra);
	return 0;
}
