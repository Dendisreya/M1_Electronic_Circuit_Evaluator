/**
 * @file resistor.c
 * @author sreya dendi
 * @brief Electronic circuit evaluator is an application
 * @version 0.1
 * @date 2022-03-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include"resistor.h"
#include<stdio.h>
#include<string.h>
#define nItems (sizeof item_list/sizeof *item_list)
/**
 * @brief status
 * 
 */
char status = 'S'; 
enum {minimum = 3, maximum = 10};
/**
 * @brief  declaring resister code bands
 * 
 */
enum band_colors {B, BR, R, O, Y, G,Bl, V, GR, W, UN};
struct items
 {
    char *name;
    enum band_colors id;
 } item_list[] = {
    {"black", B},
    {"brown", BR},
    {"red", R},
    {"orange", O},
    {"yellow", Y},
    {"green", G},
    {"blue", Bl},
    {"violet", V},
    {"gray", GR},
    {"white", W}
};
unsigned int multiply[] = {1, 10, 100, 1000, 10000, 100000, 1000000,
     10000000, 100000000, 1000000000};

int srchItems (char *ccode);
char *strcpy2lower (char *dest, char *src); 
int scmp (char *a, char *b); 
char *sepnumber (char *s, long val); 

int main(void)
{
    int j, error = 0, mult;
    char input[minimum][maximum];
    char invalid[minimum][maximum]; 
    int colour_value[minimum];
    long total_resistance = 0; 
    char resistor_value_string[30] = "";
    do
    {
    printf("%s\n%s\n%s\n","Enter colours of resistor's bands,","beginning with band near to end", "enter colours in lowercase");
    for (j = 0; j < minimum; ++j)
    {
        printf("Color_Band %d => ", j + 1); 
        scanf("%9s",input[j]);  
        colour_value[j] = srchItems(input[j]); 
    }       
    for (j = 0; j < minimum; ++j)
    {
        if (colour_value[j] == -1)
        {
            strcpy(invalid[j], input[j]);
            error++;
        }
    }
    if (error > 0)
    {
        if (error == 1)
        {
            printf("Invalid colour band: %s\n", invalid[0]);
        }
        else if (error == 2)
        {
            printf("Invalid colour band: %s, %s\n", invalid[0], invalid[1]);
        }
        else 
        {
            printf("Invalid colour band: %s, %s, %s\n",
             invalid[0], invalid[1], invalid[2]);
        }
    }
    else
    {
        for (j = 0; j < minimum - 1; ++j)
        {
            total_resistance = (total_resistance * 10) + colour_value[j];
        }
        mult = colour_value[2];
        total_resistance *= multiply[mult];
        sepnumber (resistor_value_string, total_resistance);
        printf("Resistance value: %s -Ohms\n", resistor_value_string);
        for (j = 0; j < minimum; ++j)
        {

        }
    }
    error = 0;
    total_resistance = 0;
    for (j = 0; j < minimum; ++j)
    {
        colour_value[j] = 0;
    }
    printf("Do you want to decode another resistor?\n");
    scanf(" %c", &status);
    if (status == 'S');
    else break;
    } while (status == 'S');
    return 0;
}
int srchItems (char *ccode)
{
    int j;
    char lccode [maximum] = "";
    strcpy2lower (lccode, ccode); 
    for (int i = 0; i < (int)nItems; ++i) 
        if (*lccode == *(item_list[i].name))
            if (!scmp(item_list[i].name, lccode))
                return i;
    return -1;
}
char *strcpy2lower (char *dest, char *src)
{
    if (!src || !dest) return NULL;
    char *d = dest;
    for (; *src; src++, d++)
        if ('A' <= *src && *src <= 'Z')
            *d = *src | (1 << 5);
        else
            *d = *src;
    *d = 0;
    return dest;
}
int scmp (char *a, char *b)
{
    if (!a && !b) return 0;
    if ( a && !b) return 1;
    if (!a &&  b) return -1;
    for (; *a && *b && *a == *b; a++, b++) {}
    return *a - *b;
}
char *sepnumber (char *s, long val)
{
    char numstr[3 * maximum] = "";
    char *p = numstr;
    size_t idx = 0, len = 0;

    sprintf (numstr, "%ld", val);
    for (; *p; p++) {}
    len = p - numstr;
    p = s + 3 * maximum - 2;

    while (len--) {
        if (idx++ == 3) {
            idx = 1;
            *p-- = ' ';
        }
        *p = numstr[len];
        if (len) p--;
    }
    for (idx = 0; *p; p++, idx++) s[idx] = *p;
    s[idx] = *p;
    return s;
}
