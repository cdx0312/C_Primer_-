#include <stdio.h>
#define MAXTITLE 40
#define MAXAUTHOR 40
#define MAXBOOKS 100
struct book {
    char title[MAXTITLE];
    char author[MAXAUTHOR];
    float value;
};
int main() {
    struct book library[MAXBOOKS];   //book结构数组 library本身是成员为结构名的数组名
    int count = 0;
    int index;

    printf("Now enter the book title.\n");
    printf("Press [Enter] at the start of a line to stop.\n");
    while (count < MAXBOOKS && gets(library[count].title) != NULL && library[count].title[0] != '\0'){
        printf("Now enter the author.\n");
        gets(library[count].author);
        printf("Now enter thr value.\n");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;   //清空输入行
        if (count < MAXBOOKS)
            printf("Enter the next title.\n");
    }

    if (count > 0) {
        printf("Here is the list of your books:\n");
        for (index = 0; index < count; index++)
            printf("%s by %s : $%f\n",library[index].title, library[index].author, library[index].value);
    } else
        printf("No books.");
    return 0;
}