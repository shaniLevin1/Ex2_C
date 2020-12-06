
#include <stdio.h>
#include "myBank.h"
#define ROWS 2
#define COLUMNS 50
double Account[ROWS][COLUMNS];

void OpenAccount(double amount){
int j=0;
while (Account[0][j]==1 && j<=50){
j++;
}
if (j==50 && Account[0][j]==1){
printf("there is no more space to open this account\n");
}
else {
Account[0][j]=1;
Account[1][j]=amount;
}
printf("new account number is: %d\n",j+901);
}

void BalanceIncuiry(int numAccount){
if (Account[0][numAccount-901]==1){
double balance=Account[1][numAccount-901];
printf("The balance of this account is: %0.2f\n",balance);
}
else printf("this account is close\n");
}

void Deposit(double money, int numAccount){
if (Account[0][numAccount-901]==1){
Account[1][numAccount-901]+= money;
double balance=Account[1][numAccount-901];
printf("The balance of this account is: %0.2f\n",balance);
}
else printf("the account is close\n");
}

void Withdrawal(double money, int numAccount){
if (Account[0][numAccount-901]==1){
if (money<= Account[1][numAccount-901]){
Account[1][numAccount-901]-=money;
double balance=Account[1][numAccount-901];
printf("The balance of this account is: %0.2f\n",balance);
}
else printf("there is'nt enough money to do it\n");
}
else printf("the account is close\n");
}

void CloseAccount(int numAccount){
if (Account[0][numAccount-901]==1){
Account[0][numAccount-901]=0;
}
else printf("this account is already close\n");
}

void Interest(double percent){
double percentNew = (percent/100)+1;
int j;
for (j=0; j<=50; j++){
if (Account[0][j]==1){
Account[1][j]*=percentNew;
}
}
}

void Print(){
int j;
for (j=0; j<=50; j++){
if (Account[0][j]==1){
double balance=Account[1][j];
printf("account num: %d the balance is: %0.2f\n",j+901,balance);
}
}
if (Account[0][0]==0) Print ("there is no open accounts");
}

void Exit(){
int j;
for (j=0; j<=50; j++){
Account[0][j]=0;
Account[1][j]=0;
}
}
