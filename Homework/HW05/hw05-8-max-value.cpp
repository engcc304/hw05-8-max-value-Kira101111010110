/*
    ผู้ใช้กรอกตัวเลข 3 จำนวน และให้คุณระบุอันดับของแต่ละหมายเลข พร้อมกับระบุจำนวนที่มากที่สุด

    Test case:
        12 25 52

    Output:
        1st Number = 12
        2nd Number = 25
        3rd Number = 52
        The 3rd Number is the greatest among three

    Test case:
        89 54 72

    Output:
        1st Number = 89
        2nd Number = 54
        3rd Number = 72
        The 1rd Number is the greatest among three

*/
#include <stdio.h>

int main() {
    int a, b, c ;
    const char *m = "1st", *n = "2nd", *v = "3rd" ;
    printf( "Test case:\n" ) ;
    scanf( "%d %d %d", &a, &b, &c ) ;
    printf( "%s Number = %d\n", m, a ) ;
    printf( "%s Number = %d\n", n, b ) ;
    printf( "%s Number = %d\n", v, c ) ;

    if ( a > b && a > c ) {
        printf( "The %s Number is the greatest among three", m ) ;
    } else if ( b > a && b > c ) {
        printf( "The %s Number is the greatest among three", n ) ;
    } else if ( c > a && c > b ) {
        printf( "The %s Number is the greatest among three", v ) ;
    } //end else if
    return 0 ;
} //end main function   