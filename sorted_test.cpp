#include <iostream>
#include <cassert>
using namespace std;

bool isSorted(const int *arr, const int size); // declared only, not yet implemented

void testSortedArray()
{
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
    cout << "testSortedArray passed\n";
}

void testUnsortedArray()
{
    int arr[] = {1, 4, 3, 5, 6};
    assert(isSorted(arr, 5) == false);
    cout << "testUnsortedArray passed\n";
}

void testDuplicateValues()
{
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
    cout << "testDuplicateValues passed\n";
}

void testSingleElement()
{
    int arr[] = {7};
    assert(isSorted(arr, 1) == true);
    cout << "testSingleElement passed\n";
}

void testDescendingArray()
{
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
    cout << "testDescendingArray passed\n";
}

void testNegativeValues()
{
    int arr[] = {-5, -3, -1, 0, 2};
    assert(isSorted(arr, 5) == true);
    cout << "testNegativeValues passed\n";
}

// Two additional tests
void testEmptyArray()
{
    int arr[] = {};
    assert(isSorted(arr, 0) == true); // vacuously sorted
    cout << "testEmptyArray passed\n";
}

void testAllEqualElements()
{
    int arr[] = {3, 3, 3, 3};
    assert(isSorted(arr, 4) == true);
    cout << "testAllEqualElements passed\n";
}

int main()
{
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testEmptyArray();
    testAllEqualElements();
    cout << "\nAll tests passed!\n";
    return 0;
}

bool isSorted(const int *arr, const int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return false; // fixed
    }
    return true;
}