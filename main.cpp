#include <cstdlib>
#include <iostream>

#include "vector.h"

using namespace std;

template <typename T>
struct Dimensions {
    int operator()(int* coordinates, int* sizes, int dimensions) {
      int p=0;
        for(int i=dimensions-1; i>=0; i--){
          p*=sizes[i];
          p+=coordinates[i];
        }
        return p;
    }
};

struct Integer {
       typedef int T;
       typedef Dimensions<T> Operation;
};

int main(int argc, char *argv[]) {
    return EXIT_SUCCESS;
}
