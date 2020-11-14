#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
int book;
struct booking
{
    char r_number[5];
    char name[100];
    char occupation[100];
    char age[5];
    char phone_number[100];
    char stay_day[5];
    char entry_date[12];
    char out_date[12];
}s;
struct service
{
    char billar_id[15],date[15];
    int bill;
}f;
void Time();
int food_price_view();
int billar_number();
int view();
int search_room_number();
int cheack_out();
int notify();
int ser_case();
int food_price_update();
int bill_search();
int view_book();
int login();
int r_booking();
int food();
void logo();



#endif
