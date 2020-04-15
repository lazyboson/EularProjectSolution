//#include <iostream>
//#include <vector>
//#include <ctype.h>
//#include <stdio.h>
//using namespace std;
//
////Fibonacci Series using Dynamic Programming
//#include<stdio.h>
//
//long fib(long n)
//{
//    /* Declare an array to store Fibonacci numbers. */
//    long f[n+2];   // 1 extra to handle case, n = 0
//    long i;
//
//    /* 0th and 1st number of the series are 0 and 1*/
//    f[0] = 0;
//    f[1] = 1;
//
//    for (long i = 2; i <= n; i++)
//    {
//        /* Add the previous 2 numbers in the series
//           and store it */
//        f[i] = f[i-1] + f[i-2];
//    }
//
//    return f[n];
//}
//
//
//int main() {
//     ios_base::sync_with_stdio(false);
//     long ans = 0;
//     long cnt = 1;
//     while(1){
//         long data = fib(cnt);
//         if(data < 4000000){
//             if(data%2 == 0){
//                 ans+= data;
//             }
//         }
//         else{
//             break;
//         }
//         cnt++;
//     }
//    cout << ans <<endl;
//    return 0;
//}

#include <iostream>
#include <vector>
#include <ctype.h>
#include <stdio.h>
using namespace std;
const long long bigNumber = 100;
int main(){
   vector<pair<long long,bool>> prime;
   for(long i= 1; i<= bigNumber; i++)
       prime.emplace_back(make_pair(i,true));

   for(long long i=2; i<sqrt(bigNumber); i++){
       if(prime[i].second == true){
           for(j=2; j+i< sqrt(n); j++){
               prime[i+j].second = false;
           }
       }
   }

   for(int i=0; i<bigNumber; i++){
       if(prime[i].second == true)
           cout << prime[i].first <<"\n";
   }

}
