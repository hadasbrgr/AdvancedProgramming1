//
// Created by sapir on 25/12/17.
//

#include <iostream>
#include "ScreenView.h"

ScreenView::ScreenView(){}
void ScreenView::printString(string s){
    cout<<s;
}
/*void ScreenView::printBoard(Board&board){
    for(int n=0; n<board.getSize(); n++){
        cout <<" | "<<n+1;
    }
    cout << " |";
    cout<< endl;
    cout<<string(((board.getSize())*4)+2, '-')<<endl;
    for(int i=0; i<board.getSize(); i++) {
        cout << i+1<<"|";
        for(int j=0; j<board.getSize(); j++) {
            if ((*board.getArr()[i][j]).getVal()=='X' || (*board.getArr()[i][j]).getVal()=='O'){
                cout<<" "<< (*board.getArr()[i][j]).getVal()<<" |";
            } else {
                cout << "   |";
            }
        }
        cout<<endl;
        cout<<string(board.getSize()*4+2, '-')<<endl;
    }
    cout<<endl;
}*/
void ScreenView::printStringWithParameterParameterBefore(string s, char n){
    cout<<n<<s;
}
void ScreenView::printStringWithMsgBefore(string s, char n){
    cout<<s<<n;
}
void ScreenView::printStringWithParameterBefore(char n,string s){
    cout<<n<<s;
}
void ScreenView::printEnter(){
    cout<<endl;
}
void ScreenView::printPoint(string s,int x,int y){
    cout<<s<<"("<<x<<","<<y<<")\n\n";
}
void ScreenView::printError(string s,string msg){
    cout<<s<<msg<<endl;
}
void ScreenView::printMove(){}
void ScreenView::printMenu(){
    cout << "welcome to reversi game!"<<endl
         <<"Choose an opponent type:"<<endl
         <<"1. a human local player"<<endl
         <<"2. an AI player"<<endl
         <<"3. a remote player"<<endl;
}
void ScreenView::printSecondMenu(){
    cout<<"press(1)-if you want to create a new game"<<endl
        <<"press(2)-if you want to join to exist game"<<endl
        <<"press(3)- if you want to see the list of games"<<endl;
}
void ScreenView::printPointOther(char s,int x,int y) {
    cout << s << " played: (" << x << "," << y << ")" << endl;
};
