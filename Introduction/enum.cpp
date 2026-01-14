#include <iostream>
#include <stdio.h>

// enum represents small sets of integer values

enum class Color { red, blue , green };
enum class Traffic_light { green, yellow, red };

Color col = Color::red; // now col is red
Traffic_light light = Traffic_light::red; // light is red

int main(void)
{
    Color z = Color::red;
}