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
    char keyInput = _getch(); //�ѱ��ڸ� �Է��ϰ� Enter�� �Է��Ͽ� �Է��� ��ġ�� ���ִ� �Լ�

    if (keyInput == 72) //��
    {
        return up;
    }
    else if (keyInput == 80) //��
    {
        return down;
    }
    else if (keyInput == 75) //��
    {
        return left;
    }
    else if (keyInput == 77) //��
    {
        return right;
    }
    else if (keyInput == 13) //����
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
            printf("��");
            for (int j = 0; j < x - 3; j++)
            {
                printf("��");
            }
            printf("��");
        }
        else if (i == y - 1)
        {
            printf("��");
            for (int j = 0; j < x - 3; j++)
            {
                printf("��");
            }
            printf("��");
            break;
        }
        else if (i != 0 && i != y - 1)
        {
            printf("��");
            gotoxy(x - 2, i);
            printf("��");
        }
    }
}
void how_to_use()
{
    system("mode con cols=100 lines=15 | title �˰���");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //���� ������ ������ ������ ��������ִ� �Լ�
    while (1)
    {
        backGround(100, 15);
        gotoxy(45, 2);
        printf("��� ��");
        gotoxy(30, 5);
        printf("����Ű ��, ��, ��, �� �� ���� �����մϴ�."); //30
        gotoxy(25, 7);
        printf("EnterŰ�� �̿��Ͽ� ������ �Է��̳� ������ �����մϴ�."); //32
        gotoxy(27, 9);
        printf("ESCŰ�� �̿��Ͽ� �� �������� �̵��� �����մϴ�.");
        gotoxy(40, 12);
        printf("����������(Enter)");

        char c = _getch();
        if (c == 13)
        {
            break;
        }
    }
}
void title() //�˰��� ���� ���
{
    //9(�ܾ��� ��) * 8 + 2(����) * 8(������ ��) = 72 + 16 = 88
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
    int x = 44; //title������ x ������ŭ ����
    int y = 14;
    gotoxy(x - 2, y);
    printf("��1. ����\n");
    gotoxy(x, y + 1);
    printf("2. �׷���\n");
    gotoxy(x, y + 2);
    printf("3. ����\n");

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
                printf("��");
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
                printf("��");
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
    system("mode con cols=50 lines=20 | title �˰���");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int x = 18; //title������ x ������ŭ ����
    int y = 4; //selectionScreen�� y ���� ����
    gotoxy(x - 2, y);
    printf("  ");
    backGround(50, 20);
    gotoxy(x - 12, y);
    printf("��1. ���� ����\n");
    gotoxy(x + 12, y);
    printf("2. ���� ����\n");
    gotoxy(x - 10, y + 3);
    printf("3. ���� ����\n");
    gotoxy(x + 12, y + 3);
    printf("4. �� ����\n");
    gotoxy(x - 10, y + 6);
    printf("5. �� ����\n");
    gotoxy(x + 12, y + 6);
    printf("6. ��� ����\n");
    gotoxy(x - 10, y + 9);
    printf("7. �պ� ����\n");
    gotoxy(x + 12, y + 9);
    printf("8. �� ����\n");
    gotoxy(x - 13, y + 13);
    printf("ESC�� ������ ���� �� �������� ���ư��ϴ�.");
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
                    printf("��");
                }
                else if (LRCounter == 0)
                {
                    col = col - 12;
                    gotoxy(col, y);
                    printf("  ");
                    y = y - 3;
                    gotoxy(col, y);
                    printf("��");
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
                    printf("��");
                }
                else if (LRCounter == 0)
                {
                    col = col - 12;
                    gotoxy(col, y);
                    printf("  ");
                    y = y + 3;
                    gotoxy(col, y);
                    printf("��");
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
            printf("��");
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
            printf("��");
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

void titleBubble() //�������� ����׸���
{
    system("mode con cols=130 lines=25 | title ��������");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int col = 130;
    int row = 25;
    backGround(col, row);
    //10(�ܾ��� ��) * 8 + 2(����) * 8(������ ��) + 4(�߰� Sort�κ�)  = 80 + 16 + 4 = 100
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
            gotoxy(x, y);        printf("���� ���� : ������ ���� �� ���� ���Ͽ�"); break;
        case 1:
            gotoxy(x, y + i);    printf("            �ڸ��� ��ȯ�ϴµ�, �̷��� �����"); break;
        case 2:
            gotoxy(x, y + i);    printf("            �ݺ��Ͽ� �����ϴ� ���"); break;
        }
    }

    gotoxy(x, y + 9);
    printf("���� ������(Enter)");
    gotoxy(x, y + 10);
    printf("�� ������(ESC)");
}
void bubbleTime()
{
    int x = 70;
    int y = 12;

    for (int i = 0; i < 3; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y + i);    printf("�ð� ���⵵(��-��ǥ���)"); break;
        case 1:
            gotoxy(x, y + i);    printf("�ְ� : n   => �迭�� �̹� ���ĵǾ� �ִ� ���"); break;
        case 2:
            gotoxy(x, y + i);    printf("�־� : n^2 => �迭�� �������� ���ĵǾ� �ִ� ���"); break;
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
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else if (i == redIndex + 1)
        {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else {
            setTextColor(FOREGROUND_INTENSITY); // ȸ������ ǥ��
        }
        printf("%2d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// �Ͼ������ ����
}
void printfB(int arr[], int n, int redIndex)
{
    for (int i = 0; i < n; i++) {
        if (i == redIndex) {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else if (i == redIndex - 1)
        {
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else {
            setTextColor(FOREGROUND_INTENSITY); // ȸ������ ǥ��
        }
        printf("%2d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// �Ͼ������ ����
}
void bubbleCode()
{
    system("mode con cols=47 lines=22 | title �������� �ڵ�");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    backGround(47, 22);
    int x = 2;
    int y = 0;
    int i = 0;

    i++;    gotoxy(x, y + i);    printf("���� ���� �ڵ�");
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
    printf("����â���� ���ư���(EnterŰ �Է�)");

}
void bubbleSortRun()
{
    system("mode con cols=130 lines=45 | title ��������_���� â");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //���� ������ ������ ������ ��������ִ� �Լ�
    int col = 130;
    int row = 45;
    backGround(col, row);
    int n = 0;
    int x = 10;
    int y = 2;
    int i = 0;
    int j = 0;
    gotoxy(x, y);
    printf("�迭�� ũ�⸦ �Է��ϼ��� : ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    gotoxy(x, y + 2);
    printf("���ڸ� �Է��ϰ� ����� �������ּ���.");
    gotoxy(x, y + 3);
    printf("���� �Է� ���� : 1 2 3 4 5 ");
    gotoxy(x, y + 5);
    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    gotoxy(x, y + 7);
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    printf("���� �� �迭 : ");
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
                printfA(arr, n, j);  //5�� ��� �ڵ�
                printf(" = > ");
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                printfB(arr, n, j + 1);
                // ���� ������ ��� (���ĵǴ� ���ڸ� ����������)
                _getch();
            }
        }
    }
    y += 3;
    gotoxy(x, y);
    printf("���� �� �迭 : ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", arr[i]);
    }

    gotoxy(x, 40);
    printf("�ڵ� ����(EnterŰ �Է�)");
    gotoxy(x, 42);
    printf("����â���� ���ư���(ESCŰ �Է�)");
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
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else if (i == b)
        {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else {
            setTextColor(FOREGROUND_INTENSITY); // ȸ������ ǥ��
        }
        printf("%2d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// �Ͼ������ ����
}
void printSel(int arr[], int n, int a, int b)
{
    for (int i = 0; i < n; i++) {
        if (i == a) {
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else if (i == b)
        {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else {
            setTextColor(FOREGROUND_INTENSITY); // ȸ������ ǥ��
        }
        printf("%2d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// �Ͼ������ ����
}
void titleSelect()
{
    system("mode con cols=150 lines=25 | title ��������");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 150;
    int rows = 25;
    backGround(cols, rows);
    //13(�ܾ��� ��) * 8 + 2(����) * 11(������ ��) + 4(�߰� Sort�κ�)  =  104 + 22 + 4 = 130
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
            gotoxy(x, y);        printf("���� ���� : �迭���� ���� ���� ���Ҹ� "); break;
        case 1:
            gotoxy(x, y + i);    printf("            ã�� ù ��° ���ҿ� ��ȯ�ϰ�, "); break;
        case 2:
            gotoxy(x, y + i);    printf("            �������� �� ��°�� ���� ���Ҹ� ã��"); break;
        case 3:
            gotoxy(x, y + i);    printf("            �� ��° ���ҿ� ��ȯ�Ͽ�,"); break;
        case 4:
            gotoxy(x, y + i);    printf("            �̸� �ݺ��Ͽ� �����ϴ� ���"); break;
        }
    }

    gotoxy(x, y + 9);
    printf("���� ������(Enter)");
    gotoxy(x, y + 10);
    printf("�� ������(ESC)");
}
void selectTime()
{
    int x = 70;
    int y = 12;

    for (int i = 0; i < 3; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y + i);    printf("�ð� ���⵵(��-��ǥ���)"); break;
        case 1:
            gotoxy(x, y + i);    printf("�ְ� : n^2 => �׻� ������ ���� �� �� ��ȯ�� �����մϴ�."); break;
        case 2:
            gotoxy(x, y + i);    printf("�־� : n^2 => �׷��� �ʹ��� ū �迭�� ��� ȿ���� �������ϴ�."); break;
        }
    }
}
void selectCode() {
    system("mode con cols=47 lines=22 | title �������� �ڵ�");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    backGround(47, 22);
    int x = 2;
    int y = 0;
    int i = 0;

    i++;    gotoxy(x, y + i);    printf("���� ���� �ڵ�");
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
    printf("����â���� ���ư���(EnterŰ �Է�)");
}
void selectSortRun()
{
    system("mode con cols=130 lines=45 | title ��������_���� â");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //���� ������ ������ ������ ��������ִ� �Լ�
    int col = 130;
    int row = 45;
    backGround(col, row);
    int n = 0;
    int x = 10;
    int y = 2;
    int i = 0;
    int j = 0;
    gotoxy(x, y);
    printf("�迭�� ũ�⸦ �Է��ϼ��� : ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    gotoxy(x, y + 2);
    printf("���ڸ� �Է��ϰ� ����� �������ּ���.");
    gotoxy(x, y + 3);
    printf("���� �Է� ���� : 1 2 3 4 5 ");
    gotoxy(x, y + 5);
    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    gotoxy(x, y + 7);
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    printf("���� �� �迭 : ");
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
    printf("���� �� �迭 : ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", arr[i]);
    }

    gotoxy(x, 40);
    printf("�ڵ� ����(EnterŰ �Է�)");
    gotoxy(x, 42);
    printf("����â���� ���ư���(ESCŰ �Է�)");
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
    system("mode con cols=128 lines=25 | title ��������");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //���� ������ ������ ������ ��������ִ� �Լ�
    int col = 128;
    int row = 25;
    backGround(col, row);
    //10(�ܾ��� ��) * 8 + 2(����) * 11(������ ��) + 4(�߰� Sort�κ�)  =  80 + 22 + 4 = 106
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
            gotoxy(x, y);        printf("���� ���� : �� ��° �ڷ���� "); break;
        case 1:
            gotoxy(x, y + i);    printf("            �����Ͽ� �� ��(����)�� �ڷ��� "); break;
        case 2:
            gotoxy(x, y + i);    printf("            ���Ͽ� ������ ��ġ�� ������ �� "); break;
        case 3:
            gotoxy(x, y + i);    printf("            �ڷḦ ��ĭ ��(������)�� �ű�� ������ �ڸ���"); break;
        case 4:
            gotoxy(x, y + i);    printf("            �ڷḦ �����Ͽ� �����ϴ� ���."); break;
        }
    }
    gotoxy(x, y + 9);
    printf("���� ������(Enter)");
    gotoxy(x, y + 10);
    printf("�� ������(ESC)");
}
void insertTime() {
    int x = 75;
    int y = 12;

    for (int i = 0; i < 3; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y + i);    printf("�ð� ���⵵(��-��ǥ���)"); break;
        case 1:
            gotoxy(x, y + i);    printf("�ּ� : n   => �̹� ���ĵ� �迭"); break;
        case 2:
            gotoxy(x, y + i);    printf("�־� : n^2 => �迭�� �������� ���ĵǾ� ���� ��"); break;
        }
    }
}
void printinsertA(int arr[], int n, int a, int b) {
    for (int i = 0; i < n; i++) {
        if (i == a) {
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else if (i == b)
        {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else
        {
            setTextColor(FOREGROUND_INTENSITY); // ȸ������ ǥ��
        }
        printf("%d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// �Ͼ������ ����
}
void printinsertB(int arr[], int n, int a, int b)
{
    for (int i = 0; i < n; i++) {
        if (i == a) {
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else if (i == b)
        {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else {
            setTextColor(FOREGROUND_INTENSITY); // ȸ������ ǥ��
        }
        printf("%d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// �Ͼ������ ����
}
void insertCode()
{
    system("mode con cols=47 lines=22 | title �������� �ڵ�");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
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
            gotoxy(x, y + i);    printf("���� ���� �ڵ�"); break;
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
    printf("����â���� ���ư���(EnterŰ �Է�)");
}
void insertSortRun()
{
    system("mode con cols=130 lines=45 | title ��������_���� â");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //���� ������ ������ ������ ��������ִ� �Լ�
    int col = 130;
    int row = 45;
    backGround(col, row);
    int n = 0;
    int x = 10;
    int y = 2;
    int i = 0;
    int j = 0;
    gotoxy(x, y);
    printf("�迭�� ũ�⸦ �Է��Ͻÿ� : ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    gotoxy(x, y + 2);
    printf("���ڸ� �Է��ϰ� ����� �������ּ���.");
    gotoxy(x, y + 3);
    printf("���� : 1 2 3 4 5 ");
    gotoxy(x, y + 4);
    printf("�Է��� �������� EnterŰ�� �����ּ���.");
    gotoxy(x, y + 6);
    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    gotoxy(x, y + 8);
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    printf("���� �� �迭 : ");
    for (i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }
    y += 9;
    int key = 0;
    // �迭�� ó������ ������ ��ȸ
    for (i = 1; i < n; i++) {
        y++;
        key = arr[i];
        j = i - 1;
        /* ���� ���Һ��� ���� ���Ҹ� ã�Ƽ� ���������� �̵� */
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
    printf("���� �� �迭 : ");
    for (i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }
    gotoxy(x, 40);
    printf("�ڵ� ����(EnterŰ �Է�)");
    gotoxy(x, 42);
    printf("����â���� ���ư���(ESCŰ �Է�)");
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
    system("mode con cols=120 lines=25 | title �� ����");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //���� ������ ������ ������ ��������ִ� �Լ�
    int col = 120;
    int row = 25;
    backGround(col, row);
    //9(�ܾ��� ��) * 8 + 2(����) * 11(������ ��) + 4(�߰� Sort�κ�)  =  72 + 22 + 4 = 98
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
            gotoxy(x, y);        printf("�� ���� : ������ ���� ���� �˰�������,"); break;
        case 1:
            gotoxy(x, y + i);    printf("          ���� ������ ����Ͽ� �迭�� ��Ҹ� "); break;
        case 2:
            gotoxy(x, y + i);    printf("          ���ϰ� ��ȯ�ϴ� ���� ��� "); break;
        }
    }

    gotoxy(x, y + 9);
    printf("���� ������(Enter)");
    gotoxy(x, y + 10);
    printf("�� ������(ESC)");
}
void shellTime()
{
    int x = 60;
    int y = 12;

    for (int i = 0; i < 4; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y + i);    printf("�ð� ���⵵(��-��ǥ���)"); break;
        case 1:
            gotoxy(x, y + i);    printf("�ְ� : n   => �̹� ���ĵ� ���°ų� ���� ���ĵ� ����"); break;
        case 2:
            gotoxy(x, y + i);    printf("�־� : n^2 => ���������� �ſ� �۾�����,"); break;
        case 3:
            gotoxy(x, y + i);    printf("              �κ� ����Ʈ�� ���� ���ĵ��� ���� ����"); break;
        }
    }
}
void printshellA(int arr[], int n, int a, int gap) {
    for (int i = 0; i < n; i++) {
        if (i == a) {
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else if (i == a - gap)
        {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else
        {
            setTextColor(FOREGROUND_INTENSITY); // ȸ������ ǥ��
        }
        printf("%2d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// �Ͼ������ ����
}
void printshellB(int arr[], int n, int a, int b)
{
    for (int i = 0; i < n; i++) {
        if (i == a) {
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else if (i == b)
        {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else {
            setTextColor(FOREGROUND_INTENSITY); // ȸ������ ǥ��
        }
        printf("%2d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// �Ͼ������ ����
}
void shellCode()
{
    system("mode con cols=78 lines=20 | title ������ �ڵ�");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
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
            gotoxy(x, y + i);   printf("�� ���� �ڵ�"); break;
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
    printf("����â���� ���ư���(EnterŰ �Է�)");
}
void shellSortRun()
{
    system("mode con cols=130 lines=45 | title ������_���� â");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //���� ������ ������ ������ ��������ִ� �Լ�
    int col = 130;
    int row = 45;
    backGround(col, row);
    int n = 0;
    int x = 10;
    int y = 2;
    int i = 0;
    gotoxy(x, y);
    printf("�迭�� ũ�⸦ �Է��Ͻÿ� : ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    gotoxy(x, y + 2);
    printf("���ڸ� �Է��ϰ� ����� �������ּ���.");
    gotoxy(x, y + 3);
    printf("���� : 1 2 3 4 5 ");
    gotoxy(x, y + 4);
    printf("�Է��� �������� EnterŰ�� �����ּ���.");
    gotoxy(x, y + 6);
    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    gotoxy(x, y + 8);
    int max = arr[0];
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    printf("���� �� �迭 : ");
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
        // ���ݿ� ���� ���� ���� ����
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
            // �κ����տ� ���� ���� ���� ����
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
            // ���� ���Ҹ� �ùٸ� ��ġ�� ����
            arr[j] = temp;
            printshellB(arr, n, i, j);
            _getch();
        }
    }
    x = 10;
    gotoxy(x, y + 2);
    printf("���� �� �迭 : ");
    for (i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }
    gotoxy(x, 40);
    printf("�ڵ� ����(EnterŰ �Է�)");
    gotoxy(x, 42);
    printf("����â���� ���ư���(ESCŰ �Է�)");
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
    system("mode con cols=140 lines=25 | title �� ����");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //���� ������ ������ ������ ��������ִ� �Լ�
    int cols = 140;
    int rows = 25;
    backGround(cols, rows);
    //8(�ܾ��� ��) * 8 + 2(����) * 11(������ ��) + 4(�߰� Sort�κ�)  =  64 + 26 = 90
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
            gotoxy(x, y);        printf("�� ���� : ���� �� �ڷᱸ���� ����Ͽ� ���ķ�,"); break;
        case 1:
            gotoxy(x, y + i);    printf("          �ִ��̳� �ּڰ��� ã�Ƴ��� ���� ����ϴµ� "); break;
        case 2:
            gotoxy(x, y + i);    printf("          ������ �ִ� ���� �ּ� ���� �����ϴ� ���"); break;
        }
    }

    gotoxy(x, y + 9);
    printf("���� ������(Enter)");
    gotoxy(x, y + 10);
    printf("�� ������(ESC)");
}
void heapTime()
{
    int x = 75;
    int y = 12;

    for (int i = 0; i < 5; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y + i);    printf("�ð� ���⵵(��-��ǥ���)"); break;
        case 1:
            gotoxy(x, y + i);    printf("�ְ� : nlogn"); break;
        case 2:
            gotoxy(x, y + i);    printf("�Է� �����Ϳ� ������� �׻� ������ �ð� ���⵵�� ���� Ư¡"); break;
        case 3:
            gotoxy(x, y + i);    printf("�־� : nlogn"); break;
        case 4:
            gotoxy(x, y + i);    printf("�Է� �����Ϳ� ������� �׻� ������ �ð� ���⵵�� ���� Ư¡"); break;
        }
    }
}
int divideByTwo(int number, int height) {
    if (number <= 1) {
        return height;
    }

    int result = number / 2;

    // ��� ȣ�� �� height ���� ����
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
            gotoxy(x - 3, y + 1);   printf("��");
            gotoxy(x - 4, y + 2);   printf("%d ", arr[1]);
            break;
        case 2:
            gotoxy(x + 2, y + 1);   printf("��");
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
            gotoxy(x - 3, y + 1);   printf("��");
            gotoxy(x - 4, y + 2);   printf("%d ", arr[1]);
            break;
        case 2:
            gotoxy(x + 2, y + 1);   printf("��");
            gotoxy(x + 4, y + 2);   printf("%d ", arr[2]);
            break;
        case 3:
            gotoxy(x - 6, y + 3);   printf("��");
            gotoxy(x - 7, y + 4);   printf("%d", arr[3]);
            break;
        case 4:
            gotoxy(x - 3, y + 3);   printf("��");
            gotoxy(x - 1, y + 4);   printf("%d ", arr[4]);
            break;
        case 5:
            gotoxy(x + 2, y + 3);   printf("��");
            gotoxy(x + 1, y + 4);   printf("%d", arr[5]);
            break;
        case 6:
            gotoxy(x + 5, y + 3);   printf("��");
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
    system("mode con cols=50 lines=33 | title ������ �ڵ�");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    backGround(50, 33);
    int x = 2;
    int y = 1;

    for (int i = 0; i < 26; i++)
    {
        switch (i)
        {
        case 0:
            gotoxy(x, y + i);   printf("�� ���� �ڵ�"); break;
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
    printf("����â���� ���ư���(EnterŰ �Է�)");
}
void heapSortRun()
{
    system("mode con cols=130 lines=45 | title ������_���� â");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //���� ������ ������ ������ ��������ִ� �Լ�
    int col = 130;
    int row = 45;
    backGround(col, row);
    int n = 0;
    int x = 2; //150�� �� 75 ��, 75����
    int y = 2;
    gotoxy(x, y);
    printf("�迭�� ũ�⸦ �Է��Ͻÿ�(�ִ� 7) : ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    gotoxy(x, y + 2);
    printf("���ڸ� �Է��ϰ� ����� �������ּ���.");
    gotoxy(x, y + 3);
    printf("���� : 1 2 3 4 5 ");
    gotoxy(x, y + 4);
    printf("�Է��� �������� EnterŰ�� �����ּ���.");
    gotoxy(x, y + 6);
    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    gotoxy(x, y + 8);
    printf("���� �� �迭 : ");
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
    printf("���� �� �迭 : ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", arr[i]);
    }
    gotoxy(x, 40);
    printf("�ڵ� ����(EnterŰ �Է�)");
    gotoxy(x, 42);
    printf("����â���� ���ư���(ESCŰ �Է�)");
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
    system("mode con cols=200 lines=25 | title ��� ����");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 200;
    int rows = 25;
    backGround(cols, rows);
    //9(�ܾ��� ��) * 8 + 2(����) * 11(������ ��) + 4(�߰� Sort�κ�)  =  72 + 22 + 4 = 98
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
            gotoxy(x, y);        printf("��� ���� : ����� ���� ������ �ʰ� ,"); break;
        case 1:
            gotoxy(x, y + i);    printf("            ������ ���ڿ��� ���� �ڷḦ "); break;
        case 2:
            gotoxy(x, y + i);    printf("            �ڸ������� ���ϴ� ���� ��� "); break;
        }
    }

    gotoxy(x, y + 9);
    printf("���� ������(Enter)");
    gotoxy(x, y + 10);
    printf("�� ������(ESC)");
}
void radixTime()
{
    int x = 100;
    int y = 12;

    for (int i = 0; i < 5; i++)
    {
        switch (i) {
        case 0:
            gotoxy(x, y + i);    printf("�ð� ���⵵(��-��ǥ���) d : �������� �ִ� �ڸ���"); break;
        case 1:
            gotoxy(x, y + i);    printf("�ְ� : d * n "); break;
        case 2:
            gotoxy(x, y + i);    printf("�����Ͱ� �յ��ϰ� �����Ǿ� �־ ��� �ڸ����� ������ �ʰ� ������ ������ ���"); break;
        case 3:
            gotoxy(x, y + i);    printf("�־� : d * (n + k)"); break;
        case 4:
            gotoxy(x, y + i);    printf("��� �������� �ڸ����� ���ؾ� �ϴ� ���"); break;
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
    system("mode con cols=63 lines=47 | title �������� �ڵ�");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    backGround(63, 47);
    int x = 2;
    int y = 1;
    for (int i = 0; i < 42; i++)
    {
        switch (i)
        {
        case 0:
            gotoxy(x, y + i);   printf("��� ���� �ڵ�"); break;
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
    printf("����â���� ���ư���(EnterŰ �Է�)");
}
void radixSortRun()
{
    system("mode con cols=130 lines=45 | title ������_���� â");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //���� ������ ������ ������ ��������ִ� �Լ�
    backGround(130, 45);
    int n = 0;
    int x = 3;
    int y = 2;
    gotoxy(x, y);
    printf("�迭�� ũ�⸦ �Է��Ͻÿ� : ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    gotoxy(x, y + 2);
    printf("���ڸ� �Է��ϰ� ����� �������ּ���.");
    gotoxy(x, y + 3);
    printf("���� : 1 2 3 4 5 ");
    gotoxy(x, y + 4);
    printf("�Է��� �������� EnterŰ�� �����ּ���.");
    gotoxy(x, y + 6);
    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    gotoxy(x, y + 8);
    printf("���� �� �迭 : ");
    y += 9;
    for (int i = 0; i < n; i++) {
        printf("%3d ", arr[i]);
    }

    int max = getMax(arr, n);  // �迭���� ���� ū ���Ҹ� ã���ϴ�.
    int maxDigitCount = 0;  // �ִ� �ڸ��� ī��Ʈ

    // ���� ū ������ �ڸ��� ���� ����մϴ�.
    while (max > 0) {
        max /= 10;
        maxDigitCount++;
    }

    int* output = (int*)malloc(n * sizeof(int));  // ����� ������ ���� �Ҵ� �迭
    int* count = (int*)malloc(10 * sizeof(int));  // 0���� 9������ �ڸ����� ���� ���� �迭

    int exp = 1;  // ���� �ڸ��� (1, 10, 100, ...)
    int num = 0;

    for (int digit = 0; digit < maxDigitCount; digit++) {
        // count �迭 �ʱ�ȭ
        for (int i = 0; i < 10; i++) {
            count[i] = 0;
        }

        // �� �ڸ����� ���� count �迭�� �����մϴ�.
        for (int i = 0; i < n; i++) {
            count[(arr[i] / exp) % 10]++;
        }

        // count �迭�� ������Ʈ�Ͽ� �� �ڸ����� �� ��ġ�� ����մϴ�.
        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        // arr �迭�� ���Ҹ� output �迭�� �ùٸ� ��ġ�� �־� �����մϴ�.
        for (int i = n - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }

        // output �迭�� ������ arr �迭�� �����մϴ�.
        for (int i = 0; i < n; i++) {
            arr[i] = output[i];
        }
        num++;
        gotoxy(x, y + digit + num);
        for (int i = 0; i < n; i++)
        {
            printf("%3d ", arr[i]);
        }
        exp *= 10;  // ���� �ڸ����� �̵�

    }
    free(output);  // ���� �Ҵ�� �迭�� �����մϴ�.
    free(count);   // ���� �Ҵ�� �迭�� �����մϴ�.

    gotoxy(x, 38);
    printf("���� �� �迭 : ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", arr[i]);
    }
    gotoxy(x, 40);
    printf("�ڵ� ����(EnterŰ �Է�)");
    gotoxy(x, 42);
    printf("����â���� ���ư���(ESCŰ �Է�)");
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
    system("mode con cols=100 lines=55 | title ��������");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 100;
    int rows = 55;
    backGround(cols, rows);
    //9(�ܾ��� ��) * 8 + 2(����) * 11(������ ��) + 4(�߰� Sort�κ�)  =  72 + 22 + 4 = 98
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
            gotoxy(x, y);        printf("���� ���� : ���� ���� ����� ��� �˰�����"); break;
        case 1:
            gotoxy(x, y + i);    printf("            �̿��Ͽ�, �־��� ���Ұ� �ϳ��� ���� �� ���� "); break;
        case 2:
            gotoxy(x, y + i);    printf("            ������ �ϰ� ������ �����ϸ鼭 �����ϴ� ��� "); break;
        }
    }

    y += 3;

    for (int i = 4; i < 6; i++)
    {
        switch (i) {
        case 4:
            gotoxy(x, y + i);    printf("�ð� ���⵵(��-��ǥ���) : �ּ� : nlogn => �׻� ���� ����� ����"); break;
        case 5:
            gotoxy(x, y + i);    printf("                           �־� : nlogn => �׻� ���� ����� ����"); break;
        }
    }

    y += 3;

    for (int i = 7; i < 30; i++)
    {
        switch (i)
        {
        case 7:
            gotoxy(x, y + i);   printf("���� ���� �ڵ�"); break;
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
    printf("���� ������(Enter)");
    gotoxy(x, 53);
    printf("�� ������(ESC)");

}
void merge(int arr[], int Left, int mid, int Right, int col, int row, int num) {
    int i, j, k;
    int n1 = mid - Left + 1;
    int n2 = Right - mid;

    // �ӽ� �迭�� ���� �޸� �Ҵ�
    int* L = malloc(n1 * sizeof(int));
    int* R = malloc(n2 * sizeof(int));

    int x = 0;
    int y = row;

    // �ӽ� �迭�� ������ ����
    for (i = 0; i < n1; i++)
        L[i] = arr[Left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // (�߰�) ���� ���� ���
    gotoxy(col, y + num);
    printf("���� �迭: ");
    for (x = 0; x < n1; x++)
    {
        printf("%d ", L[x]);
    }
    gotoxy(col, y + 1 + num);
    printf("���� �迭: ");
    for (x = 0; x < n2; x++)
    {
        printf("%d ", R[x]);
    }
    _getch();

    // �ӽ� �迭�� �պ��Ͽ� ���ĵ� �迭 ����
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

    // ���� ��ҵ� ����
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

    // (�߰�) ���� ��� ���
    gotoxy(col, y + 2 + num);
    printf("�պ� ���: ");
    int gap = 0;
    for (int x = Left; x <= Right; x++)
    {
        printf("%d ", arr[x]);
        gap++;
    }

    // �ӽ� �迭�� ���� �޸� ����
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
    system("mode con cols=130 lines=45 | title ��������_���� â");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //���� ������ ������ ������ ��������ִ� �Լ�
    backGround(130, 45);
    int n = 0;
    int x = 2; //150�� �� 75 ��, 75����
    int y = 2;
    int count = 0;
    gotoxy(x, y);
    printf("�迭�� ũ�⸦ �Է��Ͻÿ� : ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    gotoxy(x, y + 2);
    printf("���ڸ� �Է��ϰ� ����� �������ּ���.");
    gotoxy(x, y + 3);
    printf("���� : 1 2 3 4 5 ");
    gotoxy(x, y + 4);
    printf("�Է��� �������� EnterŰ�� �����ּ���.");
    gotoxy(x, y + 6);
    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //���� ������ ������ ������ ��������ִ� �Լ�
    gotoxy(x, y + 8);
    printf("���� �� �迭 : ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }

    MERGESORT(arr, 0, n - 1, x, y + 10);
    num = 0;
    cols = 2;
    gotoxy(x, y);
    printf("���� �� �迭 : ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }
    free(arr);
    gotoxy(x, 42);
    printf("�����ðڽ��ϱ�?(EnterŰ �Է�)");
    _getch();
}

void printQuick() {
    system("mode con cols=100 lines=55 | title �� ����");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 100;
    int rows = 55;
    backGround(cols, rows);
    //9(�ܾ��� ��) * 8 + 2(����) * 11(������ ��) + 4(�߰� Sort�κ�)  =  72 + 22 + 4 = 98
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
            gotoxy(x, y);        printf("�� ���� : ���� ���� ����� ��� �˰�������"); break;
        case 1:
            gotoxy(x, y + i);    printf("          �ǹ�(pivot)�� �����Ͽ� ���ػ�� ���� ��Ҵ� �ǹ��� ���ʿ�"); break;
        case 2:
            gotoxy(x, y + i);    printf("          ū ��Ҵ� �����ʿ� ��ġ�ϴ� ����� �ݺ��ؼ� �����ϴ� ���"); break;
        }
    }

    y += 1;

    for (int i = 4; i < 9; i++)
    {
        switch (i) {
        case 4:
            gotoxy(x, y + i);   printf("�ð� ���⵵(��-��ǥ���) : �ּ� nlogn"); break;
        case 5:
            gotoxy(x, y + i);   printf("�ּ� : nlogn"); break;
        case 6:
            gotoxy(x, y + i);   printf("�׻� �߰������� �����ϴ� ���"); break;
        case 7:
            gotoxy(x, y + i);   printf("�־� : n ^ 2"); break;
        case 8:
            gotoxy(x, y + i);   printf("���� �۰ų� ���� ū ���Ҹ� pivot���� �����ϰ�, �迭�� �̹� ���ĵǾ� �ִ� ���"); break;
        }
    }

    y += 3;

    for (int i = 7; i < 31; i++)
    {
        switch (i)
        {
            i += 3;
        case 7:
            gotoxy(x, y + i);   printf("�� ���� �ڵ�"); break;
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
    printf("���� ������(Enter)");
    gotoxy(x, 52);
    printf("�� ������(ESC)");
}
void pR(int arr[], int n, int a, int b)
{
    int min = arr[0];
    for (int i = 0; i < n; i++) {
        if (i == a) {
            setTextColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else if (i == b)
        {
            setTextColor(FOREGROUND_BLUE | FOREGROUND_INTENSITY); // ���������� ǥ��
        }
        else {
            setTextColor(FOREGROUND_INTENSITY); // ȸ������ ǥ��
        }
        printf("%2d ", arr[i]);
    }
    setTextColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);// �Ͼ������ ����
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
    printf("���Ӱ� ���ĵ� �迭 : ");
    pR(arr, size, high, i + 1);
    _getch();
    return (i + 1);
}
void quickSortRun()
{
    system("mode con cols=130 lines=45 | title ������_���� â");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //���� ������ ������ ������ ��������ִ� �Լ�
    backGround(130, 45);
    int n = 0;
    int x = 2; //150�� �� 75 ��, 75����
    int y = 2;
    gotoxy(x, y);
    printf("�迭�� ũ�⸦ �Է��Ͻÿ� : ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    gotoxy(x, y + 2);
    printf("���ڸ� �Է��ϰ� ����� �������ּ���.");
    gotoxy(x, y + 3);
    printf("���� : 1 2 3 4 5 ");
    gotoxy(x, y + 4);
    printf("�Է��� �������� EnterŰ�� �����ּ���.");
    gotoxy(x, y + 6);
    printf("�迭 ��Ҹ� �Է��ϼ���: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    gotoxy(x, y + 8);
    printf("���� �� �迭 : ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }

    quickSort(arr, n, 0, n - 1);

    gotoxy(x, y + 39);
    printf("���� �� �迭 : ");
    for (int i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }
    free(arr);
    gotoxy(x, y + 41);
    printf("�����ðڽ��ϱ�?(EnterŰ �Է�)");
    _getch();
}

int graphUse() {
    system("mode con cols=100 lines=25 | title �˰���");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //���� ������ ������ ������ ��������ִ� �Լ�
    while (1)
    {
        backGround(100, 25);
        gotoxy(45, 2);
        printf("��� ��");
        gotoxy(30, 5);
        printf("A : 0, B : 1, C : 2 .... Z : 25"); //30
        gotoxy(25, 7);
        printf("������ ������ ���� �Է� ���� ) 2 0 => B A"); //32
        gotoxy(25, 9);
        printf("������ ����, ����ġ ���� ) 2 0 5 => ����:C ����:A ����ġ:5");
        gotoxy(25, 11);
        printf("�Է� ����� -1 -1 �� �Է��ϸ� �˴ϴ�.");
        gotoxy(25, 13);
        printf("EnterŰ�� �̿��Ͽ� ������ �Է��� �����մϴ�.");
        gotoxy(25, 15);
        printf("ESCŰ�� �̿��Ͽ� �� �������� �̵��� �����մϴ�.");
        gotoxy(40, 19);
        printf("����������(Enter)");
        gotoxy(40, 21);
        printf("��������(ESC)");
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
    system("mode con cols=50 lines=15 | title �˰���");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int x = 10; //title������ x ������ŭ ����
    int y = 4; //selectionScreen�� y ���� ����
    gotoxy(x - 2, y);
    printf("  ");
    backGround(50, 15);
    gotoxy(x - 2, y);
    printf("��1. DFS(���� �켱 Ž��)");
    gotoxy(x, y + 1);
    printf("2. BFS(�ʺ� �켱 Ž��)");
    gotoxy(x, y + 2);
    printf("3. ũ�罺Į");
    gotoxy(x, y + 3);
    printf("4. ����");
    gotoxy(x, y + 4);
    printf("5. ���� ����\n");
    gotoxy(x + 12, y + 6);

    gotoxy(x - 5, y + 8);
    printf("ESC�� ������ ���� �� �������� ���ư��ϴ�.");
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
                printf("��");
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
                printf("��");
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
    system("mode con cols=100 lines=30 | title ���� �켱 Ž��");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 100;
    int rows = 30;
    backGround(cols, rows);
    //3(�ܾ��� ��) * 8 + 2(����) * 11(������ ��) + 4(�߰� Sort�κ�)  =  24 + 22 + 4 = 50
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
    printf("DFS �۵�����");
    gotoxy(x, y + 2);
    printf("1�ܰ� : ���� �������� ���� �������� ���ư� �� �ִ��� ���� ���� Ž���մϴ�.");
    gotoxy(x, y + 4);
    printf("2�ܰ� : ���� �ڷᱸ���� ����Ͽ� ���� �������� ���� �������� �̵��� ��");
    gotoxy(x, y + 5);
    printf("        �������� ������ ���ÿ� �ٸ� �������� �����ϰ� �ϳ��� ��θ� ������ Ž���մϴ�.");
    gotoxy(x, y + 7);
    printf("3�ܰ� : ���� �����Ѵٸ�, ���� �������� ���ư���");
    gotoxy(x, y + 8);
    printf("        ���� �湮���� ���� �ٸ� ������ �ִ��� Ȯ���ϰ� ������ �����մϴ�.");
    gotoxy(x, 26);
    printf("���� ������(Enter)");
    gotoxy(x, 27);
    printf("�� ������(ESC)");
}
#define MAX_VERTICES 100
#define FALSE 0
#define TRUE 1
typedef int element;
// ���� ����ü ����
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
    int vertex;  // �������� �����ϴ� �迭
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
        printf("\n �׷��� ������ ������ �ʰ��Ͽ����ϴ�!");
        return;
    }
    g->n++;
}
void insertEdge(graphType* g, int u, int v)
{
    graphNode* node;

    if (u >= g->n || v >= g->n) {
        printf("\n �׷����� ���� �����Դϴ�!");
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
        printf("\n\t\t���� %c�� ���� ����Ʈ", i + 65);
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
    system("mode con cols=100 lines=30 | title ���� �켱 Ž��");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int i;
    graphType* graph;
    int num = 0;
    int pause;
    // �׷��� �ʱ�ȭ
    graph = (graphType*)malloc(sizeof(graphType));
    createGraph(graph);
    printf("�� ���� ������ ����ðڽ��ϱ�? : ");
    scanf_s("%d", &num);
    for (i = 0; i < num; i++)
    {
        insertVertex(graph, i);
    }
    int vertex = 0;
    int linkVertex = 0;
    while (1)
    {
        printf("������ ����� ������ �Է��Ͻÿ� : ");
        scanf_s("%d %d", &vertex, &linkVertex);
        if (vertex == -1 && linkVertex == -1)
        {
            break;
        }
        insertEdge(graph, vertex, linkVertex);
    }
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    printf("\n Graph�� ���� ����Ʈ ");
    print_adjList(graph);
    printf("\n\n� �������� DFS�� �����Ͻðڽ��ϱ�? : ");
    scanf_s("%d", &num);
    printf("\n\n ���� �켱 Ž�� >> ");
    DFS_adjList(graph, num);
    // ���� �켱 Ž�� ����
    gotoxy(0, 28);
    printf("�����ðڽ��ϱ�?(EnterŰ �Է�)");
    _getch();
}

void titleBFS()
{
    system("mode con cols=100 lines=30 | title �ʺ� �켱 Ž��");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 100;
    int rows = 30;
    backGround(cols, rows);
    //3(�ܾ��� ��) * 8 + 2(����) * 11(������ ��) + 4(�߰� Sort�κ�)  =  24 + 22 + 4 = 50
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
    printf("BFS �۵�����");
    gotoxy(x, y + 2);
    printf("1�ܰ� : ���� �������κ��� ������ �������� ���� �湮�ϰ�,");
    gotoxy(x, y + 3);
    printf("        �� �������δ� �� ������� ������ �������� �湮�ϴ� ������ Ž���� �����մϴ�.");
    gotoxy(x, y + 5);
    printf("2�ܰ� : ť �ڷᱸ���� ����Ͽ� ���� �������� ������ �湮�� �������� ������� �����ϰ�");
    gotoxy(x, y + 6);
    printf("        ó���մϴ�. �̸� ���� �������� Ž���� �����մϴ�.");
    gotoxy(x, y + 8);
    printf("3�ܰ� : ť�� �� ������ �� ������ �ݺ��մϴ�.");
    gotoxy(x, y + 9);
    printf("        �׷��� �������� ť�� �� ���� Ȯ���մϴ�.");
    gotoxy(x, 26);
    printf("���� ������(Enter)");
    gotoxy(x, 27);
    printf("�� ������(ESC)");
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
    system("mode con cols=100 lines=30 | title ���� �켱 Ž��");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int i;
    graphType* graph;
    int num = 0;
    int pause = 0;
    // �׷��� �ʱ�ȭ
    graph = (graphType*)malloc(sizeof(graphType));
    createGraph(graph);
    printf("�� ���� ������ ����ðڽ��ϱ�? : ");
    scanf_s("%d", &num);
    for (i = 0; i < num; i++)
    {
        insertVertex(graph, i);
    }
    int vertex = 0;
    int linkVertex = 0;
    while (1)
    {
        printf("������ ����� ������ �Է��Ͻÿ� : ");
        scanf_s("%d %d", &vertex, &linkVertex);
        if (vertex == -1 && linkVertex == -1)
        {
            break;
        }
        insertEdge(graph, vertex, linkVertex);
    }
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    printf("\n Graph�� ���� ����Ʈ ");
    print_adjList(graph);
    printf("\n� �������� BFS�� �����Ͻðڽ��ϱ�? : ");
    scanf_s("%d", &num);
    printf("\n\n\n\n �ʺ� �켱 Ž�� >> ");
    BFS_adjList(graph, num);
    gotoxy(0, 28);
    printf("�����ðڽ��ϱ�?(EnterŰ �Է�)");
    _getch();
}

void titleKruskal() {
    system("mode con cols=100 lines=30 | title ũ�罺Į �˰���");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 100;
    int rows = 30;
    backGround(cols, rows);
    //7(�ܾ��� ��) * 8 + 2(����) * 11(������ ��) + 4(�߰� Sort�κ�)  =  56 + 22 + 4 = 82
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
    printf("ũ�罺Į �۵�����");
    gotoxy(x, y + 2);
    printf("1�ܰ� : ��� ������ ����ġ�� ���� ������������ �����Ѵ�.");
    gotoxy(x, y + 4);
    printf("2�ܰ� : ����ġ�� ���� ���� ������ �����Ѵ�. �� �̶� ������ �׷�������");
    gotoxy(x, y + 5);
    printf("        �и���Ű�� ������ ������ �� ����.");
    gotoxy(x, y + 7);
    printf("3�ܰ� : ������ n-1�� ���Ե� ������ �ݺ��մϴ�.");
    gotoxy(x, y + 8);
    printf("        �׷��� ������ n-1���� �ּ� ��� ���� Ʈ���� �ϼ��˴ϴ�.");
    gotoxy(x, 26);
    printf("���� ������(Enter)");
    gotoxy(x, 27);
    printf("�� ������(ESC)");
}
#define MAX_EDGES 100
// ���� ����ü ����
typedef struct {
    int src, dest, weight;
} Edge;
// ������ ���� �� �Լ�
int compare(const void* a, const void* b) {
    return ((Edge*)a)->weight - ((Edge*)b)->weight;
}
// �θ� ã�� �Լ�
int findParent(int parent[], int i) {
    if (parent[i] == -1)
        return i;
    return findParent(parent, parent[i]);
}
// �� �κ������� ��ġ�� �Լ�
void unionSets(int parent[], int x, int y) {
    int xset = findParent(parent, x);
    int yset = findParent(parent, y);
    parent[xset] = yset;
}
// ũ�罺Į �˰��� �Լ�
void kruskalMST(Edge edges[], int V, int E) {
    Edge* result = (Edge*)malloc((V - 1) * sizeof(Edge)); // �ּ� ���� Ʈ���� ������ ������ �迭

    int* parent = (int*)malloc(V * sizeof(int)); // �� ������ �θ� ������ �迭

    // ������ ����ġ �������� ����
    qsort(edges, E, sizeof(edges[0]), compare);

    // ��� ������ �ڱ� �ڽ��� �θ�� �ʱ�ȭ
    for (int i = 0; i < V; i++)
        parent[i] = -1;

    int i = 0, j = 0;
    while (i < V - 1 && j < E) {
        Edge nextEdge = edges[j++];

        // ����Ŭ�� �������� �ʴ� ���, �ش� ������ �ּ� ���� Ʈ���� �߰�
        int x = findParent(parent, nextEdge.src);
        int y = findParent(parent, nextEdge.dest);
        if (x != y) {
            result[i++] = nextEdge;
            unionSets(parent, x, y);
        }
    }

    // �ּ� ���� Ʈ�� ���
    printf("����ġ\n");
    for (int i = 0; i < V - 1; i++) {
        printf("����%d - ����%d = ����ġ :%d\n", result[i].src, result[i].dest, result[i].weight);
    }

    // �������� �Ҵ��� �޸� ����
    free(result);
    free(parent);
}
void kruskal() {
    system("mode con cols=100 lines=30 | title ���� �켱 Ž��");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int V, E;
    printf("������ ������ �Է����ּ��� : ");
    scanf_s("%d", &V);
    printf("������ ������ �Է����ּ��� : ");
    scanf_s("%d", &E);
    Edge edges[MAX_EDGES];
    printf("������ �̾��� ������ ���� ����ġ�� �Է����ּ��� :\n");
    for (int i = 0; i < E; i++) {
        scanf_s("%d %d %d", &edges[i].src, &edges[i].dest, &edges[i].weight);
    }
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    kruskalMST(edges, V, E);
}

void titlePrim()
{
    system("mode con cols=100 lines=30 | title ���� �˰���");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 100;
    int rows = 30;
    backGround(cols, rows);
    //4(�ܾ��� ��) * 8 + 2(����) * 11(������ ��) + 4(�߰� Sort�κ�)  =  32 + 22 + 4 = 58
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
    printf("���� �۵�����");
    gotoxy(x, y + 2);
    printf("1�ܰ� : ���� ������ �����մϴ�. ������ ������ �μӵ� ��� ���� �߿���");
    gotoxy(x, y + 3);
    printf("        ����ġ�� ���� ���� ������ �����Ͽ� Ʈ���� Ȯ���մϴ�.");
    gotoxy(x, y + 5);
    printf("2�ܰ� : ������ ������ ������ ���� Ȯ��� ������ �μӵ� ��� ���� �߿���");
    gotoxy(x, y + 6);
    printf("        ����ġ�� ���� ���� ������ �����մϴ�. ��, ����Ŭ �����ϴ� ������ ���� �˴ϴ�.");
    gotoxy(x, y + 8);
    printf("3�ܰ� : ������ n-1�� ���Ե� ������ �ݺ��մϴ�.");
    gotoxy(x, y + 9);
    printf("        �׷��� ������ n-1���� �ּ� ��� ���� Ʈ���� �ϼ��˴ϴ�.");
    gotoxy(x, 26);
    printf("���� ������(Enter)");
    gotoxy(x, 27);
    printf("�� ������(ESC)");
}
#define MAX_V 100
#define MAX_E 100
struct Edge {
    int src, dest, weight;
};
struct Edge edges[MAX_E]; // ���� ���� ���� �迭
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

    // key �迭�� ���Ѵ�� �ʱ�ȭ
    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;
        mstSet[i] = 0;
        parent[i] = -1;
    }

    // ���� ������ Ű ���� 0���� ����
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

        // ���� ���� ���
        printf("%d�ܰ� :\n", count + 1);
        printf("�������� ����ġ\n");
        for (int i = 1; i < V; i++) {
            if (parent[i] != -1) {
                printf("%d - %d    %d\n", parent[i], i, key[i]);
            }
        }
        printf("\n");
    }

    // �޸� ����
    free(parent);
    free(key);
    free(mstSet);
}
void prim() {
    system("mode con cols=100 lines=30 | title ���� �˰���");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor;
    ConsoleCursor.dwSize = 1;
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int V;
    printf("������ ������ �Է��ϼ���: ");
    scanf_s("%d", &V);
    printf("������ ������ �Է��ϼ���: ");
    scanf_s("%d", &E);

    printf("������ ����, ����ġ�� �Է��ϼ���\n");
    for (int i = 0; i < E; i++) {
        scanf_s("%d %d %d", &edges[i].src, &edges[i].dest, &edges[i].weight);
    }

    ConsoleCursor.bVisible = 0;
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    primMST(V);
}

void titleTopologicalSort() {
    system("mode con cols=200 lines=30 | title ���� �˰���");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int cols = 200;
    int rows = 30;
    backGround(cols, rows);
    //15(�ܾ��� ��) * 8 + 2(����) * 11(������ ��) + 4(�߰� Sort�κ�)  =  120 + 22 + 4 = 148
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
    printf("�������� �۵�����");
    gotoxy(x, y + 2);
    printf("1�ܰ� : ��� ������ ���� ���������� ����մϴ�. ���������� Ư�� �������� ������ ������ ���� �ǹ��մϴ�.");
    gotoxy(x, y + 4);
    printf("2�ܰ� : ���������� 0�� ������ �ϳ� �����ϰ� �̸� ��� ����Ʈ�� �߰��մϴ�. ���������� 0�� ������ �׷������� �������� �� �� �ֽ��ϴ�.");
    gotoxy(x, y + 6);
    printf("3�ܰ� : ������ ������ �̿� ����� ������ �׷������� �����մϴ�. �̴� �ٸ� �������� ���������� �����ϴ� �����Դϴ�.");
    gotoxy(x, y + 8);
    printf("4�ܰ� : ��� ������ ��� ����Ʈ�� �߰��� ������ ���� ������ �ݺ��մϴ�.");
    gotoxy(x, y + 10);
    printf("���ǻ��� : ���� ������ ��ȯ(cycle)�� ���� �׷����� ���ؼ��� �����մϴ�. ���� �׷����� ��ȯ�� �����Ѵٸ� ��� ������ �����ϴ� ���� �Ұ����մϴ�.");
    gotoxy(x, 26);
    printf("���� ������(Enter)");
    gotoxy(x, 27);
    printf("�� ������(ESC)");
}
// �׷��� ������ ǥ���ϴ� ����ü
typedef struct Node {
    int data;
    struct Node* next;
} Node;
// �׷����� ��Ÿ���� ����ü
typedef struct {
    Node* adjList[MAX_VERTICES];
    int inDegree[MAX_VERTICES];
    int numVertices;
} Graph;
// �׷��� �ʱ�ȭ �Լ�
void initializeGraph(Graph* graph, int numVertices) {
    graph->numVertices = numVertices;

    // ���� ����Ʈ�� in-degree �ʱ�ȭ
    for (int i = 0; i < numVertices; ++i) {
        graph->adjList[i] = NULL;
        graph->inDegree[i] = 0;
    }
}
// ���� �߰� �Լ�
void addEdge(Graph* graph, int src, int dest) {
    // dest�� src�� ���� ����Ʈ�� �߰�
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = dest;
    newNode->next = graph->adjList[src];
    graph->adjList[src] = newNode;

    // dest�� in-degree ����
    graph->inDegree[dest]++;
}
// ���� ���� ��������� �����ϴ� ���� �Լ�
void topologicalSortUtil(Graph* graph, int v, int* visited, int* result, int* resultIndex) {
    // ���� ������ �湮���� �ʾҴٸ�
    if (!visited[v]) {
        // ���� ������ �湮���� ǥ��
        visited[v] = 1;

        // ���� ������ ���� �������� �湮 (��� ȣ��)
        Node* temp = graph->adjList[v];
        while (temp != NULL) {
            topologicalSortUtil(graph, temp->data, visited, result, resultIndex);
            temp = temp->next;
        }

        // ���� ������ ��� �迭�� �߰�
        result[(*resultIndex)++] = v;

        // ���� ���� ���
        printf("%d�ܰ� : ���� %d �߰��˴ϴ�\n", *resultIndex, v);
        printf("���� ���� ��� : ");
        for (int i = 0; i < *resultIndex; ++i) {
            printf("%d ", result[i]);
        }
        printf("\n");
    }
}
// ���� ���� �Լ�
void topologicalSort(Graph* graph) {
    int* visited = (int*)malloc(graph->numVertices * sizeof(int));
    int* result = (int*)malloc(graph->numVertices * sizeof(int));
    int resultIndex = 0;

    // �湮 ���� �ʱ�ȭ
    for (int i = 0; i < graph->numVertices; ++i) {
        visited[i] = 0;
    }

    // ��� ������ ���� ���� ���� ����
    for (int i = 0; i < graph->numVertices; ++i) {
        if (visited[i] == 0 && graph->inDegree[i] == 0) {
            topologicalSortUtil(graph, i, visited, result, &resultIndex);
        }
    }

    // ���� ���� ��� ���
    printf("\n�������� ��� : ");
    for (int i = 0; i < resultIndex; ++i) {
        printf("%d ", result[i]);
    }
    printf("\n\n");
    printf("EnterŰ�� �Է��ϸ� ���� ȭ������ ���ư��ϴ�.");
    _getch();
    // �޸� ����
    free(visited);
    free(result);
}
void topologicalsort()
{
    system("mode con cols=100 lines=30 | title ���� �켱 Ž��");
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
    ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    int numVertices, numEdges;

    printf("������ ������ �Է��ϼ��� : ");
    scanf_s("%d", &numVertices);

    printf("������ ������ �Է��ϼ��� : ");
    scanf_s("%d", &numEdges);

    Graph graph;
    initializeGraph(&graph, numVertices);

    printf("������ ����� ������ �Է��Ͻÿ�\n");
    for (int i = 0; i < numEdges; ++i) {
        int src, dest;
        scanf_s("%d %d", &src, &dest);
        addEdge(&graph, src, dest);
    }

    ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);

    // �ʱ� �׷��� ���� ���
    printf("\n�ʱ� �׷��� ����\n");
    for (int i = 0; i < numVertices; ++i) {
        printf("���� %d �� �������� : %d\n", i, graph.inDegree[i]);
    }
    printf("\n");

    // ���� ���� ����
    topologicalSort(&graph);
}

int main()
{
    int col = 100;
    int row = 20;
    int key = keyInput;
    how_to_use();
    //ȭ�� ũ�� ����
    while (1)
    {
        system("mode con cols=100 lines=20 | title �˰���");
        HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_CURSOR_INFO ConsoleCursor; //Ŀ���� �Ӽ��� �����ϴ� ����ü
        ConsoleCursor.bVisible = 0; //Ŀ���� �Ⱥ��̰� ����
        ConsoleCursor.dwSize = 1; //ũ�⸦ 1�� ����
        SetConsoleCursorInfo(consoleHandle, &ConsoleCursor); //���� ������ ������ ������ ��������ִ� �Լ�
        backGround(col, row);
        title();
        // ȭ�� ������ ����
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
                        titleBubble();   // �������� ����׸���
                        bubbleConcept(); // �������� ����, �ڵ� �׸���
                        bubbleTime();    // ���� �ð����⵵
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