#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};
class CWHVideo : public CWH
{
    int videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "the is an amazing video with tiitle " << title << endl;
        cout << "Ratings: " << rating << " out of 5 starts" << endl;
        cout << "length of this video is " << videoLength << " minutes " << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "the is an amazing text with tiitle " << title << endl;
        cout << "Ratings: " << rating << " out of 5 starts" << endl;
        cout << "number of word in text tut is: " << words << " minutes " << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    title = "python tutorial";
    vlen = 4.56;
    rating = 4.5;

    CWHVideo Video(title, vlen, rating);
    Video.display();

    cout<<endl;

    title = "python text tutorial";
    words = 4562;
    rating = 4.1;

    CWHText Text(title, words, rating);
    Text.display();

    title = "python text tutorial";
    words = 4562;
    rating = 4.1;

    CWHText Texti(title,rating,words);
    Texti.display();

    CWH *tuts[2];
    tuts[0]=&Video;
    tuts[1]=&Texti;

    tuts[0]->display();
    tuts[1]->display();


    return 0;
}