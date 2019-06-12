#include <fstream>
#include <cstdlib>
#include <climits>
#include <ctime>
#include <string>
#include <cmath>
#include <iostream>
#include <sstream>
using namespace std;

int PasswordNum(string key, bool first, int loop){
    int loop_4 = (loop / 2);
    char num;
    int i_num;
    int i_n;
    int rem;
    while(loop_4 > key.length()){
        loop_4 = loop_4 - key.length();
    }
    num = key[loop_4];
    i_num = (int)num;
    if(first == false){
        rem = i_num % 10;
        i_num = i_num - rem;
        i_num = (i_num / 10);
        i_n = i_num;
    }
    if(first == true){
        rem = i_num % 10;
        i_n = rem;
    }
    return i_n;
    
}

string NumberGuess(int val, int key_val, int loop){
    int top_val;
    if(loop % 2 == 0){
        top_val=320+loop+key_val;
        val = val - key_val;
    }
    if(loop % 2 == 1){
        top_val=320+loop-key_val;
        val = val + key_val;
    }
    int bottom_val=0;
    int guess;
    string bin_val;
    string higher_val="2";
    string lower_val="1";
    string equal_val="0";
    bool correct = false;
    while(correct == false){
        guess = ((top_val + bottom_val)/2);
        //cout << guess << endl;
        if(guess == val){ // higher
            bin_val += equal_val;
            correct = true;
        }
        if(guess > val){ // higher
            bin_val += higher_val;
            top_val = guess;
        }
        if(guess < val){ // higher
            bin_val += lower_val;
            bottom_val = guess;
        }
    }
    return bin_val;
}

string LoopBreaker(string password, string key_val){
    string new_password;
    string addition;
    bool first = false;
    char ch;
    int i_ch;
    int n;
    for(int i=0; i<password.length(); i++){
        n = PasswordNum(key_val, first, i);
        ch = password[i];
        i_ch = (int)ch;
        addition = NumberGuess(i_ch, n, i);
        new_password += addition;
        first = !first;
    }
    return new_password;
}

string BoxScramble(string message){
    string msg;
    string full_msg;
    int remi = message.length() % 15;
    for(int i=0; i<message.length() - remi;){
        msg = message[i+10];
        msg += message[i+6];
        msg += message[i]; // 2
        msg += message[i+14];
        msg += message[i+8]; // 4
        msg += message[i+4];
        msg += message[i+12];// 6
        msg += message[i+7];
        msg += message[i+2]; // 8
        msg += message[i+3];
        msg += message[i+9]; // 10
        msg += message[i+13];
        msg += message[i+1]; // 12
        msg += message[i+5];
        msg += message[i+11]; // 14
        full_msg += msg; 
        i = i + 15;
    }
    int l = message.length() - remi;
    for(int d=l; d<message.length(); d++){
        msg = message[d];
        full_msg += msg;
    }
    return full_msg;
}

string BoxUnScramble(string message){
    string msg;
    string full_msg;
    int remi = message.length() % 15;
    for(int i=0; i<message.length() - remi;){
        msg = message[i+2];
        msg += message[i+12];
        msg += message[i+8]; // 2
        msg += message[i+9];
        msg += message[i+5]; // 4
        msg += message[i+13];
        msg += message[i+1];// 6
        msg += message[i+7];
        msg += message[i+4]; // 8
        msg += message[i+10];
        msg += message[i]; // 10
        msg += message[i+14];
        msg += message[i+6]; // 12
        msg += message[i+11];
        msg += message[i+3]; // 14
        full_msg += msg; 
        i = i + 15;
    }
    int l = message.length() - remi;
    for(int d=l; d<message.length(); d++){
        msg = message[d];
        full_msg += msg;
    }
    return full_msg;
}

string PrimeNumberEqual(int i){
    string s_num;
    string full_num;
    int total;
    string s_total;
    string zero="0";
    int two;
    two = i % 2;
    two = (1155 * two);
    int three;
    three = i % 3;
    three = (385 * three);
    int five;
    five = i % 5;
    five = (five * 77);
    int seven;
    seven = i % 7;
    seven = (seven * 11);
    int eleven;
    eleven = i % 11;
    total = two + three + five + seven + eleven;
    //s_num = to_string(two);
    //full_num += s_num;
    //s_num = to_string(three);
    //full_num += s_num;
    //s_num = to_string(five);
    //full_num += s_num;
    //s_num = to_string(seven);
    //full_num += s_num;
    //s_num = to_string(eleven);
    s_total = to_string(total);
    if(s_total.length() == 3){
        zero="0";
        zero += s_total;
        s_total = zero;
    }
    if(s_total.length() == 2){
        zero="00";
        zero += s_total;
        s_total = zero;
    }
    if(s_total.length() == 1){
        zero="000";
        zero += s_total;
        s_total = zero;
    }
    return s_total;
}

