//
//  main.c
//  CIRCLE
//
//  Created by APPLE on 23/08/18.
//  Copyright © 2018 APPLE. All rights reserved.
//

#include <stdio.h>

int main() {
    float radius, area;
    
    printf("\nEnter the radius of Circle : ");
    scanf("%f", &radius);
    
    area = 3.14 * radius * radius;
    printf("\nArea of Circle : %f", area);
    
    return (0);
}

