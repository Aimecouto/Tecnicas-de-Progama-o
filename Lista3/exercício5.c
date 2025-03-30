#include <stdio.h>
//Transformar todas as letras em minúsculas

#include <stdio.h>

void to_lower_case(char str[], char str1[]) {
    int i = 0;

    while (str[i]!='\0' && str[i]!='\n') {
        if (str[i]>='A' && str[i]<='Z') {
            str1[i] = str[i] + ('a'-'A');
        } else {
            str1[i] = str[i];
        }
        i++;
    }
    str1[i] = '\0';
    printf("\n%s\n", str1);
}

int main() {
    char str[1000], str1[1000];

    fgets(str, sizeof(str), stdin);

    to_lower_case(str, str1);

    return 0;
}
