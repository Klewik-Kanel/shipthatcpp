#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_set>

using namespace std;

template <typename T>
auto sumPair(T a, T b){
    return a+b;
}

int main() {
    int a{0}, b{0};
    double p{0}, q{0};
    cin>>a>>b>>p>>q;

    cout<<sumPair(a,b)<<endl;
    cout<<std::fixed << std::setprecision(2)<<sumPair(p,q)<<endl;
}
