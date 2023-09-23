//Check if a character is a vowel or a consonant.

#include<stdio.h>
void main()
{
    char ch;

    printf("\nEnter any charecter to check weather it's vowel or consonant");

    printf("\nYour Charecter :");
    scanf("%c",&ch);

    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    {
        printf("\n\nYour Entered charecter is vowel.");
    }
    else
    {
        printf("\n\nYour Entered charecter is consonant.");
    }
}