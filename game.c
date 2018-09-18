#inlude<stdio.h>
#include<conio.h>
#include <windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>

void displayscore()
 {
 char name[20];
 float s;
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",&name,&s);
 printf("\n\n\t\t ");
 printf("\n\n\t\t %s has secured the Highest Score %.2f",name,s);
 printf("\n\n\t\t ");
 fclose(f);
 getch();
 }



void help()
 {
 system("cls");
 printf("\n\n\n\tThis game is very easy to play. You'll be asked some general");
 printf("\n\n\tknowledge questions and the right answer is to be chosen among");
 printf("\n\n\tthe four options provided. Your score will be calculated at the");
 printf("\n\n\tend. Remember that the more quicker you give answer the more");
 printf("\n\n\tscore you will secure. Your score will be calculated and displayed");
 printf("\n\n\tat the end and displayed. If you secure highest score, your score");
 printf("\n\n\twill be recorded. So BEST OF LUCK.");
 }
void writescore(float score, char plnm[20])
 {
 float sc;
 char nm[20];
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 fscanf(f,"%s%f",&nm,&sc);
 if (score>=sc)
   { sc=score;
     fclose(f);
     f=fopen("score.txt","w");
     fprintf(f,"%s\n%.2f",plnm,sc);
     fclose(f);
   }
 }
