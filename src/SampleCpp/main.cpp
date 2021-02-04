/*----------------------------------------------------------------------------------------------------------------------

----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>

constexpr int factorial(int n)
{
    return n <= 1 ? 1 : n * factorial(n - 1);
}

int main()
{
    int n;

    std::cout << "Bir sayi giriniz:";
    std::cin >> n;

    std::cout << factorial(6) << '\n';
    std::cout << factorial(n) << '\n'; //**

    return 0;
}