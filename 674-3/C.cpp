#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
    
    int T;
    cin >> T;
    while(T--){
        long long init = 1; 
        long long count = 0;
        long long n;
        cin >> n;
        if(n==1){
            cout << 0 << endl;
            continue;
        }
        while(1==1){
            if(init + init * count >= n) break;
            init++;
            count++;
        }
        if(init - 1 + (init - 1) * count >= n || init + init * (count-1) >= n){
            cout << 2*count-1 << endl;
        }
        else
            cout << 2*count << endl;
    }

    return 0;
}


