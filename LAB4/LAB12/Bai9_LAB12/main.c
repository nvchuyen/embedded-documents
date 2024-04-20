#include <stdio.h>
#include <stdlib.h>



void JsonExtract (char json[], char hoten[], char gioitinh[], char sodienthoai[], char email[]);

int main()
{
char json[] = "{\"hoten\":\"Le Thi My Duyen\",\"gioitinh\":\"nu\",\"sodienthoai\":\"0312345678\",\"email\":\"duyen@gmail.com\"}";
char hoten[100], gioitinh[100], sodienthoai[100], email[100];

JsonExtract(json, hoten, gioitinh, sodienthoai, email);

    printf("Thong tin cua doi tuong JSON: \n");
    printf("Ho ten      : %s\n", hoten);
    printf("Gioi tinh   : %s\n", gioitinh);
    printf("Dien thoai  : %s\n", sodienthoai);
    printf("Email       : %s\n", email);

    printf("The end!\n");
    return 0;
}


void JsonExtract (char json[], char hoten[], char gioitinh[], char sodienthoai[], char email[])
{

    char info[4][100];
    int i;

    // cat chuoi JSON dua vao dau,
    char* token = strtok(json, ",");

    i = 0;
    while( token != NULL){
        strcpy(info[i], token);
        i++;
        token = strtok(NULL, ",");
    }

    // trich xuat ho ten
    char* hoten_token = strtok(info[0], ":");
    // hoten_token[0] se luu gia tri {"hoten"
    //  hoten_token[1] se luu gia tri "Le Thi My Duyen"
    strcpy(hoten, strtok(NULL, ":"));

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







