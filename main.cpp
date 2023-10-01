#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long int k = 4;
    unsigned long long int p = 31;
    unsigned long long int Mp = static_cast<unsigned long long int>(pow(2,p))-1;
    unsigned long long int count = 1;
    unsigned long long int limit = p-2;

    cout << "u(0) = 4" << endl;

    do {
        k = (((k * k) - 2) % Mp);
        cout << "u(" << count << ") = " << k << endl;
        count ++;
    }
    while (count <= limit);

    return 0;
}

// TODO GMP library