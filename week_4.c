#include <stdio.h>

int main() {
                                 //ประกาศตัวแปรเก็บข้อมูลส่วนบุคคล
    char name[30];               //ชื่อ
    int age;                     //อายุ
    float height;                //ส่วนสูง

                                 //ประกาศตัวแปรเก็บข้อมูลน้ำดื่ม
    char drink[30];              //เครื่องดื่ม
    float price;                 //ราคา
    char size;                   //ไซส์

    scanf("%s %d %f", name, &age, &height);    //รับข้อมูลบรรทัดที่1
    scanf("%s %f %c", drink, &price, &size);   //รับข้อมูลบรรทัดที่2

    //แสดงข้อมูลส่วนบุคคล
    printf("%s is %d years old and is %.1f cm tall.\n", name, age, height);

    //แสดงข้อมูลเครื่องดื่ม
    printf("Favorite drink %s costs %.2f baht and has size %c.\n", drink, price, size);

    return 0;                     //สิ้นสุดการทำงาน
}