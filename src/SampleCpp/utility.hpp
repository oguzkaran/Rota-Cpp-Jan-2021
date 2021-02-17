#ifndef UTILITY_HPP_
#define UTILITY_HPP_

#include <cstdlib>
#include <ctime>

inline void randomize()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}


int *resize(int *p, std::size_t size, std::size_t new_size);


#endif //UTILITY_HPP
