// Different than class because by default, the access is public. ie. syntax is similar to class
#include <iostream>

//This fucnction is hard to use because of less abstraction & informaito overload
void DrawLine(int x1, int y1, int x2, int y2){

}

struct Point{
    int x;
    int y;

};

// However if you create struct, the meaning is conveyed & abstraction is properly used.
void DrawLine(Point start, Point end){
    std::cout << start.x << std::endl;

}

int main(){
    Point start;
    start.x = 1;
    start.y = 2;

    Point end;
    end.x = 3;
    end.y = 4;

    DrawLine(start,end);
    return 0;
}