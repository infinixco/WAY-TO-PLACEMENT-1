//
//  main.c
//  CPY DMA
//
//  Created by APPLE on 11/1/18.
//  Copyright © 2018 APPLE. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s1[20];
    char s2[20];
    int result;
    printf("\nEnter the string");
    gets(s1);
    strcpy(s2,s1);
    strrev(s2);
    result=strcmp(s1,s2);
    if(result==0)
        printf("\nIt is a palindrome string");
    else
        printf("\n It is not a palindrome string");
        
}
