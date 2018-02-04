    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    #include<stdio.h>
    #include<string.h>
    int main()
    {
	int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int k;
    double r;
    char y[100];
    scanf("%d",&k);
    scanf("%lf",&r);
    scanf(" %[^\n]s", y);
    printf("%d\n",(i+k));
    printf("%.1lf\n",(r+d));
   strcat(s,y);
   printf("%s",s);
}
    


