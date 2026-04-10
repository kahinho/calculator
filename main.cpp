#include <iostream>
using namespace std;

int main() {
    int rectangle_length, rectangle_width;
    int rectangle_area, rectangle_perimeter;
    int square_length, square_area, square_perimeter;
    int circle_radius, circle_area, circle_circumference;

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

    cout << "Please provide the length of the square" << endl;
    cin >> square_length;
    cout << "The length of the square is " << square_length<<endl;
    square_area = square_length * square_length;
    cout << "The area of the square is " << square_area <<endl;
    square_perimeter = square_length*4;
    cout << "The perimeter of the square is " << square_perimeter <<endl;
    cout << "The perimeter of the square is: " << square_perimeter << endl;

    cout << "Please provide the radius of the circle" << endl;
    cin >> circle_radius;
    circle_area = 3.14159 * circle_radius * circle_radius;
    cout << "The area of the circle is: " << circle_area << endl;
    circle_circumference = 2 * 3.14159 * circle_radius;
    cout << "The circumference of the circle is: " << circle_circumference << endl;

    return 0;
}
