// Eashan Vytla
// CIS 1202 101
// July 31, 2021

#include <iostream>

using namespace std;

//Function Prototype
char character(char, int);

//Exception for start character not in range
class invalidCharacterExcpeption {};

//Exception for target character not in range
class invalidRangeException {};

int main()
{
    char result;

    // Driver for (a, 1)
    cout << "Trying with (\'a\', 1)" << endl;
    try {
        result = character('a', 1);
        cout << result << endl;
    }
    catch (invalidCharacterExcpeption e1) {
        cout << "Invalid Character Exception" << endl;
    }
    catch (invalidRangeException e2) {
        cout << "Invalid Range Exception" << endl;
    }

    cout << endl;

    // Driver for (!, 1)
    cout << "Trying with (\'!\', 1)" << endl;
    try {
        result = character('!', 1);
        cout << result << endl;
    }
    catch (invalidCharacterExcpeption e1) {
        cout << "Invalid Character Exception" << endl;
    }
    catch (invalidRangeException e2) {
        cout << "Invalid Range Exception" << endl;
    }

    cout << endl;

    // Driver for (z, 1)
    cout << "Trying with (\'z\', 1)" << endl;
    try {
        result = character('z', 1);
        cout << result << endl;
    }
    catch (invalidCharacterExcpeption e1) {
        cout << "Invalid Character Exception" << endl;
    }
    catch (invalidRangeException e2) {
        cout << "Invalid Range Exception" << endl;
    }

    cout << endl;

    // Driver for (Z, -1)
    cout << "Trying with (\'Z\', -1)" << endl;
    try {
        result = character('Z', -1);
        cout << result << endl;
    }
    catch (invalidCharacterExcpeption e1) {
        cout << "Invalid Character Exception" << endl;
    }
    catch (invalidRangeException e2) {
        cout << "Invalid Range Exception" << endl;
    }

    cout << endl;

    // Driver for (Z, -1)
    cout << "Trying with (\'Z\', -1)" << endl;
    try {
        result = character('Z', -1);
        cout << result << endl;
    }
    catch (invalidCharacterExcpeption e1) {
        cout << "Invalid Character Exception" << endl;
    }
    catch (invalidRangeException e2) {
        cout << "Invalid Range Exception" << endl;
    }

    cout << endl;

    // Driver for (a, -1)
    cout << "Trying with (\'a\', -1)" << endl;
    try {
        result = character('a', -1);
        cout << result << endl;
    }
    catch (invalidCharacterExcpeption e1) {
        cout << "Invalid Character Exception" << endl;
    }
    catch (invalidRangeException e2) {
        cout << "Invalid Range Exception" << endl;
    }
}

char character(char start, int offset) {
    // If the parameter start is not in the range of a(97) -> z(122) and not in range of A(65) -> B(90), then throw the invalidCharacterException();
    if (!(start >= 97 && start <= 122) && !(start >= 65 && start <= 90)) {
        throw invalidCharacterExcpeption();
    }

    // Add the offset to the ascii value
    int asciiVal = (int)(start) + offset;

    //If the target ascii value is in range then return the character.
    if ((asciiVal >= 97 && asciiVal <= 122) || (asciiVal >= 65 && asciiVal <= 90)) {
        return (char)asciiVal;
    }

    //If the ascii value was not in range, then it will reach this point
    //If it reaches this point, then we throw an invalidRange Exception
    throw invalidRangeException();
}
