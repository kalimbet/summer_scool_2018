#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        Point(float setA, float setB);
        void moveF(float a1, float b1);
        void ShowAB();
    private:
        float a, b;

};

#endif // POINT_H
