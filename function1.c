 #include <stdio.h>

int sum (int a, int b)
{
    int answer;
    answer = a + b;
    return answer; //kalau set return 0, nanti result akan hantar 0 je. Bkn nama variable answer. 
                   //nama variable kena betul supaya kita dpt result yg btl. 
}

int main () 
{
    int y = 2;
    int z = sum(5, y); // calling our new function

    printf ("The sum of 5 and %d is %d\n", y, z);
}
