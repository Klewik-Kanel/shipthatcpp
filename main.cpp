#include <iostream>
#include <string>
using namespace std;

int square(int n){
    long long result = n*n;
    return result;
}
int main() {
    int n;
    cin >> n;
    cout << square(n) << endl;
    return 0;
}
