#include <iostream>
using namespace std;

int main(){

    int limite;

  int i, suma = 0, cuadrado = 0;
  
  for ( i = 1; i <= limite; i++ )
        {
    suma += i * i;
    cuadrado += i;
  }
  
  cuadrado *= cuadrado;
  
  cout << ("%d\n", cuadrado - suma);
  return 0;
}