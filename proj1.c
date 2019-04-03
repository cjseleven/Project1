#include <stdio.h>



int main()
{
    
    printf("Please select an option: \n");
    printf("a) Start a new game\n");
    printf("b) Load a saved game\n");
    printf("c) Options\n");
    printf("d) Quit\n");
    printf("Selection: ");
    
    char c;
    scanf("%c", &c);
    
    while(c < 'a' || c > 'd')
    
    switch(c)
    {
        case 'a': newGame();
        break;
        case 'b': loadGame();
        break;
        case 'c': options();
        break;
        case 'd': quit();
        break;
    }
   

  return 0;
}

