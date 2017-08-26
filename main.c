//
//  main.c
//  FirstProject
//
//  Created by Shobhit Sagar on 26/08/17.
//  Copyright © 2017 Shobhit Sagar. All rights reserved.
//

#include <stdio.h>

int fact(int a)
{
    if (a <= 1)
        return 1;
        return a*fact(a-1);
}

int main() {
    // insert code here...
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int j = fact(n);
    printf("Factorial of %d is %d\n",n,j);
}
