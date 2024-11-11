/*8Samiha is learning about Harshad numbers in her mathematics class. A Harshad number (or Niven number) is an integer that is divisible by the sum of its digits.



Samiha wants to write a program that reads an integer and determines if it is a Harshad number. Help Samiha by writing a program that reads an integer input and prints whether it is a Harshad number or not.

Input format :
The input consists of an integer n.

Output format :
The output prints "n is a Harshad number" if the integer is a Harshad number.

Otherwise, it prints "n is not a Harshad number" if the integer is not a Harshad number.*/

#include <stdio.h>    
     
int main()  {    
    int num;
    scanf("%d", &num);
    int rem = 0, sum = 0, n;    
        
    n = num;    
        

    while(num > 0) {    
        rem = num%10;    
        sum = sum + rem;    
        num = num/10;    
    }    

    if(n%sum == 0)    
        printf("%d is a Harshad number", n);    
    else    
        printf("%d is not a Harshad number", n);    
     
    return 0;    
}    
