#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
int main()
{
  char c[10];
  int start=1;
  int h,m,s;
  printf("\nSet the time (hh:mm:ss) AM/PM \n\n");
  scanf("%d %d %d %s",&h,&m,&s,c); // hour , minute, second and AM/PM 
  if(h>12 || m>=60 || s>=60)
  {
     printf("Wrong format \n");
  }
  else if((strcmp(c,"AM")!=0 && strcmp(c,"PM")!=0) || (h==12 && strcmp(c,"AM")==0)) // checks if the string is neither AM nor PM or the input is in 12 : 00 : 00 AM format
  {
     printf("Wrong format \n"); // if so, prints "Wrong format"
  }
  else
  {
    system("cls"); // clears the screen for displaying the time
    while(start!=0) // start will never be 0 so the loop runs for infinity unless we terminate the output 
   {
    printf("Digital Clock: \n");
    printf("\n");
    printf("%02d : %02d : %02d %s ",h,m,s,c); // current values of h,m,s and c are printed 
    if(s==59)
     {
       if(m!=59)
        {
          m++; // we keep on incrementing the minute until it becomes 59
        }
        else
        {
          m=0; // as soon as minute becomes 59 it starts from 0 all over again for another 60 minutes and this is repeated
          if(h<11) 
          {
            h++; // we increase h as long long as it is less than 11
          }
          else if(h==11)
          {
            if(strcmp(c,"AM")==0) // when h=11,m=59,s=59 we check if c="AM"
            {
              h++; // if so, then we increase h and it becomes 12 in the next step
              strcpy(c,"PM"); // as h becomes 12 we change c to "PM" as it is noon now
            }
            else if(strcmp(c,"PM")==0) // when h=11,m=59,s=59 we check if c="PM"
            {
              h=0; // if so, we initialize h as 0 to mark 12 AM as 00 : 00 : 00 AM format. This resets the clock every 24 hrs for a new day
              strcpy(c,"AM"); // as h becomes 0 we change c to "AM" as it is a new day now
            }
          }
          else if(h==12) // the only time when h is 12 is when c="PM"
          {
            h=1; // so we change the h to 1 again as in 01: 00 : 00 PM in the afternoon
          }
        }
        s=0; // as soon as second becomes 59 it starts from 0 all over again for another 60 seconds and this is repeated 
      }
    else
     {
      s++; // we keep on incrementing the second until it becomes 59	
	}
    Sleep(1000); // pauses the screen for 1 sec
    system("cls"); // clears the screen after every second so that updated time can be printed in the next step
     }
   }
  return 0;
}