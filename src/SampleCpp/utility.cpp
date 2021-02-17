#include <cstdlib>
#include <cstring>
#include <new>
#include "utility.hpp"

int *resize(int *p, std::size_t size, std::size_t new_size)
{
    int *temp = new(std::nothrow) int[new_size];

    if (!temp)
        return nullptr;

    std::memcpy(temp, p, size * sizeof(int));

    delete [] p;

    return temp;
}