#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>

Base * generate( void )
{
    std::random_device rd; // Non-deterministic random device
    std::mt19937 gen(rd()); // Seed the generator with random_device
    std::uniform_int_distribution<> dist(0, 2); // Generate 0 or 1 or 2
    if (dist(gen) == 0)
        return new A();
    else if (dist(gen) == 1)
        return new B();
    else
        return new C();
}

void identify( Base * p )
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

void identify( Base & p )
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (std::bad_cast &)
    {
        try
        {
            B &b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "B" << std::endl;
        }
        catch (std::bad_cast &)
        {
            try
            {
                C &c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "C" << std::endl;
            }
            catch (std::bad_cast &)
            {
                std::cout << "Unknown type" << std::endl;
            }
        }
    }
}