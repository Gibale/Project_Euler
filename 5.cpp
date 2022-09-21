#include <iostream>
int main(){
int smallestMultiple = 40;
int i = 10;

while (i<20){
    if (smallestMultiple%i == 0){
        i++;
        continue;
    }
    else{
        i = 10;
        smallestMultiple += 20;
    }
    }
std::cout << smallestMultiple;
}