string LoopAscii(string message, string key){
    char ch;
    char ch_2;
    int a;
    int b;
    int pathog;
    string new_message;
    string m;
    for(int i=0; i<message.length(); i++){
        int p_loop = i;
        bool hit = false;
        if(p_loop > key.length()){
            p_loop = 0;
        }
        if(p_loop % 5 == 0){
            p_loop = p_loop + 4;
            if(p_loop > key.length()){  /// 4
                p_loop = key.length()-1;
            }
            hit = true;
        }
        if(p_loop % 5 == 1 && hit == false){
            p_loop = p_loop + 4;
            if(p_loop > key.length()){
                p_loop = key.length()-2; /// 5
            }
            hit = true;
        }
        if(p_loop % 5 == 2 && hit == false){
            p_loop = p_loop;
            if(p_loop > key.length()){
                p_loop = key.length()-3;  // 2
            }
            hit = true;
        }
        if(p_loop % 5 == 3 && hit == false){ /// 1
            p_loop = p_loop - 2;
            if(p_loop < key.length()){
                p_loop = key.length()-2;
            }
            hit = true;
        }
        if(p_loop % 5 == 4 && hit == false){ /// 1
            p_loop = p_loop - 1;
            if(p_loop > key.length()){
                p_loop = key.length()-2;
            }
            hit = true;
        }
        ch_2 = key[p_loop];
        ch = message[i];
        a = (int)ch;
        b = (int)ch_2;
        pathog = (a + (b/(i+1)) - i);
        m = PrimeNumberEqual(pathog);
        new_message += m;
       // new_message += "-";
    }
    return new_message;
}

int PrimeGuess(int two, int three, int five, int seven, int eleven){
    int guess;
    bool found = false;
        //bool b_eleven;
        for(int i=0; i<37; i++){
            bool b_two=false;
            bool b_three=false;
            bool b_five=false;
            bool b_seven=false;
            guess = eleven + (11 * i);
            if(guess % 7 == seven){
                b_seven = true;
            }
            if(guess % 5 == five && b_seven == true){
                b_five = true;
            }
            if(guess % 3 == three && b_five == true){
                b_three = true;
            }
            if(guess % 2 == two && b_three == true){
                return guess;
            }
    }
    return 0;
}

string PrimeNumDec(string message, string key){
    string new_message;
    string s_num;
    int two;
    int three;
    int five;
    int seven;
    int eleven;
    int remind;
    int return_num;
    char ch_2;
    char ch;
    int i_ch;
    for(int i=0; i<message.length()-3;){
        s_num = message[i];
        s_num += message[i+1];
        s_num += message[i+2];
        s_num += message[i+3];
        std::string::size_type sz;
        int i_num = std::stoi (s_num,&sz);
        remind = i_num % 1155; // 2
        two = (i_num - remind)/1155;
        i_num = i_num - (two * 1155);
        remind = i_num % 385; // 3
        three = (i_num - remind)/385;
        i_num = i_num - (three * 385);
        remind = i_num % 77;  // 5
        five = (i_num - remind)/77; 
        i_num = i_num - (five * 77);
        remind = i_num % 11;  // 7
        seven = (i_num - remind)/11; 
        i_num = i_num - (seven * 11);
        eleven = i_num;
        return_num = PrimeGuess(two, three, five, seven, eleven);
        int p_loop = i/4;
        bool hit = false;
        if(p_loop > key.length()){
            p_loop = 0;
        }
        if(p_loop % 5 == 0){
            p_loop = p_loop + 4;
            if(p_loop > key.length()){  /// 4
                p_loop = key.length()-1;
            }
            hit = true;
        }
        if(p_loop % 5 == 1 && hit == false){
            p_loop = p_loop + 4;
            if(p_loop > key.length()){
                p_loop = key.length()-2; /// 5
            }
            hit = true;
        }
        if(p_loop % 5 == 2 && hit == false){
            p_loop = p_loop;
            if(p_loop > key.length()){
                p_loop = key.length()-3;  // 2
            }
            hit = true;
        }
        if(p_loop % 5 == 3 && hit == false){ /// 1
            p_loop = p_loop - 2;
            if(p_loop < key.length()){
                p_loop = key.length()-2;
            }
            hit = true;
        }
        if(p_loop % 5 == 4 && hit == false){ /// 1
            p_loop = p_loop - 1;
            if(p_loop > key.length()){
                p_loop = key.length()-2;
            }
            hit = true;
        }
        ch_2 = key[p_loop];
        i_ch = (int)ch_2;
       // pathog = (a + (b/(i+1)) - i);
        return_num = (return_num - (i_ch/((i+4)/4)) + (i/4));
        ch = (char)return_num;
        new_message += ch;
        i = i + 4;
        
    }
    return new_message;
}

