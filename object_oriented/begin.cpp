#include <iostream>
#include <string>
using namespace std;

string rw_string()
{
    string output;
    while (getline(cin, output))
    {
        return output;
    }
    return string("");
}

int main(int argc, char const *argv[])
{
    string name;
    cout << "Enter your name >>> ";
    name = rw_string();
    cout << "Hello " << name << endl;
    return 0;
}
