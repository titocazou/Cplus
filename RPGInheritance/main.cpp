#include <string>
#include "Personnage.h"
#include "Magicien.h"
using namespace std;

int main()
{
   Magicien marcel("Marcel");
   Magicien marco("Marco");
   marcel.sePresenter();
   marco.coupDePoing(marcel);
   marcel.sePresenter();

   return 0;
}
