/********************************************************
 * CS 103 PA 1: Commas
 * Name:
 * USC email:
 * Comments (you want us to know):
 *
 * Description:
 *  Displays a 64-bit integer (long long) with
 *   commas for thousands, millions, billions, etc.
 *
 * ** ABSOLUTELY NO ARRAYS, NO `string`, NO `vector` **
 *  usage is allowed.
 *
 * Instead, you may only declare:
 *
 *    bool,
 *    int, or
 *    int64_t (long long)
 *
 *  The only library function allowed is pow(base, exp)
 *    defined in the <cmath> library.
 *
 *
 ********************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cout << "Enter an integer:" << endl;
    
    /* Your code here */
    
    cin >> n;
    
    if(n<0) {
        n=n*-1;
        cout<<"-";
        
    }
    
    long long int x = n;
    int counter=-1;
    
    while (x!=0) {
      x= x/10;
      ++counter;
    }
    
    int power = counter/3;
    power = power *3;
    
    if (counter>3) {
        long long int num1 = n / (long long int) (pow (10, power));
        long long int divisor = num1 * pow (10, power);
        cout << num1;
        cout << ",";
    
        for (int i=power-3; i>=3; i=i-3) {
            long long int numa = n % divisor;
            long long int numx = numa/ (long long int) (pow (10, i));
            if (numx<10) {
                cout << "00" <<numx;
            }
            else if (numx<100) {
                cout << "0" <<numx;
            }
            else {
                cout << numx;
            }
            cout << ",";
            divisor = divisor + (numx * (long long int) (pow (10, i)));
            }
        
            long long int n1 = n % divisor ;
            if (n1<10) {
            cout << "00" << n1;
            }
            else if (n1<100) {
                cout << "0" << n1;
            }
            else {
                cout << n1;
            }
        }
    else if (counter<=3) {
            cout << n;
        
    }
    /* End of your code */
    return 0;
    
}

