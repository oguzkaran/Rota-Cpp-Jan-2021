/*----------------------------------------------------------------------------------------------------------------------
    friend global fonksiyonların bir kullanımı. Aşağıdaki örnekte Sample sınıfına hem bir output' a yazma yapmak ve 
    bit input'tan okuma yapmak anlamında yetenek kazandırılmıştır. Detaylar ileride ele alınacaktır
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>

class Sample {
    friend std::ostream& operator <<(std::ostream& os, const Sample& s);
    friend std::istream& operator>>(std::istream& is, Sample& s);
private:
    int m_a;
    double m_b;
public:
    Sample(int a = 0, double b = 0) : m_a{ a }, m_b{b}
    {}
    //...
};

std::ostream& operator <<(std::ostream& os, const Sample& s)
{
    return os << s.m_a << ", " << s.m_b;
}

std::istream& operator>>(std::istream& is, Sample& s)
{
    return is >> s.m_a >> s.m_b;
}

int main()
{
    Sample s{};

    std::cout << "Degerleri giriniz:";
    std::cin >> s;

    operator <<(std::cout, s) << '\n';

    std::cout << s << '\n';
        
    return 0;
}