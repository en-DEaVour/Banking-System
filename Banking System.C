#include<stdio.h>
#include<conio.h>
#include<string.h>
int bal=0,am;
static int fbal[10];
static long int taccount;//transfer money in another account
void withdrawl();
void transfer();
void deposit();
void mustajab();
void details();
void customerdetails();
struct customer
{
     char name[20];
     char address[20];
     unsigned long account;
     unsigned long aadhar;
     unsigned long contactno;
     int bal;
};
void main()
{
	clrscr();
	mustajab();
}
void mustajab()
{       int pass,i=0,j=2,choice;
	for(;i<3;i++)
	{
		printf("Please Enter the password:\n");
		printf("------------------------- -> ");
		scanf("%d",&pass);
		if(pass==4786)
		{
			clrscr();
			gotoxy(23,1);
			printf("\xB3\xB2\xB3\xB2\xB3\xB2 BANKING SYSTEM \xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\n\n");
			printf("PRESENTED BY-:\n\n");
			printf("\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\n");
			printf("\xB1       ->   SHOHRAT FATIMA                   \xB1\n");
			printf("\xB2	->   ZEYAULLAH                        \xB2\n");
			printf("\xB1	->   KAMRUDDIN                        \xB1\n");
			printf("\xB2	->   MOHD MUSTAJAB KHAN               \xB2\n");
			printf("\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\n");
			getch();
			clrscr();
			printf("                   SOME INSTRUCTIONS\n");
			printf("                   -----------------\n\n");
			printf(":-> This BANK does not provide \"INTEREST\"\n");
			printf("    ~~~~~~~~~~~~~~~~~~~~~~~~~~  ~-~-~-~- \n");
			printf(":-> Creating new Account: Provide 0 Balance\n");
			printf("    ~~~~~~~~~~~~~~~~~~~~  ~-~-~-~-~-~-~-~-~\n");
			printf(":-> Follow line by line steps\n");
			printf("    ~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n");
			printf("                   NOW press Enter for further PROCEDURE\n");
			printf("                   ---------~-~-~-~----------------------\n");
			getch();
			clrscr();
			printf("To Create new account     :PRESS 1\n");
			printf("---------------------\n");
			printf("Exit                      :PRESS 2\n");
			printf("----\n");
			printf("-> ");
			scanf("%d",&choice);
			if(choice==1)
			{
				details();
			}
			else
			{
				exit(0);
			}

		}

		if(i==1)
		{
			printf("Last Time for Entry of Password otherwise PROGRAM CREASHES %c\n",j);
			printf("                                          ~~~~~~~~~~~~~~~~\n");
		}
	}
}
void details()
{
	int a,n,i;
	struct customer s[5];
	clrscr();
	for(i=0;i<1;i++)
	{
		  printf("Enter the Account Holder name:\n");
		  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		  printf("-> ");
		  fflush(stdin);
		  gets(s[i].name);
		  printf("Enter your Contact no:\n");
		  printf("~~~~~~~~~~~~~~~~~~~~~\n");
		  printf("-> ");
		  scanf("%ld",&s[i].contactno);
		  printf("Enter your Adress:\n");
		  printf("~~~~~~~~~~~~~~~~~\n");
		  printf("-> ");
		  fflush(stdin);
		  gets(s[i].address);
		  printf("Enter account no:\n");
		  printf("~~~~~~~~~~~~~~~~\n");
		  printf("-> ");
		  scanf("%ld",&s[i].account);
		  printf("Current Balance: { Provide 0 balance initially }\n");
		  printf("~~~~~~~~~~~~~~~\n");
		  printf("-> ");
		  scanf("%d",&s[i].bal);
		  printf("Enter your Adhaar no:\n");
		  printf("~~~~~~~~~~~~~~~~~~~~\n");
		  printf("-> ");
		  scanf("%ld",&s[i].aadhar);
		  printf("                     YOUR ACCOUNT HAS BEEN CREATED SUCCESSFULLY\n");
		  printf("                     ------------------------------------------\n");
		  getch();
		  clrscr();
	  }
while(1)
{
	    clrscr();
	    printf("                 .For deposit   ->    Press 1\n");
	    printf("                 .For withdrawl ->    Press 2\n");
	    printf("                 .For Transfer  ->    Press 3\n");
	    printf("                 .For details   ->    Press 4\n");
	    printf("                 .For leave     ->    Press 5\n ");
	    printf("-> ");
	    scanf("%d",&n);
	    if(n==1)
	    {
		deposit(s);
	    }
	    else if(n==2)
	    {
		withdrawl(s);
	    }
	    else if(n==3)
	    {
		transfer(s);
	    }
	    else if(n==4)
	    {
		customerdetails(s);
	    }
	    else
	    {
		exit();
	    }
	    getch();
	    }
}
void deposit(struct customer s[])
{
    int a,b,i;
    printf("Enter your account number\n");
    printf("-------------------------\n");
    printf("\"PLEASE\"Write correct account no:->");
    scanf("%d",&a);
    for(i=0;i<1;i++)
    {
	   if(a==s[i].account)
	   {
		 printf("Enter amount you want to deposit\n");
		 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		 printf("-> ");
		 scanf("%d",&am);
		 printf("Enter 1 for confirm deposit\n");
		 printf("---------------------------\n");
		 printf("-> ");
		 scanf("%d",&b);
		 fbal[i]=s[i].bal+fbal[i]+am;
		 if(b==1)
		 {
			printf("SUCCESS\n");
			printf("~~~~~~~\n");
			printf("Now you have balance of: Rs %d\n",fbal[i]);
			printf("-----------------------\n");
			break;
		 }
	   }
		 if(a!=s[i+1].account)
		 {
			 printf("ERRoR-> You Entered a wrong account no\n");
			 printf("~~~~~   ------------------------------\n");
			 break;
		 }
     }
}
void withdrawl(struct customer s[])
{
   int i,a,b;
   printf("Enter your account no\n");
   printf("---------------------\n");
   printf("\"PLEASE\"Write correct account no:->");
   scanf("%d",&a);
   for(i=0;i<1;i++)
   {
	  if(a==s[i].account)
	  {
		 printf("Enter ammount for withdrawl\n");
		 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		 printf("-> ");
		 scanf("%ld",&am);
		 if(am<=fbal[i])
		 {
			 fbal[i]=fbal[i]-am;
			 printf("press 1 to confirm\n");
			 printf("~~~~~~~~~~~~~~~~~~\n");
			 printf("-> ");
			 scanf("%d",&b);
			 if(b==1)
			 {
				 printf("SUCCESS\n");
				 printf("-------\n");
				 printf("After Withdrawl your current amount in the account is: Rs %d\n",fbal[i]);
				 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				 break;
			 }
		 }
			 else
			 {
				   printf("You have not sufficient amount of money\n");
				   printf("---------------------------------------\n");
				   break;
			 }
	    }
   }
		 if(a!=s[i].account)
		 {
			 printf("ERRoR-> You Entered a wrong account no.\n");
			 printf("~~~~~   ------------------------------");
		 }


}
void transfer(struct customer s[])
{
   int i,a,b;
   int am;
   printf("Enter your account no\n");
   printf("~~~~~~~~~~~~~~~~~~~~~\n");
   printf("\"PLEASE\"Write correct account no:->");
   scanf("%d",&a);
   for(i=0;i<1;i++)
   {
	  if(a==s[i].account)
	  {      printf("Your current balance is: Rs %d\n",fbal[i]);
		 printf("-----------------------\n");
		 printf("Enter account no. in which u want to transfer money:\n");
		 printf("---------------------------------------------------\n");
		 printf("-> ");
		 scanf("%ld",&taccount);
		 printf("Enter amount for transfer:");
		 printf("-> ");
		 scanf("%d",&am);
		 if(am<=fbal[i])
		 {
			 printf("press 1 to confirm\n");
			 printf("------------------\n");
			 printf("-> ");
			 fbal[i]=fbal[i]-am;
			 scanf("%d",&b);
			 if(b==1)
			 {
				 printf("SUCCESS\n");
				 printf("-------\n");
				 printf("You have just transfer %d rupess in account no: %ld\n",am,taccount);
				 printf("----------------------------------------------\n");
				 printf("After transfer your current amount in the account is: Rs %d\n",fbal[i]);
				 printf("----------------------------------------------------\n");
				 break;
			 }
		 }
		 else
		 {
			   printf("You have not sufficient amount of money\n");
			   printf("---------------------------------------\n");
			   break;
		 }
	  }
   }
		 if(a!=s[i].account)
		 {
			 printf("ERRoR-> You Entered a wrong account no.\n");
			 printf("-----   ------------------------------");
		 }
}
void customerdetails(struct customer s[])
{
   int i;
   for(i=0;i<1;i++)
   {
	printf("\n\n          \xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2");
	printf("\n            Account Holder name     :-> %s\n",s[i].name);
	printf("            Address                 :-> %s\n",s[i].address);
	printf("            Account no              :-> %ld\n",s[i].account);
	printf("            Current balance         :-> %d\n",fbal[i]);
	printf("            Aadhaar No              :-> %ld\n",s[i].aadhar);
	printf("            Contact No              :-> %ld\n",s[i].contactno);
	printf("          \xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2\xB3\xB2");
   }
}
