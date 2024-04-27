#include <stdio.h>
#include <stdlib.h>
//26-toUpperCaseV2
void toUpperCaseV2(char character);

int main()
{
    char ch;
    printf("\nInput ch: ");
    scanf("%c", &ch);
    fflush(stdin);
    toUpperCaseV2(ch);

    return 0;
}

void toUpperCaseV2(char character){
    if(character >= 97 && character <= 122){
        character -= 32;
    }
    printf("\nTo Upper Case: %c", character);
}
