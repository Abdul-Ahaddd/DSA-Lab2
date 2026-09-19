#include <iostream>
using namespace std;

void analyze_pointer(int *ptr)
{
    cout << "Memory location: " << ptr << endl;
    cout << "Value stored: " << *ptr << endl;
}

int main()
{
    // Part 2a: stack allocation
    int iValue = 10;
    cout << "Stack variable:" << endl;
    analyze_pointer(&iValue);

    // Part 2b: heap allocation
    int *heapValue = new int;
    *heapValue = 25;
    cout << "\nHeap variable:" << endl;
    analyze_pointer(heapValue);

    delete heapValue;
    return 0;
}