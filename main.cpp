#include <iostream>
#include <string>
using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int n{0}, m{0};
    cin>> n >> m;
    swap(n, m);
    cout<< n << " " << m <<endl;
    return 0;
}
