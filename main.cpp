#include "std_lib_facilities.h"

// Q: Can we declare a non-reference function argument const?
// A: Yes
// Q: What might that mean?
// A: The non-refernce const passes a copy of a value that won't be modified.  
// Q: Why might we want to do that?
// A: To optimize the compiler and make it easier for others to understand how your code is intednde to be used.
// Q: Why don’t people do that often?
// A: The value cant be changed. It's limited in use. 

//Example program: 

int add(const int a, const int b)
{
    int sum = a + b;
    return sum;
}

int mult(const int a, const int b)
{
    int product = a * b;
    return product;
}

int main()
{
    cout << add(2,2) << "\n";
    cout << add(4,3) << "\n";

    cout << mult(2,2) << "\n";
    cout << mult(4,3) << "\n";
}