#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int16_t age;
    getline(cin, name);
    cin>> age;
    cout<< "Hi, "<<name<<"!"<<" You are "<<age<<" years old."<<endl;
    return 0; 

}
