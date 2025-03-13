#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
    float salary;
} employee_t;

// 顯示員工資訊
void emp_info(employee_t emp) {
    printf("Name: %s, Age: %d, Salary: %.2f\n", emp.name, emp.age, emp.salary);
}

// 計算員工平均年齡
float emp_average_age(employee_t emp[], int n) {
    float sum = 0;  // 改為 float，確保浮點數計算
    for (int i = 0; i < n; i++) {
        sum += emp[i].age;
    }
    return (n > 0) ? sum / n : 0;
}

// 將員工資料寫入二進位檔案
void emp_writefile(employee_t emp[], int n) {
    FILE *file = fopen("employee.bin", "wb");
    if (file == NULL) {
        perror("Failed to open file");
        exit(1);
    }
    fwrite(emp, sizeof(employee_t), n, file);
    fclose(file);
}

// 讀取員工資料並顯示
void emp_readfile(employee_t emp[], int n) {
    FILE *file = fopen("employee.bin", "rb");
    if (file == NULL) {
        perror("Failed to open file");
        exit(1);
    }
    fread(emp, sizeof(employee_t), n, file);
    fclose(file);

    // 顯示讀取的員工資料
    printf("=== Employee Data from File ===\n");
    for (int i = 0; i < n; i++) {
        emp_info(emp[i]);
    }
}

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    employee_t employees[n];

    // 輸入員工資料
    for (int i = 0; i < n; i++) {
        printf("Enter name, age, and salary for employee %d: ", i + 1);
        scanf("%s %d %f", employees[i].name, &employees[i].age, &employees[i].salary);
    }

    // 寫入檔案
    emp_writefile(employees, n);

    // 讀取檔案並顯示
    emp_readfile(employees, n);

    // 計算平均年齡
    printf("Average Age: %.2f\n", emp_average_age(employees, n));

    return 0;
}
