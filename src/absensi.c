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

/* fungsi kehadiran */
void recordAttendance(Employee employees[], int totalEmployees) {
	int id, choice;
	printf("Masukkan ID karyawan: ");
	scanf("%d", &id);

	for (int i = 0; i < totalEmployees; i++) {
		if (employees[i].id == id) {
			printf("Pilih status kehadiran untuk %s:\n", employees[i].name);
			printf("1. Hadir\n2. Izin\n3. Sakit\n4. Alpha\n");
			printf("Pilihan: ");
			scanf("%d", &choice);

			switch (choice) {
				case 1:
					employees[i].hadir++;
					break;
				case 2:
					employees[i].izin++;
					break;
				case 3:
					employees[i].sakit++;
					break;
				case 4:
					employees[i].alpha++;
					break;
				default:
					printf("Pilihan tidak valid!\n");
					return;
			}

			printf("Absensi berhasil direcord!\n");
			return;
		}
	}

	printf("Karyawan dengan ID %d tidak ditemukan!\n", id);
}
