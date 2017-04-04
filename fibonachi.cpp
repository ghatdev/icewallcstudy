//
//  main.cpp
//  test1
//
//  Created by SeongUkCho on 2017. 3. 22..
//  Copyright © 2017년 ghatdev. All rights reserved.
//

#include <stdio.h>

int fibonacci(int p, int pre=0,int now=1)
{
    int s = now + pre;
    
    if(s<=p)
    {
        printf("%d", now);
        return fibonacci(p, now, s);
    }
    else
    {
        printf("%d", now);
        return 0;
    }
}

int main(void)
{
    int n;
    
    scanf("%d",&n);
    
    fibonacci(n);
    
    return 0;
}
