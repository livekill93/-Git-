#ifndef __CAR_H__
#define __CAR_H__

namespace CAR_CONST
{
     enum{
        ID_LEN =20,
        MAX_SPD =200,
        FUEL_STEP =2,
        ACC_STEP =10,
        BRK_STEP =10
    };
} // namespace CAR_CONST

class Car{
    private:
	    char gamerID[CAR_CONST::ID_LEN];	// 소유자ID
	    int fuelGauge;				// 연료량
	    int curSpeed;				// 현재속도
    public:
        void InitMembers(char * ID, int fuel) ;
        void ShowCarState();
        void Accel();
        void Break();

};

#endif