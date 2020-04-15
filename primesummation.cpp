#include <iostream>
#include <vector>
#include <ctype.h>
#include <stdio.h>
#include <cmath>

using namespace std;
const long long bigNumber = 2e6;
long long sum = 0;

int main(){
    vector<pair<long long,bool>> prime;
    for(long i= 0; i<= bigNumber; i++)
        prime.emplace_back(make_pair(i,true));

    for(long long i=2; i < sqrt(bigNumber); i++){
        if(prime[i].second == true){
            for(long long j = i*i; j < bigNumber; j+=i){
                prime[j].second = false;
            }
        }
    }

    for(long long i=0; i<bigNumber; i++){
        if(prime[i].second == true){
            sum+=i;
        }
    }
    cout << sum-1 <<endl;
    return 0;
}
