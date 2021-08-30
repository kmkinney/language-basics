#include "Types.h"
#include "Useful.h"
#include <iostream>

void typesTest()
{
    typeDef();
    typeAlias();
}
void typeDef()
{
    typedef char letter_t;
    letter_t character = 'a';
    util::println(character);
}
void typeAlias()
{
    using studentID_t = int;
    studentID_t bob = 7;
    util::println(bob);
}