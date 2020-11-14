#include "header.h"
int r_booking(){
 system("cls" );
 Time();
    getch();

    logo();
    printf("\n\t\t\t\t\t\t\tOur Rooms\n\n");
    printf("\n\n\tRoom No\t\tCategory\t\tAvailable\t\tBooked For\tEntry Date\tExit Date\n\n");//Available Or Not Checking
    FILE *fp;
    char day[5];
    char able[10];
    char date[12],date_out[12];
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"101")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t101\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"102")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t102\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"103")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t103\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"104")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t104\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"105")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t105\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"106")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t106\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"107")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t107\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"108")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t108\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"109")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t109\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    fp=fopen("detail.txt","r");
    strcpy(day,"N/A");
    strcpy(date,"N/A");
    strcpy(date_out,"N/A");
    strcpy(able,"Yes");
    while(fread(&s,sizeof(s),1,fp))
    {
        if(strcmp(s.r_number,"110")==0)
        {
            strcpy(able,"No");
            strcpy(day,s.stay_day);
            strcpy(date,s.entry_date);
            strcpy(date_out,s.out_date);
        }
    }
    fclose(fp);
    printf("\n\t110\t\tDouble(1B)\t\t%s\t\t\t%s Days\t\t%s\t%s\n",able,day,date,date_out);
    printf("\n\n\t\t\t\t\t\tWhich Room You Want To Book:");
    scanf("%d",&book);
    system("cls" );
    Time();
    getch();
    logo();
 printf("\n\t\t\t\t\t\tFill Up The Form\n\n");
 printf("\t\t\t\t=================================================");
 fp=fopen("detail.txt","a");
 struct booking s;
 printf("\n\n\t\t\t\t\t\tRetype Room Number:");
 scanf("%s",s.r_number);
 printf("\n\t\t\t\t\t\tEnter Name:");
 scanf("%s",s.name);
 printf("\n\t\t\t\t\t\tEnter Age:");
 scanf("%s",s.age);
 printf("\n\t\t\t\t\t\tEnter Phone Number:");
 scanf("%s",s.phone_number);
 printf("\n\t\t\t\t\t\tEnter Occupation:");
 scanf("%s",s.occupation);
 printf("\n\t\t\t\t\t\tEnter How Many Days Customer Want to stay:");
 scanf("%s",s.stay_day);
 printf("\n\t\t\t\t\t\tEnter Entry Date(DD-MM-YY):");
 scanf("%s",s.entry_date);
 printf("\n\t\t\t\t\t\tEnter Exit Date(DD-MM-YY):");
 scanf("%s",s.out_date);
 printf("\n\n\n\t\t\t\t\t\t This Room Has Been Booked for %s days",s.stay_day);
 fwrite(&s,sizeof(s),1,fp);
 getch();
 fclose(fp);
 view_book();
 return 0;
}
int view()
{
    system("cls");
    Time();
    getch();
    logo();
    printf("\t\t\t\t\t\tCustomer Detail\n\n");
    FILE *fp;
    fp=fopen("detail.txt","r");
    struct booking s;
    printf("Room No\t Name\t\tAge\t Phone Number \t Occupation\t Staying Day\tEntry Date\tExit Date\n");
    getch();
    while (fread(&s,sizeof(s),1,fp))
    {
    printf("\n%s\t %s\t\t%s\t %s\t %s\t%s\t\t%s\t%s\n",s.r_number,s.name,s.age,s.phone_number,s.occupation,s.stay_day,s.entry_date,s.out_date);
    }
    fclose(fp);
    getch();
    view_book();
    return 0;
}
int search_room_number()
{
    system("cls");
   printf("\t\t\t\t\t\tCustomer About Search Option\n\n");
   printf("\t\t\t\t==========================================================");
   FILE *fp;
   fp=fopen("detail.txt","r");
   struct booking s;
   char se_room[20];
   printf("\n\n\t\t\t\t\t\t Enter Room Number:");
   scanf("%s",se_room);
   while(fread(&s,sizeof(s),1,fp))
    {
        if (strcmp(se_room,s.r_number) == 0)
        {
       printf("\n\n\n\tName\tAge\tPhone Number\tOccupation\tStaying Day\tRoom Number\tEntry Date\tExit date\n");
       printf("\t=================================================================================================================");
       printf("\n\t%s\t%s\t%s\t%s\t\t%s\t\t%s\t\t%s\t%s\n",s.name,s.age,s.phone_number,s.occupation,s.stay_day,s.r_number,s.entry_date,s.out_date);
       getch();
       }
   }
fclose(fp);
view_book();
return 0;
}
int cheack_out()
{
    char se_room[5];
    char se_name[20];
    int i;
    system("cls");
    Time();
    getch();
    FILE *fp;
    struct booking s;
    logo();
    printf("\n\t\t\t\t\t\tEnter Room Number:");
    fflush(stdin);
    scanf("%s",se_room);
    printf("\n\t\t\t\t\t\tEnter Name:");
    fflush(stdin);
    scanf("%s",se_name);
    fp=fopen("detail.txt","r+");
    rewind(fp);
    while(fread(&s,sizeof(s),1,fp))
    {
        if (strcmp(se_room,s.r_number)==0 && strcmp(s.name,se_name)==0)
        {
            fseek(fp,-sizeof(s),SEEK_CUR);
            for(i=0;i<6;i++)
            {
                s.r_number[i]='\0';
            }
            strcpy(s.age,"  ");
            strcpy(s.stay_day,"  ");
            strcpy(s.occupation,"  ");
            strcpy(s.phone_number,"  ");
            strcpy(s.entry_date,"  ");
            strcpy(s.out_date,"  ");
            fwrite(&s,sizeof(s),1,fp);
            fclose(fp);
        }

    else{
            fclose(fp);
        printf("\n\t\t\t\t\t\t Wrong Input");
        getch();
        view_book();}
    }

printf("\n\t\t\t\t\t\t   Room Number %s\n\n\t\t\t\t\t\tSuccessfully Check-out\n\n\t\t\t\t\tNow The Room Is Empty & Ready To Book",se_room);
    fclose(fp);
    getch();
    view_book();
    return 0;
}
int notify()
{
    logo();
    char today_date[12];
    printf("\n\n\n\t\t\t\tEnter Today Date:");
    fflush(stdin);
    scanf("%s",today_date);
    int count=0;
    FILE *fp;
    fp=fopen("detail.txt","r");
    struct booking s;
    while(fread(&s,sizeof(s),1,fp))
    {
        if (strcmp(s.out_date,today_date)==0)
        {
            printf("\n\t\t Room No:%s \tDate:%s\t Last Date Today",s.r_number,s.out_date);
            count++;
        }
    }
    fclose(fp);
    if(count==0)
    {
        printf("\n\t\t\t\tNo Notification For Today");
    }
    getch();
    view_book();
    return 0;

}


