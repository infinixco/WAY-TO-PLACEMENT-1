//
//  main.c
//  2D sum
//
//  Created by APPLE on 10/4/18.
//  Copyright © 2018 APPLE. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[2][2],i,j,sum=0;
    printf("enter the elmnt");
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    
    {
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    printf("%d",sum);
    }
}
