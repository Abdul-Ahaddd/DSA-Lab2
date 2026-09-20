#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the string: ";
    cin >> n;
    cin.ignore(); // clear newline left in buffer

    char *str = new char[n + 1];
    cout << "Enter the string: ";
    cin.getline(str, n + 1);

    char *reversed = new char[n + 1];
    for (int i = 0; i < n; i++)
    {
        reversed[i] = str[n - 1 - i];
    }
    reversed[n] = '\0';

    cout << "Reversed string: " << reversed << endl;

    delete[] str;
    delete[] reversed;
    return 0;
}