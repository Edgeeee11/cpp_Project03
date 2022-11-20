#include <stdio.h>


main() 
{
	int Login, Password;
	
		printf("Login=");
			scanf("%i", &Login);
			
		printf("Password=");
			scanf("%i", &Password);
			
			if (((Login==123)&&(Password==321)) || ((Login==456)&&(Password==654)) || ((Login==789)&&(Password==987)) || ((Login==111)&&(Password==222)))
			{
				printf("Access Granted");
			}
			else
			{
				printf("Access Denied");
			}
}
