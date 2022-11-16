#include <stdio.h>

int main()
{
    int i, unit;
    float value;
    do{
        i = 0;
        printf("Enter the value for conversion:\n");
        scanf("%f", &value);

        printf("Select Unit:\n1 for km to miles\n2 for inches to foot\n3 for cm to inches\n4 for pound to kgs\n5 for inches to meters\n");
        scanf("%d", &unit);

        switch(unit){
            case 1:
                printf("%f km is %f miles\n", value, value * 0.62137);
                break;
            case 2:
                printf("%f inches is %f foot\n", value, value / 12);
                break;
            case 3:
                printf("%f cm is %f inches\n", value, value * 0.393701);
                break;
            case 4:
                printf("%f pound is %f kgs\n", value, value * 0.45359237);
                break;
            case 5:
                printf("%f inches is %f meter\n", value, value * 0.0254);
                break;
            default:
                printf("Invalid Input\n");
        }

        printf("Enter 0 to continue the program and 1 to terminate the program\n");
        scanf("%d", &i);

    } while(i == 0);
    return 0;
}
