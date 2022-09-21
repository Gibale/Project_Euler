#include <iostream>
using namespace std;
 
int main()
{
    long long int i, resultado;
    long long int maximo = 600851475143;
    int numero;
 
    for( i = 2; i < maximo; i++)
    {
       if(maximo % i == 0)
       {
           maximo /= i;
           i = 2;
        }
    }
 
    cout << "El maximo factor primo de 600851475143 es: " << maximo ;

    return 0;

}