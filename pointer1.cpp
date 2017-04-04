//
//  main.cpp
//  test2
//
//  Created by SeongUkCho on 2017. 3. 22..
//  Copyright © 2017년 ghatdev. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    
    int *p = arr;
    int temp;
    
    // *p,*p++,*p—,(*p)++,(*p)—
    
    temp = *p;
    printf("%d\n", temp);
    
    temp = *p++;
    printf("%d\n", temp);
    
    temp = *p--;
    printf("%d\n", temp);

    temp = (*p)++;
    printf("%d\n", temp);

    temp = (*p)--;
    printf("%d\n   ", temp);
    
    return 0;
}
