#include<stdio.h>
void main()
{
int idly=40,dosa=45,puri=50,upma=35,pongal=30,choice,total=0;
	int option,quantity;
l:
l2:
l1:
xx:
	printf("1.breakfast menu\n");
	printf("2.tea & coffee\n");
	printf("3.payment\n");
	printf("4.exit\n");
	printf("enter the option\n");
	scanf("%d",&option);

	switch(option)
	{//xx:
		 case 1:printf("breakfast \n");
		       printf("1.idly : Rs.40\n");
		       printf("2.dosa : Rs.45\n");
		       printf("3.puri : Rs.35\n");
		       printf("4.upma : Rs.35\n");
		       printf("5.pongal : Rs.30\n");
		       printf("6.back\n");
		       printf("enter sub option\n");
		       scanf("%d",&choice);
		       if(choice==1)
			{
		      		printf("enter quantityt\n");
		       		scanf("%d",&quantity);
                       		total+=idly*quantity;
			     	printf("total=price=%d\n",total);
            		  }
			else if(choice==2)
			{	
		       		printf("enter quantityt\n");
		       		scanf("%d",&quantity);
                       		total+=dosa*quantity;
			        printf("total price=%d\n",total);
			 }
		       else if(choice==3)
			{
		       		printf("enter quantityt\n");
		       		scanf("%d",&quantity);
                       		total+=puri*quantity;
			        printf("total price=%d\n",total);      
			}
		       else if(choice==4)
			{	
		       		printf("enter quantityt\n");
		       		scanf("%d",&quantity);
                       		total+=upma*quantity;
			        printf("total price=%d\n",total);
			}
		       else if(choice==5)
		       {
		       		printf("enter quantityt\n");
		       		scanf("%d",&quantity);
                       		total+=pongal*quantity;
			        printf("total price=%d\n",total);
			}
			else if(choice==6)
			{
			goto l1;
			}
			else 
			printf("wrong option\n");
			goto xx;
			break;
		
	case 2: lx:
			int tea=20,coffee=25,milk=30,choice,quantity;
			//printf("tea & cofee \n");
			printf("1.tea : Rs.20\n");
			printf("2.coffee : Rs.25\n");
			printf("3.milk : Rs.30\n");
			printf("4.back\n");
			printf("enter sub option\n");
			scanf("%d",&choice);
				if(choice==1)
				{
				printf("enter quantity\n");
				scanf("%d",&quantity);
				total+=tea*quantity;
				printf("totoal price=%d\n",total);
				}
				else if(choice==2)
				{                             
				printf("enter quantity\n");
				scanf("%d",&quantity);
				total+=coffee*quantity;
				printf("total price=%d\n",total);
				}
				else if(choice==3)
				{
				printf("enter quantity\n");
				scanf("%d",&quantity);
				total+=milk*quantity;
				printf("total price=%d\n",total);
				}
				else if(choice==4)
				{	
					printf("exit\n");
			        goto l2;
				}
				else 
				{
				printf("wrong option\n");
				goto lx;
				}
				goto l;	
				break;
				
			case 3:	z:
					int cash,upi,card;
					printf("1.payment by cash \n");
					printf("2.payment by UPI\n");
					printf("3.payment by card\n");
					printf("4.back\n");
					printf("enter sub option\n");
					scanf("%d",&choice);
					if(choice==1)
					{
				printf("final bill=%d\n",total);
					printf("visit again thanks\n");
					}
					else if(choice==2)
					{
				printf("final bill=%d\n",total);
					printf("visit again thanks\n");
					}
					else if(choice==3)
					{
				printf("final bill=%d\n",total);
					printf("visit again thanks\n");
					}
					else if(choice==4)
					goto l;
					break;

			case 4:
				printf("exit\n");
				goto z;
				printf("Bye Bye\n");
				break;
			default :
				printf("wrong option\n");
				goto l;
				break;
				}
			


}	
