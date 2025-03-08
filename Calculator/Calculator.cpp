#include<iostream>
using namespace std;
double num1,num2;
int addition(int num1, int num2){
    return num1 + num2;
}
int subtraction(int num1,int num2){
    return num1 - num2;
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
        cout<<"|Advance Functions              |\n";
        cout<<"|                               |\n";
        cout<<"|5. Power                       |\n";
        cout<<"|6. Square Root                 |\n";
        cout<<"|7. Factorial                   |\n";
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