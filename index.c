#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Uni
{
    char name[30];
    char city[30];
    float percentage;
    char programs[10][20];
};

// global variables
float user_percentage;
char user_city[20];
char user_program[20];
int count = 12;
struct Uni universities[20];

#include "myfunctions.h"

int main()
{

    //  Writing
    // struct Uni ned;
    // printf("Enter Uni Name: ");
    // scanf(" %[^\n]s", ned.name);
    // printf("Enter City Name: ");
    // scanf(" %[^\n]s", ned.city);
    // printf("Enter Percentage: ");
    // scanf("%f", &ned.percentage);
    // printf("Enter programs Name: ");
    // scanf(" %[^\n]s", ned.programs[0]);
    // printf("Enter programs Name: ");
    // scanf(" %[^\n]s", ned.programs[1]);
    // printf("Enter programs Name: ");
    // scanf(" %[^\n]s", ned.programs[2]);
    // printf("Enter programs Name: ");
    // scanf(" %[^\n]s", ned.programs[3]);
    // printf("Enter programs Name: ");
    // scanf(" %[^\n]s", ned.programs[4]);
    // printf("Enter programs Name: ");
    // scanf(" %[^\n]s", ned.programs[5]);
    // printf("Enter programs Name: ");
    // scanf(" %[^\n]s", ned.programs[6]);
    // printf("Enter programs Name: ");
    // scanf(" %[^\n]s", ned.programs[7]);
    // FILE *ptr;
    // ptr = fopen("myfile.txt", "ab");
    // fwrite(&ned, sizeof(struct Uni), 1, ptr);
    // fclose(ptr);

    render();

    printf("Enter your percentage: ");

    if (0 == scanf("%f", &user_percentage))
    {
        printf("Invalid Input");
        exit(0);
    }
    else if (percentagevalidator(user_percentage))
    {
        printf("Invalid Input");
        exit(0);
    }
    printf("Enter your desired city: ");
    scanf(" %[^\n]s", user_city);

    if ((strcmp(strlwr(user_city), "karachi")) != 0 && (strcmp(strlwr(user_city), "lahore")) != 0 && (strcmp(strlwr(user_city), "islamabad")) != 0)
    {
        printf("The City you entered is not available");
        exit(0);
    }
    printf("Enter your desired program: ");
    scanf(" %[^\n]s", user_program);
    int flag = 1;
    int i=0;
    int j=0;
    for (i = 0; i < count; i++)
    {
        
        for (j = 0; j < 8; j++)
        {
            if ((strcmp(strlwr(user_program), universities[i].programs[j])) == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag)
    {
        printf("The program you entered is not available");
        exit(0);
    }

    universitiesavailable();

    // universities check
    // for (int i = 0; i < count; i++)
    // {
    //     printf("University: %s", universities[i].name);
    //     printf("  City: %s", universities[i].city);
    //     printf("  Percentage %f\n", universities[i].percentage);
    // }

    char input;
    printf("\nEnter Universtiy first letter: ");
    scanf(" %c", &input);

    if ((strcmp(user_city, "karachi")) == 0)
    {
        karachiunis(input);
    }
    else if ((strcmp(user_city, "islamabad")) == 0)
    {
        islamabadunis(input);
    }
    else
    {
        lahoreunis(input);
    }

    merit(user_percentage);
    return 0;
}
