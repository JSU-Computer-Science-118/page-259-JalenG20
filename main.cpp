//  Jalen Gaddy        J00915158
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, discriminant, root1, root2{};
    cout << "Enter a value of a:";
    cin >> a;
    cout << endl;


    cout << "Enter a value of b:";
    cin >> b;
    cout << endl;

    cout << "Enter a value of c:";
    cin >> c;
    cout << endl;

    discriminant = (pow(b, 2.0)) - 4 * a * c;
    root1 = (-b + sqrt(pow(b, 2.0) - (4 * a * c))) / (2 * a);

    if (discriminant == 0)
        cout << "The single root is" << root1 << endl;
    if (discriminant > 0)
        cout << "Two real roots" << endl;
    if (discriminant > 0)
        cout << "- First root" << root1 << endl;
    if (discriminant > 0)
        cout << "- Second root " << root2 << endl;

    if (discriminant < 0)
        cout << "Complex roots" << endl;

    return 0;
}
