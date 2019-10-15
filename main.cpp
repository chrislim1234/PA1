/********************************************************
 * CS 103 PA 1: Abundant numbers
 * Name: Chris Lim
 * USC email: chrislim@usc.edu
 * Comments (you want us to know):
 *
 * Description:
 *   Displays the top 3 most "abundant" (see writeup)
 *   numbers in the input sequence.  The input sequence
 *   is assumed to be valid natural numbers separated
 *   by spaces and ending with 0.
 *
 *   ABSOLUTELY NO ARRAY or `string`/`vector`/etc. usage
 *   is allowed!
 
 *   You may only declare: bool, int, or unsigned int
 *   No library functions (beyond cin/cout) are allowed.
 *
 *   You may NOT modify any of the given template code.
 *   This ensures our automated checkers can parse your
 *   output.  Failure to follow this direction will lead
 *   to a score of 0 on this part of the assignment.
 ********************************************************/

#include <iostream>
using namespace std;

int main()
{
    // n1 is the number with the highest abundance, a1
    // n2 is the number with the 2nd-highest abundance, a2
    // n3 is the number with the 3rd-highest abundance, a3
    unsigned int n1 = 0, n2 = 0, n3 = 0;
    int a1 = 0, a2 = 0, a3 = 0;
    
    // num_abundant counts how many numbers in the input
    // sequence are abundant
    int num_abundant = 0;
    
    cout << "Enter a sequence of natural numbers, separated by spaces, ";
    cout << "and ending with 0."<< endl;
    
    /* Your code here */
    int input;
    int sum=0;
    unsigned int holder;
    int holdersum;
    while (input!=0) {
        cin>> input;
        for (int j=1; j<input; j++) {
            
            if (input%j==0) {
                sum= sum + j;
            }
        }
        
    if (sum>input) {
        num_abundant++;
        if (sum>a1) {
            holder = n1;
            holdersum =a1;
            n1 = input;
            a1 = sum;
            n3 = n2;
            a3 = a2;
            n2 = holder;
            a2 = holdersum;
        }
        else if (sum>a2) {
            holder = n2;
            holdersum =a2;
            n2 = input;
            a2 = sum;
            n3 = holder;
            a3 = holdersum;
        }
        else if (sum>a3) {
            n3 = input;
            a3 = sum;
            
        }
    }
     sum=0;
    
    }
    
    /* End of your code */
    
    cout << "Abundant number count: " << num_abundant << endl;
    cout << "Top 3 most abundant numbers: " << endl;
    cout << n1 << " : " << a1 << endl;
    cout << n2 << " : " << a2 << endl;
    cout << n3 << " : " << a3 << endl;
    
    
    return 0;
    
}
