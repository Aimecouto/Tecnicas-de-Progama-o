#include <stdio.h>
//Transformar todas as letras em maiusculas

#include <stdio.h>

void to_upper_case(char str[], char str1[]) {
    int i = 0;

    while (str[i]!='\0' && str[i]!='\n') {
        if (str[i]>='a' && str[i]<='z') {
            str1[i] = str[i] - ('a' - 'A');
        } else {
            str1[i] = str[i];
        }
        i++;
    }
    str1[i] = '\0';
    printf("String em maiusculas: %s\n", str1);
}

int main() {
    char str[1000], str1[1000];

    fgets(str, 1000, stdin);

    to_upper_case(str, str1);

    return 0;
}
