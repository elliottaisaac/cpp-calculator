#include <cstdio>
#include <iostream>
#include <vector>
#include <string>


using namespace std;

vector<double> history = {};

void clear() {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

void UpdateDisplay(string mathdisplay){
    clear();
    puts("world's sketchiest calculator by Elliott\n");
    puts("==================================================");
    puts("commands:\n[x] [/] [+] [-]");
    puts("==================================================");
      /*
       auto start = display.begin();
       auto end = display.end();
       for(auto disp = start; disp < end; ++disp){
           cout << *disp;
       }*/
    
       cout << "|||||||||||     " << mathdisplay << "     ||||||||||" << endl;
    puts("==================================================");
}

void GetInput(double calc, string mathstring){
    string prev = mathstring;
    
    puts("Enter an numeric value\nor enter '<' to use currentlly displayed answer enter\nor enter '<1' or '<2' or '<3'...etc\nto access older cleared values\n____________________________________________________\n\n");
    string num;
    cin >> num;
    
    calc = 0;
    
    if(num.substr (0,1) == "<"){
        if(num.length() > 1){
            num = num.erase(0, 1);
            num = to_string(history[stoi(num)]);
        }
        else num = to_string(history[0]);
    }
    
    puts("enter operation command\n");

   string opp;
   char c;
   cin >> c;
   char oppString[2] = {'o', c};
    
   puts("enter second integer\n");

   string num2;
   cin >> num2;
    
           switch(oppString[1]){
                  case 'x':
                       opp = " x ";
                       calc = calc + stof(num);
                       calc = calc * stof(num2);
                       break;
                   case '/':
                       opp = " / ";
                       calc = calc + stof(num);
                       calc = calc / stof(num2);
                       break;
                   case '+':
                        opp = " + ";
                        calc = calc + stof(num);
                        calc = calc + stof(num2);
                       break;
                   case '-':
                       opp = " - ";
                       calc = calc + stof(num);
                       calc = calc - std::stof(num2);
                       break;
                   case 'c':
                       num = "";
                       opp = "";
                       num2 = "";
                       break;
                   
                   case '=':
                    
                   break;
                   
              }
    history.insert(history.begin(), calc);
    
    string newMathString = mathstring + num + opp + num2 + " = " + to_string(calc);
    
     
    UpdateDisplay(newMathString);
}


int main()
{
    vector<string> display = {"|","|","|","|"};
    
    UpdateDisplay("  ");
    double calc = 0.0;
    while(1 == 1){
      GetInput(calc,"");
    }
    return 0;
}
