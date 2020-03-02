#include<string>

int splitBalancedStrings(std::string s)
{
    int count = 0;
    int length = s.length();
    int rigth = 0;
    for (int i = 0; i < length; i++)
    {
        if (s[i] == 'R')
            rigth++;
        else
            rigth--;

        if (rigth == 0) 
            count++;
    }

    return count;
}