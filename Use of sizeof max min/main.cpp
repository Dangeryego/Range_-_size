#include <iostream>
#include <climits>

using namespace std;

int main()
{
    cout << "\n\t\t\tUse of SIZEOF operator" << endl;

    cout << "\nThe size of integer is:           " << sizeof (int) << endl;
    cout << "The size of unsigned integer is:  " << sizeof (unsigned int) << endl;
    cout << "The size of Character is:         " << sizeof (char) << endl;
    cout << "The size of Double is:            " << sizeof (double) << endl;
    cout << "The size of Long is:              " << sizeof (long) << endl;
    cout << "The size of Long Long is:         " << sizeof (long long) << endl;
    cout << "The size of float is:             " << sizeof (float) << endl;
    cout << "The size of short is:             " << sizeof (short) << endl;
    cout << "The size of LongDouble is:        " << sizeof (long double) << endl;
    cout << "The size of Boolean is:           " << sizeof (bool) << endl;
    cout << "\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;

    cout << "\nUse of Values defined in <Climits>" << endl;

    cout << "\n\t\tMaximum Values" << endl;
    cout << "\nMaximum limit of Integer is:    " << INT_MAX << endl;
    cout << "Maximum limit of Character is:  " << CHAR_MAX << endl;
    cout << "Maximum limit of Long is:       " << LONG_MAX <<endl;
    cout << "Maximum limit of Long Long is:  " << LONG_LONG_MAX << endl;
    cout << "Maximum limit of Long long is:  " << LLONG_MAX << endl;
    cout << "Maximum limit of Short is:      " << SHRT_MAX << endl;

    cout << "\n\t\tMinimum Values" << endl;
    cout << "\nMinimum limit of Integer is:    " << INT_MIN << endl;
    cout << "Minimum limit of Character is:  " << CHAR_MIN << endl;
    cout << "Minimum limit of Long is:       " << LONG_MIN <<endl;
    cout << "Minimum limit of Long Long is:  " << LONG_LONG_MIN << endl;
    cout << "Minimum limit of Long Long is:  " << LLONG_MIN << endl;
    cout << "Minimum limit of Short is:      " << SHRT_MIN << endl;

    return 0;

}
