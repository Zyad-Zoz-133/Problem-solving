#include <iostream>
using namespace std;


uint32_t reverse(uint32_t n){
    uint32_t res = 0;

    for (int i = 0; i<32 ; i ++){
        res <<=1;
        res|= (n&1);
        n>>=1;
    }
    return res;
}

int main(){
    uint32_t n = 43261596;

   cout << reverse(n);
}