#include <iostream>
#include <vector>
#include <ctype.h>
#include <stdio.h>
using namespace std;

int main(){
    int start = 40;
    int ans = 0;
    while(1){
        int counter = 0;
        for(int i = 2; i<21;i++){
            if(start %2 != 0)
                break;
            else(start%i == 0)
            counter++;
        }
        if(counter == 19){
            break;
        }
        start++;

    }
    cin >> start << endl;
    return 0;
}