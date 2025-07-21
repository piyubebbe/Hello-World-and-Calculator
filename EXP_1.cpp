//Piyush Pawar
//24070123145
//B3

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, World! \n"  ;

    float n, m, sum, sub, div, mul; 
    cout << "Enter the first number here: ";
    cin >> n ;
    cout << "Enter the second number here: ";
    cin >> m ;
    sum = n + m; 
    sub = n - m;
    div = n / m;
    mul = n * m;
    cout << n << " + " << m << " = " << sum << endl;
    cout << n << " - " << m << " = " << sub << endl;
    cout << n << " / " << m << " = " << div << endl;
    cout << n << " * " << m << " = " << mul << endl;

    return 0;
}