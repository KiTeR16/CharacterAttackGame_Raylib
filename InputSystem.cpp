#include "InputSystem.h"
#include <conio.h>
#include <cctype>



InputSystem::InputSystem(int dxx, int dyy): dx(dxx), dy(dyy){}

Input()
{
    if(kbhit()) 
    {
    
        char ch = getch();
        ch = tolower(ch); // Convert to lowercase for uniformity

        switch(ch) 
        {
            case 'w': dx+=1; break; 
            case 's': dx-=1; break;
            case 'a': dy-=1; break;
            case 'd': dy+=1; break;
            {
                for(int i=0; i<=3; i++) 
                {
                    dy+=1; // Simulate jump over multiple frames
                }
                for(int i=0; i<=3; i++) 
                {
                    dy-=1; // Simulate landing over multiple frames
                }
                break; // Jump action
            }
            default: break; // Ignore other keys

    }
}
}
