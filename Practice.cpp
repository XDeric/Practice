#include <iostream>
using namespace std;


//Global variables
int myNum = 20;
void Tester(int,int);
void Ternary(int, int);
void whileLoop(int);
void Looping(int);

int *p, pointing;

int main()
{
    int num1 = 1;
    int num2 = 2;
    int num3 = 3, num4 = 4;
    // cout <<"Test"<< myNum;
    //cout << "\nsum:" <<(num1+num4);
    //Tester(num3, num4);
    //Ternary(num1, num2);
    //whileLoop(num1);
    // Looping(10);

    int *point, pointing = 1;
    //cout<< &pointing; //prints out address of pointing
    point = &pointing;

    cout<<"Address of pointing: "<<&pointing<<endl;
    cout<<"Address of pointint: "<<point<<endl;
    cout<<"Address of point: "<<&point<<endl;
    cout<<"Value of pointing: "<<*p;
    
}

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

void whileLoop(int a){
   do{
      cout<<"\nValue of num: "<<a;a++;
   }while(a <=6);
}

void Looping(int a){
    for (int i = 0; i < a; i++)
    {
        if (i == 5){
            continue;
        }
        cout<< "\nNumber is at "<< i;
    }
    
}