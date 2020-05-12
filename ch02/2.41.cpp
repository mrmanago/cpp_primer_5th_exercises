#include <iostream>
#include <string>

using namespace std;

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double price = 0.0;
    double revenue = 0.0;
};

int main()
{
    // Rewritten 1.20
    Sales_data book;
    
    while (cin >> book.bookNo >> book.units_sold >> book.price) {
        book.revenue = book.units_sold * book.price;
        cout << book.bookNo << " " << book.units_sold << " " << book.revenue << "\n";
    }

    // Rewritten 1.21
    Sales_data item1, item2;
    cin >> item1.bookNo >> item1.units_sold >> item1.price;
    cin >> item2.bookNo >> item2.units_sold >> item2.price;
    if (item1.bookNo == item2.bookNo) {
        double revenue = (item1.units_sold * item1.price) + (item2.units_sold * item2.price);
        cout << revenue << "\n";
    } else {
        cerr << "Data must refer to the same ISBN" << "\n";
        return -1;
    }

    // Rewritten 1.22
    Sales_data item, sum;
    double price = 0;
    
    while (cin >> item.bookNo >> item.units_sold >> item.price) {
        item.revenue = item.units_sold * item.price;
        if (sum.bookNo == item.bookNo) {
            sum.units_sold += item.units_sold;
            sum.revenue += item.revenue;
        } else {
            sum.revenue = sum.units_sold * sum.price;
            cout << sum.bookNo << sum.units_sold << sum.price << sum.revenue << "\n";
            sum = item;
        }
    }
    sum.revenue = sum.units_sold * sum.price;
    cout << sum.bookNo << sum.units_sold << sum.price << sum.revenue << "\n";

    // Rewritten 1.23
    Sales_data currItem, transaction;
    cin >> currItem.bookNo >> currItem.units_sold >> currItem.price;
    int count = 1;
    while (cin >> transaction.bookNo >> transaction.units_sold >> transaction.price) {
        if (currItem.bookNo == transaction.bookNo) {
            ++count;
        } else {
            cout << currItem.bookNo << " " << count << "\n";
            currItem = item;
            count = 1;
        }
        cout << currItem.bookNo << " " << count << "\n";
    }

    return 0;
}
