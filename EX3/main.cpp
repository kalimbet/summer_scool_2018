#include <iostream>
#include <cmath>
#include "Point.h"
#include "Triangle.h"

using namespace std;





void showPoint(struct fPoint p1){

    cout<<"X: "<<p1.x<<" "<<"Y: "<<p1.y;
}

int Task3(struct fPoint p1, struct fPoint p2){
    float result;
    result = sqrt( pow((p2.x - p1.x),2) + (pow((p2.y - p1.y),2)));
    cout<<"Task 3"<<endl;
    cout<<"Answer : "<<result<<endl;
}

int inputP1P2(){

    fPoint p1;
    fPoint p2;
    cout<<"Write point coordinate(x, y)"<<endl;
    cin>>p1.x>>p1.y;
    cout<<"Write point coordinate(x, y)"<<endl;
    cin>>p2.x>>p2.y;
    Task3(p1,p2);
}

void Task7(){
    Point p(2,3);
    inputP1P2();
    p.moveF( 2, 3);
    p.ShowAB();
}
void Task8(){
    fPoint a{0,0};
    fPoint b{8,2};
    fPoint c{-2,6};
    Triangle test (a, b, c);
    test.perimeterFind();
    test.area();
    test.showTriangle();
}

int main()
{
    int ch = 0;
    cout<<"Select task : "<<endl;
    cout<<"1. Task 7 (Task 3, Task 6)"<<endl;
    cout<<"2. Task 8"<<endl;
    cin>>ch;
    switch(ch){
    case 1:
        Task7();
        break;
    case 2:
        Task8();
        break;
    default:
        cout<<"Error"<<endl;
        break;
        }
    return 0;
}


