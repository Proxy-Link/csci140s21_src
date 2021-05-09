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

enum Status : size_t
{
};
enum Objects : size_t
{
    S,
    B,
    G
};

class dungeon
{
private:
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
        dungeon[xpos][ypos] = 'U';
    }

    void generateGold()
    {
        int goldX, goldY;
        goldX = rand() % 4;
        goldY = rand() % 4;
        if (dungeon[goldX][goldY] == ' ')
        {
            dungeon[goldX][goldY] = 'G';
        }
    }

    void generatePit()
    {
        int pitX, pitY;
        xpos = rand() % 4;
        ypos = rand() % 4;
        if (dungeon[xpos - 1][pitY - 1] == ' ' || dungeon[pitX + 1][pitY + 1] == ' ' || dungeon[pitX + 1][pitY - 1] == ' ' || dungeon[pitX - 1][pitY + 1] == ' ')
        {
            dungeon[pitX][pitY] == 'B';
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
        const char user = 'U';
        dungeon[xpos][ypos] = user;
        cin >> userInput;
        clearInstream();

        switch (userInput)
        {
        case 'u':
        case 'U':
            upDir();
            break;
        case 'd':
        case 'D':
            downDir();
            break;
        case 'l':
        case 'L':
            leftDir();
            break;
        case 'r':
        case 'R':
            rightDir();
            break;
        case 'p':
        case 'P':

            break;
        default:
            cout << "Invalid input";
            cin >> userInput;
            break;
        }
        dungeon[xpos][ypos] = 'U';
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

    void startGame()
    {
        initDungeon();

        for (int i = 0; i <= 2; ++i)
        {
            generatePit();
        }

        introMessage();
        while (true)
        {
            printDugeon();
            userControls();
            //clearInstream();
            //clearScreen();
        }
    }
};
