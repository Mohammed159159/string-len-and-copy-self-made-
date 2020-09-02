#include<stdio.h>
#include<stdlib.h>
int len(char string[]);
char copy(char string1[], char string2[]);

int main()
{
    char string[1000];
    printf("Enter a String: ");
    scanf("%[^\n]s", string);
    int length = len(string);
    printf("\nThe length of the en tered string is: %d", length);

    char *string2 = (char *) malloc(length); // I could have used the length function here, but in VS it is considered illegal

    copy(string, string2);

    printf("\nThat string is coppied into a new one: %s", string2);

}

int len(char string[])
{
    int len = 1;
    int spaces = 0;
    for (len; string[len] != '\0'; len++) {
        if (string[len] == 32)
            spaces++;
    }

    return len; //- spaces;
}

char copy(char string1[], char string2[])
{

    for (int i = 0, n = len(string1); i < n; i++)
        string2[i] = string1[i];
    return *string2;
}