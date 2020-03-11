#include "Point.h"
#include <iostream>

using namespace std;

    Point::Point(float setA, float setB): a(setA), b(setB){

    }


    void Point::ShowAB(){
    cout<<"Task 6"<<endl;
    cout<<"Answer : x"<<a<<"  y"<<b<<endl;
    }

    void Point::moveF(float a1, float b1){
        a += a1;
        b += b1;

    }





