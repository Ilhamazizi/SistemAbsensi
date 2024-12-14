#include <stdio.h>
#include "src/absensi.h"

// fungsi utama
int main() {
	Employee employees [MAX_EMPLOYEES];
	int totalEmployees = 0;
	int choice;	

	do {
		printf("\nSistem Absensi Karyawan\n");
		printf("1. Tambah Karyawan\n");
		printf("2. Record Kehadiran\n");
		printf("3. Tampilkan Laporan\n");
		printf("Keluar\n");

		printf("Pilihan: ");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				addEmployee(employees, &totalEmployees);
				break;
			case 2:
				recordAttendance(employees, totalEmployees);
				break;
			case 3:
				showAttendanceRecord(employees, totalEmployees);
				break;
			case 4:
				printf("Keluar dari program.\n");
				break;
			default:
				printf("Pilihan tidak valid!\n");

		}
	}

	while (choice != 4);
	return 0;
}




