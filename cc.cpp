#include<iostream>
using namespace std;
class stack
{
private:
   int tab[20];
   int* tab;   // Tableau pour stocker les entiers
    int taille;   // Capacité de la pile
    int sommet;     // Indice du sommet de la pile
public:
  Stack(int t = 20) 
  {
        taille  = t ;
        tab = new int[taille];
        sommet = -1;  // La pile est vide au départ
  }
  void push(int v)
  {
    if(sommet< taille-1)
    {
      tab[++sommet]=v;

    }
    else
    cout<<"la pile est plein"<<endl
   }
   int depiler()
   {
     if(sommet>=0)
     {
        return tab[sommet--];
     }
     else
     cout<<"la pile est vide"<<endl;
   }
};
int main()
{
stack p[20];
p->push(5);
p->depiler(1);
}


