#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<string> seen;
    string s;
    while(cin >> s) seen.insert(s);
    cout<< seen.size();
}
