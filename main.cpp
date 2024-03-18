#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

void rectangle();
int fPerimeter(int width, int height);
int fSquare(int width, int height);
float fLenDioganal(int width, int height);

int main(){

    cout << "See the figure\n";
    cout << "1 - rectangle\n";
    cout << "2 - circle\n";
    cout << "Enter: ";

    char shape;

    cin >> shape;

    switch(shape){

        case('1'):
            rectangle();
            break;

        default:
            cout << "Error";
            break;


    }

    return 0;
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
