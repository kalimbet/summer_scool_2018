#include "Triangle.h"
#include <iostream>
#include "cmath"
using namespace std;

Triangle::Triangle(struct fPoint setA, struct fPoint setB, struct fPoint setC){
    a = setA;
    b = setB;
    c = setC;
}

float Triangle::perimeterFind(){
    lenghtA = sqrt(pow(b.x - a.x ,2)+ pow(b.y - a.y ,2));
    lenghtB = sqrt(pow(c.x - b.x,2)+ pow(c.y - b.y,2));
    lenghtC = sqrt(pow(a.x - c.x ,2)+ pow(a.y - c.y, 2));
    perimeterValue = (lenghtA + lenghtB + lenghtC);
    return perimeterValue;
}

float Triangle::area(){
    heron = sqrt((perimeterValue / 2) *((perimeterValue / 2) -  lenghtA) * ((perimeterValue / 2) - lenghtB) * ((perimeterValue / 2) - lenghtC));
    return heron;
}

void Triangle::showTriangle(){

cout<<endl;
cout<<"Task 8 "<<endl;
cout<<endl;
cout<<"Perimeter : "<<perimeterValue<<endl;
cout<<endl;
cout<<"Square area : "<< heron<<endl;
}








