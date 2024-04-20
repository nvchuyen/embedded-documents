#include <stdio.h>
#include <stdlib.h>

void JsonExtract (char json[], char hoten[], char gioitinh[], char sodienthoai[], char email[]);
char*multi_tok(char *input, char *delimiter);

int main()
{
char json[] = "[{\"hoten\":\"Le Thi My Duyen\",\"gioitinh\":\"nu\",\"sodienthoai\":\"0312345678\",\"email\":\"duyen@gmail.com\"},\
{\"hoten\":\"Tran trung thanh\",\"gioitinh\":\"nam\",\"sodienthoai\":\"0344444444\",\"email\":\"thanh@gmail.com\"},\
{\"hoten\":\"Huynh Anh Hoang\",\"gioitinh\":\"nu\",\"sodienthoai\":\"0388888888\",\"email\":\"hahoang@gmail.com\"},\
{\"hoten\":\"Nguyen Minh Khoi\",\"gioitinh\":\"nam\",\"sodienthoai\":\"0399999999\",\"email\":\"khoi@gmail.com\"}]";
char hoten[100], gioitinh[100], sodienthoai[100], email[100];
char khachhang[500];
char hoten_nam[10][100];
int s1_nam = 0;
int s1_khachhang = 0;
int i = 0;

char* token1 = multi_tok(json, "},{");
    printf("chuoi TOKEN1 SAU KHI QUA HAM multi_tok: %s \n", token1);
int t = 1;
while(token1 != NULL)
{
    printf("**************************************************************************************************\n");
    printf("vong %d \n", t);
    printf("**************************************************************************************************\n");
    t++;

    strcpy(khachhang, token1);
    printf("--------------------------------------------------\n");
    printf("chuoi KHACH HANG vao ham JsonExtract: %s \n", token1);
    printf("--------------------------------------------------\n");
    JsonExtract(khachhang, hoten, gioitinh, sodienthoai, email);
    printf("chuoi KHACH HANG 2: %s \n", token1);

    printf("chuoi TOKEN 2: %s \n", khachhang);

    printf("-------------Gioi tinh   : %s\n", gioitinh);
    printf("check\n");
    if(strcmp(gioitinh, "\"nam\"") == 0)
    {
        strcpy(hoten_nam[i], hoten);
        s1_nam++;
        i++;
        printf("--------------------------khach hang nam: %d , %s\n", i, gioitinh);

    }
    s1_khachhang++;
    printf("chuoi KHACH HANG VAO HAM MULTI_TOK: %s \n", khachhang);
    token1 = multi_tok(NULL, "},{");
    printf("--------------------------------------------------\n");
    printf("chuoi TOKEN1 SAU KHI QUA HAM multi_tok: %s \n", token1);
    printf("--------------------------------------------------\n");
}

/////////////////////////////////////////////////////////////////////////////////////////////////

    printf("co tong cong %d khach hang nam / tong so %d khach hang \n", s1_nam, s1_khachhang);
    if(s1_nam >0)
    {
        printf("Ho ten cac khach hang nam: \n");
        for (i = 0; i<s1_nam; i++)
        {
            printf("%d. %s \n", i+1, hoten_nam[i]);
        }
    }
    printf("The end!\n");
    return 0;
}
char*multi_tok(char *input, char *delimiter)
{
    static char *string;
    if(input != NULL)
        string = input;
    printf("dang goi ham multi_tokkkkkkkkkkkkkkkkkkk \n");
    printf("gia tri string: %s va  delimiter: %s", string, delimiter);
    if(string == NULL)
        return NULL;

    char *end = strstr(string, delimiter); // Ham chet o day
    printf("dang goi ham multi_tokkkkkkkkkkkkkkkkkkk \n");

    printf(" \n gia tri end: %s\n", end);
    if(end == NULL)
    {
        char *temp = string;
        string = NULL;

        printf("\n -----------------------gia tri temp tra ve: %s---------------------------\n",temp);
        return temp;
    }

    char *temp = string;
    printf(" \n ----------------gia tri end cau TEMP: %s---------------\n", temp);

    *end = '\0';
    string = end + strlen(delimiter);
//
//        if(input == NULL)
//    {
//        printf("chuoi string ham multi_tok co input = NULL: %s \n", string);
//        return string;
//    }

    return temp;
}


void JsonExtract (char json[], char hoten[], char gioitinh[], char sodienthoai[], char email[])
{

    char info[4][100];
    int i;

    // cat chuoi JSON dua vao dau,
    char* token = strtok(json, ",");
    printf("Chuoi JSON trong ham JsonExtract : %s \n", token);

    i = 0;
    while( token != NULL){
        strcpy(info[i], token);
        printf("chuoi info: %s \n",info[i] );
        i++;
        token = strtok(NULL, ",");
    }
    printf("Chuoi JSON trong ham JsonExtract trich xuat ho ten: %s \n", token);

    // trich xuat ho ten
    char* hoten_token = strtok(info[0], ":");
    // hoten_token[0] se luu gia tri {"hoten"
    //  hoten_token[1] se luu gia tri "Le Thi My Duyen"
    strcpy(hoten, strtok(NULL, ":"));
    printf("Chuoi JSON trong ham JsonExtract trich xuat gioi tinh: %s \n", token);

    // Trich xuat giotinh
    token = strtok(NULL, ",");
    char* gioitinh_token = strtok(info[1], ":");
    // gioitinh_token[0] se luu gia tri "gioitinh"
    // gioitinh_token[1] se luu gia tri "nu"
    strcpy(gioitinh, strtok(NULL, ":"));


    // Trich xuat sodienthoai
    token = strtok(NULL, ",");
    char* sodienthoai_token = strtok(info[2], ":");
    // sodienthoai_token[0] se luu gia tri "sodienthoai"
    // sodienthoai_token[1] se luu gia tri "0312345678"
    strcpy(sodienthoai, strtok(NULL, ":"));


    // Trich xuat email
    token = strtok(NULL, ",");
    char* email_token = strtok(info[3], ":");
    // email_token[0] se luu gia tri "email"
    // email_token[1] se luu gia tri ""
    strcpy(email, strtok(NULL, ":"));


    // xoa bo dau } nam o cuoi cung cua email
    if(email[strlen(email) - 1] == '}')
        email[strlen(email) - 1] = '\0';
}







