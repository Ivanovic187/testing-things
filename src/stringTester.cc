#include <iostream>
#include <string>
#include "stringTester.h"

using namespace std;
StringTester::StringTester(string str): myStringM(str)
{

}

void StringTester::bar (const string & s)
{
        cout << s << endl;
}

int main ()
{
    StringTester object("pepito grillo");
    object.bar("hola caracola");
    return 0;

}
