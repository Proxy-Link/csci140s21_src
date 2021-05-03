#include <stddef.h>


enum Status : size_t { INPLAY , WIN , LOST , DRAW };
enum Players : size_t {  EMPTY = 0, X = 1, O = 2 } ;


class TicTacToe
{
private:

    static const size_t DIMENSION {3};
    const char players[2]{'X', 'O'};
    Status currentStatus;
    Players grid[DIMENSION][DIMENSION];

    void init();
    void updateStatus();

public:
    TicTacToe();
    void reset();
    void makeMove(Players, size_t, size_t);
    Status getStatus();
    void printGameState();

};