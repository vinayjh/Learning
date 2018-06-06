#include <stdio.h>
#include<math.h>

int main(int argc, const char * argv[])
{
    int numberOfColumns = 18;
    int numberOfRows = numberOfColumns/2+1;
    
    //where to put the *
    // how many
    int x=1;
    for(int row = 1; row <= numberOfRows; row++)
    {
        for(int column = 1; column <= numberOfColumns; column++)
        {
            if((numberOfColumns % 2 == 0)&&(row>1))
            {
                int y =((numberOfColumns/2)+row);
                
                if ((column >=numberOfColumns-y+2) && (column <= y-1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else if ((numberOfColumns % 2 != 0)&&( row > 1 ))
            {
                int y =((numberOfColumns/2)+row);
                
                if ((column >=numberOfColumns-y+1) && (column <= y))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if((row == 1) && (column == numberOfRows))
                {
                    printf("*");
                    break;
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
        x=x+2;
    }
    return 0;
}
