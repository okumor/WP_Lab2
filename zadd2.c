 #include <stdio.h>
 int main()
 {
 // selection musi być zadeklarowane poza pętlą do-while,
 // abyśmy mogli później użyć tę zmienną
 int selection = 0;
 do
 {
 printf("Please make a selection: \n");
 printf("1) Addition\n");
 printf("2) Subtraction\n");
  printf("3) Multiplication\n");
 printf("4) Division\n");
 scanf("%d", &selection);
 }
 while (selection < 1 || selection > 4); // ogolnie to jest po to, że jesli wybierzesz spoza przedzialu to program wraca na sam poczatek i cie znow pyta o wybor
 
 switch (selection) {
 case 1:
 printf("You selected option #%d\n", selection);

 case 2:
 printf("yuo");

 case 3:
 printf("mimi");

 case 4:
 printf("lolo");
 }
 return 0;
 }