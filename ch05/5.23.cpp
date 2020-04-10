#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::runtime_error;

int main()
{
    cout << "Please enter two integers: " << endl;
    int v1 = 0, v2 = 0;
    bool cont = true;
    while (cont) {
        cont = false;
        try {
            cin >> v1 >> v2;
            if (v2 == 0) {
                throw runtime_error("Divisor is 0.");
            }
            int quotient = v1 / v2;
            cout << quotient << endl;
        } catch (runtime_error err) {
            cout << err.what() << "\nTry again? (y/n)" << endl;
            char ans;
            if (cin >> ans && (ans == 'y' || ans == 'Y')) {
                cont = true;
            }
        }
    }

    return 0;
}