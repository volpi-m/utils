/*
** Compile with: g++ example.cpp
*/

#include "salut.h"

int add(int a, int b)
{
    return a + b;
}

SALUT(test1)
{
    int nb = add(2, 3);
    slt_eq(nb, 5);
}

SALUT_SUITE(suite1)
{
    PLEASE(test1);
}

int main()
{
    PLEASE_SUITE(suite1);
    CIAO();
}