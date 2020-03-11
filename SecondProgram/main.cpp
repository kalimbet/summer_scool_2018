#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int n;
cin>>n;
double perimeter = 0;
double x[n];
for(int i = 0; i < n; i++){
    cout<<"x: "<<endl;
    cin>>x[i];
}

double y[n];
for(int i = 0; i < n; i++){
    cout<<"y: "<<endl;
    cin>>y[i];
}

for (int i = 0; i < n-1; ++i)
perimeter += sqrt((x[i] - x[i+1])*(x[i] - x[i+1]) + (y[i] - y[i+1])*(y[i] - y[i+1]));
perimeter += sqrt((x[0] - x[n-1])*(x[0] - x[n-1]) + (y[0] - y[n-1])*(y[0] - y[n-1]));

cout << "Perimeter: " << perimeter <<endl;

    return 0;
}
