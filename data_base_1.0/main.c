#include <stdio.h>

#define N 3

struct person
{
    char name[20];
    char surname[20];
    int phone;
    int age;
}Person = {"Petr", "Petrow", 5678, 234}, b;

//struct person
//{
//    char name[20];
//    char surname[20];
//    int phone;
//    int age;
//}Person[N];


void connection(char *str, char *stp)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i ++;
    }
    int j = 0;
    while (stp[j] != '\0')
    {
        str[i + j] = stp[j];
        j ++;
    }
    str[i + j] = '\0';
}


void archieve(struct person* Person)
{
    FILE *fp;
    char *path = "/Users/w6itec6apel/Desktop/politex_programming/data_base_1.0/data_base_1.0/data_base.txt";
    
    
    fp = fopen(path, "r");
    if (fp == NULL)
    {
        printf("File not opened! Error!");
    }
    else{
        printf("File opened!\n");
    }
    
    fread(&b, sizeof(Person), 1, fp);
    printf("%s %s %d %d\n", b.name , b.surname, b.age, b.phone);
    
    
}


int main()
{
//    for (int i = 0; i < N; i ++) {
//        if (i == 0) {
//            (Person + i) ->name[0] = '\0';
//            connection((Person + i) ->name, "Alex");
//            (Person + i) ->surname[0] = '\0';
//            connection((Person + i) ->surname, "Orlow");
//            (Person + i) ->phone = 666;
//            (Person + i) ->age = 18;
//        }
//        if (i == 1) {
//            (Person + i) ->name[0] = '\0';
//            connection((Person + i) ->name, "Nazar");
//            (Person + i) ->surname[0] = '\0';
//            connection((Person + i) ->surname, "Prudnikov");
//            (Person + i) ->phone = 777;
//            (Person + i) ->age = 17;
//
//        }
//        if (i == 2) {
//            (Person + i) ->name[0] = '\0';
//            connection((Person + i) ->name, "Timur");
//            (Person + i) ->surname[0] = '\0';
//            connection((Person + i) ->surname, "Fatahov");
//            (Person + i) ->phone = 888;
//            (Person + i) ->age = 18;
//        }
//    }
//    for (int i = 0; i < N; i ++) {
//        printf("%s %s %d %d\n", (Person + i) ->name, (Person + i) ->surname, (Person + i) ->phone, (Person + i) ->age);
//    }

    
    archieve(&Person);
    return 0;
}