char DectNum(string val, int key_val, int loop){
    int top_val;
    if(loop % 2 == 0){
        top_val=320+loop+key_val;
    }
    if(loop % 2 == 1){
        top_val=320+loop-key_val;
    }
    int bottom_val=0;
    int guess;
    int ch;
    string num;
    //cout << val << endl;
    //guess = ((top_val + bottom_val)/2);
    for(int i=0; i<val.length(); i++){
            guess = ((top_val + bottom_val)/2);
            num = val[i];
            if(num == "2"){
                top_val = guess;
            }
            if(num == "1"){
                bottom_val = guess;
            }
            if(num == "0"){
                if(loop % 2 == 0){
                    guess = guess + key_val;
                }
                if(loop % 2 == 1){
                    guess = guess - key_val;
                }
                ch = (char)guess;
                return ch;
            }

    }
    ch = (char)guess;
    return ch;
}

string Decrypt(string bin, string key){
    string password;
    string let_bin;
    bool first = false;
    int loop = 0;
    int n;
    string num="";
    char ch;
    for(int i=0; i<bin.length(); i++){
        num = bin[i];
        if(num == "2" || num == "1"){
            let_bin += num;
        }
        if(num == "0"){
            let_bin += num;
            n = PasswordNum(key, first, loop);
            ch = DectNum(let_bin, n, loop);
            password += ch;
            let_bin ="";
            loop = loop + 1;
            first = !first;
        }
    }
    return password;
}

string passwordValue(string password, string bin){
    bool round = false;
    bool inner_round_1 = false;
    bool inner_round_2 = false;
    int l_small_1=0;
    int l_small_2=0;
    string bin_hold;
    char ch;
    int i_num;
    int rem;
    int i_n;
    string str;
    string new_str;
    string zero ="0";
    string new_bin;
    int remid = bin.length() % 3;
    for(int loop_big=0; loop_big<bin.length();){
        if(round == false){
            ch = password[l_small_1];
            i_num = (int)ch;
            l_small_1 = l_small_1 + 1;
            if(l_small_1 == password.length()){
                l_small_1 = 0;
            }
            if(inner_round_1 == false){
            rem = i_num % 10;
            i_num = i_num - rem;
            i_num = (i_num / 10);
            i_n = i_num;
            }
            if(inner_round_1 == true){
                rem = i_num % 10;
                i_n = rem;
            }
            inner_round_1 = !inner_round_1;
        }
        if(round == true){
            ch = password[l_small_2];
            i_num = (int)ch;
            l_small_2 = l_small_2 + 1;
            if(l_small_2 == password.length()){
                l_small_2 = 0;
            }
            if(inner_round_2 == true){
            rem = i_num % 10;
            i_num = i_num - rem;
            i_num = (i_num / 10);
            i_n = i_num;
            }
            if(inner_round_2 == false){
                rem = i_num % 10;
                i_n = rem;
            }
            inner_round_2 = !inner_round_2;
        }
        bin_hold = bin[loop_big];
        //bin_hold += bin[loop_big+1];
        //bin_hold += bin[loop_big+2];
        std::string::size_type sz;
        int i_st1 = std::stoi (bin_hold,&sz);
        while(i_n > 5){
            i_n = i_n / M_E;
        }
        i_st1 = i_st1 * i_n;
        str = to_string(i_st1);
        /*
        if(str.length() == 2){
            new_str = zero;
            new_str += str;
            str = new_str;
        }
        if(str.length() == 1){
            new_str = zero;
            new_str += zero;
            new_str += str;
            str = new_str;
        }
        */
        new_bin += str;
        loop_big = loop_big + 1;
    }
    return new_bin;
}

