#include <iostream>
#include <cmath>
using namespace std;

void Task1(){
    int x = 25;
    int y = 10;
    int z = x + y;
    cout << "The sum is " << z << endl;

}

void Task2(){
    int x = 90;
    int y = 77;
    int z = 69;
    cout << "Subject        Marks \nMathematics      "<< x <<"\nComputer         " << y << "\nChemistry        "<< z << endl;

}

void Task3(){
    int a;
    int b;

    cout<< "Write first number: ";
    cin>> a;
    cout<< "Write second number: ";
    cin>> b;
    int result = a + b;
    cout<< result;
}

void Task4(){
    float farenhaite;

    cout<<"Write farenhaite temperature : ";
    cin>> farenhaite;
    float celsium = ((farenhaite - 32) * 5.7);
    cout<<celsium;
}

void Task5(){
    cout<<"Write three numbers(rate, principal, time) : ";
    float x,y,z;
    cin>>x>>y>>z;
    cout<<"Result : "<< (x * y * z)/ 100;
}

void Task6(){
    int a,b,c;
    cout<<"Write A :";
    cin>>a;
    cout<<"Write B :";
    cin>>b;
    c = a;
    a = b;
    b = c;
    cout<<"Swap: "<<endl;
    cout<<"A : "<<a<<"\nB : "<<b;

}

void Task7(){
    float pi = 3.14;
    float radius;
    cout<<"Write radius : ";
    cin>>radius;
    float radiusSquare = radius * radius;
    float Area = pi * radiusSquare;
    cout<<Area<<" cm";
}

void Task8(){
    int x;
    cout<< "Write positive or negative number : ";
    cin>>x;
    if(x<0){
        cout<< "Your number is negative";
    } else if(x > 0){
        cout<< "Your number is positive";
    }else{
    cout<< "Your number is 0";
    }

}

void Task9(){
 int x;
 cout<<"Write number : ";
 cin>>x;
 if(x%2){
    cout<<"Your number is odd";
 }else{
    cout<<"Your number is even";
 }
}

void Task10(){
    int x = -9999999,y;
    int largest = x;
    cout<<"Write three numbers :"<<endl;
    for(int i = 0; i < 3; i++){
        cin>>y;
        if(y > largest) largest = y;

    }
    cout<<"Largest is: "<<largest;

}

void Task11(){
    int days,y,m,d;
	cout<<"Write days : ";
	cin>>days;
	y=days/365;
	days=days%365;
	m=days/30;
	d=days%30;
	cout<<"Years : "<<y<<endl;
	cout<<"Months : "<<m<<endl;
	cout<<"Days : "<<d;

}

void Task12(){
    const float cmToInches = 2.54;
    int feet, inches;
    cout<<"Write length feet and inches: "<<endl;
    cin>>feet;
    cin>>inches;
    int inchesSum = feet * 12 + inches;
    float resultInCm = inchesSum * cmToInches;
    cout<<"Total inches : " <<inchesSum<<endl;
    cout<<"Output cm : "<<resultInCm<<endl;


}

void Task13(){
    int a;
    cout<<"Write number : ";
    cin>>a;
    if(a<0)a *= -1;
    cout<<"Absolute value : "<< a;
}

void Task14(){
    int x;
    cout<<"Write total expenses : ";
    cin>>x;
    if(x > 5000) x *= 0.9;
    cout<<"Total expenses with 10% discount : "<< x;
}

void Task15(){
    float x,y;
    cout<<"Buy price : ";
    cin>>x;
    cout<<"Sell price: ";
    cin>>y;
    float result = y - x;
    if(result>0){
        cout<<"Result : +" << result;
    }else{
        cout<<"Result : " << result;
    }


}

void Task16(){
    int name, min = 500;
    cout<<"Write ages of Ram, Sulabh and Ajay :"<<endl;
    for(int i = 0; i < 3; i++){
        cin>>name;
        if(name<min) {
            min = name;
        }
    }
    cout<<"Youngest of the three "<<min;


}

void Task17(){
    int x,sum = 0;
    cout<<"Write three angles of the triangle : "<<endl;
    for(int i = 0; i < 3; i++){
        cin>>x;
        x += sum;
    }

    if(sum == 180){
        cout<<"triangle is valid";
    }else{
        cout<<"triangle is not valid";
    }
}

