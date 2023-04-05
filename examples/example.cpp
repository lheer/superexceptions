#include <iostream>

#include "superexceptions.hpp"


void throw_1()
{
    const int val = 42;
    throw lh::FormattedException("Value is {:#x}, {}", val, "expected 0");
}

void throw_2()
{
    const int val = 42;
    throw lh::LocationException(lh::nostd::source_location::current(), "Value is {:#x}, {}", val, "expected 0");
}


int main()
{
    try
    {
        throw_1();
    }
    catch (const lh::FormattedException &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        throw_2();
    }
    catch (const lh::LocationException &e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
