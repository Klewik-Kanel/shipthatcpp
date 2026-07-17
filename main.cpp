#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_set>

using namespace std;

int main() {
    vector<int> nums;
    int x{0};
    while(cin >> x) nums.push_back(x);
    long long total = accumulate(nums.begin(), nums.end(),1LL,[](long long acc, int x){
        return x%2 == 0 ? acc + 1LL*x*x : acc;
    });
    cout<< total;
    return 0;
}
