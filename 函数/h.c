#include <stdio.h>
int ry(int year){
    if(year%400==0)
        return 2;
    else
    {
        if(year%4==0&&year%100!=0)
            return 2;
        else
            return 0;
    }
}   
int getDays(int year, int month, int day){
    int isry = ry(year), days;
    if (month%2!=0)
        days = (month-1)*61/2-30;
    else
        days = month*61/2-30;

    if (isry==2){
        if (month==2)
            return 31+day;
        else        
            return days+29+day;   
    }
    else{
        if (month==2)
            return 31+day;
        else
            return days+28+day;
    }
}
int main(){
    int year,month,day;
    scanf("%d%d%d", &year, &month, &day);
    printf("%d", getDays(year, month, day));
}