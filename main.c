#include <stdio.h>
#include "myBank.h"

int main(){
char type = ' ';
printf("Please choose a transaction type:\n");
printf("O-Open Account\n");
printf("B-Balance Incuiry\n");
printf("D-Deposit\n");
printf("W-Withdrawal\n");
printf("C-Close Account\n");
printf("I-Interest\n");
printf("P-Print\n");
printf("E-Exit\n");
scanf(" %c",&type);
double amount;
int accountNum;
double interestRate;
while (type != 'E')
{
switch (type)
{
case 'O':
{
printf("please enter amount for deposit:\n");
if(scanf("%lf", &amount)==1){
if (amount<0) printf ("balance not legal\n");
else OpenAccount(amount);
}
else{
    printf("Invalid number\n");
}
break;
}
case 'B':
{
printf("Account number?:");
if(scanf("%d", &accountNum)==1){
if (accountNum<901 || accountNum>950) printf ("account not legal\n");
else BalanceIncuiry(accountNum);
}
else{
    printf("Invalid account\n");
}
break;
}
case 'D':
{

printf("Account number?:");
if(scanf("%d", &accountNum)==1){
if (accountNum<901 || accountNum>950) printf ("account not legal\n");
else
{
printf("Amount?:");
}
if(scanf("%lf", &amount)==1){
if (amount<0) printf ("balance not legal\n");
else Deposit(amount, accountNum);
}
else{
    printf("Invalid amount\n");
}
}
else{
    printf("Invalid account\n");
}
break;
}
case 'W':
{
printf("Account number?:");
if(scanf("%d", &accountNum)==1){
if (accountNum<901 || accountNum>950) printf ("account not legal\n");
else
{
printf("Amount?:");
scanf("%lf", &amount);
if (amount<0) printf ("balance not legal\n");
else{ Withdrawal(amount, accountNum);
}
}
}
else{
    printf("Invalid account\n");
}
}
break;
case 'C':
{
printf("Account number?:");
if(scanf("%d", &accountNum)==1){
if (accountNum<901 || accountNum>950) printf ("account not legal\n");
else CloseAccount(accountNum);
}
else{
    printf("Invalid number\n");
}
break;
}
case 'I':
{
printf("Interest rate?:");
if(scanf("%lf", &interestRate)==1){
Interest(interestRate);
}
else{
    printf("Invalid number\n");
}
}
case 'P':
{
Print();
break;
}
case 'E':
{
Exit();
break;
}
default:
{
printf("your Transaction is not exist\n ");
break;
}
}
printf("please enter transaction type:\n");
printf("O-Open Account\n");
printf("B-Balance Incuiry\n");
printf("D-Deposit\n");
printf("W-Withdrawal\n");
printf("C-Close Account\n");
printf("I-Interest\n");
printf("P-Print\n");
printf("E-Exit\n");
scanf(" %c",&type);
}
return 0;
}
