#include<stdio.h>
#include<conio.h>
#define P printf
main()
{
	int a, bill=0,qty;
	clrscr();
	tmp:
	clrscr();
	P("Enter 1 for Coffee Mocktails\n");
	P("Enter 2 for Milk Coffees\n");
	P("Enter 3 for Frappe\n");
	P("Enter 4 for Shakes\n");
	P("Enter 5 for Cheesecakes\n");
	P("Enter your choice :");
	scanf("%d",&a);
	clrscr();
	switch(a)
	{

	  case 1:
		P("Thanks for ordering.\n");
		P("Enter 1 for Espresso tonic.\t220\n");
		P("Enter 2 for Gingerade Mud.\t240\n");
		P("Enter 3 for Cold Brew Tonic\t260\n");
		P("Enter 4 for Caffine Rush\t280\n");
		P("Which of these Coffee Mocktails do you like..");
		scanf("%d",&a);

		clrscr();
		switch(a)
		{
			case 1:
				P("Espresso tonic.\n");
				P("Enter quantity:");
				scanf("%d",&qty);

				bill +=220 * qty;

				clrscr();
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
					goto tmp;
				}
				break;
			case 2:
				P("Gingerade Mud.\n");
				P("Enter quantity:");
				scanf("%d",&qty);

				bill +=240 * qty;

				clrscr();
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
				goto tmp;
				}
				break;
			case 3:
				P("Cold Brew Tonic.\n");
				P("Enter quantity:");
				scanf("%d",&qty);

				bill +=260 * qty;

				clrscr();
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
					 goto tmp;
				}
				break;
			case 4:
				P("Caffine Rush.\n");
				P("Enter quantity:");
				scanf("%d",&qty);

				bill +=280 * qty;

				clrscr();
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
					 goto tmp;
				}
				break;
			default :
				P("Not available in menu\n");
				P("Enter 0 for order more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
					goto tmp;
				}
				break;
		 }
		 break;
	  case 2 :

		P("Thanks for ordering.\n");
		P("Enter 1 for Cappuccino.\t160\n");
		P("Enter 2 for Iced Latte.\t200\n");
		P("Enter 3 for Vietamese\t200\n");
		P("Enter 4 for Affogato\t220\n");
		P("Which of these Milk Coffees do you like..");
		scanf("%d",&a);
		clrscr();
		switch(a)
		{
		  case 1:
			P("Cappuccino\n");
			P("Enter quantity:");
			scanf("%d",&qty);

			bill +=160 * qty;

			clrscr();
			P("Enter 0 for ordering more.\n");
			P("Enter 1 for bill.\n");
			P("Enter your choice :");
			scanf("%d",&a);

			if(a==0)
			{
			 goto tmp;
			}
			break;
		case 2:
			P("Iced Latte.\n");
			P("Enter quantity:");
			scanf("%d",&qty);

			bill +=200 * qty;

			clrscr();
			P("Enter 0 for ordering more.\n");
			P("Enter 1 for bill.\n");
			P("Enter your choice :");
			scanf("%d",&a);

			if(a==0)
			{
			 goto tmp;
			}
			break;
		case 3:
			P("Vietamese\n");
			P("Enter quantity:");
			scanf("%d",&qty);

			bill +=200 * qty;

			clrscr();
			P("Enter 0 for ordering more.\n");
			P("Enter 1 for bill.\n");
			P("Enter your choice :");
			scanf("%d",&a);

			if(a==0)
			{
			 goto tmp;
			}
			break;
		case 4:
			P("Affogato.\n");
			P("Enter quantity:");
			scanf("%d",&qty);

			bill +=220 * qty;

			clrscr();
			P("Enter 0 for ordering more.\n");
			P("Enter 1 for bill.\n");
			P("Enter your choice :");
			scanf("%d",&a);

			if(a==0)
			{
			 goto tmp;
			}
			break;


		 } break;

    case 3:
		P("Thanks for ordering.\n");
		P("Enter 1 for Classic.\t200\n");
		P("Enter 2 for Caramel.\t220\n");
		P("Enter 3 for Hazelnut\t240\n");
		P("Enter 4 for All About Sweetness\t280\n");
		P("Which of these Frappes do you like..");
		scanf("%d",&a);

		clrscr();
		switch(a)
		{
			case 1:
				P("Classic.\n");
				P("Enter quantity:");
				scanf("%d",&qty);

				bill +=200 * qty;

				clrscr();
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
					goto tmp;
				}
				break;
			case 2:
				P("Caramel.\n");
				P("Enter quantity:");
				scanf("%d",&qty);

				bill +=220 * qty;

				clrscr();
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
				goto tmp;
				}
				break;
			case 3:
				P("Hazelnut.\n");
				P("Enter quantity:");
				scanf("%d",&qty);

				bill +=240 * qty;

				clrscr();
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
					 goto tmp;
				}
				break;
			case 4:
				P("All About Sweetness.\n");
				P("Enter quantity:");
				scanf("%d",&qty);

				bill +=280 * qty;

				clrscr();
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
					 goto tmp;
				}
				break;
			default :
				P("Not available in menu\n");
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
					goto tmp;
				}
				break;
			}
			break;
      case 4:
		P("Thanks for ordering.\n");
		P("Enter 1 for Oreo.\t240\n");
		P("Enter 2 for Nutella.\t270\n");
		P("Enter 3 for Biscoff\t270\n");
		P("Enter 4 for Chocolate\t260\n");
		P("Which of these Shakes do you like..");
		scanf("%d",&a);

		clrscr();
		switch(a)
		{
			case 1:
				P("Oreo.\n");
				P("Enter quantity:");
				scanf("%d",&qty);

				bill +=240 * qty;

				clrscr();
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
					goto tmp;
				}
				break;
			case 2:
				P("Nutella.\n");
				P("Enter quantity:");
				scanf("%d",&qty);

				bill +=270 * qty;

				clrscr();
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
				goto tmp;
				}
				break;
			case 3:
				P("Biscoff.\n");
				P("Enter quantity:");
				scanf("%d",&qty);

				bill +=270 * qty;

				clrscr();
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
					 goto tmp;
				}
				break;
			case 4:
				P("Chocolate.\n");
				P("Enter quantity:");
				scanf("%d",&qty);

				bill +=260 * qty;

				clrscr();
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
					 goto tmp;
				}
				break;
			default :
				P("Not available in menu\n");
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
					goto tmp;
				}
				break;
		     } break;
      case 5:
		P("Thanks for ordering.\n");
		P("Enter 1 for New York.\t200\n");
		P("Enter 2 for Chocolate.\t220\n");
		P("Enter 3 for Hazelnut\t240\n");
		P("Enter 4 for Biscoff\t280\n");
		P("Which of these Cheesecakes do you like..");
		scanf("%d",&a);

		clrscr();
		switch(a)
		{
			case 1:
				P("New York.\n");
				P("Enter quantity:");
				scanf("%d",&qty);

				bill +=200 * qty;

				clrscr();
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
					goto tmp;
				}
				break;
			case 2:
				P("Chocolate.\n");
				P("Enter quantity:");
				scanf("%d",&qty);

				bill +=220 * qty;

				clrscr();
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
				goto tmp;
				}
				break;
			case 3:
				P("Hazelnut.\n");
				P("Enter quantity:");
				scanf("%d",&qty);

				bill +=240 * qty;

				clrscr();
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
					 goto tmp;
				}
				break;
			case 4:
				P("Biscoff.\n");
				P("Enter quantity:");
				scanf("%d",&qty);

				bill +=280 * qty;

				clrscr();
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
					 goto tmp;
				}
				break;
			default :
				P("Not available in menu\n");
				P("Enter 0 for ordering more.\n");
				P("Enter 1 for bill.\n");
				P("Enter your choice :");
				scanf("%d",&a);

				if(a==0)
				{
					goto tmp;
				}
				break;
		 } break;




	       default :
			P("Not available in menu.");


       }
	  clrscr();
	  P("Thank you.^_^\nYour total bill is : %d",bill);


	  getch();


}