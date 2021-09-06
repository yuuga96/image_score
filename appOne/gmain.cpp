#define _EX

#ifdef _EX
#include"libOne.h"
void gmain() {
    window(1920, 1080, full);
    int img = loadImage("assets\\number.png");
    int imgs[10];
    divideImage(img, 10, 1, 150, 250, imgs);
    int score = 500;
    int keta = 3;
    while (notQuit) {
 
        if (score < 777)score++;
        clear();
        imageColor(0, 255, 0);
        int tmpScore = score;
        int kurai = pow(10,(keta-1));
        for (int i = 0; i < keta; i++) {
            int no = tmpScore / kurai;
            image(imgs[no], 735 + 150 * i, 0);
            tmpScore %= kurai;
            kurai /= 10;
        }
    }

}
#endif

#ifdef _SAMPLE
#include"libOne.h"
void gmain() {
    window(1920, 1080, full);
    int originalImg = loadImage("assets\\number.png");
    int imgs[10];
    divideImage(originalImg, 10, 1, 150, 250, imgs);
    int score = 500;
    int keta = 3;
    while (notQuit) {
        if (score < 777)score++;
        clear();
        imageColor(20, 255, 20);
        int tmpScore = score;
        int kurai = pow(10,(keta-1));
        for (int i = 0; i < keta; i++) {
            int no = tmpScore / kurai;
            image(imgs[no], 735 + 150 * i, 150);
            tmpScore %= kurai;
            kurai /= 10;
        }
    }
}
#endif
