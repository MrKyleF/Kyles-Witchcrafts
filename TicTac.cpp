#include <fstream>
#include <cstdlib>
#include <climits>
#include <ctime>
#include <string>
#include <cmath>
#include <iostream>
#include <time.h>
#include <sstream>
using namespace std;


string spot_1 = "1";
string spot_2 = "2";
string spot_3 = "3";
string spot_4 = "4";
string spot_5 = "5";
string spot_6 = "6";
string spot_7 = "7";
string spot_8 = "8";
string spot_9 = "9";
string wall = "|";
string floors = "-";

void Display(){
    string x = "=";
    cout << x << x << x << x << x << x << x << x << x << x << x << x << x << x << x << endl; 
    cout << "||" << "P1 = X     ||" << endl;
    cout << "||" << "           ||" << endl;
    cout << "|| " << spot_1  << " " << wall << " " << spot_2 << " " << wall << " " << spot_3 << " ||" << endl;
    cout << "|| " << floors << floors << floors << floors << floors << floors << floors << floors << floors << " ||" << endl;
    cout << "|| " << spot_4  << " " << wall << " " << spot_5 << " " << wall << " " << spot_6 << " ||" << endl;
    cout << "|| " << floors << floors << floors << floors << floors << floors << floors << floors << floors << " ||"  << endl;
    cout << "|| " << spot_7  << " " << wall << " " << spot_8 << " " << wall << " " << spot_9 << " ||" << endl;
    cout << "||" << "           ||" << endl;
    cout << "||" << "P2 = O     ||" << endl;
    cout << x << x << x << x << x << x << x << x << x << x << x << x << x << x << x << endl; 
}
int adjust(int player, int spot){
    string sym;
    if(player == 1){
        sym = "X";
    }
    if(player == 2){
        sym = "O";
    }
    if(spot == 1){
        if(spot_1 != "1"){
            return 1;
        }
        if(spot_1 == "1"){
            spot_1 = sym;
        }
    }
    if(spot == 2){
         if(spot_2 != "2"){
            return 1;
        }
        if(spot_2 == "2"){
            spot_2 = sym;
        }
    }
    if(spot == 3){
         if(spot_3 != "3"){
            return 1;
        }
        if(spot_3 == "3"){
            spot_3 = sym;
        }
    }
    if(spot == 4){
        if(spot_4 != "4"){
            return 1;
        }
        if(spot_4 == "4"){
            spot_4 = sym;
        }
    }
    if(spot == 5){
        if(spot_5 != "5"){
            return 1;
        }
        if(spot_5 == "5"){
            spot_5 = sym;
        }
    }
    if(spot == 6){
         if(spot_6 != "6"){
            return 6;
        }
        if(spot_6 == "6"){
            spot_6 = sym;
        }
    }
    if(spot == 7){
         if(spot_7 != "7"){
            return 1;
        }
        if(spot_7 == "7"){
            spot_7 = sym;
        }
    }
    if(spot == 8){
         if(spot_8 != "8"){
            return 1;
        }
        if(spot_8 == "8"){
            spot_8 = sym;
        }
    }
    if(spot == 9){
         if(spot_9 != "9"){
            return 1;
        }
        if(spot_9 == "9"){
            spot_9 = sym;
        }
    }
    return 2;
}
int checkforWinner(void){
    // across check
    if(spot_1 == spot_2 && spot_2 == spot_3){
        if(spot_1 == "X"){
            cout << "Player one wins! ";
        }
        if(spot_1 == "O"){
            cout << "Player two wins! ";
        }
        return 1;
    }
    if(spot_4 == spot_5 && spot_5 == spot_6){
        if(spot_4 == "X"){
            cout << "Player one wins! ";
        }
        if(spot_4 == "O"){
            cout << "Player two wins! ";
        }
        return 1;
    }
    if(spot_7 == spot_8 && spot_8 == spot_9){
        if(spot_7 == "X"){
            cout << "Player one wins! ";
        }
        if(spot_7 == "O"){
            cout << "Player two wins! ";
        }
        return 1;
    }
    // row check
    if(spot_1 == spot_4 && spot_4 == spot_7){
        if(spot_1 == "X"){
            cout << "Player one wins! ";
        }
        if(spot_1 == "O"){
            cout << "Player two wins! ";
        }
        return 1;
    }
    if(spot_2 == spot_5 && spot_5 == spot_8){
        if(spot_2 == "X"){
            cout << "Player one wins! ";
        }
        if(spot_2 == "O"){
            cout << "Player two wins! ";
        }
        return 1;
    }
    if(spot_3 == spot_6 && spot_6 == spot_9){
        if(spot_1 == "X"){
            cout << "Player one wins! ";
        }
        if(spot_1 == "O"){
            cout << "Player two wins! ";
        }
        return 1;
    }
    // diagnol check
    if(spot_1 == spot_5 && spot_5 == spot_9){
        if(spot_1 == "X"){
            cout << "Player one wins! ";
        }
        if(spot_1 == "O"){
            cout << "Player two wins! ";
        }
        return 1;
    }
    if(spot_3 == spot_5 && spot_5 == spot_7){
        if(spot_3 == "X"){
            cout << "Player one wins! ";
        }
        if(spot_3 == "O"){
            cout << "Player two wins! ";
        }
        return 1;
    }
    return 2;
}

