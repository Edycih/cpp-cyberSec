#include <iostream>
using namespace std;

void UpLevel (int* pLevel){
    *pLevel = *pLevel + 1;
}

int main(){
    int LevelHero = 5;

    cout<<"Level Awal Hero: " <<  LevelHero << "\n";

    UpLevel(&LevelHero);

    cout<<"Level Hero Setelah Di UP oleh Pointer: " << LevelHero << "\n";

    return 0;
}