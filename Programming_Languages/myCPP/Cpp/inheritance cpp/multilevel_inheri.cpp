#include <iostream>
using namespace std;

class student
{
protected:
    int roll_num;

public:
    void set_roll_num(int);
    void get_roll_num(void);
};
void student::set_roll_num(int x)
{
    roll_num = x;
}
void student::get_roll_num()
{
    cout << "the roll num is :" << roll_num << endl;
}
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam::set_marks(float m1, float p1)
{
    maths = m1;
    physics = p1;
}
void exam::get_marks(void)
{
    cout << "the marks obtained in maths are " << maths << endl;
    cout << "the marks obtained in phyisics are " << physics << endl;
}

class result : public exam
{
    float percentage;

 public:
    void display()
    {
        get_roll_num();
        get_marks();
        cout << "your percentage is  " << (maths + physics) / 2 <<"%"<< endl;
    }
};

    int main()
    {
        
        result lalit;
        lalit.set_roll_num(420);
        lalit.set_marks(94.0,98.0);
        lalit.display();
        return 0;
    }