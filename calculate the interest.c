//
//  main.c
//  Calculate The Interst
//
//  Created by APPLE on 23/08/18.
//  Copyright © 2018 APPLE. All rights reserved.
//

#include <stdio.h>

int main()
{
    float principle, time, rate, SI;
    
    printf("Enter principle amount: ");
    scanf("%f", &principle);
    
    printf("Enter time: ");
    scanf("%f", &time);
    
    printf("Enter rate: ");
    scanf("%f", &rate);
    
    SI = (principle * time * rate) / 100;
    
    printf("Simple Interest = %f", SI);
    
    return 0;
}
