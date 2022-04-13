#include <iostream>

#include "array.h"

using namespace std;

int main(int argc, char *argv[])
{
    init();
    printAll();

    cout << "query row,column: ";
    int row, column;
    cin >> row >> column;
    int value = 0;
    if (getItemValue(row, column, &value)) {
        printf("success! [%d][%d]=%d\n", row, column, value);
    } else {
        printf("failed! input row=%d, column=%d!\n", row, column);
    }

    cout << "update row, column: ";
    cin >> row >> column;
    cout << "new value: ";
    cin >> value;
    if (setItemValue(row, column, value)) {
        printf("success! [%d][%d]=%d\n", row, column, value);
    } else {
        printf("failed! input row=%d, column=%d, new_value=%d!\n", row, column, value);
    }
    printAll();

    return 0;
}
