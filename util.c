void printInteger(int integer){
    printf("okie %i dokie blah blah blah %i\n", integer, integer);
}
int multiplyNumberBySelf(int number) {
    int thisOtherNumber = 6;
    return thisOtherNumber * number;
}

int multiplyUntil(int current, int limit) {
    if (current == limit) {
        return current;
    }
    printf("%i hello aha %i\n", current, limit);
    return current * multiplyUntil(++current, limit);
}
