#include <iostream>
#include <vector>
#include <ctype.h>
#include <stdio.h>
using namespace std;

//Fibonacci Series using Dynamic Programming
#include<stdio.h>

long fib(long n)
{
    /* Declare an array to store Fibonacci numbers. */
    long f[n+2];   // 1 extra to handle case, n = 0
    long i;

    /* 0th and 1st number of the series are 0 and 1*/
    f[0] = 0;
    f[1] = 1;

    for (long i = 2; i <= n; i++)
    {
        /* Add the previous 2 numbers in the series
           and store it */
        f[i] = f[i-1] + f[i-2];
    }

    return f[n];
}


int main() {
     ios_base::sync_with_stdio(false);
     long ans = 0;
     long cnt = 1;
     while(1){
         long data = fib(cnt);
         if(data < 4000000){
             if(data%2 == 0){
                 ans+= data;
             }
         }
         else{
             break;
         }
         cnt++;
     }
    cout << ans <<endl;
    return 0;
}


