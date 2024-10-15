#ifndef TENNIS_H
#define TENNIS_H


#include <Athlete.h>



class Tennis: public Athlete
{
    private:
        int m_serverSpeed;
        bool m_serveAndVolley;

    public:
        Tennis(){
            m_serverSpeed = 0;
            m_serveAndVolley = false; // bool t or f


        }

        Tennis(int serverSpeed, bool serveAndVolley) { // Changed parameter name
            m_serverSpeed = serverSpeed;
            m_serveAndVolley = serveAndVolley; // Now it works properly
        }

        int getServerSpeed(){
        return m_serverSpeed;
        }

        bool getServeAndVolley(){
        return m_serveAndVolley;
        }

        void setServeSpeed(int serverSpeed){
        m_serverSpeed = serverSpeed;
        }

        void setServeAndVolley(bool serveAndVolley){
        m_serveAndVolley = serveAndVolley;
        }


};


#endif // TENNIS_
