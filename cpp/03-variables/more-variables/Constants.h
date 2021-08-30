#pragma once
//One way to provide constant global variables
//Provided as internal variables in each file
void constantsTest();
namespace constInternal
{
    constexpr double pi{3.14159};
    constexpr double gravity{9.8}; //in m/s^2
    constexpr int luck{7};
}