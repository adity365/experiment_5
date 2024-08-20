## EXPERIMENT 5
# AIM
To study and implement C++ decision making statements

# SOFTWARE
VS CODE

# THEORY
if statement:

Executes a block of code if a condition is true.
Syntax: if (condition) { code }


if-else statement:

Executes one block if the condition is true, another if it's false.
Syntax: if (condition) { code1 } else { code2 }


else-if ladder:

Checks multiple conditions in sequence.
Syntax: if (condition1) { } else if (condition2) { } ... else { }


switch statement:

Selects one of many code blocks to execute based on a variable's value.
Useful for multiple cases of a single variable.
Syntax: switch(variable) { case value1: code1; break; case value2: code2; break; ... default: code; }

# CODE
```
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
}
```
# OUTPUT 
![image](https://github.com/user-attachments/assets/e24e9584-4ffd-4e73-aad1-afc058560abc)

# CONCLUSION

Learnt how to use if,else and else if statement in c++.
