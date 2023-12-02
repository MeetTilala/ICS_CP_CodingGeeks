#include <stdio.h>
#include <math.h>
#include <string.h>

int regular_polygon (float n, float s);
int circle (float radius);
int scalene_triangle (float side_1, float side_2, float side_3 );
int isoceles_triangle (float a, float b, float r );
int rectangle (float l, float b_rect );
int rhombus (float d1, float d2);
int trapezium (float l1, float l2, float h_trapezium);
int parallelogram (float base, float height_parallelogram );
int ellipse (float semimajor_axis, float semiminor_axis);
int kite (float diagonal_1, float diagonal_2);


int main() 
{
    float n , s ;
    float radius ;
    float side_1 , side_2 , side_3 ;
    float a , b , r ;
    float l , b_rect ;
    float d1 , d2 ;
    float l1 , l2, h_trapezium;
    float base , height ;
    float semimajor_axis , semiminor_axis ;
    float diagonal_1 , diagonal_2 ;
    
    printf("CHOOSE FROM THE SHAPES GIVEN BELOW : \n");
    printf("\n1. N-SIDED REGULAR POLYGONS\n");
    printf("2. CIRCLE \n");
    printf("3. SCALENE TRIANGLE \n");
    printf("4. ISOSCELES TRIANGLE \n");
    printf("5. RECTANGLE \n");
    printf("6. RHOMBUS \n");
    printf("7. TRAPEZIUM \n");
    printf("8. PARALLELOGRAM \n");
    printf("9. ELLIPSE \n");
    printf("10. KITE \n");

    int number;
    printf("\nEnter the number corresponding to the shape : ");
    scanf("%d", &number);

    switch (number) {

    case 1:
        regular_polygon(n, s);
        break;

    case 2:
        circle(radius);
        break;

    case 3:
        scalene_triangle(side_1, side_2, side_3);
        break;

    case 4:
        isoceles_triangle(a, b, r);
        break;

    case 5:
        rectangle(l, b_rect);
        break;

    case 6:
        rhombus(d1, d2);
        break;

    case 7:
        trapezium(l1, l2, h_trapezium);
        break;

    case 8:
        parallelogram(base, height);
        break;

    case 9:
        ellipse(semimajor_axis, semiminor_axis);
        break;

    case 10:
        kite(diagonal_1, diagonal_2);
        break;
    }

 int meet;
 printf("\nMenu = Press 1 \nExit = Press 0\n");
   scanf("%d",&meet);
   if (meet==1)
   {
    printf("\n");
    main();
   }

   else
   { 
    printf("The Program exited sucessfully...");
    return 0;
    }
}

int regular_polygon (float n, float s) {

    printf("Enter the side and side length ");
        //float n,s;
        scanf("%f %f",&n,&s);

        if (n<3 || n < 0){
            printf("Area can't be calculated");
        }

        else {
        float c;
        c = tan(3.1415926/n);

        float apothem;
        apothem = s/(2*c);

        float s1area;
        s1area = (n * apothem * s)/2 ;

        printf("%.4f", s1area);
        }
}

int circle (float radius) {
    printf("Enter the radius : ");
        //float radius;
        scanf("%f", &radius);

        if (radius<0) {
            printf("Radius is not valid");
        }

        else {

        float s2area;
        s2area = 3.14 * pow(radius, 2);
        printf("The area of circle is %.4f", s2area);
        }
}

int scalene_triangle (float side_1, float side_2, float side_3 ) {
    printf("Enter the 3 sides : ");
        //float side_1, side_2, side_3;
        scanf("%f %f %f", &side_1, &side_2, &side_3);

        if (side_1 + side_2 < side_3 || side_2 + side_3 < side_1 || side_3 + side_1 < side_2 || side_1 < 0 || side_2 < 0 || side_3 < 0 ) {
            printf("Triangle is not valid");
        }

        else {

        float semiperimeter;
        float area_triangle;

        semiperimeter = (side_1 + side_2 + side_3) / 2;
        area_triangle = sqrt(semiperimeter * (semiperimeter - side_1) * (semiperimeter - side_2) * (semiperimeter - side_3));

        printf("Area of triangle is %.4f", area_triangle);
        }
}