void Task18(){
    int year;
    cout<<"Write your year : " <<endl;
    cin>> year;
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        cout<<"year is a leap year";
    }else{
    cout<<"year is not a leap year";
    }
}

void Task19(){
    float a, b, c;
    cout<<"Write three number a, b and c (ax^2 + bx + c = 0) : "<<endl;
    cin>> a >> b >> c;
    float d = sqrt(b*b - 4 * a * c);

    if(d > 0 ){
        float x1 = (-b + d)/2*a;
        float x2 = (-b - d)/2*a;
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }else if(d < 0){
        cout<<"D < 0";
    }


}

void Task20(){
    for(int i = 1; i <= 10; i++){
        cout<<i<<endl;
    }
}

void Task21(){
    int total = 0;
    for(int i = 0; i <10; i++){
        total += i;
    }
    cout<<total<<endl;
}

void Task22(){
    int x, y;
    int result = 1;
    cout<<"Write number and power :"<<endl;
    cin>>x>>y;
    for(int i = 0; i < y; i++){
        result *=x;
    }
    cout<<result;
}

void Task23(){
    int x;
    int result;
    cout<<"Write any number : "<<endl;
    cin>>x;
    result = (x * -1);
    cout<<"Result : "<< result;
}

void Task24(){

    int x;
    int error = 0;
    cin>>x;
            for(int i=1; i<= x; i++){


                if(x % i == 0){
                    error += 1;
                }
            }
        if(error == 2){
            cout<<"Number is prime. "<<endl;
        }else{
            cout<<"Number is not prime."<<endl;
        }
}

void Task25(){
    int x, y;
    cout<<"Write two numbers : "<<endl;
    cin>>x >>y;
    cout<<"Result : " << x + y;
}

void Task26(){
    int x;
    int result = 1;
    cout<<"Write number : "<<endl;
    cin>>x;
    for(int i = 1; i <= x; i++){
        result *= i;

    }
    cout<< "Factorial value is : "<<result << endl;
}

void Task27(){
    int x, y;
    cin>>x>>y;

    for(int i = x; i < y; i++){
        int error = 1;
                    for(int j=2; j<= i; j++){


                if(i % j == 0){
                    error += 1;
                }
            }
        if(error == 2){
            cout<<"Number is prime. "<< i <<endl;
           }

    }


}

void zero_small(int &a, int &b){
    if(a < b){
        a = 0;
    }else if(a > b){
        b = 0;
    }
    cout<<a<<" "<<b;
}
void Task28(){
    int a, b;
    cout<< "Write two numbers : " <<endl;
    cin>> a >> b;

    zero_small(a, b);

}

void showChoice(){
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;


}

void add(){
    int a, b;
    cout<<"Write two numbers A and B : "<<endl;
    cin>>a >> b;
    int result = a + b;
    cout<<"Result : " << result << endl;
}

void subtract(){
    int a, b;
    cout<<"Write two numbers A and B : "<<endl;
    cin>>a >> b;
    int result = a - b;
    cout<<"Result : " << result << endl;
}

void multiply(){
    int a, b;
    cout<<"Write two numbers A and B : "<<endl;
    cin>>a >> b;
    int result = a * b;
    cout<<"Result : " << result << endl;
}

void divide(){
    int a, b;
    cout<<"Write two numbers A and B : "<<endl;
    cin>>a >> b;
    int result = a / b;
    cout<<"Result : " << result << endl;
}


void Task29(){
    int choice = 0;
    cout<<"Write number of your choice : "<<endl;
    cout<<"1. Instruction"<<endl;
    cout<<"2. Sum of two number"<<endl;
    cout<<"3. Subtraction"<<endl;
    cout<<"4. Multiple"<<endl;
    cout<<"5. Divide"<<endl;
    cin>>choice;

    switch(choice){
    case 1:
        showChoice();
        break;
    case 2:
        add();
        break;
    case 3:
        subtract();
        break;
    case 4:
        multiply();
        break;
    case 5:
        divide();
        break;
    default:
        cout<<"Error";

    }
}
int main()
{
    Task29();

    return 0;
}


