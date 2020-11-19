#include <iostream>
#include "sculptor.h"
using namespace std;

int main()
{
    Sculptor caixa2(70,70,70);
    caixa2.setColor(1,0,0,1);
    caixa2.putBox(0,41,0,55,0,41);
    caixa2.cutSphere(20,21,0,20);
    caixa2.setColor(0,0,0,1);
    caixa2.putSphere(20,21,0,18);
    caixa2.cutSphere(20,21,0,9);
    caixa2.cutBox(8,32,44,53,0,3);
    caixa2.setColor(0,0,0,1);
    caixa2.putBox(11,14,47,50,0,2);
    caixa2.putBox(16,19,47,50,0,2);
    caixa2.putBox(21,24,47,50,0,2);
    caixa2.putBox(26,29,47,50,0,2);
    caixa2.putEllipsoid(20,55,20,20,10,5);
    caixa2.cutBox(5,36,56,60,0,50);
    caixa2.writeOFF("caixaDeSom2.off");



}
