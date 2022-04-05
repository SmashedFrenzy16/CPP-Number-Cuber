#include <iostream>

using namespace std;

double cuber(double num) {

    double result = num * num * num;

    return result;
}

int main()
{

    double numInput;

    cout << "Enter a number to cube (integer or double): ";
    cin >> numInput;

    double answer = cuber(numInput);

    cout << answer << endl;




    return 0;
}