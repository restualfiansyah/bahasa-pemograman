@startuml
class Calculator {
    - value1: double
    - value2: double
    + tambah(a: double, b: double): double
    + kurang(a: double, b: double): double
    + bagi(a: double, b: double): double
    + kali(a: double, b: double): double
    + tampilan_info(): void
    + main(): int
}

