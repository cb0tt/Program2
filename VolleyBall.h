#ifndef VOLLEYBALL_H
#define VOLLEYBALL_H
#include <Athlete.h> //using athlete class
#include <string>

using namespace std;

class VolleyBall: public Athlete
{
    private:
        string m_position;
        float m_reactionTime; //private fields


    public:
        VolleyBall(){
            m_position = " "; // string double qoute
            m_reactionTime = 0;
        }

        VolleyBall(string position, float reactionTime){

        m_position = position;
        m_reactionTime = reactionTime;
        }

        string getPosition(){
        return m_position;
        }


        float getreactionTime(){
        return m_reactionTime;
        }

        void setPosition(string position){
        m_position = position;
        }

        void setreactionTime(float reactionTime){
        m_reactionTime = reactionTime;
        }





};


#endif // VOLLEYBALL_H
