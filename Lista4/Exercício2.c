#include <stdio.h>
#include <string.h>

//Tirar tabulações e espaços no inicio e fim da string

int count_string(char *s){
    int count = 0;
    while (s[count] != '\0') {
        count++;
    }
    return count;
}

void retirar_caracteres(char s[], int count){

    int i, j;
    char str1[count];
    
    for(i=0; i<count; i++){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
            break;
        }
    }
    int start=i;
    for(i=count; i>0; i--){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
            break;
        }
    }
    int finish=i;
    
    for(i=start, j=0; i<=finish; i++, j++){
        str1[j]=s[i];
    }

    printf("%s", str1);
}

int main(){

    char s[1000];
    fgets(s, 1001, stdin);

    int count = count_string(s);
    retirar_caracteres(s, count);

    return 0;
}