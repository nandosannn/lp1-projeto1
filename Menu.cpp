#include "Menu.hpp"
#include <iostream>
using namespace std;

void menuPrincipal(){
    cout << "1. Cadastramento" << endl;
    cout << "2. Astronautas" << endl;
    cout << "3. Voos" << endl;
    cout << "4. Controle de Trafego Aereo" << endl;
    cout << "5. Finalizar Sessao" << endl;
}

void menuCadastramento(){
    cout << "1. Cadastramento de Astronauta" << endl;
    cout << "2. Cadastramento de Voo" << endl;
    cout << "3. Voltar ao menu Principal" << endl;
}

void menuAstronauta(){
    cout << "1. Lista de Mortos" << endl;
    cout << "2. Astronautas Disponiveis" << endl;
    cout << "3. Astronautas Indisponiveis" << endl;
    cout << "4. Voltar ao menu Principal" << endl;
}

void menuVoos(){
    cout << "1. Adicionar Astronauta" << endl;
    cout << "2. Remover Astronauta" << endl;
    cout << "3. Lista de Voos" << endl;
    cout << "4. Voltar ao menu Principal" << endl;
}

void menuControleTrafego(){
    cout << "1. Lancar Voo" << endl;
    cout << "2. Explodir Voo" << endl;
    cout << "3. Finalizar Voo" << endl;
    cout << "4. Voltar ao menu Principal" << endl;
}