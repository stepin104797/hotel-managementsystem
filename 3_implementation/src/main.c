#include "header.h"

int view_book(){
    system("cls");
    Time();
    getch();
    int choose;
    logo();
    printf("\t\t\t\t\t\t1.Room Booking\n\n\t\t\t\t\t\t2.View Room Records\n\n\t\t\t\t\t\t3.Search Customer Detail\n\n\t\t\t\t\t\t4.Check-Out\n\n\t\t\t\t\t\t5.Services\n\n\t\t\t\t\t\t6.Notification");
    printf("\n\n\t\t\t\t\t  \tEnter Your Choice:");
    scanf("%d",&choose);
 switch(choose){
     case 1:r_booking();
     break;
     case 2:view();
     break;
     case 3:search_room_number();
     break;
     case 4:cheack_out();
     break;
     case 5:ser_case();
     break;
     case 6:
        system("cls");
        notify();
        break;
               }
    return 0;
}
    //ROOM BOOKING
