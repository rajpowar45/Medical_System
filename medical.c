#include<stdio.h>
#include<conio.h>


//global Variable declration
int mnum,spnum,disnum;

void Add_new_Medicine();
void Add_Surgicalpart();
void Add_Disposable();
void Display_Medicine();
void Display_Medicine_Byexpiry();
void Display_Medicine_Bycompany();
void Display_Medicine_Bysurgicalpart();
void Display_Medicine_Bydisposable();


struct  medicine
{char  mname[30];
 char company[30];
 int mprice;
 long int expirydate;
}m[5];

struct  surgicalparts
{
 char partname[30];
 int spsrno;
 int sprice;
 int partno;
}s[5];

struct  Disposable
{
 char   disponame[20];
 int dsrno;
 int dprice;

}d[5];

void main(void)
{
int menu,i,num,bill;
char ch='y';

//clrscr();
do
{

//MENU
printf("================================================================================\n");
printf("               *********** MEDICAL STORE MANAGEMENT SYSTEM ************\n");
printf("                         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
printf("================================================================================\n");
printf("PRESS 0 FOR EXIT\n");
printf("PRESS 1 FOR ADD MEDICINES \n");
printf("PRESS 2 FOR ADD SURGICAL PARTS \n");
printf("PRESS 3 FOR ADD DISPOSABLE\n");
printf("PRESS 4 FOR LIST ALL MEDICINES BY PRICE\n");

printf("PRESS 5 FOR LIST OF MEDICINE BY EXPIRYDATE\n");
printf("PRESS 6 FOR LIST OF MEDICINES BY COMPANYNAME\n");
printf("PRESS 7 FOR LIST OF ALL SURGICAL PARTS \n");
printf("PRESS 8 FOR LIST OF ALL DISPOSABLE\n");
printf("================================================================================\n");
scanf("%d",&menu);

	if(menu>=9 || menu<0)
	{
	printf("-----------------------------\n");
	printf("IT IS WRONG INPUT\n");
	}
	else


	switch(menu)
	{

	  case 0:
		  printf("                ***EXIT***\n");
		  printf("Exiting from Supermarket Billing System........\n");
		  delay(2000);
		  //exit(0);


	  case 1:
	    //ADD MEDICINE
	    Add_new_Medicine();
	    break;


	  case 2:
		//ADD SURGICAL PARTS
	    Add_Surgicalpart();
	    break;

	  case 3:
	    //ADD DISPOSABLE
	    Add_Disposable();
	    break;


	   case 4:
	     //LIST OF ALL MEDICINES
		Display_Medicine();
		break;



	  case 5:
	   //LIST OF MEDICINES BY EXPIRYDATE
		Display_Medicine_Byexpiry();
		break;

	  case 6 :
	   // LIST OF MEDICINES BY COMPANY NAME
		Display_Medicine_Bycompany();
		break;

	  case 7:
	   //DISPLAY MEDICINE LIST BY SURGICAL PARTS
		Display_Medicine_Bysurgicalpart();
		break;

	  case 8:
	   //DISPLAY MEDICINE LIST BY DISPOSABLE
		Display_Medicine_Bydisposable();
		break;
	     }

  printf("\n Do you want to continue? (Y/N)");
  fflush(stdin);
  ch=getchar();

  }while (ch=='y' || ch =='Y');



}//main





void Add_new_Medicine()
{          int i;

	    printf("------------------------------------------------------\n");
	    printf("HOW MANY MEDICINES YOU WANT TO ENTER\n");
	    scanf("%d",&mnum);


	    for(i=1; i<=mnum; i++)
	    {
	    printf("-------------------------------------------------------\n");
	    printf("ENTER MEDICINE %d NAME\n",i);
	    scanf("%15s",m[i].mname);


	    printf("--------------------------------------------------------\n");
	    printf("ENTER COMPANY NAME %d OF MEDICINE \n",i);
	    scanf("%15s",m[i].company);


	    printf("--------------------------------------------------------\n");
	    printf("ENTER MEDICINE %d PRICE\n",i);
	    scanf("%d",&m[i].mprice);

	    printf("--------------------------------------------------------\n");
	    printf("ENTER EXPIRYDATE OF MEDICINE %d\n",i);
	    scanf("%ld",&m[i].expirydate);

	 }
}


void Add_Surgicalpart()
{           int i;

	    printf("----------------------------------------------------------\n");
		    printf("--------------------------------------------------\n");
	    printf("HOW MANY SURGICAL PARTS YOU WANT TO ENTER\n");
	    scanf("%d",&spnum);


	    for(i=1; i<=spnum; i++)
	    {
	    printf("-----------------------------------------------------------\n");
	    printf("ENTER SURGICAL PART %d NAME\n",i);
	    scanf("%15s",s[i].partname);



	    printf("------------------------------------------------------------\n");
	    printf("ENTER PRICE OF PART %d \n",i);
	    scanf("%d",&s[i].sprice);


	    }
}

void Add_Disposable()
{          int i;

	    printf("-------------------------------------------------------------\n");

	    printf("-------------------------------------------------------------\n");
	    printf("HOW MANY DISPOSABlE YOU WANT TO ENTER\n");
	    scanf("%d",&disnum);

	    for(i=1; i<=disnum; i++)
	    {
	    printf("--------------------------------------------------------------\n");
	    printf("ENTER DISPOSABLE %d NAME\n",i);
	    scanf("%15s",d[i].disponame);

	    printf("---------------------------------------------------------------\n");
	    printf("ENTER DISPOSABLE %d PRICE\n",i);
	    scanf("%d",&d[i].dprice);


	    }

}




void Display_Medicine()
{
	int i;
		printf("=======================================================================\n");
		printf("=======================MEDICINE LIST===================================\n");
		printf("=======================================================================\n");
		printf("SRNO\t\t  MEDICINE\t\t\t      PRICE\n ");
		for(i=1;i<=mnum;i++)
		{
		printf("%d\t  %15s\t\t   \t\t%d\n",i,m[i].mname,m[i].mprice);
		}
		printf("=======================================================================\n");


}

void Display_Medicine_Byexpiry()
{
	int i;

		printf("=======================================================================\n");
		printf("======================MEDICINE LIST BY=================================\n");
		printf("=========================EXPIRYDATE====================================\n");
		printf("=======================================================================\n");
		printf("SRNO\t\t MEDICINE NAME\t\t\t EXPIRYDATE\n");
		for(i=1;i<=mnum;i++)
		{
		printf("%d\t     %15s\t\t       \t %ld\n" ,i,m[i].mname,m[i].expirydate);
		}
		printf("=======================================================================\n");
}

void Display_Medicine_Bycompany()
{

		int i;
		printf("=======================================================================\n");
		printf("=======================MEDICINE LIST BY================================\n");
		printf("=========================COMPANY NAME==================================\n");
		printf("=======================================================================\n");
		printf("SRNO\t\t MEDICINE NAME\t\t\t COMPANY NAME\n");
		for(i=1;i<=mnum;i++)
		{
		printf("%d\t      %15s\t\t       \t %s\n" ,i,m[i].mname,m[i].company);
		}
		printf("=======================================================================\n");

}

void Display_Medicine_Bysurgicalpart()
{

		int i;
		printf("=======================================================================\n");
		printf("============================ LIST OF===================================\n");
		printf("=========================SURGICAL PARTS================================\n");
		printf("=======================================================================\n");
		printf("SRNO\t\t    SURGICALPART\t\tPRICE\n");
		for(i=1;i<=spnum;i++)
		{
		printf("%d\t        %15s\t\t     \t %d\n" ,i,s[i].partname,s[i].sprice);
		}
		printf("=======================================================================\n");

}

void Display_Medicine_Bydisposable()
{

		int i;
		printf("=======================================================================\n");
		printf("=========================== LIST OF====================================\n");
		printf("==========================DISPOSABLE===================================\n");
		printf("=======================================================================\n");
		printf("SRNO\t\t    DISPOSABLE\t\t\tPRICE\n");
		for(i=1;i<=disnum;i++)
		{
		printf("%d\t        %15s\t\t       \t %d\n" ,i,d[i].disponame,d[i].dprice);
		}
		printf("=======================================================================\n");
}
