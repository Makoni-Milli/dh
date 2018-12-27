#include <iostream>
#include <sys/ioctl.h>
#include <stdio.h>
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

string spc = " ";
string marginline = "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
string title = "BESSIE" + spc;
string version = "1.0" + spc;
string repo = "dark-horse (c)" + spc;
string company = "Milli (c)" + spc;
string year = "2018" +spc;
string langauge = "C++11" +spc;
string author = "Takudzwa Makoni" + spc;
string git = "https://github.com/Makoni-Milli/" + spc;


void eol(int v=1){
    for (int i=0; i<v; i++){
        cout << endl;
    }
}
void pf(string str, int winwidth){
    
    int widthA = ( winwidth + str.length()) / 2;
    cout << setw(widthA) << right << str;
}

int gws(){
    
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    int siz [2] = {w.ws_row, w.ws_col};
    return siz[1];
    
}

int main(int argc, char **argv)
{
    int w = gws();
    int* wptr = &w;
    //int terminalWidth;
    int& twref = *wptr;
    
    //int terminalHeight;
    //int& thref = terminalHeight;
    //thref = w.ws_row;
  
    ////////////////////////////////////
    
    popen("afplay -v 0.075 ../trinkets/login.wav","r"); //login sound
    popen("cd ../trinkets/terminal; osascript ocean.scpt;osascript redsands.scpt;osascript grass.scpt;osascript novel.scpt;osascript ocean.scpt;osascript redsands.scpt;osascript grass.scpt;osascript novel.scpt;","r");
    eol(2); // padding
    pf(marginline, twref);
    eol(3);
    pf(title + "v" + version + ", " + repo, twref);
    eol();
    pf(company + year + ", " + "written in " + langauge, twref);
    eol(2);
    pf("by " + author, twref);
    eol();
    pf("git: " + git,twref);
    eol(3);
    pf(marginline,twref);
    eol(2); // padding
    
    
    
    
    return 0;  // make sure your main returns int
}