string passwordValued(string password, string bin){
    bool round = false;
    bool inner_round_1 = false;
    bool inner_round_2 = false;
    int l_small_1=0;
    int l_small_2=0;
    string bin_hold;
    char ch;
    int i_num;
    int rem;
    int i_n;
    string str;
    string new_str;
    string zero ="0";
    string new_bin;
    int remid = bin.length() % 3;
    for(int loop_big=0; loop_big<bin.length()-remid;){
        if(round == false){
            ch = password[l_small_1];
            i_num = (int)ch;
            l_small_1 = l_small_1 + 1;
            if(l_small_1 == password.length()){
                l_small_1 = 0;
            }
            if(inner_round_1 == false){
            rem = i_num % 10;
            i_num = i_num - rem;
            i_num = (i_num / 10);
            i_n = i_num;
            }
            if(inner_round_1 == true){
                rem = i_num % 10;
                i_n = rem;
            }
            inner_round_1 = !inner_round_1;
        }
        if(round == true){
            ch = password[l_small_2];
            i_num = (int)ch;
            l_small_2 = l_small_2 + 1;
            if(l_small_2 == password.length()){
                l_small_2 = 0;
            }
            if(inner_round_2 == true){
            rem = i_num % 10;
            i_num = i_num - rem;
            i_num = (i_num / 10);
            i_n = i_num;
            }
            if(inner_round_2 == false){
                rem = i_num % 10;
                i_n = rem;
            }
            inner_round_2 = !inner_round_2;
        }
        bin_hold = bin[loop_big];
        //bin_hold += bin[loop_big+1];
        //bin_hold += bin[loop_big+2];
        std::string::size_type sz;
        int i_st1 = std::stoi (bin_hold,&sz);
        while(i_n >= 5){
            i_n = i_n / M_E;
        }
        i_st1 = i_st1 / i_n;
        str = to_string(i_st1);
        /*
        if(str.length() == 2){
           /. new_str = zero;
            new_str += str;
            str = new_str;
        }
        if(str.length() == 1){
            new_str = zero;
            new_str += zero;
            new_str += str;
            str = new_str;
        }
        */
        new_bin += str;
        loop_big = loop_big + 1;
    }
    return new_bin;
}

string binMCom(string bin){
    string x_1;
    string y_2;
    string z_3;
    string w_4;
    int total;
    string new_bin;
    string eq;
    while(bin.length() % 4 != 0){
        bin += "3";
    }
    for(int i=0; i<bin.length()-3;){
        x_1 = bin[i];
        y_2 = bin[i+1];
        z_3 = bin[i+2];
        w_4 = bin[i+3];
        std::string::size_type sz;
        int x = std::stoi (x_1 ,&sz);
        int y = std::stoi (y_2 ,&sz);
        int z = std::stoi (z_3 ,&sz);
        int w = std::stoi (w_4 ,&sz);
        x = (64 * x);
        y = (16 * y);
        z = (4 * z);
        total = x + y + z + w;
        eq = to_string(total);
        if(eq.length() < 2){
            string new_eq = "00";
            new_eq += eq;
            eq = new_eq;
        }
        if(eq.length() < 3){
            string new_eq = "0";
            new_eq += eq;
            eq = new_eq;
        }
        //cout << eq << endl;
        new_bin += eq;
        i = i + 4;
    }
    return new_bin;
}

string BinMDeComp(string bin){
    string new_bin;
    string a1;
    string s_val;
    int x;
    int y;
    int z;
    int w;
    int total;
    int rem;
    for(int i=0; i<bin.length();){
        a1 = bin[i];
        s_val = a1;
        a1 = bin[i+1];
        s_val += a1;
        a1 = bin[i+2];
        s_val += a1;
        std::string::size_type sz;
        int i_val = std::stoi (s_val ,&sz);
        // x value / 1st value
        total = i_val ;
        rem = total % 64;
        total = total - rem;
        x = total / 64;
        //cout << x << "  x  "  <<  endl;
        // y value / 2nd value
        total = (i_val  - (64 * x));
        rem = total % 16;
        total = total - rem;
        y = total / 16;
        //cout << y << "  y  " << endl;
        // z value / 3rd value
        total = ((total + rem) - (16 * y));
        rem = (total % 4);
        total = (total - rem);
        z = (total / 4);
        //cout << z << "  z " << endl;
        total = ((total + rem) - (4 * z));
        // w value / 4th value
        rem = total % 4;
        w = rem;
        //cout << w << "  w  " << endl;
        if(x != 3){
            string x_s = to_string(x);
            new_bin += x_s;
        }
        if(y != 3){
            string y_s = to_string(y);
            new_bin += y_s;
        }
        if(z != 3){
            string z_s = to_string(z);
            new_bin += z_s;
        }
        if(w != 3){
            string w_s = to_string(w);
            new_bin += w_s;
        }
        i = i + 3;
    }

    return new_bin;
}

