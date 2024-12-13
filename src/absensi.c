#include <stdio.h>
#include <string.h>
#include "absensi.h"

/* fungsi tambah karyawan */
void addEmployee(Employee employees[], int *totalEmployees) {
	if (*totalEmployees >= MAX_EMPLOYEES) {
		printf("Batas maksimal karyawan sudah tercapai!\n");
		return;
	}

	printf("Masukkan ID karyawan: ");
	scanf("%d", &employees[*totalEmployees].id);

	getchar();
	scanf("Masukkan Nama karyawan: ");

	fgets(employees[*totalEmployees].name, NAME_LENGTH, stdin);
	employees[*totalEmployees].name[strcspn(employees[*totalEmployees].name, "\n")] = '\0';

	employees[*totalEmployees].hadir = 0;
	employees[*totalEmployees].izin = 0;
	employees[*totalEmployees].sakit = 0;
	employees[*totalEmployees].alpha = 0;
	(*totalEmployees)++;

	printf("Karyawan berhasil ditambahkan!\n");
}
