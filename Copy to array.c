//
//  main.c
//  Copy Array
//
//  Created by APPLE on 9/27/18.
//  Copyright © 2018 APPLE. All rights reserved.
//

#include<stdio.h>

int main() {
    int arr1[30], arr2[30], i, num;
    
    printf("\nEnter no of elements :");
    scanf("%d", &num);
    
    printf("\nEnter the values :");
    for (i = 0; i < num; i++) {
        scanf("%d", &arr1[i]);
    }
    
    /* Copying data from array 'a' to array 'b */
    for (i = 0; i < num; i++) {
        arr2[i] = arr1[i];
    }
    
    //Printing of all elements of array
    printf("The copied array is :");
    for (i = 0; i < num; i++)
        printf("\narr2[%d] = %d", i, arr2[i]);
    
    return (0);
}
