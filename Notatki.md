# Informatyka

## Excel

- `Mid(ciąg; początek; koniec)` - bierze podciąg wyrazów
- `="05:00"` - godzina w formule
- godzina to _godzina_/24
- `ZAOKR.DO.WIELOKR(liczba; liczba)` - zaokrągla do wielokrotności (przydatne do
  czasu)
- `PODSTAWA(liczba; podstawa)` - zmienia `liczbę` w systemie dziesiętnym na
  system o danej `podstawie`
- `DZIESIĘTNA(tekst; podstawa)` - zamienia `liczbę` w systemie o danej
  `podstawie` na dziesiętną
- <kbd>Alt+F5</kbd> - odświeża dane tabeli przestawnej

## Access

- `Mid(ciąg; początek; koniec)` - bierze podciąg wyrazów
- W ustawieniach można zmienić wielkość czcionki
- Data - `#01/02/2018#`
- Dwukrotne kliknięcie łączenia kolumn dopasuje ich szerokość do danych
- `Val` - zwraca wartość numeryczną
- `10 Mod 2` - modulo
- `<>` - nie równa się
- `Format(wartość, "format")` -
  [lista formatów](https://www.w3schools.com/sql/func_msaccess_format.asp)
- Kolejność komend:
  1. `FROM`/`JOIN`
  2. `WHERE`
  3. `GROUP BY`
  4. `HAVING`
  5. `SELECT`
  6. `ORDER BY`
  7. `LIMIT/OFFSET`

- <kbd>e</kbd> - plik zawiera nagłówki
- <kbd>w</kbd> - wybierz własny klucz podstawowy
- kwerendy krzyżowe

## C++

### Funkcje

- `stoi(string liczba, int* pointer, int baza)` - zamiana `stringa` na liczbę o danej `bazie`
- `bitset<16>(int liczba).to_string()` - zamiana liczby na system binarny
- `"string".substr(int start, int dlugosc)` - otrzymanie podciągu
- `"string".find(string szukany_podciąg, int początek)` - szuka podciągu w ciągu. Zwraca `std::string::npos`, gdy nie znajdzie go
- `"string".insert(0, string ciąg)` - dodaje `ciąg` do przed danym ciągiem

### Algorytmy

#### Quicksort

```c++
void quicksort(int left, int right) {
  if (left >= right) return;
  int mid = T[(left + right) / 2], i = left, j = right;
  while (true) {
    while (mid > T[i]) ++i;
    while (mid < T[j]) --j;
    if (i <= j) {
      swap(T[i], T[j]);
      ++i;
      --j;
    } else {
      break;
    }
  }
  if (j > left) quicksort(left, j);
  if (i < right) quicksort(i, right);
}
```

#### GCD

```c++
int GCD(int a, int b) {
  if (b == 0) return a;
  return GCD(b % a, a);
}
```
