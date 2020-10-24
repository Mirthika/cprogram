/*database2*/

#include<stdio.h>

int main()
{
  short int firstnumber,secondnumber,answer;
  unsigned short int thirdnumber,fourthnumber,total;
  firstnumber=-45;
  secondnumber=56;
  thirdnumber=66;
  fourthnumber=45;
  answer=secondnumber-firstnumber;
  total=thirdnumber*fourthnumber;
  printf("answer=%hd",answer);
  printf("total=%hu",total);
  return 0;
 }

