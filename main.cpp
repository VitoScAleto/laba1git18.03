#include <iostream>

using namespace std;

void circle();
int CheckAngle(float alfa);
int CheckRadius(float R);

int main() {

    cout << "See the figure\n";
    cout << "1 - rectangle\n";
    cout << "2 - circle\n";
    cout << "Enter number\n";

    char shape;

    cin >> shape;

    switch (shape) {

    case('1'):
        // rectangle();
        cout << "dsg";
        break;

    case ('2'):
        circle();
        break;
    default:
        cout << "Ошибка";
        break;


    }


    return 0;
}

void circle(void)
{
    const float PI = 3.14;
    float R = 0;
    float circumference = 0;
    float areaOfaCircle = 0;
    float areaOfaCircleSector = 0;
    float alfa = 0;
    cout << "Enter the radius of the circle" << endl;
    cin >> R;
    if (CheckRadius(R) == false)
    {
        return;
    }
    cout << "Enter the sector angle in degrees" << endl;
    cin >> alfa;
    if (CheckAngle(alfa) == false)
    {
        return;
    }
    circumference = 2 * PI * R;
    areaOfaCircle = PI * R * R;
    areaOfaCircleSector = (PI * R * R * alfa) / 360;
    cout << "Circumference = " << circumference << endl;
    cout << "Area of a circle = " << areaOfaCircle << endl;
    cout << "Area of a circle sector = " << areaOfaCircleSector << endl;
}

int CheckRadius(float R)
{
    auto a = R;
    if (a < 0)
    {
        cout << "Radius cannot be negative";
        return false;

    }

}

int CheckAngle(float alfa)
{
    auto b = alfa;
    if (b < 0)
    {
        cout << "The angle cannot be negative";
        return false;
    }
}