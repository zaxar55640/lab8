#include <stdio.h>
#include <string.h>

int main() {
    int a = 100;
    char s1[a], s2[a];
    unsigned int n;
    printf("Enter two strings and n:");
    scanf("%s, %s, %i", s1);
    scanf("%s", s2);
    scanf("%i", &n);


    int compare = strncmp(s1, s2, n);
    if (compare == 0) {
        printf("s1 == s2\n");
    } else {
        printf("s1 != s2\n");
    }
    char s1copy[100];
    strcpy(s1copy, s1);

    int copy = strncpy(s1copy, s2, n);
    printf("%s\n", copy);



    char symbol;
    printf("Enter a symbol to find in S1");
    scanf(" %c", &symbol);
    char *search = strchr(s1, symbol);

    if (search == NULL)
    {printf("Character not found!\n");}
    else
    {printf("%c\n", *search);}

    char *search1 = strpbrk(s1, s2);
    printf("%c\n", *search1);


    printf("%d\n", strcspn(s1, s2));

    return 0;
}