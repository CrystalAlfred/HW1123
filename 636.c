#include<stdio.h>
#include<stdlib.h>

void str_reverse(char str[]){
    if(*str!='\0'){
        str_reverse(str+1);
        printf("%c",*str);
    }
}


int main(){
    char carray[50]="hellow world!";
    str_reverse(carray);   
    system("pause");
}