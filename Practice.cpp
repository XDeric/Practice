#include <iostream>
using namespace std;


//Global variables
int myNum = 20;

void Tester(int x, int y){
    for (int i = 0; i < 5; i++)
    {
        cout<< "\nTest:"<<i + 1;
        if (i < x) {
        cout << "\nsum:" <<(x+i);
        }
        else
        {
            cout << "\nsum:" <<(i+y);
        }
        
    }
}

void Ternary(int a, int b){
    (a < b) ? cout <<"\nnum2 is bigger": cout <<"\nnum1 is bigger";
}

int main()
{
    int num1 = 1;
    int num2 = 2;
    int num3 = 3, num4 = 4;
    cout <<"Test"<< myNum;
    //cout << "\nsum:" <<(num1+num4);
    Tester(num3, num4);
    Ternary(num1, num2);
    
}

    


