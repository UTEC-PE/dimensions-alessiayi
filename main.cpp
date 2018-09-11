#include <cstdlib>
#include <iostream>

#include "vector.h"

using namespace std;

template <typename T>
struct Dimensions {      
    int operator()(int* coordinates, int* sizes, int dimensions) {
        // TODO
    }
};

struct Integer {
       typedef int T;
       typedef Dimensions<T> Operation;
};

int main(int argc, char *argv[]) {
    system("pause");
    return EXIT_SUCCESS;
}