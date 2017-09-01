/*
 * 指向函数的指针中保存着函数代码的起始位置,声明指针时必须声明他指向的对象的类型,例如
 *      void ToUpper(char *)
 *      void (*pf) (char *)
 * 不能在赋值语句当中使用一个void类型的函数
 *
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char showmenu(void);
void eatline(void);
void show (void (*fp) (char *), char * string);
void ToUpper(char *);
void ToLower(char *);
void Transpose(char *);
void Dummy(char *);

int main() {
    char line[81];
    char copy[81];
    char choice;
    void (*pfun)(char *);  //指向一个函数,该函数接受一个char *参数,并且没有返回值

    puts("Enter a string (empty to quit):");
    while (gets(line) != NULL && line[0] != '\0') {
        while ((choice = showmenu()) != 'n') {
            switch (choice){
                case 'u': pfun = ToUpper;
                    break;
                case 'l': pfun = ToLower;
                    break;
                case 't': pfun = Transpose;
                    break;
                case 'o': pfun = Dummy;
            }
            strcpy(copy, line);
            show(pfun, copy);
        }
        puts("Enter a string (empty to quit):");
    }
    puts("Bye!");

    return 0;
}

char showmenu (void) {
    char ans;
    puts("Enter menu choice: ");
    puts("u) uppercase         l) lowercase");
    puts("t) transposed case   o) original case");
    puts("n) next string");
    ans = getchar();
    ans = tolower(ans);
    eatline();
    while (strchr("ulton", ans) == NULL) {    //strchr查找字符串"ulton"中首次出现ans的地址,找不到返回NULl
        puts("Please enter a u, l, t, o, n.");
        ans = tolower(getchar());
        eatline();
    }
    return ans;
}

void eatline(void) {
    while (getchar() != '\n')
        continue;
}

void ToUpper(char *string) {
    while (*string) {
        *string = toupper(*string);
        string++;
    }
}

void ToLower(char *string) {
    while (*string) {
        *string = tolower(*string);
        string++;
    }
}

void Transpose(char * string) {
    while (*string) {
        if (islower(*string))
            *string = toupper(*string);
        else if (isupper(*string))
            *string = tolower(*string);
        string++;
    }
}

void Dummy(char *string) {

}

void show(void(* fp) (char *), char * string) {
    (*fp) (string);
    puts(string);
}