string messagepass(string message, string password){
    int inner_loop;
    int inner_loop_m1;
    int inner_loop_p1;
    int inner_loop_m2;
    int inner_loop_p2;
    char ch_1;
    char ch_2;
    char ch_m1;
    char ch_p1;
    char ch_m2;
    char ch_p2;
    string new_message;
    for(int i=0; i<message.length(); i++){
        bool hit=false;
        inner_loop = i;
        inner_loop_m1 = i;
        inner_loop_m2 = i;
        if(i >= 1){
            inner_loop_m1 = i - 1;
        }
        if(i >= 2){
            inner_loop_m2 = i - 2;
        }
        inner_loop_p1 = i + 1;
        inner_loop_p2 = i + 2;
        while(inner_loop > password.length()){
            int p_l = password.length();
            inner_loop = inner_loop - p_l;
        }
        while(inner_loop_m1 > password.length()){
            int p_l = password.length();
            inner_loop_m1 = inner_loop_m1 - p_l;
        }
        while(inner_loop_p1 > password.length()){
            int p_l = password.length();
            inner_loop_p1 = inner_loop_p1 - p_l;
        }
        while(inner_loop_m2 > password.length()){
            int p_l = password.length();
            inner_loop_m2 = inner_loop_m2 - p_l;
        }
        while(inner_loop_p2 > password.length()){
            int p_l = password.length();
            inner_loop_p2 = inner_loop_p2 - p_l;
        }
        ch_1 = message[i];
        ch_2 = password[inner_loop];
        ch_m1 = password[inner_loop_m1];
        ch_m2 = password[inner_loop_m2];
        ch_p1 = password[inner_loop_p1];
        ch_p2 = password[inner_loop_p2];
        if(ch_2 == ch_1){
            int val=i;
            while(val >= 10){
                val = val - 10;
            }
            string i_str = to_string(val);
            new_message += i_str;
            hit = true;
        }
        if(ch_1 == ch_m1 && hit == false){
            new_message += '-';
            hit = true;
        }
        if(ch_1 == ch_m2 && hit == false){
            new_message += '~';
            hit = true;
        }
        if(ch_1 == ch_p1 && hit == false){
            new_message += '+';
            hit = true;
        }
        if(ch_1 == ch_p2 && hit == false){
            new_message += '#';
            hit = true;
        }
        if(hit == false){
            new_message += ch_1;
        }
    }
    return new_message;
}

string messageunpass(string message, string password){
    int inner_loop;
    int inner_loop_m1;
    int inner_loop_p1;
    int inner_loop_m2;
    int inner_loop_p2;
    char ch_1;
    char ch_2;
    char ch_m1;
    char ch_p1;
    char ch_m2;
    char ch_p2;
    for(int i=0; i<message.length(); i++){
        inner_loop = i;
        inner_loop_m1 = i;
        inner_loop_m2 = i;
        if(i >= 1){
            inner_loop_m1 = i - 1;
        }
        if(i >= 2){
            inner_loop_m2 = i - 2;
        }
        inner_loop_p1 = i + 1;
        inner_loop_p2 = i + 2;
        while(inner_loop > password.length()){
            int p_l = password.length();
            inner_loop = inner_loop - p_l;
        }
        while(inner_loop_m1 > password.length()){
            int p_l = password.length();
            inner_loop_m1 = inner_loop_m1 - p_l;
        }
        while(inner_loop_p1 > password.length()){
            int p_l = password.length();
            inner_loop_p1 = inner_loop_p1 - p_l;
        }
        while(inner_loop_m2 > password.length()){
            int p_l = password.length();
            inner_loop_m2 = inner_loop_m2 - p_l;
        }
        while(inner_loop_p2 > password.length()){
            int p_l = password.length();
            inner_loop_p2 = inner_loop_p2 - p_l;
        }
        ch_1 = message[i];
        ch_2 = password[inner_loop];
        ch_m1 = password[inner_loop_m1];
        ch_m2 = password[inner_loop_m2];
        ch_p1 = password[inner_loop_p1];
        ch_p2 = password[inner_loop_p2];
        ch_1 = message[i];
        int val = i;
        while(val >= 10){
            val = val - 10;
        }
        string i_s = to_string(val);
        ch_2 = password[inner_loop];
        string hold ="";
        hold += ch_1;
        if(hold == i_s){
            message[i] = ch_2;
        }
        if(ch_1 == '-'){
            message[i] = ch_m1;
            //hit = true;
        }
        if(ch_1 == '~'){
            message[i] = ch_m2;
           // hit = true;
        }
        if(ch_1 == '+'){
            message[i] = ch_p1;
            //hit = true;
        }
        if(ch_1 == '#'){
            message[i] = ch_p2;
            //hit = true;
        }
    }
    return message;
}


