#include <iostream>
#include <string>
using namespace std;

class pokemon{
public:
    int ataque;
    int hp;
    int defesa;
    int speed;
    string nome;
    pokemon(string no,int vida,int ata,int def, int spe){
    ataque=ata;
    hp=vida;
    defesa=def;
    speed=spe;
    nome=no;
    }
    void atacar(){
        cout<<"nome\n"<<nome<<"defesa\n"<<defesa <<"ataque\n"<<ataque<<"vida\n"<<hp<<"velocidade\n"<<speed;
    }
};
int main()
{
    string nome;
    int atac,defe,vi,velo;
    string name;
    cout << "digite o nome\n!" << endl;
    cin>> nome;
    cout << "digite o ataque\n!" << endl;
    cin>> atac;
    cout << "digite a defesa\n!" << endl;
    cin>> defe;
    cout << "digite a vida\n!" << endl;
    cin>> vi;
    cout << "digite a velocidade\n!" << endl;
    cin>> velo;
    pokemon  pokemon(nome,vi,atac,defe,velo);
    pokemon.atacar();
    return 0;
}
