#include <iostream>
#include<cmath>
#define AND &&
#define NOT !
using namespace std;
class Triangle
{
private:
    float a;
    float b;
    float c;

public:
    Triangle();
    Triangle(float s1, float s2, float s3);
    bool dataValid();
    void displaySide();
    float getArea();
};

Triangle::Triangle()
{
    cout << "Enter three side  -";
    cin >> a >> b >> c;
}
Triangle::Triangle(float s1, float s2, float s3)
{
    a = s1;
    b = s2;
    c = s3;
}
bool Triangle::dataValid()
{
    if (a + b > c AND b + c > a AND c + a > b)
    {
        return (true);
    }
    else
    {
        return (false);
    }
}
void Triangle::displaySide()
{
    cout << "Sides of the triangle are " << a << " " << b << " " << c << endl;
    cin.get();
}
float Triangle::getArea()
{
    float s = (a + b + c) / 2;
    float area = s * (s - a) * (s - b) * (s - c);
    area = sqrt(area);
    return (area);
}
int main()
{
    float area;
    Triangle T(12, 16, 18);
    if (NOT T.dataValid())
    {
        cout << "Invalid data" << endl;
        exit(0);
    }
    area = T.getArea();
    T.displaySide();
    cout << "Area of the triangle is " << area << endl;
}