#include <iostream>

using namespace std;

class Room {
private:
    float length;
    float breadth;

public:

    void set(float l, float b) {
        length = l;
        breadth = b;
    }


    void display() {
        cout << "Length: " << length << " meters" <<endl;
        cout << "Breadth: " << breadth << " meters" <<endl;
    }


    float area() {
        return length * breadth;
    }


    float perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    
    Room rooms[5];


    for (int i = 0; i < 5; ++i) {
        float length, breadth;
        cout << "Enter length and breadth for room " << i + 1 << ": ";
        cin >> length >> breadth;
        rooms[i].set(length, breadth);
    }

    for (int i = 0; i < 5; ++i) {
        cout << "\nRoom " << i + 1 << " details:" <<endl;
        rooms[i].display();
        cout << "Area: " << rooms[i].area() << " square meters" <<endl;
        cout << "Perimeter: " << rooms[i].perimeter() << " meters" <<endl;
    }

    return 0;
}
