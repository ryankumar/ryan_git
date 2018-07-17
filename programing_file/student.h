typedef struct Date
{
int day;
int month;
int year;
}DATE;
typedef union IDP
{
char aadhar[12];
char voter[10];
char PAN[10];
}IDP;

typedef struct stu
{
int ID;
char sname[100];
char fname[100];
DATE DOB,DOJ;
IDP idproof; // 12 bytes
int idpt; // ID Proof type
char course[200];
int duration;

}STUDENT;
