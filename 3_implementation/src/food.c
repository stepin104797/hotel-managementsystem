#include "header.h"

struct food_price{
     int rice,polaw,fried_rice,meat,fish_elish,fish_rui;
     int barger,sandwitch,pizza,pestry,sweets,biscutes;
}ss;
int ser_case(){
    system("cls" );
    Time();
    getch();
    logo();
int ser_choice;
printf("\n\n\t\t\t\t\t\t 1. Food Price Update\t\t\t\t0.Back\n\n\t\t\t\t\t\t 2. Food Prices\n\n\t\t\t\t\t\t 3.Search Bills\n");
printf("\n\n\t\t\t\t\t\t Enter Your Choice:");
scanf("%d",&ser_choice);                                            //FOOD SERVICE
switch(ser_choice)
{
case 1:food_price_update();
       break;
case 2:food_price_view();
       break;
case 0:view_book();
       break;
case 3:bill_search();
      break;
}
return 0;
}
int bill_search()
{
    char date[15];
    FILE *fd;
    fd=fopen("food_price1.txt","r");
    struct service f;
    printf("\t\t\t\t\t\tEnter Date:");
    fflush(stdin);
    scanf("%s",date);
    while(fread(&f,sizeof(f),1,fd))
    {
        if(strcmp(f.date,date)==0)
        {
            printf("\nBillar  Id:%s bill=%d",f.billar_id,f.bill);
        }
    }
    fclose(fd);
    getch();
    ser_case();
return 0;
}
int food_price_update(){
    system("cls" );
    Time();
    getch();
    logo();
   FILE *fp;
   struct food_price ss;
   fp=fopen("food_price.txt","w+");
   rewind(fp);
{
            fseek(fp,-sizeof(ss),SEEK_CUR);
   printf("\t\t\t\t\t\t  Update Price\n\n");
   printf("\n\n\t\t\t\t\t\tEnter Price For Rice:");
   scanf("%d",&ss.rice);
   printf("\n\n\t\t\t\t\t\tEnter Price For Polaw:");
   scanf("%d",&ss.polaw);
   printf("\n\n\t\t\t\t\t\tEnter Price For Fried Rice:");
   scanf("%d",&ss.fried_rice);
   printf("\n\n\t\t\t\t\t\tEnter Price For Meat:");
   scanf("%d",&ss.meat);
   printf("\n\n\t\t\t\t\t\tEnter Price For Fish(Elish):");
   scanf("%d",&ss.fish_elish);
   printf("\n\n\t\t\t\t\t\tEnter Price For Fish(Rui):");
   scanf("%d",&ss.fish_rui);
   printf("\n\n\t\t\t\t\t\tFast Foods\n");
    printf("\t        ===============================================================================================\n\n");
   printf("\n\n\t\t\t\t\t\tEnter Price For Barger:");
   scanf("%d",&ss.barger);
   printf("\n\n\t\t\t\t\t\tEnter Price For Sandwich:");
   scanf("%d",&ss.sandwitch);
   printf("\n\n\t\t\t\t\t\tEnter Price For Fried Pizza:");
   scanf("%d",&ss.pizza);
   printf("\n\n\t\t\t\t\t\tEnter Price For Pestry:");
   scanf("%d",&ss.pestry);
   printf("\n\n\t\t\t\t\t\tEnter Price For Sweets:");
   scanf("%d",&ss.sweets);
   printf("\n\n\t\t\t\t\t\tEnter Price For Biscutes:");
   scanf("%d",&ss.biscutes);
    printf("\n\n\n\t\t\t\t\t\tNew Price Added Successfully");
    getch();
   fwrite(&ss,sizeof(ss),1,fp);
}
   fclose(fp);
   ser_case();
   return 0;
}
int food_choice,quantity=0,am=0,bm=0;
char billar[7],billar_id1[7];
int food_price_view(){
  char date[12];
  bm=0;
    system("cls" );
    Time();
    logo();
    printf("\n\t\t\t\t\t\t\tList OF Food\n\n");
    printf("\t        ===============================================================================================\n\n");
    FILE*fp;
    FILE*fd;
    fp=fopen("food_price.txt","r");
    struct food_price ss;
    printf("\n\t\t\t\t\tFood Name\t\t\tPrice\n");
    while(fread(&ss,sizeof(ss),1,fp))
    {
    printf("\n\t\t\t\t\t1.Rice                \t\t%d Taka\n",ss.rice);
    printf("\n\t\t\t\t\t2.Polaw               \t\t%d Taka\n",ss.polaw);
    printf("\n\t\t\t\t\t3.Fried Rice          \t\t%d Taka\n",ss.fried_rice);
    printf("\n\t\t\t\t\t4.Meat                \t\t%d Taka\n",ss.meat);
    printf("\n\t\t\t\t\t5.Fish(Elish)         \t\t%d Taka\n",ss.fish_elish);
    printf("\n\t\t\t\t\t6.Fish(Rui)           \t\t%d Taka\n",ss.fish_rui);
    printf("\n\n\t\t\t\t\t\t\t Fast Foods\n");
    printf("\t        ===============================================================================================\n\n");
    printf("\n\t\t\t\t\t7.Barger            \t\t%d Taka\n",ss.barger);
    printf("\n\t\t\t\t\t8.Sandwitch         \t\t%d Taka\n",ss.sandwitch);
    printf("\n\t\t\t\t\t9.Pizza             \t\t%d Taka\n",ss.pizza);
    printf("\n\t\t\t\t\t10.Pestry            \t\t%d Taka\n",ss.pestry);
    printf("\n\t\t\t\t\t11.Sweets            \t\t%d Taka\n",ss.sweets);
    printf("\n\t\t\t\t\t12.Biscute           \t\t%d Taka\n",ss.biscutes);
     }
     fclose(fp);
     printf("\n\n\t\t\t\t\t\t\tEnter Date:");
     fflush(stdin);
     scanf("%s",date);
     printf("\n\n\t\t\t\t\t\tHow Many Items..?:");
     quantity=0;
     scanf("%d",&quantity);
     am=0;
     food();
     getch();
     billar_number();
     printf("\n\t\t\t\t\tYour Biller Id Is: %s",billar_id1);
     printf("\n\n%d",bm);
     fd=fopen("food_price1.txt","a");
     struct service f;
     strcpy(f.billar_id,billar_id1);
     strcpy(f.date,date);
     f.bill=0;
     f.bill=bm;
     fwrite(&f,sizeof(f),1,fd);
     fclose(fd);
     getch();
     fd=fopen("food_price1.txt","r");
     while(fread(&f,sizeof(f),1,fd))
     {
         if(strcmp(f.billar_id,billar_id1)==0)
         {
                printf("\n\n\t\t\t\t\t\tTotal Bill Is %d taka\n\n\t\t\t\t\t\t Bill Id %s\n\n\t\t\t\t\t\tCollect From Customer",f.bill,f.billar_id);
         }
     }
    getch();
     fclose(fd);
     ser_case();
    return 0;
}
int count=0;
int billar_number()
{
    int i,j;
    for(j=0;j<count+1;j++)
    {
        for(i=0;i<6;i++)
        {
            billar[i]=(rand()%5)+1;
            switch(billar[i])
            {
            case 1:
                billar_id1[i]='1';
                break;
            case 2:
                billar_id1[i]='2';
                break;
            case 3:
                billar_id1[i]='3';
                break;
            case 4:
                billar_id1[i]='4';
                break;
            case 5:
                billar_id1[i]='5';
                break;
            case 6:
                billar_id1[i]='6';
                break;
            case 7:
                billar_id1[i]='7';
                break;
            case 8:
                billar_id1[i]='8';
                break;
            case 9:
                billar_id1[i]='9';
                break;
            case 0:
                billar_id1[i]='0';
                break;
            }
        }
    }
    FILE*fp;
    fp=fopen("food_price.txt","r");
    struct food_price ;
    while(fread(&f,sizeof(f),1,fp))
    {
        if(strcmp(billar_id1,f.billar_id)!=0)
        {
            count=1;
        }
    }
    fp=fopen("food_price.txt","r");
    while(fread(&f,sizeof(f),1,fp))
    {
        if(strcmp(billar_id1,f.billar_id)!=0)
        {
            count++;
            billar_number();
        }
    }
    fclose(fp);
    return 0;
}
int i;
int food()
{
     FILE*fp;
    fp=fopen("food_price.txt","r");
    struct food_price ss;
    while(fread(&ss,sizeof(ss),1,fp))
    quantity--;
    printf("\n\n\t\t\t\t\t\tWhich Item/Items..?:");
    scanf("%d",&food_choice);
switch(food_choice)
{
case 1:
    am=am+ss.rice;
    break;
case 2:
    am=am+ss.polaw;
    break;
case 3:
    am=am+ss.fried_rice;
    break;
case 4:
    am=am+ss.meat;
    break;
case 5:
    am=am+ss.fish_elish;
    break;
case 6:
    am=am+ss.fish_rui;
    break;
case 7:
    am=am+ss.barger;
    break;
case 8:
    am=am+ss.sandwitch;
    break;
case 9:
    am=am+ss.pizza;
    break;
case 10:
    am=am+ss.pestry;
    break;
case 11:
    am=am+ss.sweets;
    break;
case 12:
    am=am+ss.biscutes;
    break;
default:
    food();
}
     fclose(fp);
     if(quantity==0)
     {
         bm=am;
         am=0;
         return 0;
     }
     else
     {
         food();
     }
     return 0;
}
