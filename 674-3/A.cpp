#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
    
    int T;
    cin >> T;
    while(T--){
        int n,x;
        cin >> n >> x;
        if(n == 1 || n == 2){
            cout << 1 << endl;
            continue;
        }
        n-=2;
        cout << ((n-1)/x) + 2 << endl;
    } 

    return 0;
}