int Computer(void){
    string c_spot_1 = spot_1;
    string c_spot_2 = spot_2;
    string c_spot_3 = spot_3;
    string c_spot_4 = spot_4;
    string c_spot_5 = spot_5;
    string c_spot_6 = spot_6;
    string c_spot_7 = spot_7;
    string c_spot_8 = spot_8;
    string c_spot_9 = spot_9;

    
    
    
    //   STOP OPPENT FROM WINNING
    
    
    // make moves;
     string opp = "O";
    // next move is win
    if(spot_1 == opp &&  spot_2 == opp){
        if(spot_3 == "3"){
            return 3;
        }
    }
    if(spot_1 == opp &&  spot_3 == opp){
        if(spot_2 == "2"){
            return 2;
        }
    }
    if(spot_2 == opp &&  spot_3 == opp){
        if(spot_1 == "1"){
            return 1;
        }
    }
    // second row
    if(spot_4 == opp &&  spot_5 == opp){
        if(spot_6 == "6"){
            return 6;
        }
    }
    if(spot_4 == opp &&  spot_6 == opp){
        if(spot_5 == "5"){
            return 5;
        }
    }
    if(spot_5 == opp &&  spot_6 == opp){
        if(spot_4 == "4"){
            return 4;
        }
    }
    // third row
    if(spot_7 == opp &&  spot_8 == opp){
        if(spot_9 == "9"){
            return 9;
        }
    }
    if(spot_7 == opp &&  spot_9 == opp){
        if(spot_8 == "8"){
            return 8;
        }
    }
    if(spot_8 == opp &&  spot_9 == opp){
        if(spot_7 == "7"){
            return 7;
        }
    }
    // up and down check

    // first column  
    if(spot_1 == opp &&  spot_4 == opp){
        if(spot_7 == "7"){
            return 7;
        }
    }
    if(spot_1 == opp &&  spot_7 == opp){
        if(spot_4 == "4"){
            return 2;
        }
    }
    if(spot_4 == opp &&  spot_7 == opp){
        if(spot_1 == "1"){
            return 1;
        }
    }
    // middle column
    if(spot_2 == opp &&  spot_5 == opp){
        if(spot_8 == "8"){
            return 8;
        }
    }
    if(spot_2 == opp &&  spot_8 == opp){
        if(spot_5 == "5"){
            return 5;
        }
    }
    if(spot_5 == opp &&  spot_8 == opp){
        if(spot_2 == "2"){
            return 2;
        }
    }
    //last column
    if(spot_3 == opp &&  spot_6 == opp){
        if(spot_9 == "9"){
            return 9;
        }
    }
    if(spot_3 == opp &&  spot_9 == opp){
        if(spot_6 == "6"){
            return 6;
        }
    }
    if(spot_6 == opp &&  spot_9 == opp){
        if(spot_3 == "3"){
            return 3;
        }
    }
    // diagnol
    if(spot_1 == opp &&  spot_5 == opp){
        if(spot_9 == "9"){
            return 9;
        }
    }
    if(spot_1 == opp &&  spot_9 == opp){
        if(spot_5 == "5"){
            return 5;
        }
    }
    if(spot_5 == opp &&  spot_9 == opp){
        if(spot_1 == "1"){
            return 1;
        }
    }
    if(spot_3 == opp && spot_5 == opp){
        if(spot_7 == "7"){
            return 7;
        }
    }
    if(spot_3 == opp &&  spot_7 == opp){
        if(spot_5 == "5"){
            return 5;
        }
    }
    if(spot_7 == opp &&  spot_5 == opp){
        if(spot_3 == "3"){
            return 3;
        }
    }

     //   STOP OPPENT FROM WINNING
    // across check
    opp ="X";
    // first row
    if(spot_1 == opp &&  spot_2 == opp){
        if(spot_3 == "3"){
            return 3;
        }
    }
    if(spot_1 == opp &&  spot_3 == opp){
        if(spot_2 == "2"){
            return 2;
        }
    }
    if(spot_2 == opp &&  spot_3 == opp){
        if(spot_1 == "1"){
            return 1;
        }
    }
    // second row
    if(spot_4 == opp &&  spot_5 == opp){
        if(spot_6 == "6"){
            return 6;
        }
    }
    if(spot_4 == opp &&  spot_6 == opp){
        if(spot_5 == "5"){
            return 5;
        }
    }
    if(spot_5 == opp &&  spot_6 == opp){
        if(spot_4 == "4"){
            return 4;
        }
    }
    // third row
    if(spot_7 == opp &&  spot_8 == opp){
        if(spot_9 == "9"){
            return 9;
        }
    }
    if(spot_7 == opp &&  spot_9 == opp){
        if(spot_8 == "8"){
            return 8;
        }
    }
    if(spot_8 == opp &&  spot_9 == opp){
        if(spot_7 == "7"){
            return 7;
        }
    }
    // up and down check

    // first column  
    if(spot_1 == opp &&  spot_4 == opp){
        if(spot_7 == "7"){
            return 7;
        }
    }
    if(spot_1 == opp &&  spot_7 == opp){
        if(spot_4 == "4"){
            return 4;
        }
    }
    if(spot_4 == opp &&  spot_7 == opp){
        if(spot_1 == "1"){
            return 1;
        }
    }
    // middle column
    if(spot_2 == opp &&  spot_5 == opp){
        if(spot_8 == "8"){
            return 8;
        }
    }
    if(spot_2 == opp &&  spot_8 == opp){
        if(spot_5 == "5"){
            return 5;
        }
    }
    if(spot_5 == opp &&  spot_8 == opp){
        if(spot_2 == "2"){
            return 2;
        }
    }
    //last column
    if(spot_3 == opp &&  spot_6 == opp){
        if(spot_9 == "9"){
            return 8;
        }
    }
    if(spot_3 == opp &&  spot_9 == opp){
        if(spot_6 == "6"){
            return 6;
        }
    }
    if(spot_6 == opp &&  spot_9 == opp){
        if(spot_3 == "3"){
            return 3;
        }
    }
    // diagnol
    if(spot_1 == opp &&  spot_5 == opp){
        if(spot_9 == "9"){
            return 9;
        }
    }
    if(spot_1 == opp &&  spot_9 == opp){
        if(spot_5 == "5"){
            return 5;
        }
    }
    if(spot_5 == opp &&  spot_9 == opp){
        if(spot_1 == "1"){
            return 1;
        }
    }
    if(spot_3 == opp &&  spot_5 == opp){
        if(spot_7 == "7"){
            return 7;
        }
    }
    if(spot_3 == opp &&  spot_7 == opp){
        if(spot_5 == "5"){
            return 5;
        }
    }
    if(spot_7 == opp &&  spot_5 == opp){
        if(spot_3 == "3"){
            return 3;
        }
    }


    if(spot_5 == "5"){
        if(spot_5 == "5"){
            return 5;
        }
    }
    if(spot_5 == "O"){
        if(spot_2 == "2"){
            return 2;
        }
        if(spot_8 == "8"){
            return 8;
        }
        if(spot_4 == "4"){
            return 4;
        }
        if(spot_6 == "6"){
            return 6;
        }
        if(spot_3 == "3" && spot_7 == "7"){
            return 3;
        }
        if(spot_9 == "9" && spot_1 == "1"){
            return 1;
        }
    }
    if(spot_1 == "X"){
        if(spot_9 == "9"){
            return 9;
        }
    }
    if(spot_2 == "X"){
        if(spot_8 == "8"){
            return 8;
        }
    }
    if(spot_3 == "X"){
        if(spot_7 == "7"){
            return 7;
        }
    }
    if(spot_4 == "X"){
        if(spot_5 == "5"){
            return 5;
        }
    }
    if(spot_5 == "X"){
        if(spot_1 == "1"){
            return 1;
        }
    }
    if(spot_6 == "X"){
        if(spot_4 == "4"){
            return 4;
        }
    }
    if(spot_7 == "X"){
        if(spot_3 == "3"){
            return 3;
        }
    }
    if(spot_8 == "X"){
        if(spot_2 == "2"){
            return 2;
        }
    }
    if(spot_9 == "X"){
        if(spot_1 == "1"){
            return 1;
        }
    }


    if(spot_5 == "5"){
        if(spot_5 == "5"){
            return 5;
        }
    }
    if(spot_1 == "1"){
        if(spot_1 == "1"){
            return 1;
        }
    }
    if(spot_9 == "9"){
        if(spot_9 == "9"){
            return 9;
        }
    }
    if(spot_3 == "3"){
        if(spot_3 == "3"){
            return 3;
        }
    }
    if(spot_2 == "2"){
        if(spot_2 == "2"){
            return 2;
        }
    }
    if(spot_4 == "4"){
        if(spot_4 == "4"){
            return 4;
        }
    }
    if(spot_6 == "6"){
        if(spot_6 == "6"){
            return 6;
        }
    }
    if(spot_7 == "7"){
        if(spot_7 == "7"){
            return 7;
        }
    }
    if(spot_8 == "8"){
        if(spot_8 == "8"){
            return 8;
        }
    }
    
    return 1;



    
}

