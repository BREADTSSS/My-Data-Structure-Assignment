#include <stdio.h>
#include <conio.h>
struct data_tanggal
{
    int tanggal;
    int bulan;
    int tahun;
};
void cetak_info_tanggal(struct data_tanggal unit_tgl);
void main()
{
    struct data_tanggal saat_proses = {12, 9, 1989};
    cetak_info_tanggal(saat_proses);
    getch();
}
void cetak_info_tanggal(struct data_tanggal unit_tgl)
{
    static char *nama_bulan[] = {"Kode bulan salah!",
                                 "Januari", "Februari", "Maret", "April", "Mei",
                                 "Juni", "Juli", "Agustus", "September", "Oktober",
                                 "November", "Desember"};
    printf("%d %s %d\n", unit_tgl.tanggal,
           nama_bulan[unit_tgl.bulan], unit_tgl.tahun);
}