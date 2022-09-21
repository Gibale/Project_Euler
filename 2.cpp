#include <iostream>
using namespace std;

int main(){

    int x = 1, y = 1, z;
    int resultado = 0;

    while (z <= 4000000) {
        z = x + y;
        x = y;
        y = z;

        if (z % 2 == 0)
            resultado += z;
    }

    cout << resultado;

    return 0;
}