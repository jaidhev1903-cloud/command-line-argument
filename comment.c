#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int m1, m2, m3, m4, m5, total;
    float average;
    char name[30];

    if (argc != 7)
    {
        printf("usage: ./a.out NAME M1 M2 M3 M4 M5\n");
        return 1;
    }

    strcpy(name, argv[1]);

    m1 = atoi(argv[2]);
    m2 = atoi(argv[3]);
    m3 = atoi(argv[4]);
    m4 = atoi(argv[5]);
    m5 = atoi(argv[6]);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;

    printf("\n-----STUDENT REPORT-----\n");
    printf("Student Name : %s\n", name);
    printf("MARK 1       : %d\n", m1);
    printf("MARK 2       : %d\n", m2);
    printf("MARK 3       : %d\n", m3);
    printf("MARK 4       : %d\n", m4);
    printf("MARK 5       : %d\n", m5);
    printf("TOTAL        : %d\n", total);
    printf("AVERAGE      : %.2f\n", average);

    return 0;
}