int main()
     {
     int countq,countr;
     int r,i;
     int pa;int nq[6];int w;
     float score;
     char choice;
     char playername[20];
     time_t initialtime,finaltime;
     system("cls");
     //randomize();
     mainhome:
     system("cls");
     puts("\n\t\t WELCOME TO I.Q. TEST PROGRAM\n\n") ;
     puts("\n\t\t-------------------------------");
     puts("\n\t\t Enter 'S' to start game       ");
     puts("\n\t\t Enter 'V' to view high score  ");
     puts("\n\t\t Enter 'H' for help            ");
     puts("\n\t\t Enter 'Q' to quit             ");
     printf("\n\t\t-------------------------------\n\n\t\t  ");
     choice=toupper(getch());
     if (choice=='V')
 {
 displayscore();
 goto mainhome;
 }
     else if (choice=='Q')
 exit(1);
     else if (choice=='H')
 {
 help();
 getch();
 goto mainhome;
 }
    else if(choice=='S'){
     system("cls");

     printf("\n\n\n\t\t\tEnter your name...");
     printf("\n\t\t\t(only one word)\n\n\t\t\t");
     gets(playername);

     home:
     system("cls");
     initialtime=time(NULL);
     countq=countr=0;
     i=1;
     start:
     srand ( time(NULL) );
     r=rand()%23+1;
     nq[i]=r;
     for (w=0;w<i;w++)
 if (nq[w]==r) goto start;

     switch(r)
  {
  case 1:
  printf("\n\nWho is director general of JIET ?");
  printf("\n\nA.Dr.S.L.Agarwal\tB.Dr.Rajendra Karwa\n\nC.Er.Navneet Agarwal\tD.Dr.H.K.Bedi\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Er.Navneet Agarwal");break;}

  case 2:
  printf("\n\n\nWho is Registrar of JIET ?");
  printf("\n\nA.Dr.H.K.Bedi\tB.Dr.Rakesh kothari\n\nC.Dr.R.K.Gupta\tD.None\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         printf("\n\nWrong!!! The correct answer is B.Dr.Rakesh kothari");
  break;

  case 3:
  printf("\n\n\nWho is Dean of Dept. of applide science ?");
  printf("\n\nA.Dr.A.M.Khan\tB.Dr.Sandeep Mathur\n\nC.Dr.R.K.Gupta\tD.None\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Dr.R.K.Gupta");break;}


  case 4:
  printf("\n\n\nWho is Prime Minister of India?");
  printf("\n\nA.Narendra Modi\tB.Manmohan Singh\n\nC.Atal Bihari Vapayeen\tD.Sachin Tendulkar\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Narendra Modi");break;}


  case 5:
  printf("\n\n\nWhere is 2016 Olympics held?");
  printf("\n\nA.France\tB.Brazil\n\nC.Italy\tD.Rio\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Rio");break;}

  case 6:
  printf("\n\n\nWho is captain of cricket team of India?");
  printf("\n\nA.Virat Kohli\tB.M.S.Dhoni\n\nC.Suresh Raina\tD.None\n\n");
  countq++;
  if (toupper(getch())=='B' )
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.M.S.Dhoni");break;}


  case 7:
  printf("\n\n\nWhich country was the winner of Cricket World Cup 2015?");
  printf("\n\nA.West Indies\tB.India\n\nC.Australia\tD.England\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Australia");break;}


  case 8:
  printf("\n\n\nWhat is the height of Mount Everest in feet?");
  printf("\n\nA.8648\tB.6648\n\nC.8884\tD.8848\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.8848");break;}


  case 9:
  printf("\n\n\nWhat is the capital of India?");
  printf("\n\nA.Kolkata\tB.Mumbai\n\nC.Delhi\t\tD.Jodhpur\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Delhi");break;}


  case 10:
  printf("\n\n\nOn what place does India stands in case of population ?");
  printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.2nd");break;}


  case 11:
  printf("\n\n\nWho was the only player to score 6 successive sixes in an over?");
  printf("\n\nA.Adam Gilchrist\tB.M.S.Dhoni\n\nC.Yuvraj Singh\tD.Sanath Jayasurya\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Yuvraj Singh");break;}

  case 12:
  printf("\n\n\nWho was the only player to take 4 successive wickets?");
  printf("\n\nA.Malinga Bandara\tB.Lasith Malinga\n\nC.Bret Lee\tD.Murali Daran\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Lasith Malinga");break;}

  case 13:
  printf("\n\n\nWhich country is hosting the Fifa World Cup 2018?");
  printf("\n\nA.Russia\tB.Italy\n\nC.Argentina\tD.Spain\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Russia");break;}

  case 14:
  printf("\n\n\nWho is the author of the novel 'Two States'?");
  printf("\n\nA.Lal Gopal Subedi\tB.Chetan Bhagat\n\nC.B.P. Koirala\tD.Khagendra Sangraula\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Chetan Bhagat");break;}

  case 15:
  printf("\n\n\nWhere Is 'JGI'?");
  printf("\n\nA.Jodhpur\tB.Jaipur\n\nC.Udaipur\tD.Kota\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Jodhpur");break;}

  case 16:
  printf("\n\n\nWho is the campus director of 'JIET'?");
  printf("\n\nA.Er. Navneet Agarwal\tB.Dr.Rajendra Karwa\n\nC.Chandrasekhar\tD.Dr.Ashutosh\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Dr.Rajendra Karwa");break;}


  case 17:
  printf("\n\n\nWhat is the smallest state of India?");
  printf("\n\nA.Rajasthan\tB.Gujarat\n\nC.Bharatpur\tD.Goa\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Goa");break;}

  case 18:
  printf("\n\n\nWho is the inventer of 'Facebook'?");
  printf("\n\nA.Bill Gates\tB.Mark Zuckerberg\n\nC.Mukesh Ambani\tD.Johnty Roats\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Mark Zuckerberg");break;}

  case 19:
  printf("\n\n\nWhich place is called 'The Cherrapunji of Nepal'?");
  printf("\n\nA.Dharan\tB.Kathmandu\n\nC.Pokhara\tD.Butwal\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Pokhara");break;}

  case 20:
  printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
  printf("\n\nA.Rome\tB.Vactican City\n\nC.Madrid\tD.Berlin\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Rome");break;}

  case 21:
  printf("\n\n\nWho was inventor of 'C'language?");
  printf("\n\nA.Jitendra Shah\tB.Dennis Ritchie\n\nC.Fernando Alonso\tD.Michael Schumaker\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Dennis Ritchie");break;}

  case 22:
  printf("\n\n\nHow many districts in 'Rajasthan' ?");
  printf("\n\nA.33\tB.34\n\nC.28\tD.32\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.33");break;}

  case 23:
  printf("\n\n\nName the country where there no mosquito is found?");
  printf("\n\nA.Germany\tB.Spain\n\nC.Japan\tD.France\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");countr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.France");break;}



  }
 i++;
 if (i<=5) goto start;
 finaltime=time(NULL);
 score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
 if (score<0) score=0;
 printf("\n\n\nYour Score: %.2f",score);
 if (score==100) printf("\n\nEXCELLENT!!! KEEP IT UP");
 else if (score>=80 && score<100) printf("\n\nVERY GOOD!!");
 else if (score>=60 &&score<80) printf("\n\nGOOD! BUT YOU NEED TO KNOW MORE.");
 else if (score>=40 && score<60) printf("\n\nSATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");
 else printf("\n\nYOU ARE VERY POOR IN G.K.,WORK HARD");
 puts("\n\nNEXT PLAY?(Y/N)");
 if (toupper(getch())=='Y')
  goto home;
 else
  {
  writescore(score,playername);
  goto mainhome;
  }
 }
     else
 {
 printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
 Sleep(700);
 goto mainhome;
 }
 return 0;
}
