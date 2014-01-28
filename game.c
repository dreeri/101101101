#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void music(int number)
{
	pid_t childPID;
	childPID = fork();
	if(childPID == 0)
	{
		if(number == 1)
		{
			system("echo 'main(t){for(;;t++)putchar(t>>4^t>>4+t>>4+255%2>>t);}'|gcc -x c -&&./a.out |aplay");
		}

		if(number == 2)
		{
			system("echo 'main(t){for(;;t++)putchar(t>>2^t>>4+t>>4+255%2>>t);}'|gcc -x c -&&./a.out |aplay");
		}
	}
}

void flower()
{
	printf("              .-.            \n");
	printf("        __   /   \\   __      \n");
	printf("       (  `\'.\\   /.\'`  )     \n");
	printf("        \'-._.(;;;)._.-\'      \n");
	printf("        .-\'  ,`\"`,  \'-.      \n");
	printf("       (__.-'/   \\'-.__)/)_  \n");
	printf("             \\   /\\    / / ) \n");
	printf("              '-'  |   \\/.-')\n");
	printf(" We don't see ,    | .'/\\'..)\n");
	printf("  things as   |\\   |/  | \\_) \n");
	printf("   they are,  \\ |  |   \\_/   \n");
	printf("               | \\ /         \n");
	printf(" we see them    \\|/    _,    \n");
	printf("  as we are.     /  __/ /    \n");
	printf("                | _/ _.'     \n");
	printf("                |/__/        \n");
	printf("                 \\           \n");
}

void lionSleep()
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("        |\\      _,,,---,,_        \n");
	printf("        /,`.-'`'    -.  ;-;;,_    \n");
	printf("       |,4-  ) )-,_..;\\ (  `'-'   \n");
	printf("      '---''(_/--'  `-'\\_)        \n");
}

void lionRise()
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("        )\\._.,--....,'``.         \n");
	printf("       /,   _.. \\   _\\  (`._ ,.   \n");
	printf("      `._.-(,_..'--(,_..'`-.;.'   \n");
}

void lionUp()
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("         (\"`-/\")_.-'\"``-._	\n");
	printf("          . . `; -._    )-;-,_`)\n");
	printf("         (v_,)\'  _  )`-.\\  ``-\'\n");
	printf("        _.- _..-_/ / ((.'	\n");
	printf("      ((,.-'   ((,/		\n");
}

void credits()
{
	printf("\n\n\n\n");
	printf("ASCII by:\n");
	printf("Felix Lee <flee@cse.psu.edu>\n");
	printf("jgs\n");
	printf("\n\n\n\n\n\n\n\n\n\n");
}

void question()
{
	printf("\n\n\n\n\n\n\n\n\n");
	printf("Save cat? (y/n)\n");
	printf("\n\n\n\n\n\n\n");
}

int main(int argc, char *argv[])
{
	int i = 0;
	unsigned int y = 1;
	int tru = 1;
	int c;
	int num = atoi(argv[1]);

	music(num);

	

	while(tru)
	{
		for(i = 0; i < 10; ++i)
		{
			flower();
			sleep(y);
		}

		question();

		if((c = getchar()) == 121)
		{
			
			for(i = 0; i < 2; ++i)
			{
				lionRise();
				sleep(y);
			}

			for(i = 0; i < 100; ++i)
			{
				lionUp();
				sleep(y);
			}
		}
		
		else//((c = getchar()) == 110)
		{
			for(i = 0; i < 100; ++i)
			{
				lionSleep();
				sleep(y);
			}
		}
/*
		if((c = getchar()) == 113)
		{
			system("killall pulseaudio");
			system("killall a.out");
			return 0;
		}		
	
	//Demo
		for(i = 0; i < 10; ++i)
		{
			lionSleep();
			sleep(y);
		}
		
		for(i = 0; i < 10; ++i)
		{
			lionRise();
			sleep(y);
		}

		for(i = 0; i < 10; ++i)
		{
			lionUp();
			sleep(y);
		}
	*/
	}
	return 0;
}


