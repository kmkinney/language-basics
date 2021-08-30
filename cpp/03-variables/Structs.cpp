#include "Structs.h"
#include <iostream>

void structsTest()
{
    struct Person
    {
        //Members or Fields 
        std::string name;
        int age;
        double height;
        double weight;
    };

    //Declare and assign value to each field
    Person ella;
    ella.name = "Ella Kinney";
    ella.age = 14;
    ella.height = 1.3;
    ella.weight = 234.5;

    std::cout << ella.name;
}