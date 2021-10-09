#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if(b > a) swap(a, b);
    
    while(a % b != 0) {
        a %= b;
        swap(a, b);
    }
    
    return b;
}

int main() {
    int x, y;
    
    cout << "Enter x -> ";  
    cin >> x;
    cout << "Enter y -> ";
    cin >> y;
    
    cout << "GCD(x, y) = " << gcd(x, y) << endl;
    
    return 0;
}