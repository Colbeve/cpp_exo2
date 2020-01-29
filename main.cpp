#include <iostream>

using namespace std;

/*Exercice 2
J’affiche le message « Donnez un nombre supérieur à 10 »
tant que l’utilisateur donne un nombre inférieur à 10.
 */

int main()
{
    int n=1;
    cout << "Donnez un nombre superieur a 10" << endl;
    cin>>n;
    while (n<10){
        cout<<"Donnez un nombre superieur a 10"<<endl;
        cin>>n;
    }
    return 0;
}
