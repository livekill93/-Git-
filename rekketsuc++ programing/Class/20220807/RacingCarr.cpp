#include<iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car{
    char gamerID{ID_LEN}; //소유자ID
    int FuelGause; //연료
    int CarSpeed; //차 속도
};

void ShowCarState(const Car &car){
    cout<<"소유자ID: "<<car.gamerID<<endl;
    cout<<"남은 연료: "<<car.FuelGause<<endl;
    cout<<"차량속도: "<<car.CarSpeed<<endl;
}
void Accel(car &car){
    if(car.FuelGause<=0){
        return 0;
    }
    else{
        car.FuelGaue-=FUEL_STEP;
    }

    if(car.CarSpeed+ACC_STEP>=MAX_SPD){
        car.CarSpeed=MAX_SPD;
        return 0;
    }
    car.CarSpeed+=ACC_STEP;
}

void break(Car &car){
    if(car.CarSpeed<BRK_STEP){
        car.CarSpeed=0;
        return 0;
    }
    car.CarSpeed-=BRK_STEP;
}

int main(){
    Car run99={"run99",100,0};
    Accel(run99);
    Accel(run99);
    ShowCarState(run99);
    Accel(run99);
    ShowCarState()
}
