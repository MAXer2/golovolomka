
#include "TXLib.h"
#include "lib.cpp"

int main()
    {
    txCreateWindow (1280,720);
    txSetFillColor(TX_WHITE);

    int x = 0;
    int y = 0;

   HDC golova = txLoadImage("pictures\\333.bmp");


    while (!GetAsyncKeyState('R')) {

        txClear();
        risovat_golova(golova,x,y);


        if (GetAsyncKeyState(VK_LEFT))
        {
            x=270;
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            x=0;
        }

        txSleep(10);

    }

    return 0;
}
