#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    map<string, string> marks;
    marks["lalit"] = "time";
    marks["muskan"] = "security";
    marks["rony"] = "versal";
    map<string, string>::iterator i;
    for (i = marks.begin(); i != marks.end(); i++)
    {
        cout << (*i).first << ":" << (*i).second << "\n";
    }

    return 0;
}