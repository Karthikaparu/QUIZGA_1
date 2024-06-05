#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
//#include<math.h>

struct player
{
    char playername[20];
    char ch[50];
    int score;
};

main()
{
   int count,a,m=0,i=0,error=0;
   char choice;
   struct player players[50];

   mainhome:



   system ("cls");
   printf("\t\t\tC PROGRAM QUIZ GAME\n");
   printf("\n\t\t___________________________");
   printf("\n\t\t\t   WELCOME");
   printf("\n\t\t\t     to");
   printf("\n\t\t\t   THE GAME");
   printf("\n\t\t____________________________");
   printf("\n\t\t____________________________");
   printf("\n\t\t BECOME A PRPOFESSIONAL IN IQ!!!!!!!!!!");
   printf("\n\t\t____________________________");
   printf("\n\t\t____________________________");
   printf("\n\t\t > press S to start the game ");
   printf("\n\t\t > press V to view the highest score ");
   printf("\n\t\t > press R to reset score");
   printf("\n\t\t > press H for help        ");
   printf("\n\t\t > press Q to quit ");
   printf("\n\t\t_________________________\n\n");
   choice=toupper(getch());
   if (choice=='V')
   {

      system("cls");

	     printf("\n\n\t\t***************HIGHSCORE****************");

			 for(i=0;i<m;i++)
	     {
	      printf("\n\n\t %s \t\t\tRs %d\n",players[i].playername,players[i].score);
	     }
	     getch();
			 goto mainhome;

   }
   else if (choice=='R')
   {

	system("cls");

     printf("\n\nReset_score");
     printf("_________________________________________________________\n");
     printf("\n\nDo you want to reset score?\n");
     printf("__________________________________________________________\n");
     printf("\t\t\t\t\t\t Y or N\n");
     printf("\n\nEnter your choice:\n ");
	if(toupper(getch())=='Y')
			 {
				for(i=0;i<m;i++)
				{
					players[i]=players[i+1];
					m--;
				}
				goto mainhome;
			 }
			 else
			 {
				goto mainhome;
			 }

   }
   else if (choice=='H')
   {
     system("cls");
     printf("\n\n       HELP");
    printf("\n--------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded Rs 1000");
    printf("\n     By this wagy you can win upto 10,000 cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");
    printf("\n\n\t*********************BEST OF LUCK*********************************");
    printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********");
    getch();
    goto mainhome;


   }
   else if (choice=='Q')
   {
	  system("cls");
	  printf("Quit\n");
	  printf("---------------------------------------------------\n");
	  printf("\n\n\ Y or N\n");
	  printf("\n\nEnter your choice:\n");
	  printf("\n\n\n\n");
	if(toupper(getch())=='Y')
    {
      printf("THANK YOU!!");
      getch();
      exit(0);
    }
    else
    {
	goto mainhome;
    }

   }
   else if (choice=='S')
   {

	do{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name: ");
    name_back:
    gets(players[i].playername);
    for(a=0;a<strlen(players[i].playername);a++)
    {
    if(isalpha (players[i].playername[a]))
	{
		error=1;
	}
    }
   if(!error)
    {

    printf("\n please enter the name in correct format(character):");
    goto name_back;
    }


	system("cls");
	printf("\n  --------------Welcome %s to c program Quiz Game--------------");
	printf("\n\n Here are some tips you might wanna know before playing:");
	printf("\n-----------------------------------------------");
	printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
	printf("\n >> In warmup round you will be asked total 3 questions to test your");
	printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
	printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
	printf("\n    total of 10 questions. Each right answer will be awarded Rs1000!");
	printf("\n     By this way you can win upto 10,000 cash prize!!!!!..........");
	printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
	printf("\n    right option.");
	printf("\n >> You will be asked questions continuously, till right answers are given");
	printf("\n >> No negative marking for wrong answers!");
	printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
	printf("\n\n\n Press Y  to start the game!\n");
	printf("\n Press any other key to return to the main menu!");
	if (toupper(getch())=='Y')
	{
	    goto home;
	}
	else
	{
	    goto mainhome;
	}
	home:
	system("cls");

	 count=0;

		 printf("\n\nWhat is the national game of England?");
		 printf("\n\A.Football\t\tB.Bangladesh\n\nC.Bhutan\t\tD.Cricket");
		 if(toupper (getch())=='D')
		 {
		   printf("\n\n\nAns:-Cricket");
		   printf("\n\nCorrect!!!");count++;
		   getch();
		 }
		 else
		 {
		   printf("\n\nWrong!!! the correct answer is D.Cricket");
		   getch();
		 }

	system("cls");
		  printf("\n\nWhich animal laughs like human being?");
		  printf("\n\A.Polar Bear\t\tB.Hyen\n\nC.Donkey\t\tD.Chimpanzee");
		  if(toupper (getch())=='B')
		  {
		    printf("\n\n\nAns:-B.Hyen");
		    printf("\n\nCorrect!!!");count++;
		    getch();
		  }
		  else
		  {
		    printf("\n\nWrong!!! the correct answer is B.Hyen");
		    getch();
		  }
	   system("cls");
		  printf("\n\nThe country with the highest environmental performance index is...");
		  printf("\n\A.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
		  if(toupper (getch())=='C')
		  {
		  printf("\n\n\nAns:-C.Switzerland");
		    printf("\n\nCorrect!!!");count++;
		    getch();
		  }
		  else
		  {
		    printf("\n\nWrong!!! the correct answer is C.Switzerland");
		    getch();
		  }
	   if(count==3)
	   {
		goto test;
	   }
	   else
	   {
		system("cls");
		printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK TO NEXT TIME");

		i++;
		m++;
		getch();
		goto mainhome;
	   }

	   test:
	   system("cls");
	   printf("\n\n\t***** CONGRALUTATION %s you are eligible to play the Game ******");
	   printf("\n\n\n\n\n\n!press any key to start the Game!");
	   if (toupper(getch())=='P')
	   {
		goto game;
	   }

	   game:
		system("cls");

		       printf("\n\nWhich of the following is a palindrome number?");
		       printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		       if (toupper(getch())=='C')
		       {
			 printf("\n\n\nAns:-C.23232");
			  printf("\n\ncorrect!!!");count++;
			  getch();
		       }
		       else
		       {
			  printf("\n\nWrong!!! The correct answer is C.23232");
			  getch();
		       }

		system("cls");

		       printf("\n\nstudy of earthquake is called .....?");
		       printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
		       if (toupper(getch())=='A')
		       {
			  printf("\n\n\nAns:-A.Seismology");
			  printf("\n\ncorrect!!!");count++;
			  getch();
		       }
		       else
		       {
			  printf("\n\nWrong!!! The correct answer is A.Seismology ");
			  getch();
		       }

		system("cls");

		       printf("\n\nAmomg the top 10 highest peaks in the world,how many lie in Nepal?");
		       printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
		       if (toupper(getch())=='C')
		       {
			  printf("\n\n\nAns:-C.8");
			  printf("\n\ncorrect!!!");count++;
			  getch();
		       }
		       else
		       {
			  printf("\n\nWrong!!! The correct answer is C.8 ");
			  getch();
		       }
		players[i].score=count*1000;

		if (players[i].score==6000)
		       {
			   system("cls");
			   printf("\n\n\n ************CONRALUTATION************\n");
		printf("\n\n\n YOU ARE A PROFESSIONALIN IQ !!!!!!!\n");
		printf("\n\n\n You Won Rs%d",players[i].score);
			 printf("\n\n Thanks You!!\n");
	     getch();
		       }
		       else if (players[i].score>=4000 && players[i].score<=5000)

		       {
		    system("cls");
	    printf("\n\n\n***************COGRALUTATION****************\n");
	    printf("\n\n You Won Rs%d",players[i].score);
		    printf("\n\n Thanks You!!\n");
		    getch();
		       }
			else
		       {
			   system("cls");
			 printf("\n\n\n*********SORRY YOU DIDN'T WIN ANY CAS*********\n");
			 printf("\n\ thank for your Participation\n");
			 printf("\n\ TRY AGAIN\n");
			 getch();
		       }

	    i++;
	    m++;
			 puts("\n\n press Y if you want to play next game");
			 puts("press any key if you want to go main menu");
	    }while(toupper(getch())=='Y');


      goto mainhome;
    }

getch();

}



