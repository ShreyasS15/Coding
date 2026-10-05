#include <stdio.h>
int main ()
{
    int length ;
    printf("Enter the length of rectangle : ");
    scanf("%d" , &length);
    int breadth ;
    printf("Enter the breadth of rectangle : ");
    scanf("%d" , &breadth);
    int area ;
    area = length * breadth ;
    printf (" AREA OF RECTANGLE IS : %d" , area);   

}