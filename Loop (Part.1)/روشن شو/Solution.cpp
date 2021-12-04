#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int source_base, destination_base;

  long number_in_decimal_format = 0;

  cin >> source_base >> destination_base;

  char input_character;
  cin >> input_character;
  while(input_character != ';') {
    int input;
    switch(input_character) {
      case '0': input = 0; break;
      case '1': input = 1; break;
      case '2': input = 2; break;
      case '3': input = 3; break;
      case '4': input = 4; break;
      case '5': input = 5; break;
      case '6': input = 6; break;
      case '7': input = 7; break;
      case '8': input = 8; break;
      case '9': input = 9; break;
      case 'A': input = 10; break;
      case 'B': input = 11; break;
      case 'C': input = 12; break;
      case 'D': input = 13; break;
      case 'E': input = 14; break;
      case 'F': input = 15; break;
      default: return 0;
    }

    number_in_decimal_format = (number_in_decimal_format * source_base) + input;
    cin >> input_character;
  }

  int length = 0;
  int base = pow(destination_base, length);
  while(base <= number_in_decimal_format){
    length = length + 1;
    base = pow(destination_base, length);
  }

  while (length > 0) {
    length = length - 1;
    base = base / destination_base;

    int upper_ratio = 0;
    int largest_possible_unit = 0;
    do {
      upper_ratio = upper_ratio + 1;
      largest_possible_unit = upper_ratio * base;
    } while(largest_possible_unit <= number_in_decimal_format && upper_ratio < destination_base);

    int ratio = upper_ratio - 1;
    number_in_decimal_format = number_in_decimal_format - (ratio * base);
    switch(ratio) {
      case 0: cout << '0'; break;
      case 1: cout << '1'; break;
      case 2: cout << '2'; break;
      case 3: cout << '3'; break;
      case 4: cout << '4'; break;
      case 5: cout << '5'; break;
      case 6: cout << '6'; break;
      case 7: cout << '7'; break;
      case 8: cout << '8'; break;
      case 9: cout << '9'; break;
      case 10: cout << 'A'; break;
      case 11: cout << 'B'; break;
      case 12: cout << 'C'; break;
      case 13: cout << 'D'; break;
      case 14: cout << 'E'; break;
      case 15: cout << 'F'; break;
    }
  }

  return 0;
}
