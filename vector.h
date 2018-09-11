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

        int dimensions;
        int* dimensionSizes;

    public:
        Vector() : data(nullptr) {};
             
        Vector(int dimensions, int* dimensionSizes) : dimensions(dimensions), dimensionSizes(dimensionSizes) {
            // TODO
        }
             
        void set(T datum, int* coordinates); // TODO
             
        T get(int* coord); // TODO
};

#endif
