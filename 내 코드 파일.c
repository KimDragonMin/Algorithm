#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#include <stdlib.h>

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void printA(int col, int row)
{
    gotoxy(col, row);        printf("   ##   ");
    gotoxy(col, row + 1);    printf("  ####  ");
    gotoxy(col, row + 2);    printf(" ##  ## ");
    gotoxy(col, row + 3);    printf("##    ##");
    gotoxy(col, row + 4);    printf("########");
    gotoxy(col, row + 5);    printf("##    ##");
    gotoxy(col, row + 6);    printf("##    ##");
}
void printB(int col, int row)
{
    gotoxy(col, row);        printf("####### ");
    gotoxy(col, row + 1);    printf("##    ##");
    gotoxy(col, row + 2);    printf("##    ##");
    gotoxy(col, row + 3);    printf("####### ");
    gotoxy(col, row + 4);    printf("##    ##");
    gotoxy(col, row + 5);    printf("##    ##");
    gotoxy(col, row + 6);    printf("####### ");
}
void printC(int col, int row)
{
    gotoxy(col, row);        printf(" #######");
    gotoxy(col, row + 1);    printf("##      ");
    gotoxy(col, row + 2);    printf("##      ");
    gotoxy(col, row + 3);    printf("##      ");
    gotoxy(col, row + 4);    printf("##      ");
    gotoxy(col, row + 5);    printf("##      ");
    gotoxy(col, row + 6);    printf(" #######");
}
void printD(int col, int row)
{
    gotoxy(col, row);        printf("######  ");
    gotoxy(col, row + 1);    printf("##   ## ");
    gotoxy(col, row + 2);    printf("##    ##");
    gotoxy(col, row + 3);    printf("##    ##");
    gotoxy(col, row + 4);    printf("##    ##");
    gotoxy(col, row + 5);    printf("##   ## ");
    gotoxy(col, row + 6);    printf("######  ");
}
void printE(int col, int row)
{
    gotoxy(col, row);        printf("########");
    gotoxy(col, row + 1);    printf("##      ");
    gotoxy(col, row + 2);    printf("##      ");
    gotoxy(col, row + 3);    printf("########");
    gotoxy(col, row + 4);    printf("##      ");
    gotoxy(col, row + 5);    printf("##      ");
    gotoxy(col, row + 6);    printf("########");
}
void printF(int col, int row)
{
    gotoxy(col, row);        printf("#######  ");
    gotoxy(col, row + 1);    printf("##       ");
    gotoxy(col, row + 2);    printf("##       ");
    gotoxy(col, row + 3);    printf("#######  ");
    gotoxy(col, row + 4);    printf("##       ");
    gotoxy(col, row + 5);    printf("##       ");
    gotoxy(col, row + 6);    printf("##       ");
}
void printG(int col, int row) {
    gotoxy(col, row);        printf(" ###### ");
    gotoxy(col, row + 1);    printf("##    ##");
    gotoxy(col, row + 2);    printf("##      ");
    gotoxy(col, row + 3);    printf("##  ####");
    gotoxy(col, row + 4);    printf("##    ##");
    gotoxy(col, row + 5);    printf("##    ##");
    gotoxy(col, row + 6);    printf(" ###### ");
}
void printH(int col, int row) {
    gotoxy(col, row);        printf("##    ##\n");
    gotoxy(col, row + 1);    printf("##    ##\n");
    gotoxy(col, row + 2);    printf("##    ##\n");
    gotoxy(col, row + 3);    printf("########\n");
    gotoxy(col, row + 4);    printf("##    ##\n");
    gotoxy(col, row + 5);    printf("##    ##\n");
    gotoxy(col, row + 6);    printf("##    ##");
}
void printI(int col, int row) {
    gotoxy(col, row);        printf(" ###### \n");
    gotoxy(col, row + 1);    printf("   ##   \n");
    gotoxy(col, row + 2);    printf("   ##   \n");
    gotoxy(col, row + 3);    printf("   ##   \n");
    gotoxy(col, row + 4);    printf("   ##   \n");
    gotoxy(col, row + 5);    printf("   ##   \n");
    gotoxy(col, row + 6);    printf(" ###### \n");
}
void printK(int col, int row) {
    gotoxy(col, row);        printf("##    ##\n");
    gotoxy(col, row + 1);    printf("##   ## \n");
    gotoxy(col, row + 2);    printf("##  ##  \n");
    gotoxy(col, row + 3);    printf("#####   \n");
    gotoxy(col, row + 4);    printf("##  ##  \n");
    gotoxy(col, row + 5);    printf("##   ## \n");
    gotoxy(col, row + 6);    printf("##    ##\n");
}
void printL(int col, int row) {
    gotoxy(col, row);        printf("##      ");
    gotoxy(col, row + 1);    printf("##      ");
    gotoxy(col, row + 2);    printf("##      ");
    gotoxy(col, row + 3);    printf("##      ");
    gotoxy(col, row + 4);    printf("##      ");
    gotoxy(col, row + 5);    printf("##      ");
    gotoxy(col, row + 6);    printf("########");
}
void printM(int col, int row) {
    gotoxy(col, row);        printf("##    ##");
    gotoxy(col, row + 1);    printf("###  ###");
    gotoxy(col, row + 2);    printf("## ## ##");
    gotoxy(col, row + 3);    printf("##    ##");
    gotoxy(col, row + 4);    printf("##    ##");
    gotoxy(col, row + 5);    printf("##    ##");
    gotoxy(col, row + 6);    printf("##    ##");
}
void printN(int col, int row) {
    gotoxy(col, row);        printf("##    ##");
    gotoxy(col, row + 1);    printf("###   ##");
    gotoxy(col, row + 2);    printf("## #  ##");
    gotoxy(col, row + 3);    printf("## ## ##");
    gotoxy(col, row + 4);    printf("##  # ##");
    gotoxy(col, row + 5);    printf("##   ###");
    gotoxy(col, row + 6);    printf("##    ##");
}
void printO(int col, int row) {
    gotoxy(col, row);        printf(" ###### ");
    gotoxy(col, row + 1);    printf("##    ##");
    gotoxy(col, row + 2);    printf("##    ##");
    gotoxy(col, row + 3);    printf("##    ##");
    gotoxy(col, row + 4);    printf("##    ##");
    gotoxy(col, row + 5);    printf("##    ##");
    gotoxy(col, row + 6);    printf(" ###### ");
}
void printP(int col, int row) {
    gotoxy(col, row);        printf("####### ");
    gotoxy(col, row + 1);    printf("##    ##");
    gotoxy(col, row + 2);    printf("##    ##");
    gotoxy(col, row + 3);    printf("####### ");
    gotoxy(col, row + 4);    printf("##      ");
    gotoxy(col, row + 5);    printf("##      ");
    gotoxy(col, row + 6);    printf("##      ");
}
void printQ(int col, int row) {
    gotoxy(col, row);        printf(" ###### ");
    gotoxy(col, row + 1);    printf("##    ##");
    gotoxy(col, row + 2);    printf("##    ##");
    gotoxy(col, row + 3);    printf("##    ##");
    gotoxy(col, row + 4);    printf("## ## ##");
    gotoxy(col, row + 5);    printf("##   ###");
    gotoxy(col, row + 6);    printf(" ##### ##");
}
void printR(int col, int row) {
    gotoxy(col, row);        printf("####### ");
    gotoxy(col, row + 1);    printf("##    ##");
    gotoxy(col, row + 2);    printf("##    ##");
    gotoxy(col, row + 3);    printf("####### ");
    gotoxy(col, row + 4);    printf("##  ##  ");
    gotoxy(col, row + 5);    printf("##   ## ");
    gotoxy(col, row + 6);    printf("##    ##");
}
void printS(int col, int row) {
    gotoxy(col, row);        printf(" #######");
    gotoxy(col, row + 1);    printf("##      ");
    gotoxy(col, row + 2);    printf("##      ");
    gotoxy(col, row + 3);    printf(" ###### ");
    gotoxy(col, row + 4);    printf("      ##");
    gotoxy(col, row + 5);    printf("      ##");
    gotoxy(col, row + 6);    printf("####### ");
}
void printT(int col, int row) {
    gotoxy(col, row);        printf("########\n");
    gotoxy(col, row + 1);    printf("   ##   \n");
    gotoxy(col, row + 2);    printf("   ##   \n");
    gotoxy(col, row + 3);    printf("   ##   \n");
    gotoxy(col, row + 4);    printf("   ##   \n");
    gotoxy(col, row + 5);    printf("   ##   \n");
    gotoxy(col, row + 6);    printf("   ##   \n");
}
void printU(int col, int row)
{
    gotoxy(col, row);        printf("##    ##\n");
    gotoxy(col, row + 1);    printf("##    ##\n");
    gotoxy(col, row + 2);    printf("##    ##\n");
    gotoxy(col, row + 3);    printf("##    ##\n");
    gotoxy(col, row + 4);    printf("##    ##\n");
    gotoxy(col, row + 5);    printf("##    ##\n");
    gotoxy(col, row + 6);    printf("  ####  \n");
}
void printX(int col, int row)
{
    gotoxy(col, row);        printf("##    ##\n");
    gotoxy(col, row + 1);    printf(" ##  ## \n");
    gotoxy(col, row + 2);    printf("  ####  \n");
    gotoxy(col, row + 3);    printf("   ##   \n");
    gotoxy(col, row + 4);    printf("  ####  \n");
    gotoxy(col, row + 5);    printf(" ##  ## \n");
    gotoxy(col, row + 6);    printf("##    ##\n");
}

#define up 72
#define down 80
#define left 75
#define right 77
#define choice 13
#define exit 27 

int keyInput()
{
    char keyInput = _getch(); //한글자를 입력하고 Enter를 입력하여 입력을 마치게 해주는 함수

    if (keyInput == 72) //↑
    {
        return up;
    }
    else if (keyInput == 80) //↓
    {
        return down;
    }
    else if (keyInput == 75) //←
    {
        return left;
    }
    else if (keyInput == 77) //→
    {
        return right;
    }
    else if (keyInput == 13) //엔터
    {
        return choice;
    }
    else if (keyInput == 27)
    {
        return exit;
    }
}
void backGround(int x, int y)
{
    for (int i = 0; i < y; i++)
    {
        gotoxy(0, i);
        if (i == 0)
        {
            printf("┌");
            for (int j = 0; j < x - 3; j++)
            {
                printf("─");
            }
            printf("┐");
        }
        else if (i == y - 1)
        {
            printf("└");
            for (int j = 0; j < x - 3; j++)
            {
                printf("─");
            }
            printf("┘");
            break;
        }
        else if (i != 0 && i != y - 1)
        {
            printf("│");
            gotoxy(x - 2, i);
            printf("│");
        }
    }
}
void how_to_use()
{
    system("mode con cols=100 lines=15 | title 알고리즘");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //현재 위에서 변경한 내용을 적용시켜주는 함수
    while (1)
    {
        backGround(100, 15);
        gotoxy(45, 2);
        printf("사용 법");
        gotoxy(30, 5);
        printf("방향키 ↑, ←, ↓, → 로 조작 가능합니다."); //30
        gotoxy(25, 7);
        printf("Enter키를 이용하여 데이터 입력이나 진행이 가능합니다."); //32
        gotoxy(27, 9);
        printf("ESC키를 이용하여 전 페이지로 이동이 가능합니다.");
        gotoxy(40, 12);
        printf("다음페이지(Enter)");

        char c = _getch();
        if (c == 13)
        {
            break;
        }
    }
}
void title() //알고리즘 제목 출력
{
    //9(단어의 수) * 8 + 2(여백) * 8(여백의 수) = 72 + 16 = 88
    //100 - 88 = 12 
    //12 / 2 = 6
    int x = 6;
    int y = 2;

    for (int i = 0; i < 9; i++)
    {
        int col = x + (8 * i) + (2 * i);
        int row = y;
        switch (i)
        {
        case 0:
            printA(col, row);
            break;
        case 1:
            printL(col, row);
            break;
        case 2:
            printG(col, row);
            break;
        case 3:
            printO(col, row);
            break;
        case 4:
            printR(col, row);
            break;
        case 5:
            printI(col, row);
            break;
        case 6:
            printT(col, row);
            break;
        case 7:
            printH(col, row);
            break;
        case 8:
            printM(col, row);
            break;
        }
    }
}
int selectionScreen()
{
    int x = 44; //title제목값의 x 변동만큼 변함
    int y = 14;
    gotoxy(x - 2, y);
    printf("→1. 정렬\n");
    gotoxy(x, y + 1);
    printf("2. 그래프\n");
    gotoxy(x, y + 2);
    printf("3. 종료\n");

    while (1)
    {
        int key = keyInput();
        switch (key)
        {
        case up:
        {
            if (y > 14) //(y)
            {
                gotoxy(x - 2, y);
                printf("  ");
                gotoxy(x - 2, --y);
                printf("→");
            }
            break;
        }
        case down:
        {
            if (y < 16) //(y+2)
            {
                gotoxy(x - 2, y);
                printf("  ");
                gotoxy(x - 2, ++y);
                printf("→");
            }
            break;
        }
        case choice:
        {
            return y - 14; //(y)
            break;
        }
        }

    }
}
int SortScreen()
{
    system("mode con cols=50 lines=20 | title 알고리즘");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int x = 18; //title제목값의 x 변동만큼 변함
    int y = 4; //selectionScreen의 y 값과 동일
    gotoxy(x - 2, y);
    printf("  ");
    backGround(50, 20);
    gotoxy(x - 12, y);
    printf("→1. 버블 정렬\n");
    gotoxy(x + 12, y);
    printf("2. 선택 정렬\n");
    gotoxy(x - 10, y + 3);
    printf("3. 삽입 정렬\n");
    gotoxy(x + 12, y + 3);
    printf("4. 쉘 정렬\n");
    gotoxy(x - 10, y + 6);
    printf("5. 힙 정렬\n");
    gotoxy(x + 12, y + 6);
    printf("6. 기수 정렬\n");
    gotoxy(x - 10, y + 9);
    printf("7. 합병 정렬\n");
    gotoxy(x + 12, y + 9);
    printf("8. 퀵 정렬\n");
    gotoxy(x - 13, y + 13);
    printf("ESC를 누르면 원래 전 페이지로 돌아갑니다.");
    while (1)
    {
        int key = keyInput();
        static int LRCounter = 0;
        int col = 18;
        switch (key)
        {
        case up:
        {
            if (y > 4)
            {
                if (LRCounter == 1)
                {
                    col = col + 10;
                    gotoxy(col, y);
                    printf("  ");
                    y = y - 3;
                    gotoxy(col, y);
                    printf("→");
                }
                else if (LRCounter == 0)
                {
                    col = col - 12;
                    gotoxy(col, y);
                    printf("  ");
                    y = y - 3;
                    gotoxy(col, y);
                    printf("→");
                }
            }
            break;
        }
        case down:
        {
            if (y < 11)
            {
                if (LRCounter == 1)
                {
                    col = col + 10;
                    gotoxy(col, y);
                    printf("  ");
                    y = y + 3;
                    gotoxy(col, y);
                    printf("→");
                }
                else if (LRCounter == 0)
                {
                    col = col - 12;
                    gotoxy(col, y);
                    printf("  ");
                    y = y + 3;
                    gotoxy(col, y);
                    printf("→");
                }
            }
            break;
        }
        case left:
        {
            col = col + 10;
            LRCounter = 0;
            gotoxy(col, y);
            printf("  ");
            col = col - 22;
            gotoxy(col, y);
            printf("→");
            break;
        }
        case right:
        {
            col = col - 12;
            LRCounter = 1;
            gotoxy(col, y);
            printf("  ");
            col = col + 22;
            gotoxy(col, y);
            printf("→");
            break;
        }
        case exit:
        {
            return -1;
            break;
        }
        case choice:
        {
            if (LRCounter == 1)
            {
                col = col - 17;
            }
            else if (LRCounter == 0)
            {
                col = col - 18;
            }
            y = y - 4;
            LRCounter = 0;
            return col + y;
        }
        }
    }
}

