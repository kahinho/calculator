#include <iostream>
using namespace std;

int main() {
    int rectangle_length, rectangle_width;
    int rectangle_area, rectangle_perimeter;
    cout << "Please provide the length of the rectangle" << endl;
    cin >> rectangle_length;
    cout << "The length of the rectangle is " << rectangle_length<<endl;
    cout << "Please provide the width of the rectangle" << endl;
    cin >> rectangle_width;
    cout << "The width of the rectangle is " << rectangle_width<<endl;
    rectangle_area = rectangle_length * rectangle_width;
    cout << "The area of the rectangle is " << rectangle_area<<endl;
    rectangle_perimeter = (rectangle_length + rectangle_width)*2;
    cout << "The perimeter of the rectangle is " << rectangle_perimeter<<endl;
    return 0;
}
