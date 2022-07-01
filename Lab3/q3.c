#include <stdio.h>

void main()
{
    int number,ones,tens;
    printf("Enter two digit numbers: ");
    scanf("%d", &number);
    switch(number){
        case 0:     printf("Zero");       break;
        case 10:    printf("Ten");        break;
        case 11:    printf("Eleven");     break;
        case 12:    printf("Twelve");     break;
        case 13:    printf("Thirteen");   break;
        case 14:    printf("Fourteen");   break;
        case 15:    printf("Fifteen");    break;
        case 16:    printf("Sixteen");    break;
        case 17:    printf("Seventeen");  break;
        case 18:    printf("Eighteen");   break;
        case 19:    printf("Nineteen");   break;
    }
    tens = number / 10;
    switch(tens){
        case 2: printf("Twenty");   break;
        case 3: printf("Thirty");   break;
        case 4: printf("Fourty");   break;
        case 5: printf("Fifty");    break;
        case 6: printf("Sixty");    break;
        case 7: printf("Seventy");  break;
        case 8: printf("Eighty");   break;
        case 9: printf("Ninety");   break;
    }
    ones = number % 10;
    if(ones > 0){
        if(tens > 2){
            printf(" ");
            switch(ones){
                case 1: printf("One");      break;
                case 2: printf("Two");      break;
                case 3: printf("Three");    break;
                case 4: printf("Four");     break;
                case 5: printf("Five");     break;
                case 6: printf("Six");      break;
                case 7: printf("Seven");    break;
                case 8: printf("Eight");    break;
                case 9: printf("Nine");     break;
            }
        }
    }
}
