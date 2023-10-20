 #include <stdio.h>

 float div (float a, float b);

int main () 
{
    float y = 2.11;
    float z = div(y, 5.11); // calling our new function

    printf ("The sum of 5 and %.2f is %2.2f\n", y, z);
}

float div (float a, float b)
{
    float answer;
    answer = a/b;

    return answer;
}



/*

 #include <stdio.h>

int sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer; //kalau set return 0, nanti result akan hantar 0 je. Bkn nama variable answer. 
                   //nama variable kena betul supaya kita dpt result yg btl. 
}

int main () 
{
    float y = 2.3;
    float z = sum(5.2, y); // calling our new function

    printf ("The sum of 5 and %f is %f\n", y, z);
}



*/