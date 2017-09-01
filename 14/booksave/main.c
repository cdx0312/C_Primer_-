//把结构内容保存到文件中
#include <stdio.h>
#include <stdlib.h>
#define MAXTITLE 40
#define MAXAUTHOR 40
#define MAXBOOKS 10

struct book {
    char title[MAXTITLE];
    char author[MAXAUTHOR];
    float value;
};

int main() {
    struct book library[MAXBOOKS];
    int count = 0;
    int index, filecount;
    FILE * pbooks;
    int size = sizeof(struct book);

    if ((pbooks = fopen("book.dat", "a + b")) == NULL) {   //a+b表示允许追加数据并且采用二进制格式存取
        fputs("Can't open book.dat file\n", stderr);
        exit(1);
    }
    rewind(pbooks);//定位到文件开始的地方
    while (count < MAXBOOKS && fread(&library[count],size,1,pbooks)) {
        if (count == 0)
            puts("Current contents of book.dat:");
        printf("%s by %s: $.2f\n", library[count].title, library[count].author,library[count].value);
        count++;
    }

    filecount = count;
    if (count == MAXBOOKS) {
        fputs("The book.dat file is full.", stderr);
        exit(2);
    }

    puts("Please add new book title.");
    puts("Press [Enter] at the start of line to stop.");
    while (count < MAXBOOKS && gets(library[count].title) != NULL && library[count].title[0] != '\0') {
        puts("Now enter the author.");
        gets(library[count].author);
        puts("Now enter the value.");
        scanf("%f", &library[count].value);
        while (getchar() != '\n')
            continue;
        if (count < MAXBOOKS)
            puts("Enter the next title.");
        count++;
    }

    if (count > 0) {
        puts("Here is the list of your books: ");
        for (index = 0; index < count; index++)
            printf("%s by %s :$%f\n", library[index].title, library[index].author, library[index].value);
        fwrite(&library[filecount], size,count-filecount,pbooks);
    } else
        puts("No books? Too bad.\n");
    puts("Bye\n");
    fclose(pbooks);

    return 0;
}