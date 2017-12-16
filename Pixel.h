//
// Created by idalov on 24.10.2017.
//

#ifndef DGW_MOOP_1_PIXEL_H
#define DGW_MOOP_1_PIXEL_H
class Pixel{
private:
    int X,Y;
    int R,G,B;
public:
    int getX() const {
        return X;
    }

    int getY() const {
        return Y;
    }

    int getR() const {
        return R;
    }

    int getG() const {
        return G;
    }

    int getB() const {
        return B;
    }

    void setX(int X);

    void setY(int Y);

    void setR(int R);

    void setG(int G);

    void setB(int B);

public:
    Pixel(int X, int Y, int R, int G, int B);


};
#endif //DGW_MOOP_1_PIXEL_H