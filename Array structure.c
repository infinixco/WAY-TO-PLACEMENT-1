//
//  main.c
//  Array structure
//
//  Created by APPLE on 11/13/18.
//  Copyright © 2018 APPLE. All rights reserved.
//

#include <stdio.h>

struct friend
{
    int phoneno;
    char name[10];
    int hno;
    
}s[5];
int main()
{
    int i;
    for(i=0;i<5;i++)
        scanf("%s%d%d",s[i].name,&s[i].phoneno,&s[i].hno);
        for(i=0;i<5;i++)
            printf("%s%d%d\n",s[i].name,&s[i].phoneno,&s[i].hno);
}
