//
//  strcpy.c
//  strcpy
//
//  Created by Mehmet TIRPAN on 27.12.2022.
//

#include <stdio.h>

void strcopy(char *first,char *second)
{
    int i = 0;
    while (*(first+i)!='\0'){
        *(first+i) = *(second+i);
        i++;
    }
}

int main()
{
    char str1[20];
    char str2[20];
    char str3[20] = "                    ";
    
    printf("Enter First String: ");
        scanf("%s",&str1);
    printf("Enter Second String: ");
        scanf("%s",&str2);
    printf("\nEntered String: ");
    printf("%s  %s\n\n",str1,str2);

    strcopy(str3,str1);
    strcopy(str1,str2);
    strcopy(str2,str3);
    printf("Changed String: ");
    printf("%s %s \n\n",str1, str2);
    
    return 0;
}
