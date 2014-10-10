#include <stdio.h>
#include <math.h>

double overflow(double x, double y)
{

/************************************
 * This is a function that calculates
 * the square root of the sum of two 
 * squares
 * 
 * Input: double variables x and y
 * 
 * Output: double the result of the 
 * calculation
 * 
 * In order to avoid overflow we just
 * take the largest value out.
************************************/

    if(x>y)
    {   
        t = y/x;
        return ( x * sqrt(1+t*t) );
    }
    
    t = x/y;
    return ( y * sqrt(1+t*t) );
    
}

double Taylor_Term()


int main()
{
    return 0;

}