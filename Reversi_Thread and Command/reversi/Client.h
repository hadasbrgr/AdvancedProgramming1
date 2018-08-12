/**
 * hadas berger: 316590215
 * sapir yamin: 316251818
 **/


#ifndef EX3ADVENCED_CLIENT_H
#define EX3ADVENCED_CLIENT_H


#include "HumanLogic.h"
#include "ScreenView.h"

class Client{
public:
    /**
     *
     * @param serverIP
     * @param serverPort
     * @param b
     */
    Client(const char* serverIP ,int serverPort, Board & b);
    /**
     * connect the client to the server
     */
    void connectToServer();
    /**
     *send to the server the move the client do.
     * @param firstTurn
     */
    void sendPoint(int firstTurn);
    /**
     *play one turn of the game
     * @param type of client (O or X)
     * @return the point the player finally did
     */
    Point playOneTurnClient(char type);
    int RightValue(int n);
    /**
     *deconstructor.
     */
    ~Client();
    /**
     *the loop of the game- from menu.
     */
    void startGame();
private:
    Board board;
    const char*serverIP;
    int serverPort;
    int clientSocket;
    HumanLogic *player;
    char type, otherType;
    int firstLoop;
    int endGame;
    ScreenView screen;
};



#endif //EX3ADVENCED_CLIENT_H
