#include <iostream> // ��������� �������� ��� �������� �� ���������
using namespace std;

int main() {
    // ������: ���������� A^8
    double A, A2, A4, A8;

    // �������� ����� A
    cout << "������ ����� A: ";
    cin >> A;

    // ���������� ������� �����
    A2 = A * A;  // A^2
    A4 = A2 * A2; // A^4
    A8 = A4 * A4; // A^8

    // ��������� ����������
    cout << "A^2 = " << A2 << endl;
    cout << "A^4 = " << A4 << endl;
    cout << "A^8 = " << A8 << endl;

    return 0; // ���������� ��������
}