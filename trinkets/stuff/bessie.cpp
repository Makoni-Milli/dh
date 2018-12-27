#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

void BESSIE(string title, string version, string repo, string company, string year, string language, string author, string git)
{
  printf("\n\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n\n        %s %s,   %s, %s.    \n                                 %s                   \n                         Written in %s by          \n                             %s                 \n\n           github: %s     \n\n                              \n\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n\n",title,version,repo,company,year,language,author,git);

 string marginline = "\n\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n";
  cout << marginline;
  cout << "    " << left << "  " << title << "  " << "v" << version << ", " << "  " << repo << endl;
  cout << "    " << left << "  " << company << "," << "  " << year << "." << endl;
  cout << "    " << left << "  " << "written in " << language << " by" << endl;
  cout << "    " << left << "  " << author << endl;
  cout << "    " << left << "  " << "git: " << git;
  cout << marginline;
  system("afplay -v 0.075 trinkets/login.wav");

 
}

int main(){
  BESSIE("some-program","1.0","dark-horse (c)","Milli (c)", "2018","C++11", "Takudzwa Makoni","https://github.com/Makoni-Milli/");

}
