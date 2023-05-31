

int amount=1000000,wit_amount,trn_amount,dip_amount;
double  acu_num=23111130;
char username[MAX_LENGTH];
char password[MAX_LENGTH];


int main()

{
   struct info person1;
    system("color 9"); ///COLOR THE SYSTEM///
    splash_screen();
    delay(3);          ///DELAY THE SYSTERM///
    system("clear");
    system("cls");

    int choice;

    printf("\n\n \t\t\t\t\t WELCOME TO BANK 420\n");
    printf("\t\t\t\t\t---------------------\n");
    login();
    delay(2);
    system("cls");

    while(1)

    {

    menu ();
    printf("-------------------------------------------------------\n");
    printf("ENTER YOUR CHOICE :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        system("cls");
        deposit_money();
        break;
   case 2:
        system("cls");
        withdrow_money();
        break;
     case 3:
        system("cls");
        transfer_money();
        break;
    case 4:
        system("cls");
        account_details();
        break;
    case 5:
        system("cls");
        transction_details();
        break;

    case 6:
       system("cls");
        last_details();
        exit(0);
    default:
        system("cls");
        printf("\n\n..........................<INVALID CHOICE >...................\n");

        break;
    }
    }
    getch();


}
   void menu()
{
    printf("\n \t\t     WELCOME TO THE MAIN MENU\n");
    printf("\t\t    --------------------------\n");
    printf("\n\t\t[1].Deposit Money \t[2].Withdraw money \n");
    printf("\n\t\t[3].Transfer money \t[4].Account Details\n");
    printf("\n\t\t[5].Transaction details\t[6].Exit \n");
}
   void deposit_money()
{
    time_t tm;
    time(&tm);
    FILE *ptr=fopen("account.txt","a");
    printf("\n..........................Depositing...................... money\n");
    printf("------------------------------------------------------------------\n");

    printf("Enter the amount>");
    scanf("%d",&dip_amount);
    amount+=dip_amount;
    printf("Money deposit.\n");
    fprintf(ptr,"$%d Has been deposited in the account\n",dip_amount);
    fprintf(ptr,"Date /time of the transaction %s",ctime(&tm));
    printf("CURRENT BALANCE:$%d\n",amount);
    fclose(ptr);
    printf("---------------------------------------\n");
    printf("\nEnter any key to continue.........\n");

    getch();

    }
    void withdrow_money()
    {
        time_t tm;
        time(&tm);
        FILE *ptr=fopen("account.txt","a");
        printf("\n......................Withdrowing money...............\n");
        printf("--------------------------------------------------------\n");
        printf("Enter the amount:");

        scanf("%d",&wit_amount);
        if(wit_amount>amount)
        {
            printf("You dont have sufficient balance.");
        }
        else

        {
        amount-=wit_amount;
        printf("MONEY WITHDROWN \n");
        fprintf(ptr,"$%d Has been withdrow from the account\n",wit_amount);
        fprintf(ptr,"Date /time of the transaction %s",ctime(&tm));
        printf("CURRENT BALANCE :$%d\n",amount);}
        fclose(ptr);
        printf("----------------------------------------\n");
        printf("\nEnter any key to continue.........\n");

        getch();
    }
    void transfer_money()

    {
        int ac;
        time_t tm;
        time(&tm);
        FILE *ptr=fopen("account.txt","a");
        printf("\n......................TRANFARING MONEY.................\n");
        printf("-----------------------------------------------------------\n");


        printf("Enter the transfer amount.");
        scanf("%d",&trn_amount);
        printf("Enter the account number you want to tranfer:");
        scanf("%d",&ac);
        if(amount<trn_amount)
        {
            printf("You dont have sufficient banance\n");
        }

        else

        {
        amount-=trn_amount;
        printf("Money transfered \n");
        printf("current balance:$%d\n",amount);
        fprintf(ptr,"$%d Has been transfer from the account\n",trn_amount);
        fprintf(ptr,"Date /time of the transaction %s",ctime(&tm));


        }
        fclose(ptr);
        printf("----------------------------------------\n");
        printf("\nEnter any key to continue.........\n");

          getch();
    }

    void account_details()

    {
        printf("\n......................... ACCOUNT DETAILS.............\n");
        printf("---------------------------------------------------------\n");
        printf("\n NAME :SHEIKH MOHAMMAD ABDUL AZIZ \n");
        printf("\n ACCCOUNT NMBER :%.0lf\n",acu_num);
        printf("\n TOTAL BALANCE :$%d\n",amount);
        printf("-------------------------------------\n");
        printf("\n press any key to continue..........\n");
        getch();
    }

         void transction_details()

    {
         FILE *ptr=fopen("account.txt","r");
         char c=fgetc(ptr);
         if(feof(ptr))

         {
             printf("No recent transction.\n");

         }
           else
        {
            printf("\n \tTRANSCTION DETAILS.....\n");
            printf("------------------------------------\n");

            while(c!=EOF)

            {
                printf("%c",c);
                c=fgetc(ptr);
            }
            printf("\n---------------------------------------\n");
            printf("\nEnter any key to continue.........\n");


         }      getch();
    }

       void last_details()

    {
        printf("\n\nNAME :SHEIKH MOHMMAD ABDUL AZIZ\n");
        printf("\nACCCOUNT NMBER :%.0lf\n",acu_num);
        printf("\nTOTAL BALANCE :%d\n",amount);
        printf("--------------------------------------\n");
        printf("\npress any key to continue..........\n");
        getch();
    }

