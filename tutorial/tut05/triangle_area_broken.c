// Author: Finbar Berkon
// Date: July 2019
// A program to calculate the area of a triange

#include <stdio.h>

int main(void) {
    printf("%.2lf\n", triangle_area(3, 3));
    return 0;
}

double triangle_area(int height, int width) {
    return (height * width)/2.0;
}

