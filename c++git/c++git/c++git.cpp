#include <iostream>
using namespace std;
int main()
{
int num1 , num2 , result  , x  ;
    char op;
    cout << "heloo enter  number1 \n";
    cin >> num1;
    cout << "heloo enter  number2 \n";
    cin >> num2;
    cout << "heloo enter  math operation  \n";
    cin >> op ;
    if (op ==  '+' )
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    else if (op == '/')
    {
        result = num1 / num2;
    }
    else
    {
        cout << "cant do that operation /n";
    }
    cout << "the reult = "<< result<<endl ;
      cout << "rate the app from 1to 10" << endl;
    cin >> x;
    cout << "thanks :-)" << endl;
    
}
