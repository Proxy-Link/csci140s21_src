#include <iostream>
#include <array>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

#define WINDOWS true
void clearScreen();
void clearInstream();
void generateGold();

class dungeon
{
public:
    char dungeon[4][4];
    int xpos{0}, ypos{0};

    void introMessage()
    {
        cout << "BooBah Dungeon Simulator" << endl;
        cout << "Avoid at all costs the pits and the evil BooBah, cursed be his name." << endl;
    }

    void initDungeon()
    {
        for (size_t i = 0; i < 4; i++)
        {
            for (size_t j = 0; j < 4; j++)
            {
                dungeon[i][j] = ' ';
            }
        }
        dungeon[0][0] = 'U';
        generateGold();
        for (int k = 0; k < 3; ++k)
        {
            generatePit();
        }
    }

    void generateGold()
    {
        while(xpos+ypos == 0){
            srand(time(0));
            xpos = rand() % 4;
            ypos = rand() % 4;
            dungeon[xpos][ypos] = 'X';
        }
    }

    void generatePit()
    {
        
        bool ok = false;
        while(ok == false){
        xpos = rand() %4;
        ypos = rand() %4;
        if(dungeon[xpos][ypos]==' '){
        dungeon[xpos][ypos] = 'T';
        ok=true;
        }
 }
    }

    void generateBoo()
    {
        int booX, booY;
        booX = rand() % 4;
        booY = rand() % 4;
    }

    void userControls()
    {
        char userInput;
        cin >> userInput;
        clearInstream();

        switch (userInput)
        {
        case 'u':
        case 'U':
            dungeon[xpos][ypos] = ' ';
            upDir();
            dungeon[xpos][ypos] = 'U';
            break;
        case 'd':
        case 'D':
            dungeon[xpos][ypos] = ' ';
            downDir();
            dungeon[xpos][ypos] = 'U';
            break;
        case 'l':
        case 'L':
            dungeon[xpos][ypos] = ' ';
            leftDir();
            dungeon[xpos][ypos] = 'U';
            break;
        case 'r':
        case 'R':
            dungeon[xpos][ypos] = ' ';
            rightDir();
            dungeon[xpos][ypos] = 'U';
            break;
        case 'p':
        case 'P':

            break;
        default:
            cout << "Invalid input";
            cin >> userInput;
            break;
        }
        
       
        
    }

    void upDir()
    {
        if (xpos > 0)
        {
            xpos--;
        }
    }

    void downDir()
    {
        if (xpos < 3)
        {
            xpos++;
        }
    }

    void leftDir()
    {
        if (ypos > 0)
        {
            ypos--;
        }
    }

    void rightDir()
    {
        if (ypos < 3)
        {
            ypos++;
        }
    }

    void printDugeon()
    {
        for (int j = 0; j < 4; j++)
        {

            cout << "----";
            cout << "-";
        }

        cout << "-----" << endl;

        for (int i = 0; i < 4; i++)
        {

            for (int j = 0; j < 4; j++)
            {

                cout << "|   " << dungeon[i][j];
                cout << " ";
            }

            cout << "|    " << endl;

            for (int j = 0; j < 4; j++)
            {

                cout << "|    ";
                cout << " ";
            }

            cout << "| " << endl;

          
            for (int j = 0; j < 4; j++)
            {

                cout << "----";
                cout << "-";
            }

            cout << "-----" << endl;
        }
    }

    void gameRules()
    {
        
    }

    void clearScreen()
    {
        if (WINDOWS)
            system("CLS");
        else
            system("clear");
    }

    void clearInstream()
    {
        std::cin.clear();
        // Wrong input remains on the stream, so you need to get rid of it
        std::cin.ignore(INT_MAX, '\n');
    }


};
