#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    long long currTot = 0;
    unordered_set<long long> B;
    long long ans = 0;
    for(int i = 0 ; i < n ; i++){
        long long k;
        cin >> k;
        currTot+=k;
        if(B.find(currTot) != B.end() || currTot == 0){
            ans+=1;
            B.clear();
            
    
            currTot = k ;
            
            
        }
        B.insert(currTot);
        
        
    }
    cout << ans << endl;

    return 0;
}