string BoxLoop(string message, int dec, string key){
    int l = message.length() - key.length();
    l = abs(l);
    while(l > 100){
        l = l /10;
    }
    //cout << l << " | L " << endl;
    for(int i=0; i<l; i++){
        if(dec == 1){
            message = BoxScramble(message);
        }
        if(dec == 2){
            message = BoxUnScramble(message);
        }
    }
    return message;
}

string swapEncypt1(string message){
    string new_message;
    char zero;
    char one;
    char two;
    char three;
    char four;
    char five;
    char six;
    char seven;
    char eigth;
    char nine;
    char ten;
    char eleven;
    for(int i=0; i<message.length()-10;){
        zero = message[i];
        one = message[i+1];
        two = message[i+2];
        three = message[i+3];
        four = message[i+4];
        five = message[i+5];
        six = message[i+6];
        seven = message[i+7];
        eigth = message[i+8];
        nine = message[i+9];
        ten = message[i+10];
        eleven = message[i+11];
        if(i % 8 == 0 || i % 8 == 2 || i % 8 == 4){
            message[i] = eigth;
            message[i+1] = seven;
            message[i+3] = eleven;
            message[i+4] = ten;
            message[i+7] = one;
            message[i+8] = zero;
            message[i+10] = four;
            message[i+11] = three;
        }
        if(i % 8 == 6){
            message[i] = six;
            message[i+1] = nine;
            message[i+2] = ten;
            message[i+5] = eleven;
            message[i+6] = zero;
            //message[i+7] = one;
            message[i+9] = one;
            message[i+10] = two;
            message[i+11] = five;
        }
        i = i + 2;
    }
    return message;
}
string swapEncypt2(string message){
    string new_message;
    char zero;
    char one;
    char two;
    char three;
    char four;
    char five;
    char six;
    char seven;
    char eigth;
    char nine;
    char ten;
    char eleven;
    for(int i=message.length()-12; i>=0;){
        zero = message[i];
        one = message[i+1];
        two = message[i+2];
        three = message[i+3];
        four = message[i+4];
        five = message[i+5];
        six = message[i+6];
        seven = message[i+7];
        eigth = message[i+8];
        nine = message[i+9];
        ten = message[i+10];
        eleven = message[i+11];
        if(i % 8 == 6){
            message[i] = eigth;
            message[i+1] = seven;
            message[i+3] = eleven;
            message[i+4] = ten;
            message[i+7] = one;
            message[i+8] = zero;
            message[i+10] = four;
            message[i+11] = three;
        }
        if(i % 8 == 0 || i % 8 == 2 || i % 8 == 4){
            message[i] = six;
            message[i+1] = nine;
            message[i+2] = ten;
            message[i+5] = eleven;
            message[i+6] = zero;
            //message[i+7] = one;
            message[i+9] = one;
            message[i+10] = two;
            message[i+11] = five;
        }
        i = i - 2;
    }
    return message;
}
string swapEncypt3(string message){
    string new_message;
    char zero;
    char one;
    char two;
    char three;
    char four;
    char five;
    char six;
    char seven;
    char eigth;
    char nine;
    char ten;
    char eleven;
    for(int i=0; i<message.length()-8;){
        zero = message[i];
        one = message[i+1];
        two = message[i+2];
        three = message[i+3];
        four = message[i+4];
        five = message[i+5];
        six = message[i+6];
        seven = message[i+7];
        eigth = message[i+8];
        nine = message[i+9];
        message[i] = eigth;
        message[i+1] = five;
        message[i+2] = six;
        message[i+3] = nine;
        message[i+5] = one;
        message[i+6] = two;
        message[i+8] = zero;
        message[i+9] = three;
        i = i + 2;
    }
    return message;
}
string swapDencypt1(string message){
    string new_message;
    char zero;
    char one;
    char two;
    char three;
    char four;
    char five;
    char six;
    char seven;
    char eigth;
    char nine;
    char ten;
    char eleven;
    for(int i=message.length()-12; i>=0;){
        zero = message[i];
        one = message[i+1];
        two = message[i+2];
        three = message[i+3];
        four = message[i+4];
        five = message[i+5];
        six = message[i+6];
        seven = message[i+7];
        eigth = message[i+8];
        nine = message[i+9];
        ten = message[i+10];
        eleven = message[i+11];
        if(i % 8 == 0 || i % 8 == 4 || i % 8 == 2){
            message[i] = eigth;
            message[i+1] = seven;
            message[i+3] = eleven;
            message[i+4] = ten;
            message[i+7] = one;
            message[i+8] = zero;
            message[i+10] = four;
            message[i+11] = three;
        }
        //cout << message << endl;
        
        if(i % 8 == 6){
            message[i] = six;
            message[i+1] = nine;
            message[i+2] = ten;
            message[i+5] = eleven;
            message[i+6] = zero;
            message[i+9] = one;
            message[i+10] = two;
            message[i+11] = five;
        }
        
        //cout << message << endl;
        i = i - 2;
    }
    return message;
}
string swapDencypt2(string message){
    string new_message;
    char zero;
    char one;
    char two;
    char three;
    char four;
    char five;
    char six;
    char seven;
    char eigth;
    char nine;
    char ten;
    char eleven;
    for(int i=0; i<message.length()-10;){
        zero = message[i];
        one = message[i+1];
        two = message[i+2];
        three = message[i+3];
        four = message[i+4];
        five = message[i+5];
        six = message[i+6];
        seven = message[i+7];
        eigth = message[i+8];
        nine = message[i+9];
        ten = message[i+10];
        eleven = message[i+11];
        if(i % 8 == 6){
            message[i] = eigth;
            message[i+1] = seven;
            message[i+3] = eleven;
            message[i+4] = ten;
            message[i+7] = one;
            message[i+8] = zero;
            message[i+10] = four;
            message[i+11] = three;
        }
       if(i % 8 == 0 || i % 8 == 4 || i % 8 == 2){
            message[i] = six;
            message[i+1] = nine;
            message[i+2] = ten;
            message[i+5] = eleven;
            message[i+6] = zero;
            message[i+9] = one;
            message[i+10] = two;
            message[i+11] = five;
        }
        i = i + 2;
    }
    return message;
}
string swapDencypt3(string message){
    string new_message;
    char zero;
    char one;
    char two;
    char three;
    char four;
    char five;
    char six;
    char seven;
    char eigth;
    char nine;
    char ten;
    char eleven;
    for(int i=message.length()-10; i>=0;){
        zero = message[i];
        one = message[i+1];
        two = message[i+2];
        three = message[i+3];
        four = message[i+4];
        five = message[i+5];
        six = message[i+6];
        seven = message[i+7];
        eigth = message[i+8];
        nine = message[i+9];
        message[i] = eigth;
        message[i+1] = five;
        message[i+2] = six;
        message[i+3] = nine;
        message[i+5] = one;
        message[i+6] = two;
        message[i+8] = zero;
        message[i+9] = three;
        i = i - 2;
    }
    return message;
}
string ConvserionPt2(int val){
    int rem = val % 10;
    val = val - rem;
    val = val/10;
    string letter;
    char ch;
    int i_l = 65;
    i_l = i_l + val;
    ch = (char)i_l;
    string s_rem = to_string(rem);
    letter += ch;
    letter += s_rem;
    return letter;
}
string Conversion(string message){
    char ch;
    int i_ch;
    string new_message;
    string hold;
    for(int i=0; i<message.length(); i++){
        ch = message[i];
        i_ch = (int)ch;
        hold = ConvserionPt2(i_ch);
        new_message += hold;
    }
    return new_message;
}
string unConvserionPt2(int val, int i_num){
    val = val - 65;
    val = val * 10;
    val = val + i_num;
    string letter;
    char ch;
    ch = (char)val;
    letter += ch;
    return letter;
}
string unConversion(string message){
    char ch;
    int i_ch;
    string ch_2;
    string new_message;
    string hold;
    for(int i=0; i<message.length();){
        ch = message[i];
        ch_2 = message[i+1];
        std::string::size_type sz;
        int i_num = std::stoi (ch_2,&sz);
        i_ch = (int)ch;
        hold = unConvserionPt2(i_ch , i_num);
        new_message += hold;
        i=i+2;
    }
    return new_message;
}

