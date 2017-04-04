//
//  main.cpp
//  test3
//
//  Created by SeongUkCho on 2017. 3. 22..
//  Copyright © 2017년 ghatdev. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int x[] = {1,2,3,4,5,6};
    
    int *p;
    
    p = x+2;
    
    printf("%d\n", (*(p+3)) * (*(p-2)));
    
    return 0;
}
