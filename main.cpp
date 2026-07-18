#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_set>

using namespace std;

class Rectangle{
    private :
        int width{0}, height{0};
    
    public :
        Rectangle(int w, int h) : width{w}, height{h} {}

        int getW() const{ return width;}
        int getH() const{ return height;}

        int area (const Rectangle&) const{
            return width*height;
        }

        int perimeter(const Rectangle&) const{
            return 2*(width+height);
        }

};

int main() {
    int x{0}, y{0};
    cin>> x >> y;
    Rectangle r{x, y};
    cout<< "area: " << r.area(r)<< endl;
    cout<< "perimeter: " << r.perimeter(r)<< endl;

}
