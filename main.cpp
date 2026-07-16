#include <iostream>
#include <string>
using namespace std;

int main() {
    int n{0}, total{0};

    cin >> n;
    for(int i = 1; i<=n; i++){
        total += i;
    }
    cout<< total<<endl;

    return 0;
}
