#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concat(char *s1, char *s2, char *s3);

char *concat(char *s1, char *s2, char *s3)
{
    //s1 s2 크기만큼
    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);
    char *s4 = (char *)malloc(len1 + len2 + 1); 
    strcpy(s4,s1);
    strcat(s4,s3);
    // this doesnt work. I think it would work by just adding another string with space bar so I tell the person to type enter?
    // 뛰어쓰기 + 숙제로
    strcat(s4,s2);
    return s4;
}

int main(void)
{
    char str1[100], str2[100], *combine;
    char str3[2] = "\t";

    printf("Get the words you would like to combine: ");
    scanf("%s %s", str1, str2); //hello, andy

    combine = concat(str1, str2, str3); //dk why we need *
    printf("%s", combine);

    return 0;

}
