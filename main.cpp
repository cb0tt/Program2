/*

Colin Bottrill
Professor Vermilyer

This program can be used by the STAC athletics department to keep track of
sport stats from a UML diagram.

*/








#include <iostream>
#include <Athlete.h>
#include <VolleyBall.h>
#include <Tennis.h>



using namespace std;


int main()
{
    Athlete sport(72, 140, 'M');
    cout << "Athlete: " << sport.getHeight() << " "
         << sport.getWeight() << " "
         << sport.getGender() << endl;

    VolleyBall kerri = VolleyBall();
    kerri.setGender('F');
    kerri.setPosition("Opposite Hitter");
    VolleyBall giba("Outside Hitter",23.2);
    giba.setGender('M');
    if  (kerri.getGender() == 'F')
       cout << "Kerri is an " << kerri.getPosition() << endl;


    Tennis martina = Tennis();
    martina.setServeSpeed(100);
    martina.setGender('F');
    Tennis bjorn(150,false);
    bjorn.setGender('M');
    if  (martina.getGender() == 'F')
       cout << "Martina serve speed: " << martina.getServerSpeed() << endl;




    return 0;
}
