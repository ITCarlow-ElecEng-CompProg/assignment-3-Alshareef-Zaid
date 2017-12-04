/**
Zaid H Alshareef
C00210415
25/09/2017
3.Standard Deviation Calculator
*/

#include <iomanip>
#include <iostream>
#include <math.h>


    using namespace std;


    /**Main function*/
    int main()
{

    /**Variable declaration*/
    int i,n;
    double s,num[10],average,sum=0;

    cout << "Standard Deviation Calculator\n" << endl;


    for(i=0; i<10; i++)
    {
    /**enter 10 values*/
    cout << "Please enter number " << i+1 << ":";
    cin >> num[i];

    /**equation*/
    sum = sum + num[i];
    }
    /**equation for Average*/
    average = sum/10;

    cout << "\nThe average is: " << average << endl;

    for (n=0; n<10; n++)
    {
    /**equation for sample standard deviation*/
    s=s+pow((num[n]-average),2);
    }

    s=sqrt(s/(10-1));

    /**write result with 2 decimal*/
    cout.precision(3);

    /**Display the result for Standard deviation*/
    cout << "\nThe standard deviation is:" << s << endl;

    return 0;
}
