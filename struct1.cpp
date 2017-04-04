//
//  main.cpp
//  test5
//
//  Created by SeongUkCho on 2017. 4. 4..
//  Copyright © 2017년 ghatdev. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

typedef struct node
{
    char str[20];
    int num;
}node;

int main(void)
{
    node *myStruct;
    
    myStruct = (node*)malloc(sizeof(node));
    
    myStruct->num = 100;
    memcpy(myStruct->str, "just testing", sizeof("just testing"));
    
    free(myStruct);
    
    
    return 0;
}
