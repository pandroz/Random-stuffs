#
include < stdio.h > #include < stdlib.h > #include < time.h >
    main() {
        printf("Benvenuto nel gioco MASTERMIND\n");
        srand(time(NULL));
        int gn1, gn2, gn3, gn4, i, e;
        int num1 = rand() % 10;
        int num2 = rand() % 10;
        int num3 = rand() % 10;
        int num4 = rand() % 10;
        do {
            printf("Primo numero generato: %d%d%d%d", num1, num2, num3, num4);
            if ((num1 == num2) || (num1 == num3) || (num1 == num4)) {
                num1 = rand() % 10;
            }
            if ((num2 == num3) || (num2 == num4)) {
                num2 = rand() % 10;
            }
            if (num3 == num4) {
                num3 = rand() % 10;
            }
            printf("\n\nNumero corretto generato: %d%d%d%d", num1, num2, num3, num4);
        } while ((num1 == num2) && (num1 == num3) && (num1 == num4) && (num2 == num3) && (num2 == num4) && (num3 == num4));
