//[image2.png]
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int reversed = 0;
    while(N!=0){
        int rem=N%10;
        reversed = (reversed*10) + rem;
        N=N/10;
    }
    cout << reversed;

    return 0;
}