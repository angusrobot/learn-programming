#include <iostream>
#include <ctime>
#include <cstdlib>

#define MAX_ARRAY_SIZE 10

int random_numbers[MAX_ARRAY_SIZE] = {0};

void printAll(void) {
    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        std::cout << "index: " << i << ", ";
        std::cout << "value: " << random_numbers[i] << std::endl;
    }
}

bool getItemValue(int index, int* p_value) {
    if (index < 0 || index >= MAX_ARRAY_SIZE ) {
        return false;
    }
    *p_value = random_numbers[index];
    return true;
}

void init(void) {
    srand((unsigned)time(NULL));

    for (int i = 0; i < MAX_ARRAY_SIZE; i++) {
        random_numbers[i] = rand() % 1000;
    }
}

bool setItemValue(int index, int value) {
    if (index < 0 || index >= MAX_ARRAY_SIZE) {
        return false;
    }
    random_numbers[index] = value;
    return true;
}
