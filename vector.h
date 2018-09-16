#ifndef VECTOR_H
#define VECTOR_H

template <typename Tr>
class Vector {
    public:
        typedef typename Tr::T T;
        typedef typename Tr::Operation Operation;

    private:
        T* data;
        int dataSize;

        int dimensions;//elementos del array
        int* dimensionSizes;//1er elemento 1 dim, 2do elemento 2 dim

        Operation op;

    public:
        Vector() : data(nullptr) {};

        Vector(int dimensions, int* dimensionSizes) : dimensions(dimensions), dimensionSizes(dimensionSizes) {
          dataSize=0;
          for (int i=0; i<dimensions; i++){
            dataSize*=dimensionSizes[i];
          }
          data=new T [dataSize];
        }

        void set(T value, int* coordinates){
          data[op(coordinates, dimensionSizes, dimensions)] = value;
        };

        T get(int* coordinates){
            return data[op(coordinates, dimensionSizes, dimensions)];
          }
        };

};

#endif
