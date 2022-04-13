#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    srand((unsigned)time(NULL));

    cout << rand() << endl;

    return 0;
}
