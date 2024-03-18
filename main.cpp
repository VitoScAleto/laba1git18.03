
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

void circle();
int CheckAngle(float alfa);// function1
int CheckRadius(float R);

void rectangle();
int fPerimeter(int width, int height);
int fSquare(int width, int height);
float fLenDioganal(int width, int height);

int main(){

    cout << "See the figure\n";
    cout << "1 - rectangle\n";
    cout << "2 - circle\n";
    cout << "Enter number: ";

    char shape;

    cin >> shape;

    switch (shape) {

    case('1'):
        rectangle();
        break;

    case ('2'):
        circle();
        break;
    default:
        cout << "Error";
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
        return 0;

    }else{
        return 1;
    }

}

int CheckAngle(float alfa)
{
    auto b = alfa;
    if (b < 0)
    {
        cout << "The angle cannot be negative";
        return 0;
    }else{
        return 1;
    }
}



void rectangle(){

    int width, height;
    char isCheckChar;

    cout << "Enter width - ";
    if(scanf("%d%c", &width, &isCheckChar) == 2 && (isCheckChar == ' ' || isCheckChar == '\n')&& width > 0){
        cout << "";
        
    }else{
        cout << "Error";
        return;
    }    

    cout << "Enter height - ";
    if(scanf("%d%c", &height, &isCheckChar) == 2 && (isCheckChar == ' ' || isCheckChar == '\n')&& height > 0){
        cout << "";
        
    }else{
        cout << "Error";
        return;
    }   

    cout << "\n";

    int perimeter = fPerimeter(width, height);
    int sqare = fSquare(width, height);
    float lenDioganal =fLenDioganal(width, height);

    cout << "perimetr = " << perimeter << "\n" << "sqare =  " << sqare << "\n" << "len dioganale = " << lenDioganal;

}


int fPerimeter(int width, int height){

    return 2 * width + 2 * height;
}

int fSquare(int width, int height){

    return width * height;
}

float fLenDioganal(int width, int height){

    return sqrt(pow(width, 2) + pow(height, 2));
}
