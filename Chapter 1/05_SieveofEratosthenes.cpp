//[image5.png]
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    // Create an array of size N+1, all initialized to true (assume all are prime)
    vector<bool> isPrime(n + 1, true);

    // 0 and 1 are mathematically not prime, so cross them out immediately
    isPrime[0] = false;
    isPrime[1] = false;

    // Start crossing out multiples of each prime number
    for (int i = 2; i * i <= n; i++) {
        if(isPrime[i]){
            for(int j = i * i; j <= n; j +=i){
                isPrime[j] = false;
            }
        }
    }

    for (int i=2; i <= n; i++){
        if(isPrime[i]){
            cout << i << " ";
        }
    }

    return 0;
}