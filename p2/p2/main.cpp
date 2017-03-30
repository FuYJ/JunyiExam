#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(){
    long long int input;
    int ans = 0;
    
    cin >> input;
    
    for(int i = 1; i <= input; i++){
        if(!(i % 3) && !(i % 5))
            ans++;
        else if(!(i % 3) || !(i % 5))
            continue;
        else
            ans++;
    }
    
    cout << "output: " << ans << endl;
}
