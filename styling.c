#include<stdio.h>
int main(){

char * names[] ={"Fred","Ochieng","Kusa"};

 char *bold = "\033[1m";
    char *italics = "\033[3m";
    char *underline = "\033[4m";
    char *reset = "\033[0m";

    printf("%s%s%s%s%s\n",bold,underline,italics,"Fred",reset);
    printf("         %s%s%s%s%s\n",bold,underline,italics,"Ochieng",reset);
    printf("                     %s%s%s%s%s\n",bold,underline,italics,"Kusa",reset);
    return 0;
}