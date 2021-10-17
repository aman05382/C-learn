#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "harry";
    char s2[] = "ravi";
    char s3[54];
    printf("The strcmp for s1, s2 returned %d ", strcmp(s1, s2));
    // puts(strcat(s1, s2));
    // printf("The length of s1 is %d\n", strlen(s1));
    // printf("The length of s2 is %d\n", strlen(s2));
    // printf("The reversed string s1 is: ");
    // puts(strrev(s1));
    // printf("The reversed string s2 is: ");
    // puts(strrev(s2));

    // strcpy(s3 ,strcat(s1, s2));
    // puts(s3);

    // allow user to enter two strings and then concatenate them by saying that
    // str1 is a friend of str2
    return 0;
}


// Allow user to enter two string and then concatinate by saying  (str1 is a friend of str2) 
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[10],s2[10];
    char s3[20]=" is a friend of ";
    printf("Enter your first string :\n");
    gets(s1);
    printf("Enter your second string :\n");
    gets(s2);
    puts(strcat(strcat(s1,s3),s2));
    return 0;
}
