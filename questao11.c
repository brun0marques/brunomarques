int main(){
    char a[4];
    int b[4];
    float c[4];
    double x[4];

    printf("quando x for declarado como char:\n");

    printf("x = %p\n", a);
    printf("x+1 = %p\n", a+1);
    printf("x+2 = %p\n", a+2);
    printf("x+3 = %p\n", a+3);

    printf("\n");
    printf("quando x for declarado como int:\n");

    printf("x = %p\n", b);
    printf("x+1 = %p\n", b+1);
    printf("x+2 = %p\n", b+2);
    printf("x+3 = %p\n", b+3);

    printf("\n");
    printf("quando x for declarado como float:\n");

    printf("x = %p\n", c);
    printf("x+1 = %p\n", c+1);
    printf("x+2 = %p\n", c+2);
    printf("x+3 = %p\n", c+3);

    printf("\n");
    printf("quando x for declarado como double:\n");

    printf("x = %p\n", x);
    printf("x+1 = %p\n", x+1);
    printf("x+2 = %p\n", x+2);
    printf("x+3 = %p\n", x+3);
}
