#include <iostream>
#include <iomanip>

using namespace std;

double triangleArea(double base, double height){
    return base * height / 2;
}

double circleArea(double radius){
    return 3.14159 * radius * radius;
}

double trapeziumArea(double lowerBase, double higherBase, double height){
    return ((lowerBase + higherBase) / 2) * height;
}

double squareArea(double length){
    return length * length;
}

double rectangleArea(double firstSize, double secondSize){
    return firstSize * secondSize;
}

int main(){
    cout << fixed << setprecision(3);
    double a, b, c;

    cin >> a >> b >> c;
    cout << "TRIANGULO: " << triangleArea(a, c) << endl;
    cout << "CIRCULO: " << circleArea(c) << endl;
    cout << "TRAPEZIO: " << trapeziumArea(a, b, c) << endl;
    cout << "QUADRADO: " << squareArea(b) << endl;
    cout << "RETANGULO: " << rectangleArea(a, b) << endl;

    return 0;
}