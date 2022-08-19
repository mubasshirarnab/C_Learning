 #include<stdio.h>

 int main()
 {
    int ft_marks[30]={80,85,90,75,70,65,85,83,92,88,72,65,55,45,42,88,78,66,56,68,84,74,91,62,76,62,55,65,88,77};

    int st_marks[30]={70,80,90,60,55,66,48,75,98,45,65,78,95,65,48,78,96,85,82,83,75,86,71,64,45,56,72,88,67,92};

    int final_marks[30]={88,65,98,45,78,89,45,78,85,86,94,72,65,85,74,73,65,45,55,98,42,67,81,71,86,91,77,44,67,49};

    int i;
    double total_marks[30];

    for(i=0; i<30; i++){
        total_marks[i]=ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
    }

    for(i=1; i<30; i++){
        printf("Roll NO: %d\t Total Marks: %0.0lf\n", i, total_marks[i-1]);
    }

    return 0;

 }
