#include <iostream>
#include <string>
using namespace std;

int main() {
    int n{0};
    cin >> n;
    if( n%15 == 0 ){
        cout<< "FizzBuzz" << endl;
    } else if(n%3 == 0){
        cout<< "Fizz"<<endl;
    } else if(n%5 == 0){
        cout<<"Buzz"<<endl;
    } else{
        cout<< n <<endl;
    }

    return 0;
}
