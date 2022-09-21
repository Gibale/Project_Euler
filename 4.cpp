#include <iostream>
using namespace std;
bool esPal(int num);
int numRev(int num);

int main()
{
    int producto = 0;
    int mayorPal = 0;

    for(int i = 100; i < 1000; i++){
        for(int j = 100; j < 1000; j++){

            producto = i * j;

            if(esPal(producto) && mayorPal==0){
                    mayorPal = producto;
                }

            else if(esPal(producto) && mayorPal!=0){

                if(producto > mayorPal){
                    mayorPal = producto;
                    }
                }
            }
        }
        cout << mayorPal;
        return 0;
}


bool esPal(int num){

    if(numeroRev(num) == num){
        return true;
    }
    else{
        return false;
    }
}

int numeroRev(int n){
    int revNum = 0;
    int residuo = 0;
    while(n!=0){
        residuo = n%10;
        revNum = revNum*10 + residuo;
        n /= 10;
    }
    return revNum;
}