int Computer_Pt2(void){
    string c_spot_1 = spot_1;
    string c_spot_2 = spot_2;
    string c_spot_3 = spot_3;
    string c_spot_4 = spot_4;
    string c_spot_5 = spot_5;
    string c_spot_6 = spot_6;
    string c_spot_7 = spot_7;
    string c_spot_8 = spot_8;
    string c_spot_9 = spot_9;
    int spot_p_1=0;
    int spot_p_2=0;
    int spot_p_3=0;
    int spot_p_4=0;
    int spot_p_5=0;
    int spot_p_6=0;
    int spot_p_7=0;
    int spot_p_8=0;
    int spot_p_9=0;
    // Assigning;
    if(spot_1 == "X"){
        spot_p_1 = -2;
    }
    if(spot_1 == "O"){
        spot_p_1 = -1;
    }
    if(spot_2 == "X"){
        spot_p_2 = -2;
    }
    if(spot_2 == "O"){
        spot_p_2 = -1;
    }
    if(spot_3 == "X"){
        spot_p_3 = -2;
    }
    if(spot_3 == "O"){
        spot_p_3 = -1;
    }
    if(spot_4 == "X"){
        spot_p_4 = -2;
    }
    if(spot_4 == "O"){
        spot_p_4 = -1;
    }
    if(spot_5 == "X"){
        spot_p_5 = -2;
    }
    if(spot_5 == "O"){
        spot_p_5 = -1;
    }
    if(spot_6 == "X"){
        spot_p_6 = -2;
    }
    if(spot_6 == "O"){
        spot_p_6 = -1;
    }
    if(spot_7 == "X"){
        spot_p_7 = -2;
    }
    if(spot_7 == "O"){
        spot_p_7 = -1;
    }
    if(spot_8 == "X"){
        spot_p_8 = -2;
    }
    if(spot_8 == "O"){
        spot_p_8 = -1;
    }
    if(spot_9 == "X"){
        spot_p_9 = -2;
    }
    if(spot_9 == "O"){
        spot_p_9 = -1;
    }
    // column  
    if(spot_p_1 >= -1 && spot_p_2 >= -1 && spot_p_3 >= -1){
        if(spot_p_1 >= 0){
            spot_p_1 = spot_p_1 + 1;
        }
        if(spot_p_2 >= 0){
            spot_p_2 = spot_p_2 + 1;
        }
        if(spot_p_3 >= 0){
            spot_p_3 = spot_p_3 + 1;
        }
    }
    if(spot_p_4 >= -1 && spot_p_5 >= -1 && spot_p_6 >= -1){
        if(spot_p_4 >= 0){
            spot_p_4 = spot_p_4 + 1;
        }
        if(spot_p_5 >= 0){
            spot_p_5 = spot_p_5 + 1;
        }
        if(spot_p_6 >= 0){
            spot_p_6 = spot_p_6 + 1;
        }
    }
    if(spot_p_7 >= -1 && spot_p_8 >= -1 && spot_p_9 >= -1){
        if(spot_p_7 >= 0){
            spot_p_7 = spot_p_7 + 1;
        }
        if(spot_p_8 >= 0){
            spot_p_8 = spot_p_8 + 1;
        }
        if(spot_p_9 >= 0){
            spot_p_9 = spot_p_9 + 1;
        }
    }
    // row
    if(spot_p_3 >= -1 && spot_p_6 >= -1 && spot_p_9 >= -1){
        if(spot_p_3 >= 0){
            spot_p_3 = spot_p_3 + 1;
        }
        if(spot_p_6 >= 0){
            spot_p_6 = spot_p_6 + 1;
        }
        if(spot_p_9 >= 0){
            spot_p_9 = spot_p_9 + 1;
        }
    }
    if(spot_p_2 >= -1 && spot_p_5 >= -1 && spot_p_8 >= -1){
        if(spot_p_2 >= 0){
            spot_p_2 = spot_p_2 + 1;
        }
        if(spot_p_5 >= 0){
            spot_p_5 = spot_p_5 + 1;
        }
        if(spot_p_8 >= 0){
            spot_p_8 = spot_p_8 + 1;
        }
    }
    if(spot_p_1 >= -1 && spot_p_4 >= -1 && spot_p_7 >= -1){
        if(spot_p_1 >= 0){
            spot_p_1 = spot_p_1 + 1;
        }
        if(spot_p_4 >= 0){
            spot_p_4 = spot_p_4 + 1;
        }
        if(spot_p_7 >= 0){
            spot_p_7 = spot_p_7 + 1;
        }
    }
    // diagnal
    if(spot_p_1 >= -1 && spot_p_5 >= -1 && spot_p_9 >= -1){
        if(spot_p_1 >= 0){
            spot_p_1 = spot_p_1 + 2;
        }
        if(spot_p_5 >= 0){
            spot_p_5 = spot_p_5 + 2;
        }
        if(spot_p_9 >= 0){
            spot_p_9 = spot_p_9 + 2;
        }
    }
    if(spot_p_3 >= -1 && spot_p_5 >= -1 && spot_p_7 >= -1){
        if(spot_p_3 >= 0){
            spot_p_3 = spot_p_3 + 2;
        }
        if(spot_p_5 >= 0){
            spot_p_5 = spot_p_5 + 2;
        }
        if(spot_p_7 >= 0){
            spot_p_7 = spot_p_7 + 2;
        }
    }
    // including oppenent;
    
    // accross
    if((spot_p_1 == -2 && spot_p_2 == -2) || ( spot_p_2 == -2 && spot_p_3 == -2 ) || (spot_p_3 == -2 && spot_p_1 == -2)){
        if(spot_p_1 >= 0){
            spot_p_1 = spot_p_1 + 6;
        }
        if(spot_p_2 >= 0){
            spot_p_2 = spot_p_2 + 6;
        }
        if(spot_p_3 >= 0){
            spot_p_3 = spot_p_3 + 6;
        }
    }
    if((spot_p_4 == -2 && spot_p_5 == -2) || ( spot_p_5 == -2 && spot_p_6 == -2 ) || (spot_p_4 == -2 && spot_p_6 == -2)){
        if(spot_p_4 >= 0){
            spot_p_4 = spot_p_4 + 6;
        }
        if(spot_p_5 >= 0){
            spot_p_5 = spot_p_5 + 6;
        }
        if(spot_p_6 >= 0){
            spot_p_6 = spot_p_6 + 6;
        }
    }
    if((spot_p_7 == -2 && spot_p_8 == -2) || ( spot_p_8 == -2 && spot_p_9 == -2 ) || (spot_p_7 == -2 && spot_p_9 == -2)){
        if(spot_p_7 >= 0){
            spot_p_7 = spot_p_7 + 6;
        }
        if(spot_p_8 >= 0){
            spot_p_8 = spot_p_8 + 6;
        }
        if(spot_p_9 >= 0){
            spot_p_9 = spot_p_9 + 6;
        }
    }
    // up and down
    if((spot_p_1 == -2 && spot_p_4 == -2) || ( spot_p_4 == -2 && spot_p_7 == -2 ) || (spot_p_7 == -2 && spot_p_1 == -2)){
        if(spot_p_1 >= 0){
            spot_p_1 = spot_p_1 + 4;
        }
        if(spot_p_4 >= 0){
            spot_p_4 = spot_p_4 + 4;
        }
        if(spot_p_7 >= 0){
            spot_p_7 = spot_p_7 + 4;
        }
    }
    if((spot_p_2 == -2 && spot_p_5 == -2) || ( spot_p_2 == -2 && spot_p_8 == -2 ) || (spot_p_8 == -2 && spot_p_5 == -2)){
        if(spot_p_5 >= 0){
            spot_p_5 = spot_p_5 + 4;
        }
        if(spot_p_2 >= 0){
            spot_p_2 = spot_p_2 + 4;
        }
        if(spot_p_8 >= 0){
            spot_p_8 = spot_p_8 + 4;
        }
    }
    if((spot_p_9 == -2 && spot_p_6 == -2) || ( spot_p_6 == -2 && spot_p_3 == -2 ) || (spot_p_3 == -2 && spot_p_9 == -2)){
        if(spot_p_9 >= 0){
            spot_p_9 = spot_p_9 + 4;
        }
        if(spot_p_6 >= 0){
            spot_p_6 = spot_p_6 + 4;
        }
        if(spot_p_3 >= 0){
            spot_p_3 = spot_p_3 + 4;
        }
    }
    // diagnol
    if((spot_p_1 == -2 && spot_p_5 == -2) || ( spot_p_5 == -2 && spot_p_9 == -2 ) || (spot_p_9 == -2 && spot_p_1 == -2)){
        if(spot_p_1 >= 0){
            spot_p_1 = spot_p_1 + 4;
        }
        if(spot_p_5 >= 0){
            spot_p_5 = spot_p_5 + 4;
        }
        if(spot_p_9 >= 0){
            spot_p_9 = spot_p_9 + 4;
        }
    }
    if((spot_p_3 == -2 && spot_p_5 == -2) || ( spot_p_7 == -2 && spot_p_3 == -2 ) || (spot_p_7 == -2 && spot_p_1 == -2)){
        if(spot_p_3 >= 0){
            spot_p_3 = spot_p_3 + 4;
        }
        if(spot_p_5 >= 0){
            spot_p_5 = spot_p_5 + 4;
        }
        if(spot_p_7 >= 0){
            spot_p_7 = spot_p_7 + 4;
        }
    }
    // check for next move win 
    if((spot_p_1 == -1 && spot_p_2 == -1) || ( spot_p_2 == -1 && spot_p_3 == -1 ) || (spot_p_3 == -1 && spot_p_1 == -1)){
        if(spot_p_1 >= 0){
            spot_p_1 = spot_p_1 + 6;
        }
        if(spot_p_2 >= 0){
            spot_p_2 = spot_p_2 + 6;
        }
        if(spot_p_3 >= 0){
            spot_p_3 = spot_p_3 + 6;
        }
    }
    if((spot_p_4 == -1 && spot_p_5 == -1) || ( spot_p_5 == -1 && spot_p_6 == -1 ) || (spot_p_4 == -1 && spot_p_6 == -1)){
        if(spot_p_4 >= 0){
            spot_p_4 = spot_p_4 + 6;
        }
        if(spot_p_5 >= 0){
            spot_p_5 = spot_p_5 + 6;
        }
        if(spot_p_6 >= 0){
            spot_p_6 = spot_p_6 + 6;
        }
    }
    if((spot_p_7 == -1 && spot_p_8 == -1) || ( spot_p_8 == -1 && spot_p_9 == -1 ) || (spot_p_7 == -1 && spot_p_9 == -1)){
        if(spot_p_7 >= 0){
            spot_p_7 = spot_p_7 + 6;
        }
        if(spot_p_8 >= 0){
            spot_p_8 = spot_p_8 + 6;
        }
        if(spot_p_9 >= 0){
            spot_p_9 = spot_p_9 + 6;
        }
    }
    // up and down
    if((spot_p_1 == -1 && spot_p_4 == -1) || ( spot_p_4 == -1 && spot_p_7 == -1 ) || (spot_p_7 == -1 && spot_p_1 == -1)){
        if(spot_p_1 >= 0){
            spot_p_1 = spot_p_1 + 6;
        }
        if(spot_p_4 >= 0){
            spot_p_4 = spot_p_4 + 6;
        }
        if(spot_p_7 >= 0){
            spot_p_7 = spot_p_7 + 6;
        }
    }
    if((spot_p_2 == -1 && spot_p_5 == -1) || ( spot_p_2 == -1 && spot_p_8 == -1 ) || (spot_p_8 == -1 && spot_p_5 == -1)){
        if(spot_p_5 >= 0){
            spot_p_5 = spot_p_5 + 6;
        }
        if(spot_p_2 >= 0){
            spot_p_2 = spot_p_2 + 6;
        }
        if(spot_p_8 >= 0){
            spot_p_8 = spot_p_8 + 6;
        }
    }
    if((spot_p_9 == -1 && spot_p_6 == -1) || ( spot_p_6 == -1 && spot_p_3 == -1 ) || (spot_p_3 == -1 && spot_p_9 == -1)){
        if(spot_p_9 >= 0){
            spot_p_9 = spot_p_9 + 6;
        }
        if(spot_p_6 >= 0){
            spot_p_6 = spot_p_6 + 6;
        }
        if(spot_p_3 >= 0){
            spot_p_3 = spot_p_3 + 6;
        }
    }
    // diagnol
    if((spot_p_1 == -1 && spot_p_5 == -1) || ( spot_p_5 == -1 && spot_p_9 == -1 ) || (spot_p_9 == -1 && spot_p_1 == -1)){
        if(spot_p_1 >= 0){
            spot_p_1 = spot_p_1 + 6;
        }
        if(spot_p_5 >= 0){
            spot_p_5 = spot_p_5 + 6;
        }
        if(spot_p_9 >= 0){
            spot_p_9 = spot_p_9 + 6;
        }
    }
    if((spot_p_3 == -1 && spot_p_5 == -1) || ( spot_p_7 == -1 && spot_p_3 == -1 ) || (spot_p_7 == -1 && spot_p_3 == -1)){
        if(spot_p_3 >= 0){
            spot_p_3 = spot_p_3 + 6;
        }
        if(spot_p_5 >= 0){
            spot_p_5 = spot_p_5 + 6;
        }
        if(spot_p_7 >= 0){
            spot_p_7 = spot_p_7 + 6;
        }
    }
    int space=1;
    int greatest_num = spot_p_1;
    if(greatest_num < spot_p_2){
        greatest_num = spot_p_2;
        space = 2;
    }
    if(greatest_num < spot_p_3){
        greatest_num = spot_p_3;
        space = 3;
    }
    if(greatest_num < spot_p_4){
        greatest_num = spot_p_4;
        space = 4;
    }
    if(greatest_num < spot_p_5){
        greatest_num = spot_p_5;
        space = 5;
    }
    if(greatest_num < spot_p_6){
        greatest_num = spot_p_6;
        space = 6;
    }
    if(greatest_num < spot_p_7){
        greatest_num = spot_p_7;
        space = 7;
    }
    if(greatest_num < spot_p_8){
        greatest_num = spot_p_8;
        space = 8;
    }
    if(greatest_num < spot_p_9){
        greatest_num = spot_p_9;
        space = 9;
    }
    cout << " 1 ="<<spot_p_1 << "  2 ="<< spot_p_2 << " 3 ="<<spot_p_3 << "  4 ="<< spot_p_4 << " 5 ="<<spot_p_5 << "  6 ="<< spot_p_6 << " 7 ="<<spot_p_7 << "  8 ="<< spot_p_8  << "  9 ="<< spot_p_9 << endl; 
    return space;
    

}

