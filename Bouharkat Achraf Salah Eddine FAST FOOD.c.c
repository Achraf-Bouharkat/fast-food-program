#include<stdio.h>

int main()
{
int x,y,z,k,f,i,l,e,q;
float p,t,o,j,m,n,b,c,u;
p = 0;
o = 0;
j = 0;
t = 0;
m = 0;
n = 0;
b = 0;
printf("good morning how we can help you?");
printf("\n press 1 to show menu \n");
scanf(" %d",&x);
switch(x){
case 1:{
printf("\n type 1 to order \n type 2 to show the bill \n");
scanf("%d",&z);
while(z < 2){
printf("\n menu: \n 1-Pizza \n 2-Tacos \n 3-Salad \n");
if(z<2){{
o = 0;
m = 0;
n = 0;
j = 0;
p = 0;
b = 0;
scanf("%d",&y);
switch(y){
case 1:
printf("choose a size :\n 1-M. 250 DA \n 2-L. 350 DA \n 3-XL. 400 DA \n");
scanf("%d",&f);
printf("\n which ingredients you want in : \n 1-cheese \n 2-tuna \n 3-beef \n 4-chiken \n");
scanf("%d",&e);
printf("\n how many you want to order :");
scanf("%f",&n);
if(f == 1){
p = 250;}
else if(f == 2){
p = 350;}
else if(f == 3){
p = 400;}
switch(f){
case 1:
printf("you've ordered a %f Pizza size M \n",n);
break;
case 2:
printf("you've ordered a %f Pizza size L \n",n);
break;
case 3:
printf("you've ordered a %f Pizza size XL \n",n);
break;
}
break; 
case 2:
printf("choose a size :\n 1-M. 200 DA \n 2-L. 300 DA \n 3-XL. 350 DA \n");
scanf("%d",&i);
printf("\n which ingredients you want in : \n 1-cheese \n 2-tuna \n 3-beef \n 4-chiken \n");
scanf("%d",&q);
printf("\n how many you want to order :");
scanf("%f",&m);
if(i == 1){
o = 200;}
else if(i == 2){
o = 300;}
else if(i == 3){
o = 350;}
switch(i){
case 1:
printf("you've ordered a %f Tacos size M \n",m);
break;
case 2:
printf("you've ordered a %f Tacos size L \n",m);
break;
case 3:
printf("you've ordered a %f Tacos size XL \n",m);
break;
}
break;
case 3:
printf("choose a size :\n 1-M. 100 DA \n 2-L. 200 DA \n 3-XL. 250 DA \n");
scanf("%d",&k);
printf("\n how many you want to order :");
scanf("%f",&b);
if(k == 1){
j = 100;}
else if(k == 2){
j = 200;}
else if(k == 3){
j = 250;}
switch(k){
case 1:
printf("you've ordered a %f Salad size M \n",b);
break;
case 2:
printf("you've ordered a %f Salad size L \n",b);
break;
case 3:
printf("you've ordered a %f Salad size XL \n",b);
break;
}
break;
default:
printf("sorry this is not available");
break;
}
t += (o*m)+(j*b)+(p*n);
}
}
printf("\n type 1 to order \n type 2 to show the bill \n");
scanf("%d",&z);
}
}
printf("\n your total without tax : %f DA \n",t);
printf("\n the tax is : 19  \n");
c=t+t*0.19;
printf("\n your total with tax : %f DA \n",c);
printf("\n if you are senior type 1 if you are student type 2 if not press any other number \n");
scanf("%d",&l);
if(l == 2){
u=c-c*0.3;
printf("\n your total to pay is : %f DA \n",u);
}
else if(l == 1){
u=c-c*0.25;
printf("\n your total to pay is : %f DA \n",u);
}
else {
printf("\n your total with tax : %f DA \n",c);  
}
break;
default:
printf("invalid choice");
break;
    }
    }