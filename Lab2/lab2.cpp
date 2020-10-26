#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cout << "Please enter x and y: ";
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    if (x > 0 && y > 0)
        cout << "I quadrant"
             << "\n";
    else if (x < 0 && y > 0)
        cout << "II quadrant"
             << "\n";
    else if (x < 0 && y < 0)
        cout << "III quadrant"
             << "\n";
    else if (x > 0 && y < 0)
        cout << "IV quadrant"
             << "\n";
    else if (x == 0, y == 0)
        cout << "It's origin"
             << "\n";
    return (0);
}