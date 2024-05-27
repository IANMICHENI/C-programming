#include<stdio.h>

int main(){
    
    int birth, present, age, hours, minutes, seconds; 

    printf("\nEnter year of birth: ");
    scanf("%d", &birth);
    printf("\nEnter present year: ");
    scanf("%d", &present);

    age = present - birth;
    hours = age * 365 * 24;    
    minutes = hours * 60;      
    seconds = minutes * 60;

    printf("\n Your age is %d years", age);
    printf("\n Hours %d hours", hours);
    printf("\n Minutes %d minutes", minutes);
    printf("\n Seconds to %d seconds", seconds);
    
    return 0;
}