void titleBubble() //버블정렬 제목그리기
{
    system("mode con cols=130 lines=25 | title 버블정렬");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int col = 130;
    int row = 25;
    backGround(col, row);
    //10(단어의 수) * 8 + 2(여백) * 8(여백의 수) + 4(중간 Sort부분)  = 80 + 16 + 4 = 100
    int resultX = (col - 100) / 2;
    int x = resultX;
    int y = 2;

    for (int i = 0; i < 10; i++)
    {
        int col = x + (8 * i) + (2 * i);
        int row = y;
        if (i > 5)
        {
            col++;
            col++;
        }
        gotoxy(col, row);
        switch (i)
        {
        case 0:
            printB(col, row);
            break;
        case 1:
            printU(col, row);
            break;
        case 2:
            printB(col, row);
            break;
        case 3:
            printB(col, row);
            break;
        case 4:
            printL(col, row);
            break;
        case 5:
            printE(col, row);
            break;
        case 6:
            printS(col, row);
            break;
        case 7:
            printO(col, row);
            break;
        case 8:
            printR(col, row);
            break;
        case 9:
            printT(col, row);
            break;
        }
    }
}
void bubbleConcept()
{
    int x = 10;
    int y = 12;

    for (int i = 0; i < 3; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y);        printf("버블 정렬 : 인접한 원소 두 개를 비교하여"); break;
        case 1:
            gotoxy(x, y + i);    printf("            자리를 교환하는데, 이러한 방식을"); break;
        case 2:
            gotoxy(x, y + i);    printf("            반복하여 정렬하는 방법"); break;
        }
    }

    gotoxy(x, y + 9);
    printf("다음 페이지(Enter)");
    gotoxy(x, y + 10);
    printf("전 페이지(ESC)");
}
void bubbleTime()
{
    int x = 70;
    int y = 12;

    for (int i = 0; i < 3; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y + i);    printf("시간 복잡도(빅-오표기법)"); break;
        case 1:
            gotoxy(x, y + i);    printf("최고 : n   => 배열이 이미 정렬되어 있는 경우"); break;
        case 2:
            gotoxy(x, y + i);    printf("최악 : n^2 => 배열이 역순으로 정렬되어 있는 경우"); break;
        }
    }
}
void setTextColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}
void printfA(int arr[], int n, int redIndex)
{
    for (int i = 0; i < n; i++) {
        if (i == redIndex) {
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else if (i == redIndex + 1)
        {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else {
            setTextColor(FOREGROUND_INTENSITY); // 회색으로 표시
        }
        printf("%2d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// 하얀색으로 복원
}
void printfB(int arr[], int n, int redIndex)
{
    for (int i = 0; i < n; i++) {
        if (i == redIndex) {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else if (i == redIndex - 1)
        {
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else {
            setTextColor(FOREGROUND_INTENSITY); // 회색으로 표시
        }
        printf("%2d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// 하얀색으로 복원
}
void bubbleCode()
{
    system("mode con cols=47 lines=22 | title 버블정렬 코드");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    backGround(47, 22);
    int x = 2;
    int y = 0;
    int i = 0;

    i++;    gotoxy(x, y + i);    printf("버블 정렬 코드");
    i++;    gotoxy(x, y + i);    printf("void bubbleSort(int arr[], int n)");
    i++;    gotoxy(x, y + i);    printf("{");
    i++;    gotoxy(x, y + i);   printf("    for (int i = 0; i < n - 1; i++)");
    i++;    gotoxy(x, y + i);   printf("    {");
    i++;    gotoxy(x, y + i);   printf("        for (int j = 0; j < n - i - 1; j++)");
    i++;    gotoxy(x, y + i);   printf("        {");
    i++;    gotoxy(x, y + i);   printf("            if (arr[j] > arr[j + 1])");
    i++;    gotoxy(x, y + i);   printf("            {");
    i++;    gotoxy(x, y + i);   printf("                int temp = arr[j];");
    i++;    gotoxy(x, y + i);   printf("                arr[j] = arr[j + 1];");
    i++;    gotoxy(x, y + i);   printf("                arr[j + 1] = temp;");
    i++;    gotoxy(x, y + i);   printf("            }");
    i++;    gotoxy(x, y + i);   printf("        }");
    i++;    gotoxy(x, y + i);   printf("    }");
    i++;    gotoxy(x, y + i);   printf("}");

    gotoxy(x, y + i + 3);
    printf("선택창으로 돌아가기(Enter키 입력)");

}
void bubbleSortRun()
{
    system("mode con cols=130 lines=45 | title 버블정렬_과정 창");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //현재 위에서 변경한 내용을 적용시켜주는 함수
    int col = 130;
    int row = 45;
    backGround(col, row);
    int n = 0;
    int x = 10;
    int y = 2;
    int i = 0;
    int j = 0;
    gotoxy(x, y);
    printf("배열의 크기를 입력하세요 : ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    gotoxy(x, y + 2);
    printf("숫자를 입력하고 띄어쓰기로 구분해주세요.");
    gotoxy(x, y + 3);
    printf("숫자 입력 예시 : 1 2 3 4 5 ");
    gotoxy(x, y + 5);
    printf("배열 요소를 입력하세요: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    gotoxy(x, y + 7);
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    printf("정렬 전 배열 : ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }
    y += 9;
    for (i = 0; i < n - 1; i++) {
        y++;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
            {
                gotoxy(x, y);
                printf("%dPASS : ", i + 1);
                printfA(arr, n, j);  //5개 출력 코드
                printf(" = > ");
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                printfB(arr, n, j + 1);
                // 정렬 과정을 출력 (정렬되는 숫자를 빨간색으로)
                _getch();
            }
        }
    }
    y += 3;
    gotoxy(x, y);
    printf("정렬 후 배열 : ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", arr[i]);
    }

    gotoxy(x, 40);
    printf("코드 보기(Enter키 입력)");
    gotoxy(x, 42);
    printf("선택창으로 돌아가기(ESC키 입력)");
    free(arr);
    int key = _getch();
    if (key == choice)
    {
        system("cls");
        bubbleCode();
        _getch();
    }
}

void printsel(int arr[], int n, int a, int b)
{
    for (int i = 0; i < n; i++) {
        if (i == a) {
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else if (i == b)
        {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else {
            setTextColor(FOREGROUND_INTENSITY); // 회색으로 표시
        }
        printf("%2d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// 하얀색으로 복원
}
void printSel(int arr[], int n, int a, int b)
{
    for (int i = 0; i < n; i++) {
        if (i == a) {
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else if (i == b)
        {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else {
            setTextColor(FOREGROUND_INTENSITY); // 회색으로 표시
        }
        printf("%2d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// 하얀색으로 복원
}
void titleSelect()
{
    system("mode con cols=150 lines=25 | title 선택정렬");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 150;
    int rows = 25;
    backGround(cols, rows);
    //13(단어의 수) * 8 + 2(여백) * 11(여백의 수) + 4(중간 Sort부분)  =  104 + 22 + 4 = 130
    int resultX = (cols - 130) / 2;
    int x = resultX;
    int y = 1;

    for (int i = 0; i < 13; i++)
    {
        int col = x + (8 * i) + (2 * i);
        int row = y;
        if (i > 8)
        {
            col++;
            col++;
        }
        gotoxy(col, row);
        switch (i)
        {
        case 0:
            printS(col, row);
            break;
        case 1:
            printE(col, row);
            break;
        case 2:
            printL(col, row);
            break;
        case 3:
            printE(col, row);
            break;
        case 4:
            printC(col, row);
            break;
        case 5:
            printT(col, row);
            break;
        case 6:
            printI(col, row);
            break;
        case 7:
            printO(col, row);
            break;
        case 8:
            printN(col, row);
            break;
        case 9:
            printS(col, row);
            break;
        case 10:
            printO(col, row);
            break;
        case 11:
            printR(col, row);
            break;
        case 12:
            printT(col, row);
            break;
        }
    }
}
void selectConcept()
{
    int x = 10;
    int y = 12;

    for (int i = 0; i < 5; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y);        printf("선택 정렬 : 배열에서 가장 작은 원소를 "); break;
        case 1:
            gotoxy(x, y + i);    printf("            찾아 첫 번째 원소와 교환하고, "); break;
        case 2:
            gotoxy(x, y + i);    printf("            다음으로 두 번째로 작은 원소를 찾아"); break;
        case 3:
            gotoxy(x, y + i);    printf("            두 번째 원소와 교환하여,"); break;
        case 4:
            gotoxy(x, y + i);    printf("            이를 반복하여 정렬하는 방법"); break;
        }
    }

    gotoxy(x, y + 9);
    printf("다음 페이지(Enter)");
    gotoxy(x, y + 10);
    printf("전 페이지(ESC)");
}
void selectTime()
{
    int x = 70;
    int y = 12;

    for (int i = 0; i < 3; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y + i);    printf("시간 복잡도(빅-오표기법)"); break;
        case 1:
            gotoxy(x, y + i);    printf("최고 : n^2 => 항상 고정된 수의 비교 및 교환을 수행합니다."); break;
        case 2:
            gotoxy(x, y + i);    printf("최악 : n^2 => 그래서 너무나 큰 배열일 경우 효율이 떨어집니다."); break;
        }
    }
}
void selectCode() {
    system("mode con cols=47 lines=22 | title 선택정렬 코드");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    backGround(47, 22);
    int x = 2;
    int y = 0;
    int i = 0;

    i++;    gotoxy(x, y + i);    printf("선택 정렬 코드");
    i++;    gotoxy(x, y + i);    printf("void selectionSort(int arr[], int n)");
    i++;    gotoxy(x, y + i);    printf("{");
    i++;    gotoxy(x, y + i);   printf("    for (i = 0; i < n - 1; i++) {");
    i++;    gotoxy(x, y + i);   printf("    min_idx = i;");
    i++;    gotoxy(x, y + i);   printf("        for (j = i + 1; j < n; j++) {");
    i++;    gotoxy(x, y + i);   printf("            if (arr[j] < arr[min_idx]) {");
    i++;    gotoxy(x, y + i);   printf("             min_idx = j;");
    i++;    gotoxy(x, y + i);   printf("            }");
    i++;    gotoxy(x, y + i);   printf("        }");
    i++;    gotoxy(x, y + i);   printf("    int temp = 0;");
    i++;    gotoxy(x, y + i);   printf("    temp = arr[i];");
    i++;    gotoxy(x, y + i);   printf("    arr[i] = arr[min_idx];");
    i++;    gotoxy(x, y + i);   printf("    arr[min_idx] = temp;");
    i++;    gotoxy(x, y + i);   printf("    }");
    i++;    gotoxy(x, y + i);   printf("}");

    gotoxy(x, y + i + 3);
    printf("선택창으로 돌아가기(Enter키 입력)");
}
void selectSortRun()
{
    system("mode con cols=130 lines=45 | title 선택정렬_과정 창");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //현재 위에서 변경한 내용을 적용시켜주는 함수
    int col = 130;
    int row = 45;
    backGround(col, row);
    int n = 0;
    int x = 10;
    int y = 2;
    int i = 0;
    int j = 0;
    gotoxy(x, y);
    printf("배열의 크기를 입력하세요 : ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    gotoxy(x, y + 2);
    printf("숫자를 입력하고 띄어쓰기로 구분해주세요.");
    gotoxy(x, y + 3);
    printf("숫자 입력 예시 : 1 2 3 4 5 ");
    gotoxy(x, y + 5);
    printf("배열 요소를 입력하세요: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    gotoxy(x, y + 7);
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    printf("정렬 전 배열 : ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }
    y += 9;
    int min_idx = 0;
    for (i = 0; i < n - 1; i++)
    {
        y += 1;
        gotoxy(x, y);
        printf("%dPass : ", i + 1);
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            gotoxy(x + 7, y);
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
                printsel(arr, n, i, min_idx);
                printf(" = > ");
            }
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
            printSel(arr, n, i, min_idx);
            _getch();
        }
    }
    y += 3;
    gotoxy(x, y);
    printf("정렬 후 배열 : ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", arr[i]);
    }

    gotoxy(x, 40);
    printf("코드 보기(Enter키 입력)");
    gotoxy(x, 42);
    printf("선택창으로 돌아가기(ESC키 입력)");
    free(arr);
    int key = _getch();
    if (key == choice)
    {
        system("cls");
        selectCode();
        _getch();
    }
}

void titleInsert()
{
    system("mode con cols=128 lines=25 | title 삽입정렬");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //현재 위에서 변경한 내용을 적용시켜주는 함수
    int col = 128;
    int row = 25;
    backGround(col, row);
    //10(단어의 수) * 8 + 2(여백) * 11(여백의 수) + 4(중간 Sort부분)  =  80 + 22 + 4 = 106
    int resultX = (col - 106) / 2;
    int x = resultX;
    int y = 1;

    for (int i = 0; i < 13; i++)
    {
        int col = x + (8 * i) + (2 * i);
        int row = y;
        if (i > 5)
        {
            col++;
            col++;
        }
        gotoxy(col, row);
        switch (i)
        {
        case 0:
            printI(col, row);
            break;
        case 1:
            printN(col, row);
            break;
        case 2:
            printS(col, row);
            break;
        case 3:
            printE(col, row);
            break;
        case 4:
            printR(col, row);
            break;
        case 5:
            printT(col, row);
            break;
        case 6:
            printS(col, row);
            break;
        case 7:
            printO(col, row);
            break;
        case 8:
            printR(col, row);
            break;
        case 9:
            printT(col, row);
            break;
        }
    }
}
void insertConcept()
{
    int x = 10;
    int y = 12;

    for (int i = 0; i < 4; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y);        printf("삽입 정렬 : 두 번째 자료부터 "); break;
        case 1:
            gotoxy(x, y + i);    printf("            시작하여 그 앞(왼쪽)의 자료들과 "); break;
        case 2:
            gotoxy(x, y + i);    printf("            비교하여 삽입할 위치를 지정한 후 "); break;
        case 3:
            gotoxy(x, y + i);    printf("            자료를 한칸 뒤(오른쪽)로 옮기고 지정한 자리에"); break;
        case 4:
            gotoxy(x, y + i);    printf("            자료를 삽입하여 정렬하는 방법."); break;
        }
    }
    gotoxy(x, y + 9);
    printf("다음 페이지(Enter)");
    gotoxy(x, y + 10);
    printf("전 페이지(ESC)");
}
void insertTime() {
    int x = 75;
    int y = 12;

    for (int i = 0; i < 3; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y + i);    printf("시간 복잡도(빅-오표기법)"); break;
        case 1:
            gotoxy(x, y + i);    printf("최선 : n   => 이미 정렬된 배열"); break;
        case 2:
            gotoxy(x, y + i);    printf("최악 : n^2 => 배열이 역순으로 정렬되어 있을 때"); break;
        }
    }
}
void printinsertA(int arr[], int n, int a, int b) {
    for (int i = 0; i < n; i++) {
        if (i == a) {
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else if (i == b)
        {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else
        {
            setTextColor(FOREGROUND_INTENSITY); // 회색으로 표시
        }
        printf("%d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// 하얀색으로 복원
}
void printinsertB(int arr[], int n, int a, int b)
{
    for (int i = 0; i < n; i++) {
        if (i == a) {
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else if (i == b)
        {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else {
            setTextColor(FOREGROUND_INTENSITY); // 회색으로 표시
        }
        printf("%d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// 하얀색으로 복원
}
void insertCode()
{
    system("mode con cols=47 lines=22 | title 선택정렬 코드");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    backGround(47, 22);
    int x = 2;
    int y = 2;
    int i = 0;

    for (int i = 0; i < 14; i++)
    {
        switch (i)
        {
        case 0:
            gotoxy(x, y + i);    printf("삽입 정렬 코드"); break;
        case 1:
            gotoxy(x, y + i);    printf("void insertionSort(int arr[], int n)"); break;
        case 2:
            gotoxy(x, y + i);    printf("{"); break;
        case 3:
            gotoxy(x, y + i);   printf("    int i, key, j;"); break;
        case 4:
            gotoxy(x, y + i);   printf("    for (i = 1; i < n; i++) {"); break;
        case 5:
            gotoxy(x, y + i);   printf("          key = arr[i];"); break;
        case 6:
            gotoxy(x, y + i);   printf("          j = i - 1;"); break;
        case 7:
            gotoxy(x, y + i);   printf("          while (j >= 0 && arr[j] > key) {"); break;
        case 8:
            gotoxy(x, y + i);   printf("                 arr[j + 1] = arr[j];"); break;
        case 9:
            gotoxy(x, y + i);   printf("                 j = j - 1;"); break;
        case 10:
            gotoxy(x, y + i);   printf("          }"); break;
        case 11:
            gotoxy(x, y + i);   printf("          arr[j + 1] = key;"); break;
        case 12:
            gotoxy(x, y + i);   printf("     }"); break;
        case 13:
            gotoxy(x, y + i);   printf("}"); break;
        }
    }

    gotoxy(x, 19);
    printf("선택창으로 돌아가기(Enter키 입력)");
}
void insertSortRun()
{
    system("mode con cols=130 lines=45 | title 삽입정렬_과정 창");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //현재 위에서 변경한 내용을 적용시켜주는 함수
    int col = 130;
    int row = 45;
    backGround(col, row);
    int n = 0;
    int x = 10;
    int y = 2;
    int i = 0;
    int j = 0;
    gotoxy(x, y);
    printf("배열의 크기를 입력하시오 : ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    gotoxy(x, y + 2);
    printf("숫자를 입력하고 띄어쓰기로 구분해주세요.");
    gotoxy(x, y + 3);
    printf("예시 : 1 2 3 4 5 ");
    gotoxy(x, y + 4);
    printf("입력을 맞쳤으면 Enter키를 눌러주세요.");
    gotoxy(x, y + 6);
    printf("배열 요소를 입력하세요: ");
    for (i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    gotoxy(x, y + 8);
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    printf("정렬 전 배열 : ");
    for (i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }
    y += 9;
    int key = 0;
    // 배열을 처음부터 끝까지 순회
    for (i = 1; i < n; i++) {
        y++;
        key = arr[i];
        j = i - 1;
        /* 현재 원소보다 작은 원소를 찾아서 오른쪽으로 이동 */
        gotoxy(x, y);
        printf("%dPass : ", i);
        while (j >= 0 && arr[j] > key)
        {
            gotoxy(x + 7, y);
            printinsertA(arr, n, i, j);
            printf(" = > ");
            arr[j + 1] = arr[j];
            j = j - 1;
            _getch();
        }
        arr[j + 1] = key;
        printinsertB(arr, n, i, j + 1);
        _getch();
    }

    gotoxy(x, y + 2);
    printf("정렬 후 배열 : ");
    for (i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }
    gotoxy(x, 40);
    printf("코드 보기(Enter키 입력)");
    gotoxy(x, 42);
    printf("선택창으로 돌아가기(ESC키 입력)");
    free(arr);
    key = _getch();
    if (key == choice)
    {
        system("cls");
        insertCode();
        _getch();
    }
}

void titleShell() {
    system("mode con cols=120 lines=25 | title 쉘 정렬");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //현재 위에서 변경한 내용을 적용시켜주는 함수
    int col = 120;
    int row = 25;
    backGround(col, row);
    //9(단어의 수) * 8 + 2(여백) * 11(여백의 수) + 4(중간 Sort부분)  =  72 + 22 + 4 = 98
    int x = (col - 98) / 2 + 4;
    int y = 1;

    for (int i = 0; i < 13; i++)
    {
        int col = x + (8 * i) + (2 * i);
        int row = y;
        if (i > 4)
        {
            col++;
            col++;
        }
        gotoxy(col, row);
        switch (i)
        {
        case 0:
            printS(col, row);
            break;
        case 1:
            printH(col, row);
            break;
        case 2:
            printE(col, row);
            break;
        case 3:
            printL(col, row);
            break;
        case 4:
            printL(col, row);
            break;
        case 5:
            printS(col, row);
            break;
        case 6:
            printO(col, row);
            break;
        case 7:
            printR(col, row);
            break;
        case 8:
            printT(col, row);
            break;
        }
    }
}
void shellConcept()
{
    int x = 10;
    int y = 12;

    for (int i = 0; i < 3; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y);        printf("쉘 정렬 : 개선된 삽입 정렬 알고리즘으로,"); break;
        case 1:
            gotoxy(x, y + i);    printf("          동적 간격을 사용하여 배열의 요소를 "); break;
        case 2:
            gotoxy(x, y + i);    printf("          비교하고 교환하는 정렬 방법 "); break;
        }
    }

    gotoxy(x, y + 9);
    printf("다음 페이지(Enter)");
    gotoxy(x, y + 10);
    printf("전 페이지(ESC)");
}
void shellTime()
{
    int x = 60;
    int y = 12;

    for (int i = 0; i < 4; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y + i);    printf("시간 복잡도(빅-오표기법)"); break;
        case 1:
            gotoxy(x, y + i);    printf("최고 : n   => 이미 정렬된 상태거나 거의 정렬된 상태"); break;
        case 2:
            gotoxy(x, y + i);    printf("최악 : n^2 => 동적간격이 매우 작아져서,"); break;
        case 3:
            gotoxy(x, y + i);    printf("              부분 리스트가 거의 정렬되지 않은 상태"); break;
        }
    }
}
void printshellA(int arr[], int n, int a, int gap) {
    for (int i = 0; i < n; i++) {
        if (i == a) {
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else if (i == a - gap)
        {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else
        {
            setTextColor(FOREGROUND_INTENSITY); // 회색으로 표시
        }
        printf("%2d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// 하얀색으로 복원
}
void printshellB(int arr[], int n, int a, int b)
{
    for (int i = 0; i < n; i++) {
        if (i == a) {
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else if (i == b)
        {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else {
            setTextColor(FOREGROUND_INTENSITY); // 회색으로 표시
        }
        printf("%2d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// 하얀색으로 복원
}
void shellCode()
{
    system("mode con cols=78 lines=20 | title 쉘정렬 코드");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    backGround(78, 20);
    int x = 2;
    int y = 1;
    int i = 0;
    for (int i = 0; i < 13; i++)
    {
        switch (i)
        {
        case 0:
            gotoxy(x, y + i);   printf("쉘 정렬 코드"); break;
        case 1:
            gotoxy(x, y + i);   printf("void shellSort(int arr[], int n) {"); break;
        case 2:
            gotoxy(x, y + i);   printf("   for (int gap = n / 2; gap > 0; gap /= 2) {"); break;
        case 3:
            gotoxy(x, y + i);   printf("          for (int i = gap; i < n; i++) {"); break;
        case 4:
            gotoxy(x, y + i);   printf("                 int temp = arr[i];"); break;
        case 5:
            gotoxy(x, y + i);   printf("                 int j;"); break;
        case 6:
            gotoxy(x, y + i);   printf("                 for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {"); break;
        case 7:
            gotoxy(x, y + i);   printf("                      arr[j] = arr[j - gap];"); break;
        case 8:
            gotoxy(x, y + i);   printf("                 }"); break;
        case 9:
            gotoxy(x, y + i);   printf("                 arr[j] = temp;"); break;
        case 10:
            gotoxy(x, y + i);   printf("          }"); break;
        case 11:
            gotoxy(x, y + i);   printf("     }"); break;
        case 12:
            gotoxy(x, y + i);   printf("}"); break;
        }
    }

    gotoxy(x, 18);
    printf("선택창으로 돌아가기(Enter키 입력)");
}
void shellSortRun()
{
    system("mode con cols=130 lines=45 | title 쉘정렬_과정 창");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //현재 위에서 변경한 내용을 적용시켜주는 함수
    int col = 130;
    int row = 45;
    backGround(col, row);
    int n = 0;
    int x = 10;
    int y = 2;
    int i = 0;
    gotoxy(x, y);
    printf("배열의 크기를 입력하시오 : ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    gotoxy(x, y + 2);
    printf("숫자를 입력하고 띄어쓰기로 구분해주세요.");
    gotoxy(x, y + 3);
    printf("예시 : 1 2 3 4 5 ");
    gotoxy(x, y + 4);
    printf("입력을 맞쳤으면 Enter키를 눌러주세요.");
    gotoxy(x, y + 6);
    printf("배열 요소를 입력하세요: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    gotoxy(x, y + 8);
    int max = arr[0];
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    printf("정렬 전 배열 : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    y += 8;
    int count = 0;
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // 간격에 따라 삽입 정렬 수행
        for (i = gap; i < n; i++) {
            x = 10;
            int temp = arr[i];
            int j;
            y++;
            count++;
            gotoxy(x, y);
            printf("%dPass : ", count);
            printshellA(arr, n, i, gap);
            printf(" = > ");
            // 부분집합에 대해 삽입 정렬 수행
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
            {
                arr[j] = arr[j - gap];
                _getch();
            }
            x = 10;
            int blank = 3;

            if (max / 10 >= 1)
            {
                blank = 4;
            }
            else if (max / 100 >= 1)
            {
                blank = 6;
            }

            if (count / 10 >= 1)
            {
                x = x + blank * n + 14;
            }
            else if (count / 10 == 0)
            {
                x = x + blank * n + 13;
            }

            gotoxy(x, y);
            // 현재 원소를 올바른 위치에 삽입
            arr[j] = temp;
            printshellB(arr, n, i, j);
            _getch();
        }
    }
    x = 10;
    gotoxy(x, y + 2);
    printf("정렬 후 배열 : ");
    for (i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }
    gotoxy(x, 40);
    printf("코드 보기(Enter키 입력)");
    gotoxy(x, 42);
    printf("선택창으로 돌아가기(ESC키 입력)");
    free(arr);
    int  key = _getch();
    if (key == choice)
    {
        system("cls");
        shellCode();
        _getch();
    }
}

void titleHeap() {
    system("mode con cols=140 lines=25 | title 힙 정렬");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //현재 위에서 변경한 내용을 적용시켜주는 함수
    int cols = 140;
    int rows = 25;
    backGround(cols, rows);
    //8(단어의 수) * 8 + 2(여백) * 11(여백의 수) + 4(중간 Sort부분)  =  64 + 26 = 90
    int resultX = (cols - 90) / 2;
    int x = resultX;
    int y = 1;

    for (int i = 0; i < 13; i++)
    {
        int col = x + (8 * i) + (2 * i);
        int row = y;
        if (i > 3)
        {
            col++;
            col++;
        }
        gotoxy(col, row);
        switch (i)
        {
        case 0:
            printH(col, row);
            break;
        case 1:
            printE(col, row);
            break;
        case 2:
            printA(col, row);
            break;
        case 3:
            printP(col, row);
            break;
        case 4:
            printS(col, row);
            break;
        case 5:
            printO(col, row);
            break;
        case 6:
            printR(col, row);
            break;
        case 7:
            printT(col, row);
            break;
        }
    }
}
void heapConcept()
{
    int x = 10;
    int y = 12;

    for (int i = 0; i < 4; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y);        printf("힙 정렬 : 이진 힙 자료구조를 사용하여 정렬로,"); break;
        case 1:
            gotoxy(x, y + i);    printf("          최댓값이나 최솟값을 찾아내기 위해 사용하는데 "); break;
        case 2:
            gotoxy(x, y + i);    printf("          힙에는 최대 힙과 최소 힙의 정렬하는 방법"); break;
        }
    }

    gotoxy(x, y + 9);
    printf("다음 페이지(Enter)");
    gotoxy(x, y + 10);
    printf("전 페이지(ESC)");
}
void heapTime()
{
    int x = 75;
    int y = 12;

    for (int i = 0; i < 5; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y + i);    printf("시간 복잡도(빅-오표기법)"); break;
        case 1:
            gotoxy(x, y + i);    printf("최고 : nlogn"); break;
        case 2:
            gotoxy(x, y + i);    printf("입력 데이터에 관계없이 항상 동일한 시간 복잡도를 갖는 특징"); break;
        case 3:
            gotoxy(x, y + i);    printf("최악 : nlogn"); break;
        case 4:
            gotoxy(x, y + i);    printf("입력 데이터에 관계없이 항상 동일한 시간 복잡도를 갖는 특징"); break;
        }
    }
}
int divideByTwo(int number, int height) {
    if (number <= 1) {
        return height;
    }

    int result = number / 2;

    // 재귀 호출 시 height 값을 전달
    return divideByTwo(result, height + 1);
}
void printHeap1(int* arr, int n, int x, int y)
{
    for (int i = 0; i < n; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y);       printf("%d ", arr[0]);
            break;
        case 1:
            gotoxy(x - 3, y + 1);   printf("↙");
            gotoxy(x - 4, y + 2);   printf("%d ", arr[1]);
            break;
        case 2:
            gotoxy(x + 2, y + 1);   printf("↘");
            gotoxy(x + 4, y + 2);   printf("%d ", arr[2]);
            break;
        }
    }
}
void printHeap2(int* arr, int n, int x, int y) {
    for (int i = 0; i < n; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y);       printf("%d ", arr[0]);
            break;
        case 1:
            gotoxy(x - 3, y + 1);   printf("↙");
            gotoxy(x - 4, y + 2);   printf("%d ", arr[1]);
            break;
        case 2:
            gotoxy(x + 2, y + 1);   printf("↘");
            gotoxy(x + 4, y + 2);   printf("%d ", arr[2]);
            break;
        case 3:
            gotoxy(x - 6, y + 3);   printf("↙");
            gotoxy(x - 7, y + 4);   printf("%d", arr[3]);
            break;
        case 4:
            gotoxy(x - 3, y + 3);   printf("↘");
            gotoxy(x - 1, y + 4);   printf("%d ", arr[4]);
            break;
        case 5:
            gotoxy(x + 2, y + 3);   printf("↙");
            gotoxy(x + 1, y + 4);   printf("%d", arr[5]);
            break;
        case 6:
            gotoxy(x + 5, y + 3);   printf("↘");
            gotoxy(x + 7, y + 4);   printf("%d ", arr[6]);
            break;
        }
    }
}
int heapify(int arr[], int n, int i) {
    int largest = i;
    int leftnode = 2 * i + 1;
    int rightnode = 2 * i + 2;

    if (leftnode < n && arr[leftnode] > arr[largest])
        largest = leftnode;

    if (rightnode < n && arr[rightnode] > arr[largest])
        largest = rightnode;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }

    return largest;
}
void heapCode() {
    system("mode con cols=50 lines=33 | title 힙정렬 코드");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    backGround(50, 33);
    int x = 2;
    int y = 1;

    for (int i = 0; i < 26; i++)
    {
        switch (i)
        {
        case 0:
            gotoxy(x, y + i);   printf("힙 정렬 코드"); break;
        case 1:
            gotoxy(x, y + i);   printf("void heapify(int arr[], int n, int i) {"); break;
        case 2:
            gotoxy(x, y + i);   printf("   int largest = i;"); break;
        case 3:
            gotoxy(x, y + i);   printf("   int left = 2 * i + 1;"); break;
        case 4:
            gotoxy(x, y + i);   printf("   int right = 2 * i + 2;"); break;
        case 5:
            gotoxy(x, y + i);   printf("   if (left < n && arr[left] > arr[largest])"); break;
        case 6:
            gotoxy(x, y + i);   printf("      largest = left;"); break;
        case 7:
            gotoxy(x, y + i);   printf("   if (right < n && arr[right] > arr[largest])"); break;
        case 8:
            gotoxy(x, y + i);   printf("      largest = right;"); break;
        case 9:
            gotoxy(x, y + i);   printf("   if (largest != i) {"); break;
        case 10:
            gotoxy(x, y + i);   printf("      int temp = arr[i];"); break;
        case 11:
            gotoxy(x, y + i);   printf("      arr[i] = arr[largest];"); break;
        case 12:
            gotoxy(x, y + i);   printf("      arr[largest] = temp;"); break;
        case 13:
            gotoxy(x, y + i);   printf("      heapify(arr, n, largest);"); break;
        case 14:
            gotoxy(x, y + i);   printf("   }"); break;
        case 15:
            gotoxy(x, y + i);   printf("}"); y++; break;
        case 16:
            gotoxy(x, y + i);   printf("void heapSort(int arr[], int n) {"); break;
        case 17:
            gotoxy(x, y + i);   printf("     for (int i = n / 2 - 1; i >= 0; i--)"); break;
        case 18:
            gotoxy(x, y + i);   printf("          heapify(arr, n, i);"); break;
        case 19:
            gotoxy(x, y + i);   printf("     for (int i = n - 1; i > 0; i--) {"); break;
        case 20:
            gotoxy(x, y + i);   printf("          int temp = arr[0];"); break;
        case 21:
            gotoxy(x, y + i);   printf("          arr[0] = arr[i];"); break;
        case 22:
            gotoxy(x, y + i);   printf("          arr[i] = temp; "); break;
        case 23:
            gotoxy(x, y + i);   printf("          heapify(arr, i, 0);"); break;
        case 24:
            gotoxy(x, y + i);   printf("     }"); break;
        case 25:
            gotoxy(x, y + i);   printf("}"); break;
        }
    }
    gotoxy(x, 31);
    printf("선택창으로 돌아가기(Enter키 입력)");
}
void heapSortRun()
{
    system("mode con cols=130 lines=45 | title 힙정렬_과정 창");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //현재 위에서 변경한 내용을 적용시켜주는 함수
    int col = 130;
    int row = 45;
    backGround(col, row);
    int n = 0;
    int x = 2; //150일 때 75 즉, 75차이
    int y = 2;
    gotoxy(x, y);
    printf("배열의 크기를 입력하시오(최대 7) : ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    gotoxy(x, y + 2);
    printf("숫자를 입력하고 띄어쓰기로 구분해주세요.");
    gotoxy(x, y + 3);
    printf("예시 : 1 2 3 4 5 ");
    gotoxy(x, y + 4);
    printf("입력을 맞쳤으면 Enter키를 눌러주세요.");
    gotoxy(x, y + 6);
    printf("배열 요소를 입력하세요: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    gotoxy(x, y + 8);
    printf("정렬 전 배열 : ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }

    int height = divideByTwo(n, 0);
    if (height == 0)
    {
        gotoxy(x + 15, y + 11); printf("%d", arr[0]);
    }
    else if (height == 1)
    {
        printHeap1(arr, n, x + 15, y + 11);
    }
    else if (height == 2)
    {
        printHeap2(arr, n, x + 15, y + 11);
    }


    int i = 0;
    int count = 0;
    int largest = 0;
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        largest = heapify(arr, n, i);
    }
    _getch();

    for (int i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        if (height == 1)
        {
            printHeap1(arr, n, x + 15, y + 11);
        }
        else if (height == 2)
        {
            printHeap2(arr, n, x + 15, y + 11);
        }
        _getch();
        count++;
        heapify(arr, i, 0);
    }

    gotoxy(x, y + 23);
    printf("정렬 후 배열 : ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", arr[i]);
    }
    gotoxy(x, 40);
    printf("코드 보기(Enter키 입력)");
    gotoxy(x, 42);
    printf("선택창으로 돌아가기(ESC키 입력)");
    free(arr);
    int  key = _getch();
    if (key == choice)
    {
        system("cls");
        heapCode();
        _getch();
    }
}

void titleRadix() {
    system("mode con cols=200 lines=25 | title 기수 정렬");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 200;
    int rows = 25;
    backGround(cols, rows);
    //9(단어의 수) * 8 + 2(여백) * 11(여백의 수) + 4(중간 Sort부분)  =  72 + 22 + 4 = 98
    int resultX = (cols - 98) / 2;
    int x = resultX;
    int y = 1;

    for (int i = 0; i < 13; i++)
    {
        int col = x + (8 * i) + (2 * i);
        int row = y;
        if (i > 4)
        {
            col++;
            col++;
        }
        gotoxy(col, row);
        switch (i)
        {
        case 0:
            printR(col, row);
            break;
        case 1:
            printA(col, row);
            break;
        case 2:
            printD(col, row);
            break;
        case 3:
            printI(col, row);
            break;
        case 4:
            printX(col, row);
            break;
        case 5:
            printS(col, row);
            break;
        case 6:
            printO(col, row);
            break;
        case 7:
            printR(col, row);
            break;
        case 8:
            printT(col, row);
            break;
        }
    }
}
void radixConcept()
{
    int x = 20;
    int y = 12;

    for (int i = 0; i < 3; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y);        printf("기수 정렬 : 요소의 값을 비교하지 않고 ,"); break;
        case 1:
            gotoxy(x, y + i);    printf("            정수나 문자열과 같은 자료를 "); break;
        case 2:
            gotoxy(x, y + i);    printf("            자릿수별로 비교하는 정렬 방법 "); break;
        }
    }

    gotoxy(x, y + 9);
    printf("다음 페이지(Enter)");
    gotoxy(x, y + 10);
    printf("전 페이지(ESC)");
}
void radixTime()
{
    int x = 100;
    int y = 12;

    for (int i = 0; i < 5; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y + i);    printf("시간 복잡도(빅-오표기법) d : 데이터의 최대 자릿수"); break;
        case 1:
            gotoxy(x, y + i);    printf("최고 : d * n "); break;
        case 2:
            gotoxy(x, y + i);    printf("데이터가 균등하게 분포되어 있어서 모든 자릿수를 비교하지 않고도 정렬이 가능한 경우"); break;
        case 3:
            gotoxy(x, y + i);    printf("최악 : d * (n + k)"); break;
        case 4:
            gotoxy(x, y + i);    printf("모든 데이터의 자릿수를 비교해야 하는 경우"); break;
        }
    }
}
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
void radixCode()
{
    system("mode con cols=63 lines=47 | title 선택정렬 코드");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    backGround(63, 47);
    int x = 2;
    int y = 1;
    for (int i = 0; i < 42; i++)
    {
        switch (i)
        {
        case 0:
            gotoxy(x, y + i);   printf("기수 정렬 코드"); break;
        case 1:
            gotoxy(x, y + i);   printf("int getMax(int arr[], int n) {"); break;
        case 2:
            gotoxy(x, y + i);   printf("   int max = arr[0];"); break;
        case 3:
            gotoxy(x, y + i);   printf("   for (int i = 1; i < n; i++) {"); break;
        case 4:
            gotoxy(x, y + i);   printf("        if (arr[i] > max) {"); break;
        case 5:
            gotoxy(x, y + i);   printf("            max = arr[i];"); break;
        case 6:
            gotoxy(x, y + i);   printf("        }"); break;
        case 7:
            gotoxy(x, y + i);   printf("   }"); break;
        case 8:
            gotoxy(x, y + i);   printf("   return max;"); break;
        case 9:
            gotoxy(x, y + i);   printf("}"); y++; break;
        case 10:
            gotoxy(x, y + i);   printf("void radixSort(int arr[], int n) {"); break;
        case 11:
            gotoxy(x, y + i);   printf("    int max = getMax(arr, n);"); break;
        case 12:
            gotoxy(x, y + i);   printf("    int maxDigitCount = 0;"); break;
        case 13:
            gotoxy(x, y + i);   printf("    while (max > 0) {"); break;
        case 14:
            gotoxy(x, y + i);   printf("        max /= 10;"); break;
        case 15:
            gotoxy(x, y + i);   printf("        maxDigitCount++;"); break;
        case 16:
            gotoxy(x, y + i);   printf("    }"); break;
        case 17:
            gotoxy(x, y + i);   printf("    int* output = (int*)malloc(n * sizeof(int));"); break;
        case 18:
            gotoxy(x, y + i);   printf("    int* count = (int*)malloc(10 * sizeof(int));"); break;
        case 19:
            gotoxy(x, y + i);   printf("    int exp = 1;"); break;
        case 20:
            gotoxy(x, y + i);   printf("    for (int digit = 0; digit < maxDigitCount; digit++) {"); break;
        case 21:
            gotoxy(x, y + i);   printf("          for (int i = 0; i < 10; i++) {"); break;
        case 22:
            gotoxy(x, y + i);   printf("              count[i] = 0;"); break;
        case 23:
            gotoxy(x, y + i);   printf("          }"); break;
        case 24:
            gotoxy(x, y + i);   printf("          for (int i = 0; i < n; i++) {"); break;
        case 25:
            gotoxy(x, y + i);   printf("              count[(arr[i] / exp) % 10]++;"); break;
        case 26:
            gotoxy(x, y + i);   printf("          }"); break;
        case 27:
            gotoxy(x, y + i);   printf("          for (int i = 1; i < 10; i++) {"); break;
        case 28:
            gotoxy(x, y + i);   printf("              count[i] += count[i - 1];"); break;
        case 29:
            gotoxy(x, y + i);   printf("          }"); break;
        case 30:
            gotoxy(x, y + i);   printf("          for (int i = n - 1; i >= 0; i--) {"); break;
        case 31:
            gotoxy(x, y + i);   printf("              output[count[(arr[i] / exp) % 10] - 1] = arr[i];"); break;
        case 32:
            gotoxy(x, y + i);   printf("              count[(arr[i] / exp) % 10]--;"); break;
        case 33:
            gotoxy(x, y + i);   printf("          }"); break;
        case 34:
            gotoxy(x, y + i);   printf("          for (int i = 0; i < n; i++) {"); break;
        case 35:
            gotoxy(x, y + i);   printf("              arr[i] = output[i];"); break;
        case 36:
            gotoxy(x, y + i);   printf("          }"); break;
        case 37:
            gotoxy(x, y + i);   printf("          exp *= 10;"); break;
        case 38:
            gotoxy(x, y + i);   printf("    }"); break;
        case 39:
            gotoxy(x, y + i);   printf("    free(output);"); break;
        case 40:
            gotoxy(x, y + i);   printf("    free(count);"); break;
        case 41:
            gotoxy(x, y + i);   printf("}"); break;
        }
    }
    gotoxy(x, 45);
    printf("선택창으로 돌아가기(Enter키 입력)");
}
void radixSortRun()
{
    system("mode con cols=130 lines=45 | title 힙정렬_과정 창");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //현재 위에서 변경한 내용을 적용시켜주는 함수
    backGround(130, 45);
    int n = 0;
    int x = 3;
    int y = 2;
    gotoxy(x, y);
    printf("배열의 크기를 입력하시오 : ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    gotoxy(x, y + 2);
    printf("숫자를 입력하고 띄어쓰기로 구분해주세요.");
    gotoxy(x, y + 3);
    printf("예시 : 1 2 3 4 5 ");
    gotoxy(x, y + 4);
    printf("입력을 맞쳤으면 Enter키를 눌러주세요.");
    gotoxy(x, y + 6);
    printf("배열 요소를 입력하세요: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    gotoxy(x, y + 8);
    printf("정렬 전 배열 : ");
    y += 9;
    for (int i = 0; i < n; i++) {
        printf("%3d ", arr[i]);
    }

    int max = getMax(arr, n);  // 배열에서 가장 큰 원소를 찾습니다.
    int maxDigitCount = 0;  // 최대 자릿수 카운트

    // 가장 큰 원소의 자릿수 수를 계산합니다.
    while (max > 0) {
        max /= 10;
        maxDigitCount++;
    }

    int* output = (int*)malloc(n * sizeof(int));  // 결과를 저장할 동적 할당 배열
    int* count = (int*)malloc(10 * sizeof(int));  // 0부터 9까지의 자릿수를 세기 위한 배열

    int exp = 1;  // 현재 자릿수 (1, 10, 100, ...)
    int num = 0;

    for (int digit = 0; digit < maxDigitCount; digit++) {
        // count 배열 초기화
        for (int i = 0; i < 10; i++) {
            count[i] = 0;
        }

        // 각 자릿수를 세어 count 배열에 저장합니다.
        for (int i = 0; i < n; i++) {
            count[(arr[i] / exp) % 10]++;
        }

        // count 배열을 업데이트하여 각 자릿수의 끝 위치를 계산합니다.
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        // arr 배열의 원소를 output 배열에 올바른 위치에 넣어 정렬합니다.
        for (int i = n - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }

        // output 배열의 내용을 arr 배열에 복사합니다.
        for (int i = 0; i < n; i++) {
            arr[i] = output[i];
        }
        num++;
        gotoxy(x, y + digit + num);
        for (int i = 0; i < n; i++)
        {
            printf("%3d ", arr[i]);
        }
        exp *= 10;  // 다음 자릿수로 이동

    }
    free(output);  // 동적 할당된 배열을 해제합니다.
    free(count);   // 동적 할당된 배열을 해제합니다.

    gotoxy(x, 38);
    printf("정렬 후 배열 : ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", arr[i]);
    }
    gotoxy(x, 40);
    printf("코드 보기(Enter키 입력)");
    gotoxy(x, 42);
    printf("선택창으로 돌아가기(ESC키 입력)");
    free(arr);
    int  key = _getch();
    if (key == choice)
    {
        system("cls");
        radixCode();
        _getch();
    }
}

void printMerge() {
    system("mode con cols=100 lines=55 | title 병합정렬");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 100;
    int rows = 55;
    backGround(cols, rows);
    //9(단어의 수) * 8 + 2(여백) * 11(여백의 수) + 4(중간 Sort부분)  =  72 + 22 + 4 = 98
    int resultX = (cols - 98) / 2 + 4;
    int x = resultX;
    int y = 1;

    for (int i = 0; i < 13; i++)
    {
        int col = x + (8 * i) + (2 * i);
        int row = y;
        if (i > 4)
        {
            col++;
            col++;
        }
        gotoxy(col, row);
        switch (i)
        {
        case 0:
            printM(col, row);
            break;
        case 1:
            printE(col, row);
            break;
        case 2:
            printR(col, row);
            break;
        case 3:
            printG(col, row);
            break;
        case 4:
            printE(col, row);
            break;
        case 5:
            printS(col, row);
            break;
        case 6:
            printO(col, row);
            break;
        case 7:
            printR(col, row);
            break;
        case 8:
            printT(col, row);
            break;
        }
    }
}
void mergeConcept()
{
    int x = 10;
    int y = 12;

    for (int i = 0; i < 4; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y);        printf("병합 정렬 : 분할 정복 기법과 재귀 알고리즘을"); break;
        case 1:
            gotoxy(x, y + i);    printf("            이용하여, 주어진 원소가 하나가 남을 때 까지 "); break;
        case 2:
            gotoxy(x, y + i);    printf("            분할을 하고 병합을 진행하면서 정렬하는 방법 "); break;
        }
    }

    y += 3;

    for (int i = 4; i < 6; i++)
    {
        switch (i) {
        case 4:
            gotoxy(x, y + i);    printf("시간 복잡도(빅-오표기법) : 최선 : nlogn => 항상 같은 결과를 가짐"); break;
        case 5:
            gotoxy(x, y + i);    printf("                           최악 : nlogn => 항상 같은 결과를 가짐"); break;
        }
    }

    y += 3;

    for (int i = 7; i < 30; i++)
    {
        switch (i)
        {
        case 7:
            gotoxy(x, y + i);   printf("병합 정렬 코드"); break;
        case 8:
            gotoxy(x, y + i);   printf("void MERGESORT(int arr[], int LEFT, int RIGHT) {"); break;
        case 9:
            gotoxy(x, y + i);   printf("    if (LEFT < RIGHT) {"); break;
        case 10:
            gotoxy(x, y + i);   printf("        int middle = LEFT + (RIGHT - LEFT) / 2;"); break;
        case 11:
            gotoxy(x, y + i);   printf("        MERGESORT(arr, LEFT, middle);"); break;
        case 12:
            gotoxy(x, y + i);   printf("        MERGESORT(arr, middle + 1, RIGHT);"); break;
        case 13:
            gotoxy(x, y + i);   printf("        merge(arr, LEFT, middle, RIGHT);"); break;
        case 14:
            gotoxy(x, y + i);   printf("    }"); break;
        case 15:
            gotoxy(x, y + i);   printf("}"); y++; break;
        case 16:
            gotoxy(x, y + i);   printf("void merge(int* arr, int LEFT, int MIDDLE, int RIGHT){"); break;
        case 17:
            gotoxy(x, y + i);   printf("     int n1 = MIDDLE - LEFT + 1;"); break;
        case 18:
            gotoxy(x, y + i);   printf("     int n2 = RIGHT - MIDDLE;"); break;
        case 19:
            gotoxy(x, y + i);   printf("     int* L = malloc(n1 * sizeof(int));"); break;
        case 20:
            gotoxy(x, y + i);   printf("     int* R = malloc(n2 * sizeof(int));"); break;
        case 21:
            gotoxy(x, y + i);   printf("     for (int i = 0; i < n1; i++) L[i] = arr[LEFT + i];"); break;
        case 22:
            gotoxy(x, y + i);   printf("     for (int i = 0; i < n2; i++) R[i] = arr[MIDDLE + 1 + i];"); break;
        case 23:
            gotoxy(x, y + i);   printf("     int i = 0, j = 0, k = LEFT;"); break;
        case 24:
            gotoxy(x, y + i);   printf("     while (i < n1 && j < n2) arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];"); break;
        case 25:
            gotoxy(x, y + i);   printf("     while (i < n1) arr[k++] = L[i++];"); break;
        case 26:
            gotoxy(x, y + i);   printf("     while (j < n2) arr[k++] = R[j++];"); break;
        case 27:
            gotoxy(x, y + i);   printf("     free(L);"); break;
        case 28:
            gotoxy(x, y + i);   printf("     free(R);"); break;
        case 29:
            gotoxy(x, y + i);   printf("}"); break;
        }
    }

    gotoxy(x, 52);
    printf("다음 페이지(Enter)");
    gotoxy(x, 53);
    printf("전 페이지(ESC)");

}
void merge(int arr[], int Left, int mid, int Right, int col, int row, int num) {
    int i, j, k;
    int n1 = mid - Left + 1;
    int n2 = Right - mid;

    // 임시 배열에 대한 메모리 할당
    int* L = malloc(n1 * sizeof(int));
    int* R = malloc(n2 * sizeof(int));

    int x = 0;
    int y = row;

    // 임시 배열에 데이터 복사
    for (i = 0; i < n1; i++)
        L[i] = arr[Left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // (추가) 현재 상태 출력
    gotoxy(col, y + num);
    printf("좌측 배열: ");
    for (x = 0; x < n1; x++)
    {
        printf("%d ", L[x]);
    }
    gotoxy(col, y + 1 + num);
    printf("우측 배열: ");
    for (x = 0; x < n2; x++)
    {
        printf("%d ", R[x]);
    }
    _getch();

    // 임시 배열을 합병하여 정렬된 배열 생성
    i = 0;
    j = 0;
    k = Left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // 남은 요소들 복사
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // (추가) 병합 결과 출력
    gotoxy(col, y + 2 + num);
    printf("합병 결과: ");
    int gap = 0;
    for (int x = Left; x <= Right; x++)
    {
        printf("%d ", arr[x]);
        gap++;
    }

    // 임시 배열에 대한 메모리 해제
    free(L);
    free(R);
}
static int num = 0;
static int cols = 2;
void MERGESORT(int arr[], int LEFT, int RIGHT, int col, int row) {
    if (LEFT < RIGHT) {
        int middle = LEFT + (RIGHT - LEFT) / 2;
        MERGESORT(arr, LEFT, middle, col, row);
        MERGESORT(arr, middle + 1, RIGHT, col, row);
        if (num == 28 || num == 56)
        {
            num = 0;
            cols += 50;
        }
        merge(arr, LEFT, middle, RIGHT, cols, row, num);
        num += 4;
    }
}
void mergeSortRun()
{
    system("mode con cols=130 lines=45 | title 병합정렬_과정 창");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //현재 위에서 변경한 내용을 적용시켜주는 함수
    backGround(130, 45);
    int n = 0;
    int x = 2; //150일 때 75 즉, 75차이
    int y = 2;
    int count = 0;
    gotoxy(x, y);
    printf("배열의 크기를 입력하시오 : ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    gotoxy(x, y + 2);
    printf("숫자를 입력하고 띄어쓰기로 구분해주세요.");
    gotoxy(x, y + 3);
    printf("예시 : 1 2 3 4 5 ");
    gotoxy(x, y + 4);
    printf("입력을 맞쳤으면 Enter키를 눌러주세요.");
    gotoxy(x, y + 6);
    printf("배열 요소를 입력하세요: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //현재 위에서 변경한 내용을 적용시켜주는 함수
    gotoxy(x, y + 8);
    printf("정렬 전 배열 : ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }

    MERGESORT(arr, 0, n - 1, x, y + 10);
    num = 0;
    cols = 2;
    gotoxy(x, y);
    printf("정렬 후 배열 : ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }
    free(arr);
    gotoxy(x, 42);
    printf("나가시겠습니까?(Enter키 입력)");
    _getch();
}

void printQuick() {
    system("mode con cols=100 lines=55 | title 퀵 정렬");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 100;
    int rows = 55;
    backGround(cols, rows);
    //9(단어의 수) * 8 + 2(여백) * 11(여백의 수) + 4(중간 Sort부분)  =  72 + 22 + 4 = 98
    int resultX = (cols - 98) / 2 + 4;
    int x = resultX;
    int y = 2;

    for (int i = 0; i < 13; i++)
    {
        int col = x + (8 * i) + (2 * i);
        int row = y;
        if (i > 4)
        {
            col++;
            col++;
        }
        gotoxy(col, row);
        switch (i)
        {
        case 0:
            printQ(col, row);
            break;
        case 1:
            printU(col, row);
            break;
        case 2:
            printI(col, row);
            break;
        case 3:
            printC(col, row);
            break;
        case 4:
            printK(col, row);
            break;
        case 5:
            printS(col, row);
            break;
        case 6:
            printO(col, row);
            break;
        case 7:
            printR(col, row);
            break;
        case 8:
            printT(col, row);
            break;
        }
    }
}
void quickConcept()
{
    int x = 10;
    int y = 12;

    for (int i = 0; i < 4; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y);        printf("퀵 정렬 : 분할 정복 기법과 재귀 알고리즘으로"); break;
        case 1:
            gotoxy(x, y + i);    printf("          피벗(pivot)을 선택하여 기준삼아 작은 요소는 피벗의 왼쪽에"); break;
        case 2:
            gotoxy(x, y + i);    printf("          큰 요소는 오른쪽에 위치하는 방식을 반복해서 정렬하는 방법"); break;
        }
    }

    y += 1;

    for (int i = 4; i < 9; i++)
    {
        switch (i) {
        case 4:
            gotoxy(x, y + i);   printf("시간 복잡도(빅-오표기법) : 최선 nlogn"); break;
        case 5:
            gotoxy(x, y + i);   printf("최선 : nlogn"); break;
        case 6:
            gotoxy(x, y + i);   printf("항상 중간값으로 선택하는 경우"); break;
        case 7:
            gotoxy(x, y + i);   printf("최악 : n ^ 2"); break;
        case 8:
            gotoxy(x, y + i);   printf("가장 작거나 가장 큰 원소를 pivot으로 선택하고, 배열이 이미 정렬되어 있는 경우"); break;
        }
    }

    y += 3;

    for (int i = 7; i < 31; i++)
    {
        switch (i)
        {
            i += 3;
        case 7:
            gotoxy(x, y + i);   printf("퀵 정렬 코드"); break;
        case 8:
            gotoxy(x, y + i);   printf("int partition(int arr[], int low, int high) {"); break;
        case 9:
            gotoxy(x, y + i);   printf("    int pivot = arr[high];"); break;
        case 10:
            gotoxy(x, y + i);   printf("    int i = (low - 1);"); break;
        case 11:
            gotoxy(x, y + i);   printf("    for (int j = low; j <= high - 1; j++) {"); break;
        case 12:
            gotoxy(x, y + i);   printf("        if (arr[j] < pivot) {"); break;
        case 13:
            gotoxy(x, y + i);   printf("           i++;"); break;
        case 14:
            gotoxy(x, y + i);   printf("           int temp = arr[i];"); break;
        case 15:
            gotoxy(x, y + i);   printf("           arr[i] = arr[j];"); break;
        case 16:
            gotoxy(x, y + i);   printf("           arr[j] = temp;"); break;
        case 17:
            gotoxy(x, y + i);   printf("        }"); break;
        case 18:
            gotoxy(x, y + i);   printf("    }"); break;
        case 19:
            gotoxy(x, y + i);   printf("    int temp = arr[i + 1];"); break;
        case 20:
            gotoxy(x, y + i);   printf("    arr[i + 1] = arr[high];"); break;
        case 21:
            gotoxy(x, y + i);   printf("    arr[high] = temp;"); break;
        case 22:
            gotoxy(x, y + i);   printf("    return (i + 1);"); break;
        case 23:
            gotoxy(x, y + i);   printf("}"); break;
        case 24:
            gotoxy(x, y + i);   printf("void quickSort(int arr[], int low, int high) {"); break;
        case 25:
            gotoxy(x, y + i);   printf("    if (low < high) {"); break;
        case 26:
            gotoxy(x, y + i);   printf("        int pi = partition(arr, low, high);"); break;
        case 27:
            gotoxy(x, y + i);   printf("        quickSort(arr, low, pi - 1);"); break;
        case 28:
            gotoxy(x, y + i);   printf("        quickSort(arr, pi + 1, high);"); break;
        case 29:
            gotoxy(x, y + i);   printf("    }"); break;
        case 30:
            gotoxy(x, y + i);   printf("}"); break;
        }
    }

    gotoxy(x, 51);
    printf("다음 페이지(Enter)");
    gotoxy(x, 52);
    printf("전 페이지(ESC)");
}
void pR(int arr[], int n, int a, int b)
{
    int min = arr[0];
    for (int i = 0; i < n; i++) {
        if (i == a) {
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else if (i == b)
        {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // 빨간색으로 표시
        }
        else {
            setTextColor(FOREGROUND_INTENSITY); // 회색으로 표시
        }
        printf("%2d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// 하얀색으로 복원
}
void quickSort(int arr[], int size, int low, int high) {
    if (low < high) {
        static int num = 0;
        static int cols = 2;
        int pi = partition(arr, low, high, num, size, cols);
        num += 2;
        if (num == 21 || num == 42)
        {
            num = 0;
            cols = 50;
        }
        quickSort(arr, size, low, pi - 1);
        quickSort(arr, size, pi + 1, high);
    }
}
int partition(int arr[], int low, int high, int num, int size, int cols) {
    int pivot = arr[high];
    int i = low - 1;
    int x = cols;
    int y = 11;
    gotoxy(x, y + num);
    printf("Pivot : %d", pivot);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap arr[i + 1] and arr[high] (put the pivot element in its correct position)
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    // Print the current state of the array
    gotoxy(x, y + 1 + num);
    printf("새롭게 정렬된 배열 : ");
    pR(arr, size, high, i + 1);
    _getch();
    return (i + 1);
}
void quickSortRun()
{
    system("mode con cols=130 lines=45 | title 힙정렬_과정 창");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //현재 위에서 변경한 내용을 적용시켜주는 함수
    backGround(130, 45);
    int n = 0;
    int x = 2; //150일 때 75 즉, 75차이
    int y = 2;
    gotoxy(x, y);
    printf("배열의 크기를 입력하시오 : ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    gotoxy(x, y + 2);
    printf("숫자를 입력하고 띄어쓰기로 구분해주세요.");
    gotoxy(x, y + 3);
    printf("예시 : 1 2 3 4 5 ");
    gotoxy(x, y + 4);
    printf("입력을 맞쳤으면 Enter키를 눌러주세요.");
    gotoxy(x, y + 6);
    printf("배열 요소를 입력하세요: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    gotoxy(x, y + 8);
    printf("정렬 전 배열 : ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }

    quickSort(arr, n, 0, n - 1);

    gotoxy(x, y + 39);
    printf("정렬 후 배열 : ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }
    free(arr);
    gotoxy(x, y + 41);
    printf("나가시겠습니까?(Enter키 입력)");
    _getch();
}

int graphUse() {
    system("mode con cols=100 lines=25 | title 알고리즘");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //현재 위에서 변경한 내용을 적용시켜주는 함수
    while (1)
    {
        backGround(100, 25);
        gotoxy(45, 2);
        printf("사용 법");
        gotoxy(30, 5);
        printf("A : 0, B : 1, C : 2 .... Z : 25"); //30
        gotoxy(25, 7);
        printf("정점과 정점의 연결 입력 예시 ) 2 0 => B A"); //32
        gotoxy(25, 9);
        printf("정점과 정점, 가중치 예시 ) 2 0 5 => 정점:C 정점:A 가중치:5");
        gotoxy(25, 11);
        printf("입력 종료는 -1 -1 을 입력하면 됩니다.");
        gotoxy(25, 13);
        printf("Enter키를 이용하여 데이터 입력이 가능합니다.");
        gotoxy(25, 15);
        printf("ESC키를 이용하여 전 페이지로 이동이 가능합니다.");
        gotoxy(40, 19);
        printf("다음페이지(Enter)");
        gotoxy(40, 21);
        printf("전페이지(ESC)");
        char c = _getch();
        {
            if (c == choice)
            {
                return choice;
            }
            else if (c == exit)
            {
                return exit;
            }
        }
    }
}
int graphScreen()
{
    system("mode con cols=50 lines=15 | title 알고리즘");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int x = 10; //title제목값의 x 변동만큼 변함
    int y = 4; //selectionScreen의 y 값과 동일
    gotoxy(x - 2, y);
    printf("  ");
    backGround(50, 15);
    gotoxy(x - 2, y);
    printf("→1. DFS(깊이 우선 탐색)");
    gotoxy(x, y + 1);
    printf("2. BFS(너비 우선 탐색)");
    gotoxy(x, y + 2);
    printf("3. 크루스칼");
    gotoxy(x, y + 3);
    printf("4. 프림");
    gotoxy(x, y + 4);
    printf("5. 위상 정렬\n");
    gotoxy(x + 12, y + 6);

    gotoxy(x - 5, y + 8);
    printf("ESC를 누르면 원래 전 페이지로 돌아갑니다.");
    while (1)
    {
        int key = keyInput();
        static int LRCounter = 0;
        int col = 18;
        switch (key)
        {
        case up:
        {
            if (y > 4)
            {
                gotoxy(x - 2, y);
                printf("  ");
                gotoxy(x - 2, --y);
                printf("→");
            }
            break;
        }
        case down:
        {
            if (y < 8)
            {
                gotoxy(x - 2, y);
                printf("  ");
                gotoxy(x - 2, ++y);
                printf("→");
            }
            break;
        }
        case exit:
        {
            return -1;
            break;
        }
        case choice:
        {
            y = y - 4;
            return y;
        }
        }
    }
}

void titleDFS()
{
    system("mode con cols=100 lines=30 | title 깊이 우선 탐색");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 100;
    int rows = 30;
    backGround(cols, rows);
    //3(단어의 수) * 8 + 2(여백) * 11(여백의 수) + 4(중간 Sort부분)  =  24 + 22 + 4 = 50
    int resultX = (cols - 50) / 2 + 4;
    int x = resultX + 8;
    int y = 1;

    for (int i = 0; i < 3; i++)
    {
        int col = x + (8 * i) + (2 * i);
        int row = y;
        gotoxy(col, row);
        switch (i)
        {
        case 0:
            printD(col, row);
            break;
        case 1:
            printF(col, row);
            break;
        case 2:
            printS(col - 2, row);
            break;
        }
    }
}
void dfsConcept() {
    int x = 10;
    int y = 12;
    gotoxy(x, y);
    printf("DFS 작동원리");
    gotoxy(x, y + 2);
    printf("1단계 : 시작 정점에서 다음 정점으로 나아갈 때 최대한 깊이 들어가며 탐색합니다.");
    gotoxy(x, y + 4);
    printf("2단계 : 스택 자료구조를 사용하여 현재 정점에서 다음 정점으로 이동할 때");
    gotoxy(x, y + 5);
    printf("        갈림길이 있으면 스택에 다른 선택지를 저장하고 하나의 경로를 끝까지 탐색합니다.");
    gotoxy(x, y + 7);
    printf("3단계 : 끝에 도달한다면, 이전 정점으로 돌아가서");
    gotoxy(x, y + 8);
    printf("        아직 방문하지 않은 다른 정점이 있는지 확인하고 없으면 종료합니다.");
    gotoxy(x, 26);
    printf("다음 페이지(Enter)");
    gotoxy(x, 27);
    printf("전 페이지(ESC)");
}
#define MAX_VERTICES 100
#define FALSE 0
#define TRUE 1
typedef int element;
// 스택 구조체 정의
typedef struct stackNode {
    element data;
    struct stackNode* link;
} stackNode;
stackNode* top;
int isStackEmpty(void);
void push(element item);
element pop(void);
element peek(void);
void printStack(void);
int isStackEmpty(void) {
    if (top == NULL) return 1;
    else return 0;
}
void push(element item) {
    stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
    temp->data = item;
    temp->link = top;
    top = temp;
}
element pop(void) {
    element item;
    stackNode* temp = top;

    if (isStackEmpty())
    {
        printf("Stack is empty");
        return 0;
    }

    else item = temp->data;
    top = temp->link;
    free(temp);
    return item;
}
element peek() {
    if (isStackEmpty())
    {
        printf("Stack is empty");
        return 0;
    }
    else {
        return (top->data);
    }
}
void printStack(void) {
    stackNode* p = top;
    printf("\n STACK [ ");
    while (p)
    {
        printf("%d ", p->data);
        p = p->link;
    }
    printf("] ");
}
typedef struct graphNode {
    int vertex;  // 정점들을 저장하는 배열
    struct grahpNode* link;
} graphNode;
typedef struct graphType {
    int n;
    graphNode* adjList_H[MAX_VERTICES];
    int visited[MAX_VERTICES];
} graphType;
void createGraph(graphType* g) {
    int v;
    g->n = 0;
    for (v = 0; v < MAX_VERTICES; v++)
    {
        g->adjList_H[v] = NULL;
        g->visited[v] = FALSE;
    }
}
void insertVertex(graphType* g, int v) {
    if (((g->n) + 1) > MAX_VERTICES) {
        printf("\n 그래프 정점의 개수를 초과하였습니다!");
        return;
    }
    g->n++;
}
void insertEdge(graphType* g, int u, int v)
{
    graphNode* node;

    if (u >= g->n || v >= g->n) {
        printf("\n 그래프에 없는 정점입니다!");
        return;
    }

    node = (graphNode*)malloc(sizeof(graphNode));
    node->vertex = v;
    node->link = g->adjList_H[u];
    g->adjList_H[u] = node;
}
void print_adjList(graphType* g) {
    int i;
    graphNode* p;
    for (i = 0; i < g->n; i++)
    {
        printf("\n\t\t정점 %c의 인접 리스트", i + 65);
        p = g->adjList_H[i];
        while (p) {
            printf("-> %c", p->vertex + 65);
            p = p->link;
        }
    }
}
void DFS_adjList(graphType* g, int v) {
    graphNode* w;
    top = NULL;
    push(v);
    g->visited[v] = TRUE;

    while (!isStackEmpty()) {
        v = pop();
        printf(" %c", v + 65);

        w = g->adjList_H[v];
        while (w) {
            if (!g->visited[w->vertex]) {
                push(w->vertex);
                g->visited[w->vertex] = TRUE;
            }
            w = w->link;
        }
    }
}
void dfs()
{
    system("mode con cols=100 lines=30 | title 깊이 우선 탐색");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int i;
    graphType* graph;
    int num = 0;
    int pause;
    // 그래프 초기화
    graph = (graphType*)malloc(sizeof(graphType));
    createGraph(graph);
    printf("몇 개의 정점을 만드시겠습니까? : ");
    scanf_s("%d", &num);
    for (i = 0; i < num; i++)
    {
        insertVertex(graph, i);
    }
    int vertex = 0;
    int linkVertex = 0;
    while (1)
    {
        printf("정점과 연결된 정점을 입력하시오 : ");
        scanf_s("%d %d", &vertex, &linkVertex);
        if (vertex == -1 && linkVertex == -1)
        {
            break;
        }
        insertEdge(graph, vertex, linkVertex);
    }
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    printf("\n Graph의 인접 리스트 ");
    print_adjList(graph);
    printf("\n\n어떤 정점에서 DFS를 시작하시겠습니까? : ");
    scanf_s("%d", &num);
    printf("\n\n 깊이 우선 탐색 >> ");
    DFS_adjList(graph, num);
    // 깊이 우선 탐색 수행
    gotoxy(0, 28);
    printf("나가시겠습니까?(Enter키 입력)");
    _getch();
}

void titleBFS()
{
    system("mode con cols=100 lines=30 | title 너비 우선 탐색");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 100;
    int rows = 30;
    backGround(cols, rows);
    //3(단어의 수) * 8 + 2(여백) * 11(여백의 수) + 4(중간 Sort부분)  =  24 + 22 + 4 = 50
    int resultX = (cols - 50) / 2 + 4;
    int x = resultX + 8;
    int y = 1;

    for (int i = 0; i < 3; i++)
    {
        int col = x + (8 * i) + (2 * i);
        int row = y;
        gotoxy(col, row);
        switch (i)
        {
        case 0:
            printB(col, row);
            break;
        case 1:
            printF(col, row);
            break;
        case 2:
            printS(col - 2, row);
            break;
        }
    }
}
void bfsConcept() {
    int x = 10;
    int y = 12;
    gotoxy(x, y);
    printf("BFS 작동원리");
    gotoxy(x, y + 2);
    printf("1단계 : 시작 정점으로부터 인접한 정점들을 먼저 방문하고,");
    gotoxy(x, y + 3);
    printf("        그 다음으로는 그 정점들과 인접한 정점들을 방문하는 식으로 탐색을 진행합니다.");
    gotoxy(x, y + 5);
    printf("2단계 : 큐 자료구조를 사용하여 현재 정점에서 다음에 방문할 정점들을 순서대로 저장하고");
    gotoxy(x, y + 6);
    printf("        처리합니다. 이를 통해 레벨별로 탐색이 가능합니다.");
    gotoxy(x, y + 8);
    printf("3단계 : 큐가 빌 때까지 이 과정을 반복합니다.");
    gotoxy(x, y + 9);
    printf("        그래서 마지막에 큐가 빈 것을 확인합니다.");
    gotoxy(x, 26);
    printf("다음 페이지(Enter)");
    gotoxy(x, 27);
    printf("전 페이지(ESC)");
}
typedef struct QNode {
    element data;
    struct QNode* link;
} QNode;
typedef struct {
    QNode* front, * rear;
}LQueueType;
LQueueType* createLinkedQueue();
int isLQEmpty(LQueueType* LQ);
void enLQueue(LQueueType* LQ, element item);
element deLQueue(LQueueType* LQ);
element peekLQ(LQueueType* LQ);
void printLQ(LQueueType* LQ);
LQueueType* createLinkedQueue() {
    LQueueType* LQ;
    LQ = (LQueueType*)malloc(sizeof(LQueueType));
    if (!LQ) {
        perror("Memory allocation failed");
    }
    LQ->front = NULL;
    LQ->rear = NULL;
    return LQ;
}
int isLQEmpty(LQueueType* LQ) {
    if (LQ->front == NULL) {
        printf(" Linked Queue is empty! ");
        return 1;
    }
    else return 0;
}
void enLQueue(LQueueType* LQ, element item) {
    QNode* newNode = (QNode*)malloc(sizeof(QNode));
    newNode->data = item;
    newNode->link = NULL;
    if (LQ->front == NULL)
    {
        LQ->front = newNode;
        LQ->rear = newNode;
    }
    else
    {
        LQ->rear->link = newNode;
        LQ->rear = newNode;
    }
}
element deLQueue(LQueueType* LQ)
{
    QNode* old = LQ->front;
    element item;
    if (isLQEmpty(LQ)) return 0;
    else {
        item = old->data;
        LQ->front = LQ->front->link;
        if (LQ->front == NULL)
        {
            LQ->rear = NULL;
        }
        free(old);
        return item;
    }
}
element peekLQ(LQueueType* LQ) {
    element item;
    if (isLQEmpty(LQ)) return 0;
    else
    {
        item = LQ->front->data;
        return item;
    }
}
void printLQ(LQueueType* LQ) {
    QNode* temp = LQ->front;
    printf(" Linked Queue : [");
    while (temp) {
        printf("%3d", temp->data);
        temp = temp->link;
    }
    printf(" ] ");
}
void BFS_adjList(graphType* g, int v)
{
    graphNode* w;
    LQueueType* Q;
    Q = createLinkedQueue();
    g->visited[v] = TRUE;
    printf(" %c", v + 65);
    enLQueue(Q, v);
    while (!isLQEmpty(Q)) {
        v = deLQueue(Q);
        for (w = g->adjList_H[v]; w; w = w->link)
            if (!g->visited[w->vertex]) {
                g->visited[w->vertex] = TRUE;
                printf(" %c", w->vertex + 65);
                enLQueue(Q, w->vertex);
            }
    }
}
void bfs() {
    system("mode con cols=100 lines=30 | title 깊이 우선 탐색");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int i;
    graphType* graph;
    int num = 0;
    int pause = 0;
    // 그래프 초기화
    graph = (graphType*)malloc(sizeof(graphType));
    createGraph(graph);
    printf("몇 개의 정점을 만드시겠습니까? : ");
    scanf_s("%d", &num);
    for (i = 0; i < num; i++)
    {
        insertVertex(graph, i);
    }
    int vertex = 0;
    int linkVertex = 0;
    while (1)
    {
        printf("정점과 연결된 정점을 입력하시오 : ");
        scanf_s("%d %d", &vertex, &linkVertex);
        if (vertex == -1 && linkVertex == -1)
        {
            break;
        }
        insertEdge(graph, vertex, linkVertex);
    }
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    printf("\n Graph의 인접 리스트 ");
    print_adjList(graph);
    printf("\n어떤 정점에서 BFS를 시작하시겠습니까? : ");
    scanf_s("%d", &num);
    printf("\n\n\n\n 너비 우선 탐색 >> ");
    BFS_adjList(graph, num);
    gotoxy(0, 28);
    printf("나가시겠습니까?(Enter키 입력)");
    _getch();
}

void titleKruskal() {
    system("mode con cols=100 lines=30 | title 크루스칼 알고리즘");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 100;
    int rows = 30;
    backGround(cols, rows);
    //7(단어의 수) * 8 + 2(여백) * 11(여백의 수) + 4(중간 Sort부분)  =  56 + 22 + 4 = 82
    int resultX = (cols - 82) / 2 + 4;
    int x = resultX + 3;
    int y = 1;

    for (int i = 0; i < 7; i++)
    {
        int col = x + (8 * i) + (2 * i);
        int row = y;
        gotoxy(col, row);
        switch (i)
        {
        case 0:
            printK(col, row);
            break;
        case 1:
            printR(col, row);
            break;
        case 2:
            printU(col, row);
            break;
        case 3:
            printS(col, row);
            break;
        case 4:
            printK(col, row);
            break;
        case 5:
            printA(col, row);
            break;
        case 6:
            printL(col, row);
            break;
        }
    }
}
void kruskalConcept() {
    int x = 10;
    int y = 12;
    gotoxy(x, y);
    printf("크루스칼 작동원리");
    gotoxy(x, y + 2);
    printf("1단계 : 모든 간선을 가중치에 따라 내림차순으로 정렬한다.");
    gotoxy(x, y + 4);
    printf("2단계 : 가중치가 가장 높은 간선을 제거한다. 단 이때 정점을 그래프에서");
    gotoxy(x, y + 5);
    printf("        분리시키는 간선은 제거할 수 없다.");
    gotoxy(x, y + 7);
    printf("3단계 : 간선이 n-1개 삽입될 때까지 반복합니다.");
    gotoxy(x, y + 8);
    printf("        그렇게 간선이 n-1개인 최소 비용 신장 트리가 완성됩니다.");
    gotoxy(x, 26);
    printf("다음 페이지(Enter)");
    gotoxy(x, 27);
    printf("전 페이지(ESC)");
}
#define MAX_EDGES 100
// 간선 구조체 정의
typedef struct {
    int src, dest, weight;
} Edge;
// 정렬을 위한 비교 함수
int compare(const void* a, const void* b) {
    return ((Edge*)a)->weight - ((Edge*)b)->weight;
}
// 부모를 찾는 함수
int findParent(int parent[], int i) {
    if (parent[i] == -1)
        return i;
    return findParent(parent, parent[i]);
}
// 두 부분집합을 합치는 함수
void unionSets(int parent[], int x, int y) {
    int xset = findParent(parent, x);
    int yset = findParent(parent, y);
    parent[xset] = yset;
}
// 크루스칼 알고리즘 함수
void kruskalMST(Edge edges[], int V, int E) {
    Edge* result = (Edge*)malloc((V - 1) * sizeof(Edge)); // 최소 신장 트리의 간선을 저장할 배열

    int* parent = (int*)malloc(V * sizeof(int)); // 각 정점의 부모를 저장할 배열

    // 간선을 가중치 기준으로 정렬
    qsort(edges, E, sizeof(edges[0]), compare);

    // 모든 정점을 자기 자신의 부모로 초기화
    for (int i = 0; i < V; i++)
        parent[i] = -1;

    int i = 0, j = 0;
    while (i < V - 1 && j < E) {
        Edge nextEdge = edges[j++];

        // 싸이클을 형성하지 않는 경우, 해당 간선을 최소 신장 트리에 추가
        int x = findParent(parent, nextEdge.src);
        int y = findParent(parent, nextEdge.dest);
        if (x != y) {
            result[i++] = nextEdge;
            unionSets(parent, x, y);
        }
    }

    // 최소 신장 트리 출력
    printf("가중치\n");
    for (int i = 0; i < V - 1; i++) {
        printf("점선%d - 점선%d = 가중치 :%d\n", result[i].src, result[i].dest, result[i].weight);
    }

    // 동적으로 할당한 메모리 해제
    free(result);
    free(parent);
}
void kruskal() {
    system("mode con cols=100 lines=30 | title 깊이 우선 탐색");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int V, E;
    printf("정점의 개수를 입력해주세요 : ");
    scanf_s("%d", &V);
    printf("간선의 개수를 입력해주세요 : ");
    scanf_s("%d", &E);
    Edge edges[MAX_EDGES];
    printf("정점과 이어진 정점을 적고 가중치를 입력해주세요 :\n");
    for (int i = 0; i < E; i++) {
        scanf_s("%d %d %d", &edges[i].src, &edges[i].dest, &edges[i].weight);
    }
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    kruskalMST(edges, V, E);
}

void titlePrim()
{
    system("mode con cols=100 lines=30 | title 프림 알고리즘");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 100;
    int rows = 30;
    backGround(cols, rows);
    //4(단어의 수) * 8 + 2(여백) * 11(여백의 수) + 4(중간 Sort부분)  =  32 + 22 + 4 = 58
    int resultX = (cols - 58) / 2 + 4;
    int x = resultX + 5;
    int y = 1;

    for (int i = 0; i < 4; i++)
    {
        int col = x + (8 * i) + (2 * i);
        int row = y;
        gotoxy(col, row);
        switch (i)
        {
        case 0:
            printP(col, row);
            break;
        case 1:
            printR(col, row);
            break;
        case 2:
            printI(col, row);
            break;
        case 3:
            printM(col, row);
            break;
        }
    }
}
void primConcept() {
    int x = 10;
    int y = 12;
    gotoxy(x, y);
    printf("프림 작동원리");
    gotoxy(x, y + 2);
    printf("1단계 : 시작 정점을 선택합니다. 선택한 정점에 부속된 모든 간선 중에서");
    gotoxy(x, y + 3);
    printf("        가중치가 가장 낮은 간선을 연결하여 트리를 확장합니다.");
    gotoxy(x, y + 5);
    printf("2단계 : 이전에 선택한 정점과 새로 확장된 정점에 부속된 모든 간선 중에서");
    gotoxy(x, y + 6);
    printf("        가중치가 가장 낮은 간선을 삽입합니다. 단, 사이클 형성하는 간선은 제외 됩니다.");
    gotoxy(x, y + 8);
    printf("3단계 : 간선이 n-1개 삽입될 때까지 반복합니다.");
    gotoxy(x, y + 9);
    printf("        그렇게 간선이 n-1개인 최소 비용 신장 트리가 완성됩니다.");
    gotoxy(x, 26);
    printf("다음 페이지(Enter)");
    gotoxy(x, 27);
    printf("전 페이지(ESC)");
}
#define MAX_V 100
#define MAX_E 100
struct Edge {
    int src, dest, weight;
};
struct Edge edges[MAX_E]; // 간선 정보 저장 배열
int E;
int findMinKey(int key[], int mstSet[], int V) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++) {
        if (mstSet[v] == 0 && key[v] < min) {
            min = key[v];
            min_index = v;
        }
    }

    return min_index;
}
void primMST(int V) {
    int* parent = (int*)malloc(V * sizeof(int));
    int* key = (int*)malloc(V * sizeof(int));
    int* mstSet = (int*)malloc(V * sizeof(int));

    // key 배열을 무한대로 초기화
    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;
        mstSet[i] = 0;
        parent[i] = -1;
    }

    // 시작 정점의 키 값을 0으로 설정
    key[0] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = findMinKey(key, mstSet, V);
        mstSet[u] = 1;

        for (int e = 0; e < E; e++) {
            if ((edges[e].src == u || edges[e].dest == u) && mstSet[edges[e].dest] == 0 && edges[e].weight < key[edges[e].dest]) {
                parent[edges[e].dest] = u;
                key[edges[e].dest] = edges[e].weight;
            }
        }

        // 현재 상태 출력
        printf("%d단계 :\n", count + 1);
        printf("정점간의 가중치\n");
        for (int i = 1; i < V; i++) {
            if (parent[i] != -1) {
                printf("%d - %d    %d\n", parent[i], i, key[i]);
            }
        }
        printf("\n");
    }

    // 메모리 해제
    free(parent);
    free(key);
    free(mstSet);
}
void prim() {
    system("mode con cols=100 lines=30 | title 프림 알고리즘");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor;
    ConsoleCursor.dwSize = 1;
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int V;
    printf("정점의 개수를 입력하세요: ");
    scanf_s("%d", &V);
    printf("간선의 개수를 입력하세요: ");
    scanf_s("%d", &E);

    printf("정점과 정점, 가중치를 입력하세요\n");
    for (int i = 0; i < E; i++) {
        scanf_s("%d %d %d", &edges[i].src, &edges[i].dest, &edges[i].weight);
    }

    ConsoleCursor.bVisible = 0;
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    primMST(V);
}

void titleTopologicalSort() {
    system("mode con cols=200 lines=30 | title 프림 알고리즘");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 200;
    int rows = 30;
    backGround(cols, rows);
    //15(단어의 수) * 8 + 2(여백) * 11(여백의 수) + 4(중간 Sort부분)  =  120 + 22 + 4 = 148
    int resultX = (cols - 148) / 2 - 10;
    int x = resultX + 5;
    int y = 1;

    for (int i = 0; i < 15; i++)
    {
        int col = x + (8 * i) + (2 * i);
        int row = y;
        if (i > 10)
        {
            col++;
            col++;
            col++;
            col++;
        }
        gotoxy(col, row);
        switch (i)
        {
        case 0:
            printT(col, row);
            break;
        case 1:
            printO(col, row);
            break;
        case 2:
            printP(col, row);
            break;
        case 3:
            printO(col, row);
            break;
        case 4:
            printL(col, row);
            break;
        case 5:
            printO(col, row);
            break;
        case 6:
            printG(col, row);
            break;
        case 7:
            printI(col, row);
            break;
        case 8:
            printC(col, row);
            break;
        case 9:
            printA(col, row);
            break;
        case 10:
            printL(col, row);
            break;
        case 11:
            printS(col, row);
            break;
        case 12:
            printO(col, row);
            break;
        case 13:
            printR(col, row);
            break;
        case 14:
            printT(col, row);
            break;
        }
    }
}
void topologicalsortConcept() {
    int x = 20;
    int y = 12;
    gotoxy(x, y);
    printf("위상정렬 작동원리");
    gotoxy(x, y + 2);
    printf("1단계 : 모든 정점에 대해 진입차수를 계산합니다. 진입차수란 특정 정점으로 들어오는 간선의 수를 의미합니다.");
    gotoxy(x, y + 4);
    printf("2단계 : 진입차수가 0인 정점을 하나 선택하고 이를 결과 리스트에 추가합니다. 진입차수가 0인 정점은 그래프에서 시작점이 될 수 있습니다.");
    gotoxy(x, y + 6);
    printf("3단계 : 선택한 정점과 이와 연결된 간선을 그래프에서 제거합니다. 이는 다른 정점들의 진입차수를 갱신하는 과정입니다.");
    gotoxy(x, y + 8);
    printf("4단계 : 모든 정점이 결과 리스트에 추가될 때까지 위의 과정을 반복합니다.");
    gotoxy(x, y + 10);
    printf("주의사항 : 위상 정렬은 순환(cycle)이 없는 그래프에 대해서만 가능합니다. 만약 그래프에 순환이 존재한다면 모든 정점을 나열하는 것이 불가능합니다.");
    gotoxy(x, 26);
    printf("다음 페이지(Enter)");
    gotoxy(x, 27);
    printf("전 페이지(ESC)");
}
// 그래프 정점을 표현하는 구조체
typedef struct Node {
    int data;
    struct Node* next;
} Node;
// 그래프를 나타내는 구조체
typedef struct {
    Node* adjList[MAX_VERTICES];
    int inDegree[MAX_VERTICES];
    int numVertices;
} Graph;
// 그래프 초기화 함수
void initializeGraph(Graph* graph, int numVertices) {
    graph->numVertices = numVertices;

    // 인접 리스트와 in-degree 초기화
    for (int i = 0; i < numVertices; ++i) {
        graph->adjList[i] = NULL;
        graph->inDegree[i] = 0;
    }
}
// 간선 추가 함수
void addEdge(Graph* graph, int src, int dest) {
    // dest를 src에 인접 리스트에 추가
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = dest;
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;

    // dest의 in-degree 증가
    graph->inDegree[dest]++;
}
// 위상 정렬 재귀적으로 수행하는 보조 함수
void topologicalSortUtil(Graph* graph, int v, int* visited, int* result, int* resultIndex) {
    // 현재 정점을 방문하지 않았다면
    if (!visited[v]) {
        // 현재 정점을 방문으로 표시
        visited[v] = 1;

        // 현재 정점의 인접 정점들을 방문 (재귀 호출)
        Node* temp = graph->adjList[v];
        while (temp != NULL) {
            topologicalSortUtil(graph, temp->data, visited, result, resultIndex);
            temp = temp->next;
        }

        // 현재 정점을 결과 배열에 추가
        result[(*resultIndex)++] = v;

        // 현재 상태 출력
        printf("%d단계 : 정점 %d 추가됩니다\n", *resultIndex, v);
        printf("현재 정렬 결과 : ");
        for (int i = 0; i < *resultIndex; ++i) {
            printf("%d ", result[i]);
        }
        printf("\n");
    }
}
// 위상 정렬 함수
void topologicalSort(Graph* graph) {
    int* visited = (int*)malloc(graph->numVertices * sizeof(int));
    int* result = (int*)malloc(graph->numVertices * sizeof(int));
    int resultIndex = 0;

    // 방문 여부 초기화
    for (int i = 0; i < graph->numVertices; ++i) {
        visited[i] = 0;
    }

    // 모든 정점에 대해 위상 정렬 수행
    for (int i = 0; i < graph->numVertices; ++i) {
        if (visited[i] == 0 && graph->inDegree[i] == 0) {
            topologicalSortUtil(graph, i, visited, result, &resultIndex);
        }
    }

    // 위상 정렬 결과 출력
    printf("\n위상정렬 결과 : ");
    for (int i = 0; i < resultIndex; ++i) {
        printf("%d ", result[i]);
    }
    printf("\n\n");
    printf("Enter키를 입력하면 선택 화면으로 돌아갑니다.");
    _getch();
    // 메모리 해제
    free(visited);
    free(result);
}
void topologicalsort()
{
    system("mode con cols=100 lines=30 | title 깊이 우선 탐색");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
    ConsoleCursor.dwSize = 1; //크기를 1로 지정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int numVertices, numEdges;

    printf("정점의 개수를 입력하세요 : ");
    scanf_s("%d", &numVertices);

    printf("간선의 개수를 입력하세요 : ");
    scanf_s("%d", &numEdges);

    Graph graph;
    initializeGraph(&graph, numVertices);

    printf("정점과 연결된 정점을 입력하시오\n");
    for (int i = 0; i < numEdges; ++i) {
        int src, dest;
        scanf_s("%d %d", &src, &dest);
        addEdge(&graph, src, dest);
    }

    ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);

    // 초기 그래프 상태 출력
    printf("\n초기 그래프 상태\n");
    for (int i = 0; i < numVertices; ++i) {
        printf("정점 %d 의 진입차수 : %d\n", i, graph.inDegree[i]);
    }
    printf("\n");

    // 위상 정렬 수행
    topologicalSort(&graph);
}

int main()
{
    int col = 100;
    int row = 20;
    int key = keyInput;
    how_to_use();
    //화면 크기 설정
    while (1)
    {
        system("mode con cols=100 lines=20 | title 알고리즘");
        HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_CURSOR_INFO ConsoleCursor; //커서의 속성을 관리하는 구조체
        ConsoleCursor.bVisible = 0; //커서가 안보이게 설정
        ConsoleCursor.dwSize = 1; //크기를 1로 지정
        SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //현재 위에서 변경한 내용을 적용시켜주는 함수
        backGround(col, row);
        title();
        // 화면 선택지 고르기
        int select = selectionScreen();
        while (1)
        {
            if (select == 0)
            {
                system("cls");
                int select = SortScreen();
                if (select == -1)
                {
                    break;
                }
                switch (select)
                {
                case 0:
                    if (key == -1)
                    {
                        break;
                    }
                    while (1)
                    {
                        titleBubble();   // 버블정렬 제목그리기
                        bubbleConcept(); // 버블정렬 개념, 코드 그리기
                        bubbleTime();    // 버블 시간복잡도
                        int key = _getch();
                        if (key == exit)
                        {
                            break;
                        }
                        if (key == choice)
                        {
                            bubbleSortRun();
                            break;
                        }
                    }
                    break;
                case 1:
                    if (key == -1)
                    {
                        break;
                    }
                    while (1)
                    {
                        titleSelect();
                        selectConcept();
                        selectTime();
                        int key = _getch();
                        if (key == exit)
                        {
                            break;
                        }
                        if (key == choice)
                        {
                            selectSortRun();
                            break;
                        }
                    }
                    break;
                case 3:
                    if (key == -1)
                    {
                        break;
                    }
                    while (1)
                    {
                        titleInsert();
                        insertConcept();
                        insertTime();
                        int key = _getch();
                        if (key == exit)
                        {
                            break;
                        }
                        if (key == choice)
                        {
                            insertSortRun();
                            break;
                        }
                    }
                    break;
                case 4:
                    if (key == -1)
                    {
                        break;
                    }
                    while (1)
                    {
                        titleShell();
                        shellConcept();
                        shellTime();
                        int key = _getch();
                        if (key == exit)
                        {
                            break;
                        }
                        if (key == choice)
                        {
                            shellSortRun();
                            break;
                        }
                    }
                    break;
                case 6:
                    if (key == -1)
                    {
                        break;
                    }
                    while (1)
                    {
                        titleHeap();
                        heapConcept();
                        heapTime();
                        int key = _getch();
                        if (key == exit)
                        {
                            break;
                        }
                        if (key == choice)
                        {
                            heapSortRun();
                            break;
                        }
                    }
                    break;
                case 7:
                    if (key == -1)
                    {
                        break;
                    }
                    while (1)
                    {
                        titleRadix();
                        radixConcept();
                        radixTime();
                        int key = _getch();
                        if (key == exit)
                        {
                            break;
                        }
                        if (key == choice)
                        {
                            radixSortRun();
                            break;
                        }
                    }
                    break;
                case 9:
                    printMerge();
                    mergeConcept();
                    key = _getch();
                    if (key == exit)
                    {
                        break;
                    }
                    if (key == choice)
                    {
                        mergeSortRun();
                        break;
                    }
                    break;
                case 10:
                    printQuick();
                    quickConcept();
                    key = _getch();
                    if (key == exit)
                    {
                        break;
                    }
                    if (key == choice)
                    {
                        quickSortRun();
                        break;
                    }
                    break;
                }
                system("cls");
            }
            else if (select == 1)
            {
                system("cls");
                key = graphUse();
                if (key == exit)
                {
                    break;
                }
                if (key == choice)
                {
                    while (1)
                    {
                        int select = graphScreen();
                        if (select == -1)
                        {
                            break;
                        }
                        switch (select)
                        {
                        case 0:
                            if (key == -1)
                            {
                                break;
                            }
                            while (1)
                            {
                                titleDFS();
                                dfsConcept();
                                int key = _getch();
                                if (key == exit)
                                {
                                    break;
                                }
                                if (key == choice)
                                {
                                    dfs();
                                    break;
                                }
                            }
                            break;
                        case 1:
                            if (key == -1)
                            {
                                break;
                            }
                            while (1)
                            {
                                titleBFS();
                                bfsConcept();
                                int key = _getch();
                                if (key == exit)
                                {
                                    break;
                                }
                                if (key == choice)
                                {
                                    bfs();
                                    break;
                                }
                            }
                            break;
                        case 2:
                            if (key == -1)
                            {
                                break;
                            }
                            while (1)
                            {
                                titleKruskal();
                                kruskalConcept();
                                int key = _getch();
                                if (key == exit)
                                {
                                    break;
                                }
                                if (key == choice)
                                {
                                    kruskal();
                                    _getch();
                                    break;
                                }
                            }
                            break;
                        case 3:
                            if (key == -1)
                            {
                                break;
                            }
                            while (1)
                            {
                                titlePrim();
                                primConcept();
                                int key = _getch();
                                if (key == exit)
                                {
                                    break;
                                }
                                if (key == choice)
                                {
                                    prim();
                                    _getch();
                                    break;
                                }
                            }
                            break;
                        case 4:
                            if (key == -1)
                            {
                                break;
                            }
                            while (1)
                            {
                                titleTopologicalSort();
                                topologicalsortConcept();
                                int key = _getch();
                                if (key == exit)
                                {
                                    break;
                                }
                                if (key == choice)
                                {
                                    topologicalsort();
                                    break;
                                }
                            }
                            break;
                        }
                    }
                }
                break;
                system("cls");
            }
            else if (select == 2)
            {
                system("cls");
                return 0;
            }
            system("cls");
        }
    }

}