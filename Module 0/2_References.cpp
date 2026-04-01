#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=10,y=20;
    cout << x << " " << y << "\n";
    swap(x,y);//no need for * or &
    cout << x << " " << y;
    return 0;
}
