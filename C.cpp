//Q.10) 
/*#include<stdio.h>
int main()
{
   int i=1,no,r,c=0,no1;
   printf("Enter a number: ");
   scanf("%d",&no);
   no1=no;
   while(no>0)
   
   {
       r=no%10;
       c=c+(r*r*r);
       no=no/10;
       
   }
   if(c==no1)
     printf("Amt no");
   else
     printf("No Amt no");
}*/

//Q.2)
/*#include<stdio.h>
int main()
{
	int i,n,f1=0,f2=1,conse;
	conse=f1+f2;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	printf("Fibonacci series: %d, %d ", f1, f2);
	for(i=3;i<=n;i++)
	{
		printf("%d, ",conse);
		f1=f2;
		f2=conse;
		conse=f1+f2;
	}

}*/


//Q.3)
/*#include<stdio.h>
int main()
{
	int choice;
	printf("Enter the choice  ");
	printf("\n1.Area of Square. \n2.Area of a Rectangle. \n3.Area of a Circle\n ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
			int area,s;
			printf("Enter the side : ");
			scanf("%d",&s);
			area=s*s;
			printf("%d",area);
			break;
		    }
		
		case 2:
		{
			int area1,a,b;
			printf("Enter the sides : ");
			scanf("%d %d",&a,&b);
			area1=a*b;
			printf("%d",area1);
			break;
			
		}
		case 3:
			{
				int area3,r;
				printf("Enter the radius : ");
				scanf("%d",&r);
				area3=3.14*r*r;
				printf("%d",area3);
				break;
			}
	}
	
}
*/

//Q.4
/*#include<stdio.h>
int main()
{
	int p,c,b,m,cs,avg;
	printf("Enter the subject marks");
	printf("\nPhysics : ");
	scanf("%d",&p);
	printf("\nChemistry: ");
	scanf("%d",&c);
	printf("\nBiology : ");
	scanf("%d",&b);
	printf("\nMaths : ");
	scanf("%d",&m);
	printf("\nCS : ");
	scanf("%d",&cs);
	avg=(p+c+b+m+cs)/5;
	printf("\nAverage is ",avg);
	if(avg>=35 && avg<=50)
	printf("Third class");
	else if(avg>50 && avg<=60)
	printf("Second class");
	else if(avg>60 && avg<=75 )
	printf("First class");
	else if(avg>75 && avg<=100 )
	printf("Distinction");
	else
	printf("Fail");
}*/

//Q.5
/*#include <stdio.h>
int main()
{
	int n,i,
	printf("Enter the n value : ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		
	}
}
*/

//Q.6
/*#include <stdio.h>
int main()
{
	int a,b,c,sum;
	printf("Enter the sides of triangle: ");
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	if(sum==180)
	{
		printf("It is a triangle");
		if(a==b || a==c || c==a)
		printf("\nIt is an Isoceles Triangle");
		else if(a==b && b==c && a==c)
		printf("It is an Equilateral triangle");
		else 
		printf("It is Scalene Triangle");
	}
	else
	printf("It is not a triangle");
}*/

//Q.7
/*#include<stdio.h>
int main()
{
	int choice,with,dep;
	int bal=50000;
	do{
	
	printf("Welcome to the Indian Bank");
	printf("\n1.Withdraw\n2.Deposit\n3.Balance Enquiry\n4.Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				printf("Enter the amount you need to withdraw : ");
				scanf("%d",&with);
				bal=bal-with;
			}
			break;
		case 2:
			{
				printf("Enter the amount you need to deposit: ");
				scanf("%d",&dep);
				bal=bal+dep;
			}
			break;
		case 3:
			{
				printf("Available balance : ");
				printf("\n%d",bal);
			}
			break;
		case 4:
			{
				printf("Bye, Welcome again.");
			}
			break;
	}
}
     while(bal>0);
	
}
*/

//Q.8
#include<stdio.h>
int main()
{
	int a[5],big,i,j;
	printf("Enter the array elements :");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	big=a[0];
	for(j=1;j<5;j++)
	{
		if(a[j]>big)
		big=a[j];
	}
	printf("The biggest element in an array is %d ",big);
}
























































