#include <iostream>
using namespace std;

int main()
{
   for (int row = 0; row < 5; row++)
   {
      for (int col = 0; col < 5; col++)
      {
         if (row == 0 || row == 4 || col == 0 || col == 4)
            cout << "* ";
         else
            cout << "  ";
      }
      cout << endl;
   }
}

// git add README.md
// git commit -m "first commit"
// git branch -M main
// git remote add origin git@github.com:OmkarSawant25/CPP.git
// git push -u origin main