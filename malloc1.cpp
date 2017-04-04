//
//  main.cpp
//  test4
//
//  Created by SeongUkCho on 2017. 3. 22..
//  Copyright © 2017년 ghatdev. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **arr;
    
    int size;
    
    scanf("%d", &size);
    
    
    
    arr = (int**)malloc(sizeof(int*)*size);
    
    for (int i=0;i<size;i++)
    {
        arr[i] = (int*)malloc(sizeof(int)*size);
    }
    
    
    
    int x=-1,y=0;
    int d = 1;
    
    int num = 1;
    
    int l = size;
    
    while (num<=size*size)
    {
        int i;
        
        for(i=0;i<l;i++,num++)
        {
            x+=d;
            arr[x][y] = num;
        }
        
        l--;
        
        for(i=0;i<l;i++,num++)
        {
            y+=d;
            arr[x][y] = num;
        }
        
        d*=-1;
    }
    
    
    
    
    int i,j;
    
    for (i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    
    
    return 0;
}
