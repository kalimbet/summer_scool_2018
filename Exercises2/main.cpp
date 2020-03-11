#include <iostream>

using namespace std;

void Task1(){
        int b, n;
        cout << "Enter the number : ";
        cin >> n;
        cout << "The binary equivalent of " << n << " is ";
        while (n > 0)
        {
            b = n % 2;
            cout << b;
            n /= 2;
        }

}

int Task2(int number, int finalNumber){
    if(number < finalNumber) {
        cout<< " " << number;
        return Task2(number + 1, finalNumber);

    }

    return 0;


}

int Task3(int x, int y, int result){

    if(x <= y){
        result += x;
        return Task3(x + 1, y, result);

    }else{

        cout<<result;
        return 0;
    }



}

int Task4(int number, int result){
    if(number == 1){
        cout<<result;
        return 0;
    }else{
    result *= number;
    return Task4(number-1, result);
    }
}

int Task5(){
    int x = 30, y = 18;
    int minValue;
    if(x > y){
        minValue = y;
    }else{
        minValue = x;
    }

    int result;
    for(int i = 1; i < minValue; i++){
            if(x % i == 0 && y % i == 0){
               result = i;
            }
    }
    cout<<"True : " << result;
}

int Task6(int x, int y, int result){


        if(x % result == 0 && y % result == 0){
            cout<<result;
            return 0;

        }else{
            return Task6(x, y, result - 1);
        }



}

int Task7(int x, int y, int limit, int sum, int number){


    if (limit < 20){
            if(limit == number){
                cout<<" "<<sum;
            }
            if(limit > 1){
                sum = x + y;
                x = y;
                y = sum;
            }


        return Task7(x, y, limit+1, sum, number);
    }else{

        return 0;
    }

}


int Task8(int number, int answer, int limit){

    if(number < limit){
        cout<<answer;
        return 0;
    }else{
        limit *= 10;
        answer++;
        Task8(number, answer, limit);
    }
}


int Task10(){

    int myArray[5] = {2,3,33,12,13};
    int maxNumber = myArray[0];
    for(int i = 0; i < 5; i++){
        if(myArray[i] > maxNumber){
            maxNumber = myArray[i];
        }
    }
    cout<<maxNumber;
}


int Task11(){
    int myArray[5] = {2,3,33,12,13};
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += myArray[i];
    }
    cout<<sum;
}

int Task12(){
    float myArray[5] = {2,3,33,12,13};
    float sum = 0;
    for(int i = 0; i < 5; i++){
        sum += myArray[i];
    }
    cout<<sum / 5;
}

void Task13(){
    float myArray[5] = {1,76,8,20,25};
    float sum = 0;
    int minValue;
    int minNumber = myArray[0];
    int maxValue;
    for(int i = 0; i < 5; i++){
        sum += myArray[i];
    }

    float average = sum / 5;


    for(int j = 0; j < 5; j++){
        if(average > myArray[j]){
            minValue = myArray[j];
            if(minNumber < minValue){
                minNumber = minValue;
                }
        }
        if(average < myArray[j]){
            maxValue = myArray[j];
        }
    }

    for(int k = 0; k < 5; k++){

    }
    if( (maxValue - average)<(average - minValue) ){
        cout<<maxValue<<endl;
    }else{
        cout<<minNumber<<endl;
    }


}


void Task14(){
    int myArray[5] = {5,4,7,8,9};
    for(int i = 0; i < 5; i++){
        cout<<myArray[i]<<" ";
    }
}

void Task15(){
    int myArray[5] = {5,4,-7,8,-9};
    for(int i = 0; i < 5; i++){
        if(myArray[i] < 0){
            myArray[i] = 0;
            cout<<myArray[i]<<" ";
        }else{
            cout<<myArray[i]<<" ";
        }
    }
}


int main()
{
        //Task 2
        ////int number, finalNumber;
        ////cin>>number>>finalNumber;
        ////Task2(number, finalNumber);
        //end

        //Task 3
        ////int result = 0;
        ////int x = 1, y = 3;
        ////Task3(x, y, result);
        ////return 0;
        //end

        //Task 4
        ////int result = 1 ,number = 5;
        ////Task4(number, result);
        //end


        //Task 6
            /*int x = 8, y = 12, result;
            if(x > y){
                result = y;
            }else{
                result = x;
            }

            Task6(x, y, result);
            */
        //end

        //Task 7
            /*
            int x = 1, y = 1, limit = 1, sum = 1, number;
            cin>> number;

            Task7(x, y, limit, sum, number);
            */
        //end


        //Task 8
            //int number, answer = 1, limit = 10;
            //cin>>number;
            //Task8(number, answer, limit);
        //end

    Task15();
}
