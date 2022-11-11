#define _CRT_SECURE_NO_WARNINGS // для использования strcpy()
#include <iostream>
#include <time.h>
using namespace std;
void captcha(int num, char* s) // num — число, s — указатель на строку
{
    int position = 0; // позиция в строке
    int x[4]; // массив разрядов
    int div = 1000; // делитель на разряды
    int var = num; // частное от деления
    int rest; // остаток от деления
    for (int i = 0; i < 4; i++)
    {
        rest = (int)(var / div);
        x[i] = rest;
        var = var - rest * div;
        div = div / 10;
    }
    // Тысячи
    switch (x[0])
    {
    case 1: strcpy(s, "Одна тысяча "); break;
    case 2: strcpy(s, "Две тысячи "); break;
    case 3: strcpy(s, "Три тысячи "); break;
    case 4: strcpy(s, "Четыре тысячи "); break;
    case 5: strcpy(s, "Пять тысяч "); break;
    case 6: strcpy(s, "Шесть тысяч "); break;
    case 7: strcpy(s, "Семь тысяч "); break;
    case 8: strcpy(s, "Восемь тысяч "); break;
    case 9: strcpy(s, "Девять тысяч "); break;
    default: break;
    }
    position = strlen(s);
    // Сотни
    switch (x[1])
    {
    case 1: strcpy(s + position, "сто "); break;
    case 2: strcpy(s + position, "двести "); break;
    case 3: strcpy(s + position, "триста "); break;
    case 4: strcpy(s + position, "четыреста "); break;
    case 5: strcpy(s + position, "пятьсот "); break;
    case 6: strcpy(s + position, "шестьсот "); break;
    case 7: strcpy(s + position, "семьсот "); break;
    case 8: strcpy(s + position, "восемьсот "); break;
    case 9: strcpy(s + position, "девятьсот "); break;
    default: break;
    }
    position = strlen(s);
    // Десятки
    switch (x[2])
    {
    case 1:
        // Числа от 10 до 19
        switch (x[3])
        {
        case 0: strcpy(s + position, "десять рублей"); break;
        case 1: strcpy(s + position, "одиннадцать рублей"); break;
        case 2: strcpy(s + position, "двенадцать рублей"); break;
        case 3: strcpy(s + position, "тринадцать рублей"); break;
        case 4: strcpy(s + position, "четырнадцать рублей"); break;
        case 5: strcpy(s + position, "пятнадцать рублей"); break;
        case 6: strcpy(s + position, "шестнадцать рублей"); break;
        case 7: strcpy(s + position, "семнадцать рублей"); break;
        case 8: strcpy(s + position, "восемнадцать рублей"); break;
        case 9: strcpy(s + position, "девятнадцать рублей"); break;
        }
        x[3] = 0;
        position = strlen(s);
        break;
    case 2: strcpy(s + position, "двадцать "); break;
    case 3: strcpy(s + position, "тридцать "); break;
    case 4: strcpy(s + position, "сорок "); break;
    case 5: strcpy(s + position, "пятьдесят "); break;
    case 6: strcpy(s + position, "шестьдесят "); break;
    case 7: strcpy(s + position, "семьдесят "); break;
    case 8: strcpy(s + position, "восемьдесят "); break;
    case 9: strcpy(s + position, "девяносто "); break;
    default: break;
    }
    position = strlen(s);
    // Единицы
    switch (x[3]) {
    case 1: strcpy(s + position, "один рубль"); break;
    case 2: strcpy(s + position, "два рубля"); break;
    case 3: strcpy(s + position, "три рубля"); break;
    case 4: strcpy(s + position, "четыре рубля"); break;
    case 5: strcpy(s + position, "пять рублей"); break;
    case 6: strcpy(s + position, "шесть рублей"); break;
    case 7: strcpy(s + position, "семь рублей"); break;
    case 8: strcpy(s + position, "восемь рублей"); break;
    case 9: strcpy(s + position, "девять рублей"); break;
    default: break;
    }
    position = strlen(s);
}
int main()
{
    int m;
    /*srand(time(NULL));
    system("chcp 1251");
    system("cls");
    char s[10];
    for (int i = 0; i < 10; i++)
    {*/
        cout << "Введите ваше число: ";
        cin >> m;
        /*captcha(m, s);*/
        cout << s << "рублей" << endl;
        return 0;
    /*}
    cin.get();*/
    return 0;
}





























//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	int* Num;
//	Num = new int[10000];
//    cout << "Введите число: ";
//    cin >> *Num;
//	
//	if(*Num / 1000)
//	{
//		printf("Тысяча ");
//	}
//
//}

