#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> num;
    int x{0};
    while(cin>>x){
        num.push_back(x);
    }

    int max = *max_element(num.begin(), num.end());

}
