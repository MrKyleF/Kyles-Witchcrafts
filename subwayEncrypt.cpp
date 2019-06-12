#include <fstream>
#include <cstdlib>
#include <climits>
#include <ctime>
#include <string>
#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;

string NextStation(string line, int direction, string station){
    string one = "-FW168-FW157-FW145-FW137-FW125-FW116-FW110-FW103-FW96-FW86-FW79-FW72-FWE68-W59-MWE50-MW42-MW34-MW28-MW23-MW18-MW14-";
    string two = "-E149-ME135-ME125-ME116-ME110-W103-FW96-FW72-MW42-MW34-MW14-";
    string three = "-WE155-MW148-ME145-ME125-ME116-ME110-FW96-FW72-ME42-MW34-MW14-";
    string four = "-E161-E149-E125-E86-E59-E42-E14-";
    string five = "-E149-E138-E125-E86-E59-E42-E14-";
    string six = "-E125-E116-E110-E103-E96-E86-E77-E68-E59-E51-E42-E33-E28-E23-E14-E8-E1-";
    string q = "-E96-FE86-FE72-E63-MW57-MW42-ME34-E14-";
    string w = "-E59-EW59-MW57-MW49-MW42-ME34-EW32-EW23-E14-E8-";
    string n = "-E59-EW59-MW57-MW49-MW42-ME34-E14-";
    string s = "-E42-ME42-MW42-W42-";
    string l = "-E14-ME14-MW14-W14-";
    string a = "-FW168-W145-W125-W59-W42-W34-W14-ME4-";
    string b = "-E161-WE155-W145-W135-W125-W116-W110-W103-W96-W86-W81-W72-W59-MW53-ME47-ME42-ME34-ME4-E1-";
    string c = "-FW168-FWE163-WE155-W145-W135-W125-W116-W110-W103-W96-W86-W81-W72-W59-W50-W42-W34-W23-W14-ME4-";
    string d = "-E161-WE155-W125-W59-MW53-ME47-ME42-ME34-ME4-E1-";
    string e = "-E51-EW53-ME53-W50-W42-W34-W23-W14-ME4-";
    string f = "-E63-ME57-ME47-ME42-ME34-ME23-ME14-ME4-E1-";
    string m = "-E51-EW53-ME47-ME42-ME34-ME23-ME14-ME4-E1-";
    int loc;
    int station_size;
    string new_station;
    if(line == "1"){
        string ch;
        string checker;
        for(int i=0; i<one.length(); i++){
            ch = one[i];
            if(ch != "-"){
                checker += ch;
            }
            if(ch == "-"){
                if(checker == station){
                    loc = i - checker.length();
                    i = one.length();
                    station_size = checker.length();
                }
                else{
                    checker = "";
                }
            }
        }
    }
    if(line == "2"){
        string ch;
        string checker;
        for(int i=0; i<two.length(); i++){
            ch = two[i];
            if(ch != "-"){
                checker += ch;
            }
            if(ch == "-"){
                if(checker == station){
                    loc = i - checker.length();
                    i = two.length();
                    station_size = checker.length();
                }
                else{
                    checker = "";
                }
            }
        }
    }
    if(line == "3"){
        string ch;
        string checker;
        for(int i=0; i<three.length(); i++){
            ch = three[i];
            if(ch != "-"){
                checker += ch;
            }
            if(ch == "-"){
                if(checker == station){
                    loc = i - checker.length();
                    i = three.length();
                    station_size = checker.length();
                }
                else{
                    checker = "";
                }
            }
        }
    }
    if(line == "4"){
        string ch;
        string checker;
        for(int i=0; i<four.length(); i++){
            ch = four[i];
            if(ch != "-"){
                checker += ch;
            }
            if(ch == "-"){
                if(checker == station){
                    loc = i - checker.length();
                    i = four.length();
                    station_size = checker.length();
                }
               else{
                    checker = "";
                }
            }
        }
    }
    if(line == "5"){
        string ch;
        string checker;
        for(int i=0; i<five.length(); i++){
            ch = five[i];
            if(ch != "-"){
                checker += ch;
            }
            if(ch == "-"){
                if(checker == station){
                    loc = i - checker.length();
                    i = five.length();
                    station_size = checker.length();
                }
                else{
                    checker = "";
                }
            }
        }
    }
    if(line == "6"){
        string ch;
        string checker;
        for(int i=0; i<six.length(); i++){
            ch = six[i];
            if(ch != "-"){
                checker += ch;
            }
            if(ch == "-"){
                if(checker == station){
                    loc = i - checker.length();
                    i = six.length();
                    station_size = checker.length();
                }
                else{
                    checker = "";
                }
            }
        }
    }
    if(line == "A"){
        string ch;
        string checker;
        for(int i=0; i<a.length(); i++){
            ch = a[i];
            if(ch != "-"){
                checker += ch;
            }
            if(ch == "-"){
                if(checker == station){
                    loc = i - checker.length();
                    i = a.length();
                    station_size = checker.length();
                }
                else{
                    checker = "";
                }
            }
        }
    }
    if(line == "B"){
        string ch;
        string checker;
        for(int i=0; i<b.length(); i++){
            ch = b[i];
            if(ch != "-"){
                checker += ch;
            }
            if(ch == "-"){
                if(checker == station){
                    loc = i - checker.length();
                    i = b.length();
                    station_size = checker.length();
                }
                else{
                    checker = "";
                }
            }
        }
    }
    if(line == "C"){
        string ch;
        string checker;
        for(int i=0; i<c.length(); i++){
            ch = c[i];
            if(ch != "-"){
                checker += ch;
                //cout << checker << " check !- " << endl;
            }
            if(ch == "-"){
               // cout << checker << " cheker inside " << i << " I" << endl;
                if(checker == station){
                    loc = i - checker.length();
                    i = c.length();
                    station_size = checker.length();
                }
                else{
                    checker = "";
                }
            }
        }
    }
    if(line == "D"){
        string ch;
        string checker;
        for(int i=0; i<d.length(); i++){
            ch = d[i];
            if(ch != "-"){
                checker += ch;
            }
            if(ch == "-"){
                if(checker == station){
                    loc = i - station.length();
                    i = d.length();
                    station_size = checker.length();
                }
                else{
                    checker = "";
                }
            }
        }
    }
    if(line == "E"){
        string ch;
        string checker;
        for(int i=0; i<e.length(); i++){
            ch = e[i];
            if(ch != "-"){
                checker += ch;
            }
            if(ch == "-"){
                if(checker == station){
                    loc = i - checker.length();
                    i = e.length();
                    station_size = checker.length();
                }
                else{
                    checker = "";
                }
            }
        }
    }
    if(line == "F"){
        string ch;
        string checker;
        for(int i=0; i<f.length(); i++){
            ch = f[i];
            if(ch != "-"){
                checker += ch;
            }
            if(ch == "-"){
                if(checker == station){
                    loc = i - checker.length();
                    i = f.length();
                    station_size = checker.length();
                }
                else{
                    checker = "";
                }
            }
        }
    }
    if(line == "M"){
        string ch;
        string checker;
        for(int i=0; i<m.length(); i++){
            ch = m[i];
            if(ch != "-"){
                checker += ch;
            }
            if(ch == "-"){
                if(checker == station){
                    loc = i - checker.length();
                    i = m.length();
                    station_size = checker.length();
                }
                else{
                    checker = "";
                }
            }
        }
    }
    if(line == "N"){
        string ch;
        string checker;
        for(int i=0; i<n.length(); i++){
            ch = n[i];
            if(ch != "-"){
                checker += ch;
            }
            if(ch == "-"){
                if(checker == station){
                    loc = i - checker.length();
                    i = n.length();
                    station_size = checker.length();
                }
                else{
                    checker = "";
                }
            }
        }
    }
    if(line == "Q"){
        string ch;
        string checker;
        for(int i=0; i<q.length(); i++){
            ch = q[i];
            if(ch != "-"){
                checker += ch;
            }
            if(ch == "-"){
                if(checker == station){
                    loc = i - checker.length();
                    i = q.length();
                    station_size = checker.length();
                }
                else{
                    checker = "";
                }
            }
        }
    }
    if(line == "W"){
        string ch;
        string checker;
        for(int i=0; i<w.length(); i++){
            ch = w[i];
            if(ch != "-"){
                checker += ch;
            }
            if(ch == "-"){
                if(checker == station){
                    loc = i - checker.length();
                    i = w.length();
                    station_size = checker.length();
                }
                else{
                    checker = "";
                }
            }
        }
    }
    if(line == "S"){
        string ch;
        string checker;
        for(int i=0; i<s.length(); i++){
            ch = s[i];
            if(ch != "-"){
                checker += ch;
            }
            if(ch == "-"){
                if(checker == station){
                    loc = i - checker.length();
                    i = s.length();
                    station_size = checker.length();
                }
                else{
                    checker = "";
                }
            }
        }
    }
    if(line == "L"){
        string ch;
        string checker;
        for(int i=0; i<l.length(); i++){
            ch = l[i];
            if(ch != "-"){
                checker += ch;
            }
            if(ch == "-"){
                if(checker == station){
                    loc = i - checker.length();
                    i = l.length();
                    station_size = checker.length();
                }
                else{
                    checker = "";
                }
            }
        }
    }
    if(direction == 0){
        string ch;
        int loc_up = loc + station.length() + 1;
        for(int i=loc_up; i<loc_up+6; i++){
            if(line == "1"){
                if(i >= one.length()){
                    return "0";
                }
                ch = one[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
            if(line == "2"){
                if(i >= two.length()){
                    return "0";
                }
                ch = two[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
            if(line == "3"){
                if(i >= three.length()){
                    return "0";
                }
                ch = three[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
            if(line == "4"){
                if(i >= four.length()){
                    return "0";
                }
                ch = four[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
            if(line == "5"){
                if(i >= five.length()){
                    return "0";
                }
                ch = five[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
            if(line == "6"){
                if(i >= six.length()){
                    return "0";
                }
                ch = six[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
            if(line == "A"){
                if(i >= a.length()){
                    return "0";
                }
                ch = a[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
            if(line == "B"){
                if(i >= b.length()){
                    return "0";
                }
                ch = b[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
            if(line == "C"){
                if(i >= c.length()){
                    return "0";
                }
                ch = c[i];
                if(ch != "-"){
                    new_station += ch;
                    //cout << new_station << " new station " << i << " I " << endl;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
            if(line == "D"){
                if(i >= d.length()){
                    return "0";
                }
                ch = d[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
            if(line == "E"){
                if(i >= e.length()){
                    return "0";
                }
                ch = e[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
            if(line == "F"){
                if(i >= f.length()){
                    return "0";
                }
                ch = f[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
            if(line == "M"){
                if(i >= m.length()){
                    return "0";
                }
                ch = m[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
            if(line == "N"){
                if(i >= n.length()){
                    return "0";
                }
                ch = n[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
            if(line == "Q"){
                if(i >= q.length()){
                    return "0";
                }
                ch = q[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
            if(line == "W"){
                if(i >= w.length()){
                    return "0";
                }
                ch = w[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
            if(line == "S"){
                if(i >= s.length()){
                    return "0";
                }
                ch = s[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
            if(line == "L"){
                if(i >= l.length()){
                    return "0";
                }
                ch = l[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = loc_up + 5;
                }
            }
        }
        return new_station;
    }
    if(direction == 1){
        string ch;
        int new_loc = loc- 2;
        if(loc-2 < 0){
                return "0";
            }
        for(int i=new_loc; i>=0; i--){
            if(i < 0){
                return "0";
            }
            if(line == "1"){
                ch = one[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
            if(line == "2"){
                ch = two[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
            if(line == "3"){
                ch = three[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
            if(line == "4"){
                ch = four[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
            if(line == "5"){
                ch = five[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
            if(line == "6"){
                ch = six[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
            if(line == "A"){
                ch = a[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
            if(line == "B"){
                ch = b[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
            if(line == "C"){
                ch = c[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
            if(line == "D"){
                ch = d[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
            if(line == "E"){
                ch = e[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
            if(line == "F"){
                ch = f[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
            if(line == "M"){
                ch = m[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
            if(line == "N"){
                ch = n[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
            if(line == "Q"){
                ch = q[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
            if(line == "W"){
                ch = w[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
            if(line == "S"){
                ch = s[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
            if(line == "L"){
                ch = l[i];
                if(ch == "-"){
                    new_loc = i;
                    i = 0;
                }
            }
        }
        for(int i=new_loc+1; i<new_loc+7; i++){
            if(line == "1"){
                ch = one[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
            if(line == "2"){
                ch = two[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
            if(line == "3"){
                ch = three[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
            if(line == "4"){
                ch = four[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
            if(line == "5"){
                ch = five[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
            if(line == "6"){
                ch = six[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
            if(line == "A"){
                ch = a[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
            if(line == "B"){
                ch = b[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
            if(line == "C"){
                ch = c[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
            if(line == "D"){
                ch = d[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
            if(line == "E"){
                ch = e[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
            if(line == "F"){
                ch = f[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
            if(line == "M"){
                ch = m[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
            if(line == "N"){
                ch = n[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
            if(line == "Q"){
                ch = q[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
            if(line == "W"){
                ch = w[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
            if(line == "S"){
                ch = s[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
             if(line == "L"){
                ch = l[i];
                if(ch != "-"){
                    new_station += ch;
                }
                if(ch == "-"){
                    i = new_loc + 7;
                }
            }
        }
        return new_station;
    }
}
string StationOption(string station){
    string option;
    if(station == "FW168"){
        option = "1AC";
    }
    if(station == "ME53"){
        option = "E";
    }
    if(station == "EW32"){
        option = "W";
    }
    if(station == "ME14"){
        option = "LFM";
    }
    if(station == "FW157"){
        option = "1";
    }
    if(station == "FW145"){
        option = "1";
    }
    if(station == "FW137"){
        option = "1";
    }
    if(station == "FW125"){
        option = "1";
    }
    if(station == "FW116"){
        option = "1";
    }
    if(station == "FW110"){
        option = "1";
    }
    if(station == "FW103"){
        option = "1";
    }
    if(station == "FW96"){
        option = "123";
    }
    if(station == "FW86"){
        option = "1";
    }
    if(station == "FW79"){
        option = "1";
    }
    if(station == "FW72"){
        option = "123";
    }
    if(station == "FWE68"){
        option = "1";
    }
    if(station == "W59"){
        option = "1ABCD";
    }
    if(station == "MWE50"){
        option = "1";
    }
    if(station == "MW42"){
        option = "123SWQ";
    }
    if(station == "MW34"){
        option = "123";
    }
    if(station == "MW28"){
        option = "1";
    }
    if(station == "MW23"){
        option = "1";
    }
    if(station == "MW18"){
        option = "1";
    }
    if(station == "MW14"){
        option = "123L";
    }
    if(station == "E149"){
        option = "245";
    }
    if(station == "ME135"){
        option = "23";
    }
    if(station == "ME125"){
        option = "23";
    }
    if(station == "ME116"){
        option = "23";
    }
    if(station == "ME110"){
        option = "23";
    }
    if(station == "WE155"){
        option = "3BCD";
    }
    if(station == "MW148"){
        option = "3";
    }
    if(station == "W145"){
        option = "ABCD";
    }
    if(station == "W125"){
        option = "ABCD";
    }
    if(station == "W42"){
        option = "ACES";
    }
    if(station == "W34"){
        option = "ACE";
    }
    if(station == "W14"){
        option = "ACEL";
    }
    if(station == "ME4"){
        option = "ABCDEF";
    }
    if(station == "FWE163"){
        option = "C";
    }
    if(station == "W135"){
        option = "CB";
    }
    if(station == "W116"){
        option = "CB";
    }
    if(station == "W110"){
        option = "CB";
    }
    if(station == "W103"){
        option = "CB2";
    }
    if(station == "W96"){
        option = "CB";
    }
    if(station == "W86"){
        option = "CB";
    }
    if(station == "W81"){
        option = "CB";
    }
    if(station == "W72"){
        option = "CB";
    }
    if(station == "W50"){
        option = "CE";
    }
    if(station == "W23"){
        option = "CE";
    }
    if(station == "E51"){
        option = "EBDM6";
    }
    if(station == "EW53"){
        option = "EM";
    }
    if(station == "MW53"){
        option = "EBD";
    }
    if(station == "E161"){
        option = "BD4";
    }
    if(station == "ME47"){
        option = "BDFM";
    }
    if(station == "ME42"){
        option = "BDFMS";
    }
    if(station == "ME34"){
        option = "BDFMWQN";
    }
    if(station == "E1"){
        option = "BDFM6";
    }
    if(station == "E63"){
        option = "FQ";
    }
    if(station == "ME57"){
        option = "F";
    }
    if(station == "ME23"){
        option = "FM";
    }
    if(station == "ME145"){
        option = "3";
    }
    if(station == "E138"){
        option = "5";
    }
    if(station == "E125"){
        option = "456";
    }
    if(station == "E116"){
        option = "6";
    }
    if(station == "E110"){
        option = "6";
    }
    if(station == "E103"){
        option = "6";
    }
    if(station == "E96"){
        option = "6Q";
    }
    if(station == "E86"){
        option = "456";
    }
    if(station == "E77"){
        option = "6";
    }
    if(station == "E68"){
        option = "6";
    }
    if(station == "E59"){
        option = "456WN";
    }
    if(station == "E42"){
        option = "6";
    }
    if(station == "E33"){
        option = "6";
    }
    if(station == "E28"){
        option = "6";
    }
    if(station == "E23"){
        option = "6";
    }
    if(station == "E14"){
        option = "645LWQN";
    }
    if(station == "E8"){
        option = "6W";
    }
    if(station == "EW59"){
        option = "WN";
    }
    if(station == "MW57"){
        option = "WQN";
    }
    if(station == "MW49"){
        option = "WN";
    }
    if(station == "EW28"){
        option = "W";
    }
    if(station == "EW23"){
        option = "W";
    }
    if(station == "FE86"){
        option = "Q";
    }
    if(station == "FE72"){
        option = "Q";
    }
    return option;
}

int StationValue(string station){
    int option;
    if(station == "FW168"){
        option = 1;
    }
    if(station == "ME53"){
        option = 2;
    }
    if(station == "EW32"){
        option = 3;
    }
    if(station == "ME14"){
        option = 4;
    }
    if(station == "FW157"){
        option = 5;
    }
    if(station == "FW145"){
        option = 6;
    }
    if(station == "FW137"){
        option = 7;
    }
    if(station == "FW125"){
        option = 8;
    }
    if(station == "FW116"){
        option = 9;
    }
    if(station == "FW110"){
        option = 10;
    }
    if(station == "FW103"){
        option = 11;
    }
    if(station == "FW96"){
        option = 12;
    }
    if(station == "FW86"){
        option = 13;
    }
    if(station == "FW79"){
        option = 14;
    }
    if(station == "FW72"){
        option = 15;
    }
    if(station == "FWE68"){
        option = 16;
    }
    if(station == "W59"){
        option = 17;
    }
    if(station == "MWE50"){
        option = 18;
    }
    if(station == "MW42"){
        option = 19;
    }
    if(station == "MW34"){
        option = 20;
    }
    if(station == "MW28"){
        option = 21;
    }
    if(station == "MW23"){
        option = 22;
    }
    if(station == "MW18"){
        option = 23;
    }
    if(station == "MW14"){
        option = 24;
    }
    if(station == "E149"){
        option = 25;
    }
    if(station == "ME135"){
        option = 26;
    }
    if(station == "ME125"){
        option = 27;
    }
    if(station == "ME116"){
        option = 28;
    }
    if(station == "ME110"){
        option = 29;
    }
    if(station == "WE155"){
        option = 30;
    }
    if(station == "MW148"){
        option = 31;
    }
    if(station == "W145"){
        option = 32;
    }
    if(station == "W125"){
        option = 33;
    }
    if(station == "W42"){
        option = 34;
    }
    if(station == "W34"){
        option = 35;
    }
    if(station == "W14"){
        option = 36;
    }
    if(station == "ME4"){
        option = 37;
    }
    if(station == "FWE163"){
        option = 38;
    }
    if(station == "W135"){
        option = 39;
    }
    if(station == "W116"){
        option = 40;
    }
    if(station == "W110"){
        option = 41;
    }
    if(station == "W103"){
        option = 42;
    }
    if(station == "W96"){
        option = 43;
    }
    if(station == "W86"){
        option = 44;
    }
    if(station == "W81"){
        option = 45;
    }
    if(station == "W72"){
        option = 46;
    }
    if(station == "W50"){
        option = 47;
    }
    if(station == "W23"){
        option = 48;
    }
    if(station == "E51"){
        option = 49;
    }
    if(station == "EW53"){
        option = 50;
    }
    if(station == "MW53"){
        option = 51;
    }
    if(station == "E161"){
        option = 52;
    }
    if(station == "ME47"){
        option = 53;
    }
    if(station == "ME42"){
        option = 54;
    }
    if(station == "ME34"){
        option = 55;
    }
    if(station == "E1"){
        option = 56;
    }
    if(station == "E63"){
        option = 57;
    }
    if(station == "ME57"){
        option = 58;
    }
    if(station == "ME23"){
        option = 59;
    }
    if(station == "ME145"){
        option = 60;
    }
    if(station == "E138"){
        option = 61;
    }
    if(station == "E125"){
        option = 62;
    }
    if(station == "E116"){
        option = 63;
    }
    if(station == "E110"){
        option = 64;
    }
    if(station == "E103"){
        option = 65;
    }
    if(station == "E96"){
        option = 66;
    }
    if(station == "E86"){
        option = 67;
    }
    if(station == "E77"){
        option = 68;
    }
    if(station == "E68"){
        option = 69;
    }
    if(station == "E59"){
        option = 70;
    }
    if(station == "E42"){
        option = 71;
    }
    if(station == "E33"){
        option = 72;
    }
    if(station == "E28"){
        option = 73;
    }
    if(station == "E23"){
        option = 74;
    }
    if(station == "E14"){
        option = 75;
    }
    if(station == "E8"){
        option = 76;
    }
    if(station == "EW59"){
        option = 77;
    }
    if(station == "MW57"){
        option = 78;
    }
    if(station == "MW49"){
        option = 79;
    }
    if(station == "EW28"){
        option = 80;
    }
    if(station == "EW23"){
        option = 81;
    }
    if(station == "FE86"){
        option = 82;
    }
    if(station == "FE72"){
        option = 83;
    }
    return option;
}

int SubwayRider(int num){
    int direction = num % 2;
    string station = "ME34";
    string option;
    string opt;
    string line;
    int decision;
    string station_2;
    for(int i=0; i<20; i++){
       // cout << station << " before option " << endl;
        option = StationOption(station);
        station_2 = station;
       // cout << station << " station " << option << " option" << endl;
        //cout << num << " num " << option.length() << " option l" << endl;
        decision = num % option.length();
        line = option[decision];
        //cout << line << " line before entering " << station << " station before enter " << endl;
        station = NextStation(line, direction, station);
        if(station == "0"){
            direction = 1 - direction;
           // cout << "Changing direction" << endl;
            station = station_2;
            option = StationOption(station);
            decision = num % option.length();
            line = option[decision];
            station = NextStation(line, direction, station);
        }
      // cout << station << " station " << direction << " direction " << line << "  line " << i << endl;
    }
    int val = StationValue(station);
    return val;
}

string messageEncoder(string message){
    string new_message;
    if(message.length() % 2 == 1){
        message += message[0];
    }
    char ch_1 = message[0];
    char ch_2 = message[1];
    //cout << ch_1 << " ch 1 " << endl;
    //cout << ch_2 << " ch 2 " << endl;
    int asc_1 = (int)ch_1;
    int asc_2 = (int)ch_2;
    int asc_total = asc_1 + asc_2;
    int station_1 = SubwayRider(asc_1);
    int station_2 = SubwayRider(asc_2);
    int final_station = abs(station_1 - station_2);
    double station_F_R = final_station * (M_PI / 180);
    double hold_hypotenuse = station_F_R;
    for(int i=0; i<message.length()-1;){
        ch_1 = message[i];
        ch_2 = message[i+1];
        //cout << ch_1 << " ch 1 " << endl;
        //cout << ch_2 << " ch 2 " << endl;
        asc_1 = (int)ch_1;
        asc_2 = (int)ch_2;
        asc_total = asc_1 + asc_2;
        station_1 = SubwayRider(asc_1);
        station_2 = SubwayRider(asc_2);
        double station_1_R = station_1 * (M_PI / 180);
        double station_2_R = station_2 * (M_PI / 180);
        station_F_R = hold_hypotenuse * (M_PI / 180);
        double oppisite = asc_total * sin(station_1_R);
        double adjectent = oppisite / tan(station_2_R);
        int hypotenuse = adjectent * cos(station_F_R);
        hypotenuse = abs(hypotenuse);
        hold_hypotenuse = hypotenuse;
       // cout << hypotenuse << " hypotenuse " << endl;
        string hypotenuse_s = to_string(hypotenuse);
        new_message += hypotenuse_s;
        i = i+2;
    }
    return new_message;
}
string messageEncoderBackward(string message){
    string new_message;
    if(message.length() % 2 == 1){
        message += message[0];
    }
    char ch_1 = message[message.length()-1];
    char ch_2 = message[message.length()-2];
    //cout << ch_1 << " ch 1 " << endl;
    //cout << ch_2 << " ch 2 " << endl;
    int asc_1 = (int)ch_1;
    int asc_2 = (int)ch_2;
    int asc_total = asc_1 + asc_2;
    int station_1 = SubwayRider(asc_1);
    int station_2 = SubwayRider(asc_2);
    int final_station = abs(station_1 - station_2);
    double station_F_R = final_station * (M_PI / 180);
    double hold_hypotenuse = station_F_R;
    for(int i=message.length()-1; i>=0;){
        ch_1 = message[i];
        ch_2 = message[i-1];
        //cout << ch_1 << " ch 1 " << endl;
        //cout << ch_2 << " ch 2 " << endl;
        asc_1 = (int)ch_1;
        asc_2 = (int)ch_2;
        asc_total = asc_1 + asc_2;
        station_1 = SubwayRider(asc_1);
        station_2 = SubwayRider(asc_2);
        double station_1_R = station_1 * (M_PI / 180);
        double station_2_R = station_2 * (M_PI / 180);
        station_F_R = hold_hypotenuse * (M_PI / 180);
        double oppisite = asc_total * sin(station_1_R);
        double adjectent = oppisite / tan(station_2_R);
        int hypotenuse = adjectent * cos(station_F_R);
        hypotenuse = abs(hypotenuse);
        hold_hypotenuse = hypotenuse;
       // cout << hypotenuse << " hypotenuse " << endl;
        string hypotenuse_s = to_string(hypotenuse);
        new_message += hypotenuse_s;
        i = i-2;
    }
    return new_message;
}

string Shuffler(string message){
    string hold_message = message;
    int rem = message.length() % 20;
    rem = rem+10;
    for(int i=0; i<message.length()-rem;){
        message[i] = hold_message[10+i];
        message[1+i] = hold_message[7+i];
        message[2+i] = hold_message[13+i];
        message[3+i] = hold_message[4+i];
        message[4+i] = hold_message[16+i];
        message[5+i] = hold_message[1+i];
        message[6+i] = hold_message[19+i];
        message[7+i] = hold_message[2+i];
        message[8+i] = hold_message[18+i];
        message[9+i] = hold_message[5+i];
        message[10+i] = hold_message[15+i];
        message[11+i] = hold_message[8+i];
        message[12+i] = hold_message[12+i];
        message[13+i] = hold_message[11+i];
        message[14+i] = hold_message[9+i];
        message[15+i] = hold_message[14+i];
        message[16+i] = hold_message[6+i];
        message[17+i] = hold_message[17+i];
        message[18+i] = hold_message[i];
        message[19+i] = hold_message[3+i];
        hold_message = message;
        i = i + 5;
    }
    return message;
}

string LetterAdder(string message){
    string new_message;
    for(int i=0; i<message.length()-2;){
        string ch_1="";
        ch_1 += message[i];
        ch_1 += message[i+1];
        std::string::size_type sz;
        int i_num = std::stoi (ch_1,&sz);
        bool upper_case = false;
        bool lower_case = false;
        if(i_num >= 65 && i_num <= 90){
            char ch = (char)i_num;
            upper_case = true;
            new_message += ch;
            i = i + 2;
        }
        if(upper_case == false){
            ch_1 += message[i+2];
            i_num = std::stoi (ch_1,&sz);
            if(i_num >= 97 && i_num <= 122){
                char ch = (char)i_num;
                lower_case = true;
                new_message += ch;
                i = i + 3;
            }
        }
        if(lower_case == false && upper_case == false){
            new_message += message[i];
            i = i + 1;
        }
    }
    return new_message;
}
string volume(string message){
    string new_message;
    for(int i=0; i<message.length()-5;){
        string letter="";
        letter += message[i];
        std::string::size_type sz;
        int A = std::stoi (letter,&sz);
        letter = "";
        letter += message[i+1];
        int B = std::stoi (letter,&sz);
        letter = "";
        letter += message[i+2];
        int C = std::stoi (letter,&sz);
        letter = "";
        letter += message[i+3];
        int D = std::stoi (letter,&sz);
        letter = "";
        letter += message[i+4];
        int E = std::stoi (letter,&sz);
        int top = abs(C-D);
        int bottom = abs(A-B);
        int depth = abs(E - A);
        int volume = ((top+bottom)/2)*depth;
        string s_volume = to_string(volume);
        new_message += s_volume;
        i = i + 5;
    }
    return new_message;
}


int main(){
    
    string message;
    cout << "enter a message: ";
    getline(cin, message);
    int i=1;
    while(message.length() < 300){
        i = i + 1;
        message = messageEncoder(message);
        //cout << message << "          forward     " << i << endl;
        message = messageEncoderBackward(message);
        //cout << message << "            backward   " << i << endl;
        //cout << endl;
        //cout << message.length() << endl;
        //cout << endl;
        //cout << message << endl;
        bool with_letter = false;
        //cout << message <<  "           " << i << "    before  " << endl;
        if(message.length() > 100 && i < 25){
            //message = LetterAdder(message);
            //message = Shuffler(message);
            with_letter = true;
            message = volume(message);
            message = LetterAdder(message);
        }
        if(with_letter == true){
        //cout << message <<  "           " << i << "    after  "  << endl;
        }
        //cout << endl;
    }
    message = LetterAdder(message);
   
    //message = Shuffler(message);
    cout << message << "     " << message.length() << endl;
    
}