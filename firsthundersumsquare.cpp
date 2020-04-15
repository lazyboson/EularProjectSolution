#include <iostream>
#include <vector>
#include <ctype.h>
#include <stdio.h>
using namespace std;

int main(){
    long sum_square = 0;
    long sum_number_square = 0;
    for(int i=1;i<=100; i++){
        sum_number_square += (long)(i*i);
        sum_square += (long)i;
    }
    long ans = sum_square*sum_square - sum_number_square;
    cout << ans <<endl;
}