string SwapCenter(string message, string key, int dec, int a){
    char ch = key[a];
    int i_ch = (int)ch;
    //i_ch = i_ch*2;
    int l = key.length();
    if(dec == 1){
        message = Conversion(message);
        for(int i=0; i<i_ch; i++){
            for(int g=0; g<l; g++){
                message = swapEncypt1(message);
            }
            for(int j=0; j<l; j++){
                message = swapEncypt3(message);
            }
            for(int h=0; h<l; h++){
                 message = swapEncypt2(message);
            }
        }
        message = unConversion(message);
    }
    if(dec == 2){
        message = Conversion(message);
        for(int i=0; i<i_ch; i++){
            for(int g=0; g<l; g++){
                message = swapDencypt2(message);
            }
            for(int j=0; j<l; j++){
                message = swapDencypt3(message);
            }
            for(int h=0; h<l; h++){
                 message = swapDencypt1(message);
            }
        }
        message = unConversion(message);
    }
    return message;
}



int main(){
    string key;
    int n;
    string bin;
    string password;
    int dec;
    cout << "Enter a message: ";
    getline(cin, password);
    cout << "Enter a key: ";
    cin >> key;
    while(key.length() < 5){
        cout << "Enter a longer key: ";
        cin >> key;
    }
    cout << "Encrypt (1) or Decrypt (2): " ;
    cin >> dec;
    if(dec == 1){
        //for(int i=0; i<2; i++){
            password = messagepass(password, key);
            cout << password << " | PART 0 | Replacement " << endl;
            cout << endl;
            password = LoopAscii(password, key);
            cout << password << " | PART 1 | Prime Number & Set " << endl;
            cout << endl;
            password = SwapCenter(password, key, dec, 0);
            cout << password << " | PART 1.5 | Swap Number " << endl;
            cout << endl;
            password = LoopBreaker(password, key);
            cout << password << " | PART 2 | Guess Number " << endl;
            cout << endl;
            password = BoxLoop(password, dec, key);
            cout << password << " | PART 3 | Box Loop #1 " << endl;
            cout << endl;
            password = binMCom(password);
            cout << password << " | PART 4 | Guess Set Combine " << endl;
            cout << endl;
             password = SwapCenter(password, key, dec, 1);
            cout << password << " | PART 4.5 | Swap Number " << endl;
            cout << endl;
            password = BoxLoop(password, dec, key);
            cout << "== Encyption code: ==  " << password << endl;
            cout << endl;
       // }
    }
    if(dec == 2){
       // for(int i=0; i<2; i++){
            password = BoxLoop(password, dec, key);
            cout << password << " | PART 0 | Box Loop #1 " << endl;
            cout << endl;
            password = SwapCenter(password, key, dec , 1);
            cout << password << " | PART 2.5 | Swap Number " << endl;
            cout << endl;
            password = BinMDeComp(password);
            cout << password << " | PART 1 | Guess Set UnCombine " << endl;
            cout << endl;
            password = BoxLoop(password, dec, key);
            cout << password << " | PART 2 | Box Loop #2 " << endl;
            cout << endl;
            password = Decrypt(password, key);
            cout << password << " | PART 3 | Reverse Number Guess " << endl;
            cout << endl;
            password = SwapCenter(password, key, dec , 0);
            cout << password << " | PART 3.5 | Swap Number " << endl;
            cout << endl;
            password = PrimeNumDec(password, key);
            cout << password << " | PART 4 | Reverse Prime  " << endl;
            cout << endl;
            password = messageunpass(password, key);
            cout << "== Decryption code: ==  " << password << endl;
            cout << endl;
      //  }
    }
    
}
