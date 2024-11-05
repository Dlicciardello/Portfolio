//Dominick Licciardello
//calculates the cost for a bounce house rental

#include <stdio.h>

int main()
{
//Declare Variables
int num, days, hours, ans;
ans = 0;

//If statement for selecting valid bounce house number
printf("Please select from four bounce houses: 1,2,3, and 4\nEnter bounce house selection: ");
scanf("%d", &num);
if ((0 < num) == (num < 5)){

printf("Enter days:");
scanf("%d", &days);
printf("Enter hours:");
scanf("%d", &hours);

//if statement for valid hours number
if ((hours <0)==(hours >24))
{

//switch case to detail calulations of price by selected house
switch (num)
{
    case 1:
        if (days ==0){
            if (hours > 5){
                ans = 80;
                printf("Charge($): %d\n", ans);
            }
            else if (hours <3){
                ans = 58;
                printf("Charge($): %d\n", ans);
            }
            else{
                ans = 58 + ((hours-3) * 8);
                printf("Charge($): %d\n", ans);
            }
        }
        else if (hours >10){
            ans = ((days+1) * 80);
            printf("Charge($): %d\n", ans);
        }
        else{
            ans = (hours*8) +(days *80);
            printf("Charge($): %d\n", ans);
        }
        break;
    case 2:
        if (days ==0){
            if (hours > 5){
                ans = 120;
                printf("Charge($): %d\n", ans);
            }
            else if (hours <3){
                ans = 85;
                printf("Charge($): %d\n", ans);
            }
            else{
                ans = 85 + ((hours-3) * 12);
                printf("Charge($): %d\n", ans);
            }
        }
        else if (hours >10){
            ans = ((days+1) * 120);
            printf("Charge($): %d\n", ans);
        }
        else{
            ans = (hours*12) +(days *120);
            printf("Charge($): %d", ans);
        }
        break;
    case 3:
        if (days ==0){
            if (hours > 6){
                ans = 150;
                printf("Charge($): %d\n", ans);
            }
            else if (hours <3){
                ans = 100;
                printf("Charge($): %d\n", ans);
            }
            else{
                ans = 100 + ((hours-3) * 15);
                printf("Charge($): %d\n", ans);
            }
        }
        else if (hours >10){
            ans = ((days+1) * 150);
            printf("Charge($): %d\n", ans);
        }
        else{
            ans = (hours*15) +(days *150);
            printf("Charge($): %d\n", ans);
        }
        break;
    case 4:
        if (days ==0){
            if (hours > 6){
                ans = 250;
                printf("Charge($): %d\n", ans);
            }
            else if (hours <3){
                ans = 180;
                printf("Charge($): %d\n", ans);
            }
            else{
                ans = 180 + ((hours-3) * 20);
                printf("Charge($): %d\n", ans);
            }
        }
        else if (hours >12){
            ans = ((days+1) *250);
            printf("Charge($): %d\n", ans);
        }
        else{
            ans = (hours*20) +(days *250);
            printf("Charge($): %d\n", ans);
        }
        break;
    default:
        break;
            }

        }
else{
    printf("Invalid hours.\n");
            }
    }
else{
    printf("Invalid selection. Select from 1 to 4.\n");
        }
    return 0;
}