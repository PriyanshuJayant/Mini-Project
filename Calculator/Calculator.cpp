#include<iostream>
#include<cmath>
using namespace std;
double num1,num2;
int num01,num02;

//  Basic Functions
double addition(double num1, double num2){
    return num1 + num2;
}
double subtraction(double num1,double num2){
    return num1 - num2;
}
double multiplication(double num1,double num2){
    return num1 * num2;
}
double division(double num1,double num2){
    if(num2 == 0){
        cout<<"Division with 0 is not Possible!!....\n";
        return -1;
    }
    return num1 / num2;
}

// Intermediate Functions
double power(double num1,double num2){
    return pow(num1,num2);
}
double root(double num1){
    if(num1 < 0){
        cout<<"Square Root of Negative Number is not Possible!!....\n";
        return 0;
    }
    return sqrt(num1);  
}
long long int factorial(int num1){
    if (num1 < 0){
        cout<<"Factorial of Negative Number is not Possible!!.....\n";
        return 0;
    }
    int fact = 1;
    for (int i = 1; i <= num1; i++)
    {
        fact = fact * i;
    }
    return (fact);
}
int modulo(int num01,int num02){
    return num01 % num02;
}

//  Advance Functions
double radiant(double degree){
    return degree * (M_PI / 180);
}

double sin(double degree){
    return sin(radiant(degree));
}
double cos(double degree){
    return cos(radiant(degree));
}
double tan(double degree){
    return tan(radiant(degree));
}
double cot(double degree){
    return 1.0 / tan(radiant(degree));
}
double sec(double degree){
    return 1.0 / cos(radiant(degree));
}
double cosec(double degree){
    return 1.0 / sin(radiant(degree));
}

int main(){
    char choice;
    int operation;
    
    do
    {
        cout<<"_________________________________\n";
        cout<<"|           Calculator          |\n"; 
        cout<<"|_______________________________|\n";
        cout<<"|Basic Functions                |\n";
        cout<<"|                               |\n";
        cout<<"|1. Addition(+)                 |\n";
        cout<<"|2. Subtraction(-)              |\n";
        cout<<"|3. Multiplication(*)           |\n";
        cout<<"|4. Division(/)                 |\n";
        cout<<"|                               |\n";
        cout<<"|Intermediate Functions         |\n";
        cout<<"|                               |\n";
        cout<<"|5. Power                       |\n";
        cout<<"|6. Square Root                 |\n";
        cout<<"|7. Factorial                   |\n";
        cout<<"|8. Modulo                      |\n";
        cout<<"|                               |\n";
        cout<<"|Advance Functions              |\n";
        cout<<"|9. Sin                         |\n";
        cout<<"|10. Cos                        |\n";
        cout<<"|11. tan                        |\n";
        cout<<"|12. cot                        |\n";
        cout<<"|13. sec                        |\n";
        cout<<"|14. cosec                      |\n";
        cout<<"|_______________________________|\n";
        cout<<"Enter Choice:";
        cin>>operation;
        switch (operation)
        {
        case 1:
            cout<<"Enter first Number: ";
            cin>>num1;
            cout<<"Enter Second Number: ";
            cin>>num2;
            cout<<"Output: "<<addition(num1,num2)<<endl;
            break;
        case 2:
            cout<<"Enter First Number: ";
            cin>>num1;
            cout<<"Enter Second Number: ";
            cin>>num2;
            cout<<"Output: "<<subtraction(num1,num2)<<endl;
            break;
        case 3:
            cout<<"Enter First Number: ";
            cin>>num1;
            cout<<"Enter Second Number: ";
            cin>>num2;
            cout<<"Output: "<<multiplication(num1,num2)<<endl;
            break;
        case 4:
            cout<<"Enter Dividend: ";
            cin>>num1;
            cout<<"Enter Divisor: ";
            cin>>num2;
            cout<<"Quotient: "<<division(num1,num2)<<endl;
            break;
        case 5:
            cout<<"Enter First Number: ";
            cin>>num1;
            cout<<"Enter Second Number: ";
            cin>>num2;
            cout<<"Output: "<<power(num1,num2)<<endl;
            break;
        case 6:
            cout<<"Enter Number: ";
            cin>>num1;
            cout<<"Output: "<<root(num1)<<endl;
            break;
        case 7:
            cout<<"Enter Number: ";
            cin>>num1;
            cout<<"Output: "<<factorial(num1)<<endl;
            break;
        case 8:
            cout<<"Enter First Number: ";
            cin>>num01;
            cout<<"Enter Second Number: ";
            cin>>num02;
            cout<<"Output: "<<modulo(num01,num02)<<endl;
            break;
        case 9:
            cout<<"Enter a Angel: ";
            cin>>num1;
            cout<<"Sin: "<<sin(num1)<<endl;
            break;
        case 10:
            cout<<"Enter a Angel: ";
            cin>>num1;
            cout<<"Cos: "<<cos(num1)<<endl;
            break;
        case 11:
            cout<<"Enter a Angel: ";
            cin>>num1;
            cout<<"Tan: "<<tan(num1)<<endl;
            break;
        case 12:
            cout<<"Enter a Angel: ";
            cin>>num1;
            cout<<"Cot: "<<cot(num1)<<endl;
            break;
        case 13:
            cout<<"Enter a Angel: ";
            cin>>num1;
            cout<<"Sec: "<<sec(num1)<<endl;
            break;
        case 14:
            cout<<"Enter a Angel: ";
            cin>>num1;
            cout<<"Cosec: "<<cosec(num1)<<endl;
            break;
        default:
            cout<<"Please Enter Valid Input!!"<<endl;
            break;
        }
        
        cout<<"\nDo you want to Perform another operation? (Y/N)";
        cin>>choice;
    } while (choice == 'Y' || choice == 'y');
    cout<<"Calculator Exiting....";
    return 0;
}

