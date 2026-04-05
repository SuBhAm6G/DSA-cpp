//[image3.png]
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;
    if(N<0){
        cout << "false";
        return 0;
    }
    long long c = N;
    long long reversed = 0;
    while(c!=0){
        short rem = c % 10;
        reversed = (reversed * 10) + rem;
        c = c / 10;
    }
    if(N==reversed) cout << "true";
    else cout << "false";

    return 0;
}