#include <iostream>
#include <string>
#include "7.06.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    Sales_data total;
    if (read(cin, total)) {
        Sales_data trans;
        while (read(cin, trans)) {
            if (total.isbn() == trans.isbn())
            {
                add(total, trans);
            } else {
                print(cout, total);
                total = trans;
            }
        }
        print(cout, total);
    } else {
        std::cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}