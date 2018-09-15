
#include "TXLib.h"


//файл для рисования всех частей тел XD
void risovat_golova(HDC golova,int x ,int y) {
    txTransparentBlt (txDC(), 350, 300, 300, 300, golova, x, y, TX_WHITE);
}
