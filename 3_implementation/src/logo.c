#include "header.h"

void Time(){
  time_t currentTime;
  time(&currentTime);
  printf("%s\n",ctime(&currentTime));
}

int cheack_out();
int main()
{
    system("color 4e");
    system("cls");
        Time();
    printf("\n\n\n\n\t\t=========================================================================\n\n\n\t\t\t\t\tBHAVYA  HARSHIKA\n\n\n\t\t\t\t\tID:165-35-2307\n\n\n\t\t\t\tHotel Management Software Using C\n\n\n\t\t==========================================================================\n");
    getch();
    login();
}
 int switc()
{
  int choice;
  printf("\n\n\t\t\t\t\t\tClick Option for Service:");
  scanf("%d",&choice);

  switch(choice)
  {
      case 1:
          login();
          break;
      default :
        printf("\n\n\n\n\t\t\t============================= Wrong Input ============================\n");
        printf("\n\t\t\t\t\t\tPlease Input Correct Key");
        getch();
        switc();
  }
  return 0;
}
int login(){
       char u_name[20];
       char password[10];
       printf("\t\t\t\t\t=======================================");
       printf("\n\t\t\t\t\t\t  Enter User Name:");
       scanf("%s",u_name);
       printf("\t\t\t\t\t=======================================");
       printf("\n\t\t\t\t\t\t  Enter Password:");
       scanf("%s",password);
       if(strcmp(u_name,"bhavya")==0)
       {
           if(strcmp(password,"12345")==0)
           {
              printf("\n\t\t\t\t\t\t\tWelcome!\n\t\t\t\t\t   You Have Successfully logged In!!!");
              printf("\n\n\t\t\t\t\t\tClick For Services....");
              getch();
                view_book();

           }
        else
           {
               printf("\n\n\t\t\t\t\tWrong Password!!!");
           }
       }
        else
            {
            printf("\n\n\n\t\t\t\t\t\t   Wrong Username!!!");
            }
   return 0;
}
void logo()
{
    printf("\n\t\t================================================================================================\n\n");
    printf("\t\t\t\t\t     $$  $$  $$$$$ $$$$$$ $$$$$$ $$\n");
    printf("\t\t\t\t\t     $$  $$ $$   $$  $$   $$     $$\n");
    printf("\t\t\t\t\t     $$$$$$ $$   $$  $$   $$$$$$ $$\n");
    printf("\t\t\t\t\t     $$  $$ $$   $$  $$   $$     $$\n");
    printf("\t\t\t\t\t     $$  $$  $$$$$   $$   $$$$$$ $$$$$$\n");

    printf("\n\t           $$$     $$$  $$$$$$  $$$     $$ $$$$$$ $$$$$$  $$$$$$ $$$     $$$ $$$$$$ $$$     $$ $$$$$$");
    printf("\n\t           $$ $$ $$ $$  $$  $$  $$ $$   $$ $$  $$ $$      $$     $$ $$ $$ $$ $$     $$ $$   $$   $$");
    printf("\n\t           $$  $$$  $$  $$$$$$  $$  $$  $$ $$$$$$ $$ $$$$ $$$$$$ $$  $$$  $$ $$$$$$ $$  $$  $$   $$");
    printf("\n\t           $$       $$  $$  $$  $$   $$ $$ $$  $$ $$   $$ $$     $$       $$ $$     $$   $$ $$   $$");
    printf("\n\t           $$       $$  $$  $$  $$     $$$ $$  $$ $$$$$$  $$$$$$ $$       $$ $$$$$$ $$     $$$   $$ \n\n");
    printf("\t        ===============================================================================================\n\n");
}
