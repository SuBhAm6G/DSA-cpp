//[image4.png]
#include <bits/stdc++.h>
using namespace std;

long long GCD(long long A, long long B){
    while(B!=0){
        long long rem = A % B;
        A = B;
        B = rem;
    }
    return A;
}

long long LCM(long long A, long long B){
    long long x = A / GCD(A,B);
    return x * B;
}

int main() {
    long long A, B;
    cin >> A >> B;
    cout << "GCD = " << GCD(A,B) << "\n";
    cout << "LCM = " << LCM(A,B);

    return 0;
}