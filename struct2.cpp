//
//  main.cpp
//  test6
//
//  Created by SeongUkCho on 2017. 4. 4..
//  Copyright © 2017년 ghatdev. All rights reserved.
//

#include <stdio.h>

typedef struct character
{
    int c_pos_x;
    int c_pos_y;
    
}character;


int main(void)
{
    character c;
    int arr[4][4]={{0,},{0,}};
    
    c.c_pos_x = 0;
    c.c_pos_y = 0;
    
    while(true)
    {
        scanf("%d %d",&c.c_pos_x,&c.c_pos_y);
        
        if(c.c_pos_x<0 || c.c_pos_y <0)
        {
            break;
        }
        
        arr[c.c_pos_x][c.c_pos_y] = 1;
        
        for (int y = 0; y<4;y++)
        {
            for (int x=0;x<4;x++)
            {
                printf("%d ",arr[x][y]);
            }
            printf("\n");
        }
        
        arr[c.c_pos_x][c.c_pos_y] = 0;
    }
    
    return 0;
}
