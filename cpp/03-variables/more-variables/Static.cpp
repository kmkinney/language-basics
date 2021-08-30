#include <iostream>
#include "Static.h"
#include "Useful.h"

void staticTest()
{
    using namespace util;
    println("Hello");

}
int incrementStatic()
{
    static int s_num{0};
    return ++s_num;
}
int incrementNonStatic()
{
    int num{0};
    return ++num;
}