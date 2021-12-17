// 2. варианты символов "крестики нолик"
enum tttChars {X, O};

// 4. структура "крестики нолик"
struct tttStruct
{
    tttChars player1;
    tttChars player2;
    tttChars winner;
    tttChars loser;
};

int main()
{
    // 1. типы данных
    short int shortInt = 123;
    int a = 123;    
    long long longLong = 1'242'142'223;
    char qwe = 'i';
    bool bl = true;
    float fl = 5.2142f;
    double dble = 1.412;

    // 3. массив "крестики нолик"
    tttChars arr[3][3] = {{X,O,X},{O,X,O},{O,X,O}};

    return 0;
}