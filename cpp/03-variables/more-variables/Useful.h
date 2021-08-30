#ifdef USEFUL_H
#define USEFUL_H
#include <iostream>
#include <string>
//useful input and output methods
namespace util
{
    void println(std::string s)
    {
        std::cout << s << '\n';
    }
    void println(int n)
    {
        std::cout << n << '\n';
    }
    void println(double d)
    {
        std::cout << d << '\n';
    }
    int reqInt()
    {
        int n{};
        std::cout << "Enter a  whole number: ";
        std::cin >> n;
        return n;
    }
    double reqDouble()
    {
        double d{};
        std::cout << "Enter a number: ";
        std::cin >> d;
        return d;
    }
    std::string reqStr()
    {
        std::string s = "";
        std::cout << "Enter a word: ";
        std::cin >> s;
        return s;
    }
}
#endif