#include<math.h>
#include<stdio.h>
double battery_data(int R, double voltage, double current, double days, double number);
int main(){

int level1;
printf("Battery required: 1. Rechargeable  2. Non-Rechargeable\n");
                            printf("Enter your option: ");
                             scanf("%d",&level1);
double voltage,days,number,current;
                            printf("Enter voltage value: ");
                            scanf("%lf",&(voltage));
                            printf("Enter no of days: ");
                            scanf("%lf",&days);
                            printf("Enter number: ");
                            scanf("%lf",&number);
                            printf("Enter the min current: ");
                            scanf("%lf",&current);
                            printf("\n");            
}
double battery_data(int R, double voltage, double current, double days, double number){
    double powerRating = (days*number*current);
    if(R == 1){
        if(voltage == 9){
            if(powerRating <= 0.2 && current<=0.01){
                printf("Lithium Coin Cell - Vol = 3V * 3, Pow Rat = 200mAH\n");
            }
            else if(powerRating <= 0.5 && current <= 0.03){
                printf("9V PPS battery - Vol = 9V, Pow Rat = 500mAH\n");
            }
            else if(powerRating <= 1 && current<=0.01){
                printf("series combination of Alkaline AAA batteries - Vol = 1.5V * 6, pow Rat = 1000mAH\n");
            }
            else if(powerRating <= 2.5 && current<=0.05){
                printf("series combination of Alkaline AA batteries - Vol = 1.5V * 6, power Rat = 2500mAH\n");
            }
            else if(powerRating <= 8 && current <= 0.1){
                printf("series combination of Alkaline C batteries - Vol = 1.5V * 6, pow Rat = 8000mAH\n");
            }
            else{
                printf("A non-rechargeable battery for the given configuration is not available\n");
            }
        }
        else if(voltage < 9 && voltage >= 1.5){
            if(remainder(voltage,3) == 0){
                if(powerRating <= 0.2 && current<=0.01){
                    printf("Lithium Coin Cell - Vol = 3V * %lf, Pow Rat = 200mAH\n", voltage/3);
                }
                else if(powerRating <= 1 && current<=0.01){
                    printf("series combination of Alkaline AAA batteries - Vol = 1.5V * %lf, power Rat = 1000mAH\n",voltage/3);
                }
                else if(powerRating <= 2.5 && current<=0.05){
                    printf("series combination of Alkaline AA batteries - Vol = 1.5V * %lf, pow Rat = 2500mAH\n",voltage/3);
                }
                else if(powerRating <= 8 && current <= 0.1){
                    printf("series combination of Alkaline C batteries - Vol = 1.5V * %lf, pow Rat = 8000mAH\n",voltage/3);
                }
                else{
                    printf("A non-rechargeable battery for the given configuration is not available\n");
                }
            }
            else if(remainder(voltage,1.5) == 0){
                if(powerRating <= 1 && current<=0.01){
                    printf("series combination of Alkaline AAA batteries - Vol = 1.5V * %lf, pow Rat = 1000mAH\n",voltage/1.5);
                }
                else if(powerRating <= 2.5 && current<=0.05){
                    printf("series combination of Alkaline AA batteries - Vol = 1.5V * %lf, pow Rat = 2500mAH\n",voltage/1.5);
                }
                else if(powerRating <= 8 && current <= 0.1){
                    printf("series combination of Alkaline C batteries - Vol = 1.5V * %lf, pow Rat = 8000mAH\n",voltage/1.5);
                }
                else{
                    printf("A non-rechargeable battery for the given configuration is not available\n");
                }
            }
        }
        else{
            printf("Enter Vol b/w 1.5V to 9V, restart the program\n");
        }
    }
    
    else if(R == 2){
        if(voltage >= 3.7){
            if(remainder(voltage,3.7) == 0 || remainder(voltage,1.5) == 0){
                if(powerRating <= 6){
                    printf("series combination of Lithium ion batteries - Vol = 3.7V or 1.5V, pow Rat = 6000mAH\n");
                }
                else{
                    printf("A Rechargeable battery is not available\n");
                }
            }
            else if(remainder(voltage,1.2) == 0){
                if(powerRating <= 2.7){
                    printf("series combination of NiCd or NiMH batteries - Voltage = 1.2V*%lf, pow Rat = 2700mAH\n",remainder(voltage,1.2));
                }
                else{
                    printf("A Rechargeable battery not available\n");
                }
            }
        }
    }
    else{ 
        printf("Invalid Input, restart the program\n");
    }
    return powerRating;
}