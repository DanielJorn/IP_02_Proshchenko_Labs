#include <iostream>
#include <math.h>
using namespace std;


float calcBisector(float a, float b,float sideAgainstBisector){
    float c = sideAgainstBisector;
    float result = sqrt(a * b * (a + b + c) * (a + b - c)) / (a + b);
    return result;
}

void validateTriangle(float a, float b,float c){
    if (a <= 0 || b <= 0 || c <= 0) {
        throw "Вибачте, але сторони трикутника повинні бути більшими від нуля";
    }
    if (a + b <= c || a + c <= b || c + b <= a){
        throw "Вибачте, але трикутник існує тоді і тільки тоді, коли сума будь-яких двох його сторін більше третьою боку";
    }
}

int main()
{
    float a;
    float b;
    float c;

    cout << "Введіть а: ";
    cin >> a;

    cout << "Введіть b: ";
    cin >> b;

    cout << "Введіть c: ";
    cin >> c;

    float bisectorA = calcBisector(c, b, a);
    float bisectorB = calcBisector(a, c, b);
    float bisectorC = calcBisector(a, b, c);

    cout << "Бісектриса проведена до a: " << bisectorA << "\n";
    cout << "Бісектриса проведена до b: " << bisectorB << "\n";
    cout << "Бісектриса проведена до c: " << bisectorC << "\n";
    
    float semiPerimeter = (a + b + c) / 2;
    float area = sqrt(semiPerimeter*(semiPerimeter-a)*(semiPerimeter-b)*(semiPerimeter-c));

    float R = (a * b * c) / (4 * area);
    cout << "Радіус описаного кола: " << R << "\n";

    float r = area / semiPerimeter;
    cout << "Радіус вписаного кола: " << r << "\n";

    return 0;
}