int main(){
bool play = true;
cout << "Enter number of player: ";
int players;
cin >> players;
cout << endl;
while(play == true){
    cout << "Who goes first? Player 1 = 1, Player 2 / Computer = 2, Random = R: ";
    string dec;
    cin >> dec;
    cout << endl;
    int first_player;
    int second_player;
    if(dec == "1"){
        first_player = 0;
        second_player = 1;
    }
    if(dec == "2"){
        first_player = 1;
        second_player = 0;
    }
    if(dec == "R"){
        time_t timer;
        time(&timer);
        int random = (timer) % 2;
        if(random == 1){
            cout << "Player 2 has been chosen to go first! " << endl;
        }
        if(random == 0){
            cout << "Player 1 has been chosen to go first! ";
        }
        first_player = random;
        random = abs(random - 1);
        second_player = random;
    }
    cout << endl;
    Display();
    cout << endl;
    int player;
    int spot;
    if(players == 2){
        for(int i=0; i<9; i++){
            if(i % 2 == first_player){
                player = 1;
                cout << "Player One:  X " << endl;
                cout << "Enter which space: " ;
                cin >> spot;
                cout << endl;
                while(spot <= 0 || spot > 9){
                    cout << "Invalid move: " << endl;
                    cout << "Player One:  X " << endl;
                    cout << "Enter which space " << endl;
                    cin >> spot;
                }
                int valid_move = adjust(player, spot);
                while(valid_move == 1){
                    cout << "Invalid move: " << endl;
                    cout << "Player One:  X " << endl;
                    cout << "Enter an open space " << endl;
                    cin >> spot;
                    valid_move = adjust(player, spot);
                }
                
            }
            if(i % 2 == second_player){
                player = 2;
                cout << "Player Two:  O " << endl;
                cout << "Enter which space: "  ;
                cin >> spot;
                cout << endl;
                while(spot <= 0 || spot > 9){
                    cout << "Invalid move: " << endl;
                    cout << "Player Two:  O " << endl;
                    cout << "Enter which space " << endl;
                    cin >> spot;
                }
                int valid_move = adjust(player, spot);
                while(valid_move == 1){
                    cout << "Invalid move: " << endl;
                    cout << "Player Two:  O " << endl;
                    cout << "Enter an open space " ;
                    cin >> spot;
                    cout << endl;
                    valid_move = adjust(player, spot);
                }
            }
            //cout << endl;
            Display();
            cout << endl;
            int w =checkforWinner();
            if(w == 1){
                i = 10;
                cout << endl;
            }
        }
    }
    if(players == 1){
        for(int i=0; i<9; i++){
                if(i % 2 == first_player){
                    player = 1;
                    cout << "Player One:  X " << endl;
                    cout << "Enter which space: " ;
                    cin >> spot;
                    cout << endl;
                    while(spot <= 0 || spot > 9){
                        cout << "Invalid move: " << endl;
                        cout << "Player One:  X " << endl;
                        cout << "Enter which space " << endl;
                        cin >> spot;
                    }
                    int valid_move = adjust(player, spot);
                    while(valid_move == 1){
                        cout << "Invalid move: " << endl;
                        cout << "Player One:  X " << endl;
                        cout << "Enter an open space " << endl;
                        cin >> spot;
                        valid_move = adjust(player, spot);
                    }
                }
                if(i % 2 == second_player){
                    player = 2;
                    spot = Computer();
                    cout << "Computer chooses: " << spot << endl;
                    cout << endl;
                    int valid_move = adjust(player, spot);
                    while(valid_move == 1){
                        cout << "Invalid move: " << endl;
                        spot = Computer();
                        valid_move = adjust(player, spot);
                    }
                    Display();
                }
                //cout << endl;
                
                cout << endl;
                int w =checkforWinner();
                
                if(w == 1){
                    i = 10;
                    cout << endl;
                }
            }
    }
    cout << "Thanks for playing! " << endl;
    cout << "Would you like to play again: Yes=1 , No = 2 ";
    int again;
    cin >> again;
    if(again != 1){
        player = false;
    }
    if(again == 1){
        spot_1 = "1";
        spot_2 = "2";
        spot_3 = "3";
        spot_4 = "4";
        spot_5 = "5";
        spot_6 = "6";
    }
}   
}