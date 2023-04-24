#include <stdio.h>
#include <math.h>
/*int main()
{
    int rows = 5;
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j <= i; j++)
		 {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/
/*int main()
{
    int rows = 5;
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < 2 * (rows - i) - 1; j++)
		 {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) 
		{
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/
/*int main()
 {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) 
   {
      for (j = 1; j <= i; ++j)
	   {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}*/
/*int main()
 {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) 
   {
      for (j = 1; j <= i; ++j)
	   {
         printf("%d ",j);
      }
      printf("\n");
   }
   return 0;
}*/
/*int main()
{
    int a,b,c;
    printf("enter number :: ");
    scanf("%d",&c);
    for(a=1; a<=c; a++)
    {
        for(b=1; b<=a; b++)
        {
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}*/
/*int main()
 {
  char op;
  double first, second;
  printf("Enter an operator 1(pow) ,2(add) ,3(sub) ,4(mul) ,5(div): ");
  scanf("%d", &op); 
  printf("Enter two operands:\n ");
  scanf("%2f ", &first ,&second);
 
  switch (op) 		
  {
  	case '1':
  		printf("%.2lf ^ %d = %.2lf", first , second, first ^ second);
  		break;
    case '2':
      printf("%.1lf + %d = %.1lf", first, second, first + second);
      break;
    case '3':
      printf("%.1lf - %d = %.1lf", first, second, first - second);
      break;
    case '4':
      printf("%.1lf * %d = %.1lf", first, second, first * second);
      break;
    case '5':
      printf("%.1lf / %d = %.1lf", first, second, first / second);
      break;
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}*/
/*double power(double x, int n) {
   return pow(x, n);
}

double add(double x, int n) {
   return x + n;
}

double subtract(double x, int n) {
   return x - n;
}

double multiply(double x, int n) {
   return x * n;
}

double divide(double x, int n) {
   if (n == 0) {
      printf("Error: division by zero");
      return 0;
   }
   else {
      return x / n;
   }
}

int main() {
   double x;
   int n, choice;
   double result;

   printf("Enter the first operand (x): ");
   scanf("%lf", &x);
   printf("Enter the second operand (n): ");
   scanf("%d", &n);

   printf("Enter the operation to perform:\n");
   printf("1. x^n\n");
   printf("2. x + n\n");
   printf("3. x - n\n");
   printf("4. x * n\n");
   printf("5. x / n\n");
   printf("Enter your choice: ");
   scanf("%d", &choice);

   switch (choice) {
      case 1:
         result = power(x, n);
         printf("%.2lf ^ %d = %.2lf", x, n, result);
         break;
      case 2:
         result = add(x, n);
         printf("%.2lf + %d = %.2lf", x, n, result);
         break;
      case 3:
         result = subtract(x, n);
         printf("%.2lf - %d = %.2lf", x, n, result);
         break;
      case 4:
         result = multiply(x, n);
         printf("%.2lf * %d = %.2lf", x, n, result);
         break;
      case 5:
         result = divide(x, n);
         printf("%.2lf / %d = %.2lf", x, n, result);
         break;
      default:
         printf("Invalid choice");
   }

   return 0;
}*/
/*int main() {
    int num, temp, last_digit, new_num = 0, power_of_10 = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        last_digit = temp % 10;
        new_num = (new_num * 10) + last_digit;
        temp /= 10;
        if (temp == 0) {
            power_of_10 *= 10;
        }
    }

    new_num = (new_num * power_of_10) + (num / power_of_10);

    printf("Number after rearranging the digits: %d", new_num);

    return 0;
}*/
/*int main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        printf("%d is a perfect number.\n", num);
    }
    else
    {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}*/
/*int main()
 {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int square = num * num;
    printf("Square of %d is: %d\n", num, square);
    double sqrt_num = sqrt(num);
    printf("Square root of %d is: %f\n", num, sqrt_num);
    int cube = num * num * num;
    printf("Cube of %d is: %d\n", num, cube);
    return 0;
}*/
/*int main ()

{
	int age ;
	printf("enter age :");
	scanf("%d",&age);
	if (age>=18)
	 printf("you can vote!");
	 else
	 printf("you cant vote! ");
	 return 0;
}*/
/*int main() {
    char name[50];
    int age;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("%s, you are eligible to vote.\n", name);
    } else {
        int years_left = 18 - age;
        printf("%s, you are not yet eligible to vote. You have to wait %d more years.\n", name, years_left);
    }

    return 0;
}*/

/*int main() 
{
    int p, q, r;
	printf("Enter the value of p, q and r: ");
    scanf("%d %d %d", &p, &q, &r);
	for (int i = p; i <= q; i++)
	 {
        if (i % 10 == r || i  == r)
				 {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}*/
/*int main()
 {
    int numRows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &numRows);

    for (i = 1; i <= numRows; i++)
	 {
        for (j = 1; j <= numRows - i; j++)
		 {
            printf("   ");
        }

        for (j = i; j >= 1; j--) {
            printf("%-4d", j);
        }

        printf("\n");
    }

    return 0;
}
*/
 /*int main()
 {
int numRows;
printf("Enter the number of rows: ");
scanf("%d", &numRows);
float denominator = 10.0;
for (int i = 1; i <= numRows; i++) 
{
for (int j = 1; j <= i; j++)
 {
printf("%.1f ", j / denominator);
}
printf("\n");
}
return 0;
}
*/
int isComposite(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 1;
        }
    }
    return 0;
}
int main() {
    int n, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
	int arr[n], composite[n];
	printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (isComposite(arr[i])) {
            composite[count] = arr[i];
            count++;
        }
    }
	 printf("\nThe composite numbers in the array are: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", composite[i]);
    }
	printf("\n\nThe total number of composite numbers in the array is: %d", count);
	 return 0;
}