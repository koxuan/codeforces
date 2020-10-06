#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(){
    

    int T;
    cin >> T;
    while(T--){
        int n,m;
        cin >> n >> m;
        bool ans = false;
        for(int i = 0 ; i < n ; i++){
            int a,b,c,d;
            cin >> a >> b >> c >> d;
            if(b==c && m%2 == 0) ans = true;
            
        }
        cout << ( ans ? "YES" : "NO" ) << endl;
    }

    return 0;
}


