int main(int argc, char const *argv[])
{
    int a="9";
    char b = '9';
    int*ptra = &a;
    char*ptrb = &b;
    printf("%d\n",ptra);
    printf("%s\n",ptrb);

    ptra++;
    ptrb++;
    printf("%d\n",ptra);
    printf("%s\n",ptrb);
    
    printf("%d\n",ptra-2);
    printf("%s\n",ptrb-2);
    return 0;
    
}
