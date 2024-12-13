#ifndef ABSENSI_H
#define ABSENSI_H

#define MAX_EMPLOYEES 1024 // maksimal jumlah karyawan adalah 1024
#define NAME_LENGTH 32 // panjang nama 32

typedef struct {
	int id;
	char name[NAME_LENGTH];
	int hadir;
	int izin;
	int sakit;
	int alpha;
} Employee;

/* FUNGSI */
void addEmployee(Employee employees[], int *totalEmployees);
void recordAttendance(Employee employees[], int totalEmployees);
void showAttendanceRecord(Employee employees[], int totalEmployees);

#endif



