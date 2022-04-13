#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

#define MAX_ARRAY_SIZE_ROW 3
#define MAX_ARRAY_SIZE_COLUMN 4

int random_numbers[MAX_ARRAY_SIZE_ROW][MAX_ARRAY_SIZE_COLUMN] = {0};

void printAll(void) {
    for (int i = 0; i < MAX_ARRAY_SIZE_COLUMN; i++) {
        printf("\t%d", i);
    }
    cout << endl;
    for (int i = 0; i < MAX_ARRAY_SIZE_ROW; i++) {
        printf("\n%d:", i);
        for (int j = 0; j < MAX_ARRAY_SIZE_COLUMN; j++) {
            printf("\t%d", random_numbers[i][j]);
        }
        cout << endl;
    }
    cout << endl;
}

void init(void) {
    srand(unsigned(time(NULL)));

    for (int i = 0; i < MAX_ARRAY_SIZE_ROW; i++) {
        for (int j = 0; j < MAX_ARRAY_SIZE_COLUMN; j++) {
            random_numbers[i][j] = rand() % 10000;
        }
    }
}

bool getItemValue(int row, int column, int *value) {
    if (row < 0 || row >= MAX_ARRAY_SIZE_ROW || \
        column < 0 || column >= MAX_ARRAY_SIZE_COLUMN) {
        return false;
    }
    *value = random_numbers[row][column];
    return true;
}

bool setItemValue(int row, int column, int value) {
    if (row < 0 || row >= MAX_ARRAY_SIZE_ROW || \
        column < 0 || column >= MAX_ARRAY_SIZE_COLUMN) {
        return false;
    }
    random_numbers[row][column] = value;
    return true;
}
