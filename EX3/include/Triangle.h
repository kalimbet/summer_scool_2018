#ifndef TRIANGLE_H
#define TRIANGLE_H

struct fPoint{
    float x, y;
};

class Triangle
{
    public:
        Triangle();
        Triangle(struct fPoint a, struct fPoint b, struct fPoint c);
        void showTriagale();
        float perimeterFind();
        float area();
        void showTriangle();
    private:
        struct fPoint a, b, c;
        float heron, perimeterValue;
        float lenghtA, lenghtB, lenghtC;
};

#endif // TRIANGLE_H
