// Aditya Agarwal
// 23070123162
# include <iostream>
using namespace std;

int main(){
    int a;
    int b; 
    int c;
    cout << "Enter the value of first number " << endl;
    cin >> a;

    cout << "Enter the value of second number " << endl;
    cin >> b;

    cout << "Enter the value of third number " << endl;
    cin >> c;

    if(a>b && a > c){
        cout << "First number entered is the largest " << endl;
    }
    else if( b>a && b>c){
        cout << "Second number entered is the largest " << endl;
    }
    else{
        cout << "Third number entered is the largest " << endl;
    }
     //switch case
    cout<<"switch case"<<endl;
    int ch;
    float ans;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Press 1 for addition."<<endl;
    cout<<"Press 2 for subtraction. "<<endl;
    cout<<"Press 3 for multiplication. "<<endl;
    cout<<"Press 4 for division"<<endl;
    cout<<"Enter your choice: ";
    cin>>ch;

    switch (ch)
    {
    case 1:
    {
        ans = a + b;
        cout<<"Sum: "<<ans;
        break;
    }

    case 2:
    {
        ans = a - b;
        cout<<"Subtraction: "<<ans;
        break;
    }
    
    case 3:
    {
        ans = a * b;
        cout<<"Product: "<<ans;
        break;
    }

        case 4:
    {
        ans = a / b;
        cout<<"Division "<<ans;
        break;
    }

    default:
    {
        cout<<"INVALID INPUT";
    }
        break;
    }
}