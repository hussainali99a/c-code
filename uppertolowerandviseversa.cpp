// You have been given a String S consisting of uppercase and lowercase English alphabets. You need to change the case of each alphabet in this String. That is, all the uppercase letters should be converted to lowercase and all the lowercase letters should be converted to uppercase. You need to then print the resultant String to output.
#include <iostream>
#include <string>
using namespace std;
void convertOpposite(string &str)
{
    int ln = str.length();

    // Conversion according to ASCII values
    for (int i = 0; i < ln; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            // Convert uppercase to lowercase
            str[i] = str[i] + 32;
    }
}
int main()
{
    string str;
    cin >> str;

    // Calling the Function
    convertOpposite(str);

    cout << str;
    return 0;
}