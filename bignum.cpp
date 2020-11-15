#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;
#define MAXDIGITS 5000
#define PLUS 1
#define MINUS -1

typedef struct bignum
{
    char digits[MAXDIGITS];
    int signbit;
    int lastdigit;
};

bool kiemtra(char s[]);
void scan_bignum(bignum& n);
void print_bignum(bignum n);
void zero_justify(bignum& n);
void add_bignum(bignum a, bignum b, bignum& c);
void substract_bignum(bignum a, bignum b, bignum& c);

int main()
{
    bignum a;
    scan_bignum(a);
    print_bignum(a);
    return 0;
}

bool kiemtra(char s[])
{
    if (s[0] != '-' && !isdigit(s[0])) return false;
    for (int i = 1; i < strlen(s); i++) if (!isdigit(s[i])) { return false; }
    return true;
}

void scan_bignum(bignum& n)
{
    char ch[255];
    cin.getline(ch, 255);
    if (!kiemtra(ch))
    {
        n.digits[0] = 0;
        n.signbit = PLUS;
        n.lastdigit = 0;
    }
    else
    {
        if (ch[0] != '-')
        {
            n.signbit = PLUS;
            n.lastdigit = strlen(ch) - 1;
            for (int i = 0; i < strlen(ch); i++) n.digits[i] = ch[n.lastdigit - i] - 48;
        }
        else
        {
            n.signbit = MINUS;
            n.lastdigit = strlen(ch) - 2;
            for (int i = 0; i < strlen(ch); i++) n.digits[i] = ch[n.lastdigit + 1 - i] - 48;
        }
    }
}

void print_bignum(bignum n)
{
    if (n.signbit == MINUS) cout << "-";
    for (int i = n.lastdigit; i >= 0; i--) cout << int(n.digits[i]);
}

void zero_justify(bignum &n)
{
    while (n.lastdigit > 0 && n.digits[n.lastdigit] == 0) n.lastdigit--;
    if (n.lastdigit == 0 && n.digits[0] == 0) n.signbit = PLUS;
}

void add_bignum(bignum a, bignum b, bignum& c)
{
    if (a.signbit == b.signbit) c.signbit = a.signbit;
    else
    {
        if (a.signbit == PLUS)
        {
            b.signbit = PLUS;
            substract_bignum(a, b, c);
            b.signbit = MINUS;
        }
        else
        {
            a.signbit = PLUS;
            substract_bignum(b, a, c);
            a.signbit = MINUS;
        }
    }
    
}

void substract_bignum(bignum a, bignum b, bignum& c)
{

}