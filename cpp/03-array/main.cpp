#include <iostream>

#include "array.h"

using namespace std;

int main(int argc, char *argv[])
{
    init();
    printAll();

    cout << "query_index: ";
    int query_index;
    cin >> query_index;

    int value= 0;
    if (getItemValue(query_index, &value)) {
        cout << "success! query value: " << value << endl;
    } else {
        cout << "query failed!" << endl;
    }

    cout << "set item value of index: ";
    int set_index;
    cin >> set_index;
    cout << "set value to be: ";
    int set_value;
    cin >> set_value;
    if (setItemValue(set_index, set_value)) {
        cout << "success! set " << set_index << " to " << set_value << endl;
    } else {
        cout << "failed! set " << set_index << " to " << set_value << endl;
    }

    printAll();

    return 0;
}
