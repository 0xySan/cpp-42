#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    srand(time(0));
    Base *base = generate();
    identify(base);
    identify(*base);
    Base *base2 = new Base();
    identify(base2);
    delete base2;
    delete base;
    return 0;
}