#include <iostream>
#include "sculptor.h"
using namespace std;

int main()
{
    //Sculptor vamos(30,30,30);
    //vamos.putBox(0,10,0,10,0,10);
    //vamos.writeOFF((char*)"vamos.off");

/*
  Sculptor trono(10,10,10);
     trono.setColor(0,0,1,1);
       trono.putBox(0,9,0,9,0,9);
       trono.cutBox(1,8,1,9,1,9);;
       trono.writeOFF("trono.off");
*/

      Sculptor vaso(31,31,51);
       vaso.setColor(0,1,0,1);
       vaso.putEllipsoid(15,15,15,4,4,7);
       vaso.cutEllipsoid(15,15,15,2,2,8);
       //vaso.setColor(1,0,0,1);
       //vaso.putEllipsoid(15,15,15,9,9,14);
       //vaso.cutEllipsoid(15,15,15,8,8,13);
       //vaso.cutBox(0,30,0,30,0,5);
       vaso.writeOFF("vaso.off");


      // Sculptor sol(31,31,31);
       //sol.setColor(1,1,0,1);
       //sol.putSphere(0,0,0,8);
       //sol.putVoxel(30,30,30);
       //sol.writeOFF("sol.off");



       //Sculptor caixa1(60,70,60);
       //caixa1.putBox(0,41,0,55,0,41);
       //caixa1.cutSphere(20,21,0,20);
       //caixa1.putSphere(20,21,0,18);
       //caixa1.cutSphere(20,21,0,9);
       //caixa1.cutBox(8,32,44,53,0,3);
       //caixa1.putBox(11,14,46,49,0,2);
       //caixa1.putBox(16,19,46,49,0,2);
       //caixa1.putBox(21,24,46,49,0,2);
       //caixa1.putBox(26,29,46,49,0,2);
       //caixa1.putEllipsoid(20,55,30,30,10,5);
       //caixa1.writeOFF("caixa2.off");




}
