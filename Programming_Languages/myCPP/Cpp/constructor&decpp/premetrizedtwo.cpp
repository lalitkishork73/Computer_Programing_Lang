#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x,y;  
public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "the point is (" << x << "," << y << ")" << endl;
    }
};

int main()
{

    point p(1, 1);
    p.displayPoint();
    point q(4, 5);
    q.displayPoint();

    double x = 10.25, result;
	result = sqrt(x);
	cout << "Square root of " << x << " is " << result << endl;

    result = cos(x);
    cout << "cos(x) = " << result << endl;
  
    double xDegrees = 25;
    
    // converting degrees to radians
    x = xDegrees*3.14159/180;
    result = cos(x);
    
    cout << "cos(x) = " << result << endl;


    return 0;
}