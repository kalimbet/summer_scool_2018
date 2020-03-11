#include <iostream>

using namespace std;




int main()
{
    int x,y = 2;
    cout << "Hello world!" << endl;
    cin>>x;
    int arr[x][y];

    for(int i = 0; i < x; i++){
            for(int j = 0; j < y; j++){
                cout<<"x and y "<<endl;
                cin>> arr[i][j];

            }

    }

    for(int i = 0; i < x; i++){
            for(int j = 0; j < y; j++){
                cout<< arr[i][j]<< " ";
            }
        cout<<endl;

    }
    return 0;
}
