/*
Print all the duplicate characters in a string
https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/
*/

#include <iostream>
#include <unordered_map>
using namespace std;

void printDuplicates(string str)
{
    unordered_map<char, int> count;
    for (int i = 0; i < str.length(); i++)
    {
        count[str[i]]++;
    }
    for (auto it : count)
    {
        if (it.second > 1)
        {
            cout << it.first << ", count = " << it.second << endl;
        }
    }
}
int main()
{
    string str = "tanya modi";
    printDuplicates(str);
    return 0;
}