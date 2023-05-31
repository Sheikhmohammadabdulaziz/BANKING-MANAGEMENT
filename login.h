
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100
struct info    ///structure///
{
    int amount;
    int wit_amount;
    int trn_amount;
    int dip_amount;
    double acu_num;
    char username[MAX_LENGTH];
    char password[MAX_LENGTH];

};

 int login()
{
    /// Open the data file
    FILE* file = fopen("information.txt", "r");
    if (file == NULL) {
        printf("Error opening data file.\n");
        return 0;
    }
    struct info person;
    person.amount=1000000;
    person.acu_num=23111130;

    /// Read username and password from file
    fscanf(file, "%s %s",person.username , person.password);

    /// Close the data file
    fclose(file);

    ///Get username and password from the user
    char inputUsername[MAX_LENGTH];
    char inputPassword[MAX_LENGTH];
    while(1)
    {
    printf("\n\t\tENTER USERNAME: ");
    scanf("%s",inputUsername);

    printf("\n\t\tENTER PASSWORD: ");
    scanf("%s",inputPassword);

    ///Compare the input with stored username and password
    if (strcmp(person.username,inputUsername) == 0 && strcmp(person.password,inputPassword) == 0)
    {
        
        printf("<\n\n\t\tLogin successful! please wait>\n");
        printf("\n\t\tUploading the next page...\n");
        printf("\n----------------------------------------------------------\n");

    }

    else

    {
        printf("\n----------------------------------------------------------\n");
        printf("\n<Invalid username or password>....\n");
        printf("\n<please try again>....");
        printf("\n----------------------------------------------------------\n");
      

    }
    }

}

