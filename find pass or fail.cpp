#include<stdio.h>
#include<math.h>
 main()
{
	 int n;
	 printf("enter the digit : ");
	 scanf("%d",&n);
	 switch(n)
	{
	
	 	case 0:printf(":..zero \n is a  valid digit");
	 	        break;
	 	case 1:printf(":..one \n is a valid digit ");
	 	        break;
	 	case 2:printf(":..two \n is a valid digit ");
	 	        break;
	 	case 3:printf(":..three \n is a valid digit");
	 	        break;
		case 4:printf(":..four \n is a valid digit ");
	 	        break;
		case 5:printf(":..five \n is a valid digit ");
	 	        break;		         
	    case 6:printf(":..six \n is a valid digit");
	 	        break;
        case 7:printf(":..seven \n is valid digit");
	 	        break;
	 	case 8:printf(":..eight \n is a valid digit");
	 	        break;
	    case 9:printf(" :..nine \n is a valid digit");
	        break;
	
	    default:("do not a digit \n  enter the valid digit...!");
	    
	    return 0;
	 }
}
