#include<stdio.h> 
#include<math.h>

/***

This is an example to calculate how the distance of a to g.

(a)               (b)
-------------------
|\                  \
| \(c)               \ (d)
|  -------------------
|  |                  |
|  |                  |
|  |                  |
|e |                  | (h, obviously, h is hidden for us)
\  |                  |
 \  ------------------ (g)
    (f)

define: 

L is the length of one room, W is the length of one room, H is the length of one room.

a, b, c, d, e, f, g, h are eight vertices of this room, just like the figure above.

question: how to calculate the distance of a to g? 

answer: d = sqrt(H^2 + W^2 + L^2); // a^2 means the square of number a.

***/

double distanceOfVertices(int length, int width, int height){
    return sqrt(pow(length, 2) + pow(width, 2) + pow(height, 2));
}

int main(){
    int lengthOfRoom = 0; 
    int widthOfRoom = 0;
    int heightOfRoom = 0;

    printf("input your room length in inchines: __ \b\b"); 
    scanf("%d", &lengthOfRoom);
    printf("input your room width in inchines: __ \b\b"); 
    scanf("%d", &widthOfRoom);
    printf("input your room height in inchines: __ \b\b");
    scanf("%d", &heightOfRoom);

    printf("your input length, width, height are %d, %d, %d", lengthOfRoom, widthOfRoom, heightOfRoom);

    printf("the distance of point a and poitn g is %f \n", distanceOfVertices(lengthOfRoom, widthOfRoom, heightOfRoom));

    return 0;
}
    
