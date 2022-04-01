#include "Base.hpp"


int main(void)
{
    Base *a = generate();
    Base *a1 = generate();
    Base *a2 = generate();

    Base *b = generate();

    Base *c = generate();

    identify(a);
    identify(*a);
    identify(a1);
    identify(*a1);
    identify(a2);
    identify(*a2);
    identify(b);
    identify(*b);

    identify(c);
    identify(*c);

    delete a;
    delete a1;
    delete a2;
    delete b;
    delete c;
    return (0);
}