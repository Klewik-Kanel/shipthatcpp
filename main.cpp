#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_set>

using namespace std;

class Shape{
    public :
        virtual double area() const = 0;
        virtual ~Shape() = default;
};

class Square: public Shape{
    double side;

    public:
        Square(double s) : side{s}{}
        double area() const{
            return side * side ;
        }
};

class Circle: public Shape{
    double r;
    public:
        Circle(double r_) : r{r_} {}
        double area() const{
            return 3.14159 * r * r;
        }
};

int main() {
    double s{0}, r{0};
    cin>>s>>r;
    Shape* ptr1,* ptr2;
    ptr1 = new Square(s);
    ptr2 = new Circle(r);
    cout<< fixed << setprecision(2);
    cout<< ptr1->area()<<endl;
    delete ptr1;
    cout<< ptr2->area()<<endl;
    delete ptr2;


}