int isoceles_triangle (float a, float b, float r ) {
     printf("Enter the 3 sides : ");
        //float a, b, r;
        scanf("%f %f %f", &a, &b, &r);

         if (a + b < r || a + r < b || r + b < a || a<0 || b < 0 || r < 0 ) {
            printf("Triangle is not valid");
        }
        else {

        float s_isosceles;
        float A_isosceles;

        s_isosceles = (a + b + r) / 2;
        A_isosceles = sqrt(s_isosceles * (s_isosceles - a) * (s_isosceles - b) * (s_isosceles - r));

        printf(" Area of isosceles triangle is %.4f", A_isosceles);
        }
}

int rectangle (float l, float b_rect ) {
    printf("Enter the length and the breadth : ");
       // float l, b_rect;
        scanf("%f %f", &l, &b_rect);

        if (l < 0 || b_rect < 0) {
            printf("Rectangle is not valid");
        }

        else {

        float s5area;
        s5area = l * b_rect;
        printf("%.4f", s5area);
        }
}

int rhombus (float d1, float d2) {
    printf("Enter length of the diagonals : ");
        //float d1, d2;
        scanf("%f %f", &d1, &d2);
    
    if(d1<=0 || d2<=0) {
        printf("Rhombus is not valid");
    }

    else {
        float s6area;
        s6area = d1 * d2 * 0.5;
        printf("%.4f", s6area);
    }
}

int trapezium (float l1, float l2, float h_trapezium) {
    printf("Enter the length of parallel sides : ");
        //float l1, l2, h_trapezium;
        scanf("%f %f", &l1, &l2);
        printf("Enter the distance between two parallel sides (height) : ");
        scanf("%f", &h_trapezium);

        if (l1<=0 || l2<=0 || h_trapezium<=0) {
            printf("Trapezium is not valid");
        }

        else {
            float AreaTrapezium;
            AreaTrapezium = 0.5 * (l1 + l2) * h_trapezium;
            printf("%.4f", AreaTrapezium);
        }
}

int parallelogram (float base, float height_parallelogram ) {
    printf("Enter the base length : ");
        //float base, height_parallelogram;
        scanf("%f", &base);
        printf("Enter the height length : ");
        scanf("%f", &height_parallelogram);

        if (base<=0 || height_parallelogram<=0) {
            printf("Parallelogram is not valid");
        }

        else {
        float AreaParallelogram;
        AreaParallelogram = base * height_parallelogram;
        printf("%.4f", AreaParallelogram);
        }
}


int ellipse (float semimajor_axis, float semiminor_axis) {
    printf("Enter the semi-major axis : ");
            //float semimajor_axis, semiminor_axis;
            scanf("%f", &semimajor_axis);
            printf("Enter the semi-minor axis : ");
            scanf("%f", &semiminor_axis);

            if (semimajor_axis<=0 || semiminor_axis<=0 ) {
            printf("Ellipse is not valid");
            }

            else {
            float area_ellipse;
            area_ellipse = 3.142 * semimajor_axis * semiminor_axis;
            printf("Area is %.4f ", area_ellipse);
            }
}

int kite (float diagonal_1, float diagonal_2) {
    printf("Enter the length of diagonal 1 : ");
        //float diagonal_1, diagonal_2;
        scanf("%f", &diagonal_1);
        printf("Enter the length of diagonal 2 : ");
        scanf("%f", &diagonal_2);

        if (diagonal_1<=0 || diagonal_2<=0 ) {
            printf("Kite is not valid");
        }

        else {
        float area_kite;
        area_kite = (diagonal_1 * diagonal_2) / 2;
        printf("Area of kite is : %.4f", area_kite);
        }
}

