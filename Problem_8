//Problema 1603 do leetcode

#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int big;
    int medium;
    int small;
} ParkingSystem;

int parkingSystemAddCar(ParkingSystem* obj, int carType);
ParkingSystem* parkingSystemCreate(int big, int medium, int small);
void parkingSystemFree(ParkingSystem* obj);

int main()
{
	ParkingSystem* sistema = parkingSystemCreate(1, 2, 3);//quantidade de cada tipo de carro.
    int estaciona = parkingSystemAddCar(sistema, 1);

    if(estaciona){
        printf("\nSucesso ao estacionar\n");
    } else{
        printf("\nNao foi possivel estacionar\n");
    }

    estaciona = parkingSystemAddCar(sistema, 2);

    if(estaciona){
        printf("\nSucesso ao estacionar\n");
    } else{
        printf("\nNao foi possivel estacionar\n");
    }

    estaciona = parkingSystemAddCar(sistema, 3);

    if(estaciona){
        printf("\nSucesso ao estacionar\n");
    }else{
        printf("\nNao foi possivel estacionar\n");
    }

    parkingSystemFree(sistema);
	return (0);
}


ParkingSystem* parkingSystemCreate(int big, int medium, int small) {
    ParkingSystem* sistema = (ParkingSystem*)malloc(sizeof(ParkingSystem));
    sistema->big = big;
    sistema->medium = medium;
    sistema->small = small;
    return sistema;
}

int parkingSystemAddCar(ParkingSystem* obj, int carType) {
    switch(carType){
        case 1:
            if(obj->big > 0){
                obj->big--;
                return 1;
            }
            break;
        case 2:
            if(obj->medium > 0){
                obj->medium--;
                return 1;
            }
            break;
        case 3:
            if(obj->small > 0){;
                obj->small--;
                return 1;
            }
            break;
    }
    return 1;
}

void parkingSystemFree(ParkingSystem* obj) {
    free(obj);
}
