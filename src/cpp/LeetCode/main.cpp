#include<iostream>
#include<stdexcept>
#include"1221.BalancedString.h"

using std::string;
using std::to_string;
using std::logic_error;

void test_splitBalancedStrings(int, string);

int main()
{
    try
    {
        test_splitBalancedStrings(4, "RLRRLLRLRL");
        test_splitBalancedStrings(3, "RLLLLRRRLR");
        test_splitBalancedStrings(1, "LLLLRRRR");
        test_splitBalancedStrings(2, "RLRRRLLRLL");

        std::cout << "Success";
    }
    catch (logic_error e)
    {
        std::cout << "Error: " << e.what();
    }
}

void test_splitBalancedStrings(int expected, string s)
{
    auto count = splitBalancedStrings(s);

    if (expected != count)
        throw logic_error("Expect " + to_string(expected) + ", but actual is " + to_string(count));
}
