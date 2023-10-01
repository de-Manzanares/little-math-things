#include <iostream>
#include <cmath>
#include <gmpxx.h>

using namespace std;

int main()
{
    unsigned long int p;

    while (true) {
        cout << "\nCheck a Mersenne number M_p = 2^p - 1 for primality." << endl;
        cout << "p = ";
        if (cin >> p) {

            mpz_t k;
            mpz_t Mp;
            int count = 1;
            unsigned long int limit = p-2;
            mpz_init_set_ui(k, 4);
            mpz_init(Mp);
            mpz_ui_pow_ui(Mp, 2, p);
            mpz_sub_ui(Mp, Mp, 1);

            cout << "u(0) = 4" << endl;

            do {

                cout << "u(" << count << ") = (" << k << " ^ 2 - 2) % M_" << p;
                cout << " = ";

                mpz_mul(k, k, k);
                mpz_sub_ui(k, k, 2);
                mpz_mod(k, k, Mp);

                gmp_printf("%Zd", k);
                cout << endl << "\n";

                count++;
            }
            while (count<=limit);

            if (mpz_cmp_ui(k, 0)==0) {
                cout << "\nM_" << p << " is prime." << endl;
            }
            else {
                cout << "\nM_" << p << " is composite." << endl;
            }

            mpz_clear(k);
            mpz_clear(Mp);
        }
        else {
            cout << "\np must be a natural number." << endl;
        }
    }
    return 0;
}