#include <iostream>
using namespace std;

int main() {
    
    int a = 2;
    int primo = 0;
    
    bool primo1=true;
    
    for(int i = 3; a < 10002; i++){
        for(int j = 2; j < i; j++){
            
            primo1 = true;
            if(i % j == 0){
                
                primo1 = false;
                
                break;
            }
            
            if(a == 10001){
                primo = i;
            }
        }
        if(primo1 == true){
            a += 1;
        }
    }
    cout << "El número primo 10 001 es: " << primo;

    return 0;
}