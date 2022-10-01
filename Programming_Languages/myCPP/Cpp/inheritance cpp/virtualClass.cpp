#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void Set_num(int a)
    {
        roll_no = a;
    }
    void Print_num(void)
    {
        cout << "your roll no is " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void Set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void Print_marks(void)
    {
        cout << "your result is here Belowe _ _ _ _ _ : " << endl
             << "MATHS   : " << maths << endl
             << "PHYSICS : " << physics << endl;
    }
};
class Sports : virtual public Student

{
protected:
    float score;

public:
    void Set_score(float sc)
    {
        score = sc;
    }
    void Print_score(void)
    {
        cout << "PT      : " << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        Print_num();
        Print_marks();
        Print_score();
        cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
        cout << "your total marks is :: " << total << endl;
    }
};

int main()
{
    Result lalit;
    lalit.Set_num(33);
    lalit.Set_marks(83.5,92.9);
    lalit.Set_score(99);
    lalit.display();

    return 0;
}