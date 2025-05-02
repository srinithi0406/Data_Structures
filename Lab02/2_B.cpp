//menu driven program to caculate the area of square, cube, rectangle or cuboid using class
#include <stdio.h>
#include <cstdlib>
#include <math.h>

//class for claculating area of different shapes
class Shapes{
    private:
    float length, breadth, height;

    public:
    void setSide(float side){
        length=side;
    }
    void setRectangle(float l, float b){
        length=l;
        breadth=b;
    }
    void setCuboid(float l, float b, float h){
        length=l;
        breadth=b;
        height=h;
    }

    float calculateSquare(){
        return pow(length, 2);
    }
    float calculateCube(){
        return (6 * (pow(length, 2)));
    }
    float calculateRectangle(){
        return (length*breadth);
    }
    float calculateCuboid(){
        return (2*((length*breadth) + (breadth*height) + (height*length)));
    }

};

int main(){
    int ch;
    float side;
    float l,b,h;
    Shapes shape;
    while (1){
        printf("\nMenu\n1.Square\n2.Cube\n3.Rectangle\n4.Cuboid\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        if (ch==1){
            printf("Enter the side of the square: ");
            scanf("%f", &side);
            shape.setSide(side);
            printf("Area of square: %.2f", shape.calculateSquare());
        }
        else if (ch==2){
            printf("Enter the side of the cube: ");
            scanf("%f", &side);
            shape.setSide(side);
            printf("Surface Area of cube: %.2f", shape.calculateCube());
        }
        else if (ch==3){
            printf("Enter the length of the rectangle: ");
            scanf("%f", &l);
            printf("Enter the breadth of the rectangle: ");
            scanf("%f", &b);
            shape.setRectangle(l,b);
            printf("Area of rectangle: %.2f", shape.calculateRectangle());
        }
        else if (ch==4){
            printf("Enter the length of the cuboid: ");
            scanf("%f", &l);
            printf("Enter the breadth of the cuboid: ");
            scanf("%f", &b);
            printf("Enter the height of the cuboid: ");
            scanf("%f", &h);
            shape.setCuboid(l,b,h);
            printf("Surface Area of cuboid: %.2f", shape.calculateCuboid());
        }
        else if (ch==5){
            break;
        }
        else{
            printf("Invalid choice");
        }
    }

}
