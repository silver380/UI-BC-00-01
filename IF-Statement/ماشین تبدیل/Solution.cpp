#include <iostream>

using namespace std;

int main() {
  int from, to;
  long double value, tom;

  cin >> from;
  cin >> to;
  cin >> value;

  long milis, mili, secs, sec, mins, min, hours, hour, days, day, year;

  cout.precision(13);

  if (from == to) {
    cout << value;
    return 1;
  }

  switch(from){
    case 1:
      switch(to){
        case 2:
          cout << value / 100;
          break;
        case 3:
          cout << (value / 100) * 0.0006213712;
          break;
        case 4:
          cout << (value / 100) * 39.37007874;
          break;
        case 5:
          cout << (value / 100) * 3.280839895;
          break;
        case 6:
          cout << (value / 100) * 0.96153846;
          break;
        case 7:
          cout << (value / 100) * 1.040000001664;
          break;
        case 8:
          cout << (value / 100) * 1.0936132983;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 2:
      switch(to){
        case 1:
          cout << value * 100;
          break;
        case 3:
          cout << value * 0.0006213712;
          break;
        case 4:
          cout << value * 39.37007874;
          break;
        case 5:
          cout << value * 3.280839895;
          break;
        case 6:
          cout << value * 0.96153846;
          break;
        case 7:
          cout << value * 1.040000001664;
          break;
        case 8:
          cout << value * 1.0936132983;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 3:
      tom = value * (1 / 0.0006213712);
      switch(to){
        case 1:
          cout << tom * 100;
          break;
        case 2:
          cout << tom;
          break;
        case 4:
          cout << tom * 39.37007874;
          break;
        case 5:
          cout << tom * 3.280839895;
          break;
        case 6:
          cout << tom * 0.96153846;
          break;
        case 7:
          cout << tom * 1.040000001664;
          break;
        case 8:
          cout << tom * 1.0936132983;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 4:
      tom = value * (1 / 39.37007874);
      switch(to){
        case 1:
          cout << tom * 100;
          break;
        case 2:
          cout << tom;
          break;
        case 3:
          cout << tom * 0.0006213712;
          break;
        case 5:
          cout << tom * 3.280839895;
          break;
        case 6:
          cout << tom * 0.96153846;
          break;
        case 7:
          cout << tom * 1.040000001664;
          break;
        case 8:
          cout << tom * 1.0936132983;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 5:
      tom = value * (1 / 3.280839895);
      switch(to){
        case 1:
          cout << tom * 100;
          break;
        case 2:
          cout << tom;
          break;
        case 3:
          cout << tom * 0.0006213712;
          break;
        case 4:
          cout << tom * 39.37007874;
          break;
        case 6:
          cout << tom * 0.96153846;
          break;
        case 7:
          cout << tom * 1.040000001664;
          break;
        case 8:
          cout << tom * 1.0936132983;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 6:
      tom = value * (1 / 0.96153846);
      switch(to){
        case 1:
          cout << tom * 100;
          break;
        case 2:
          cout << tom;
          break;
        case 3:
          cout << tom * 0.0006213712;
          break;
        case 4:
          cout << tom * 39.37007874;
          break;
        case 5:
          cout << tom * 3.280839895;
          break;
        case 7:
          cout << tom * 1.040000001664;
          break;
        case 8:
          cout << tom * 1.0936132983;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 7:
      tom = value * (1 / 1.040000001664);
      switch(to){
        case 1:
          cout << tom * 100;
          break;
        case 2:
          cout << tom;
          break;
        case 3:
          cout << tom * 0.0006213712;
          break;
        case 4:
          cout << tom * 39.37007874;
          break;
        case 5:
          cout << tom * 3.280839895;
          break;
        case 6:
          cout << tom * 0.96153846;
          break;
        case 8:
          cout << tom * 1.0936132983;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 8:
      tom = value * (1 / 1.0936132983);
      switch(to){
        case 1:
          cout << tom * 100;
          break;
        case 2:
          cout << tom;
          break;
        case 3:
          cout << tom * 0.0006213712;
          break;
        case 4:
          cout << tom * 39.37007874;
          break;
        case 5:
          cout << tom * 3.280839895;
          break;
        case 6:
          cout << tom * 0.96153846;
          break;
        case 7:
          cout << tom * 1.040000001664;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
  // -------------
    case 9:
      switch(to){
        case 10:
          cout << value / 1000;
          break;
        case 11:
          cout << (value / 1000) / 60;
          break;
        case 12:
          cout << (value / 1000) / 60 / 60;
          break;
        case 13:
          cout << (value / 1000) / 60 / 60 / 24;
          break;
        case 30:
          milis = (long) value;
          mili = milis % 1000;
          secs = (value - mili) / 1000;
          sec = secs % 60;
          mins = (secs - sec) / 60;
          min = mins % 60;
          hours = (mins - min) / 60;
          hour = hours % 24;
          days = (hours - hour) / 24;
          day = days % 365;
          year = ((days - day) / 365) + 1970;
          cout << year << " " << day << " " << hour << ":" << min << ":" << sec;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 10:
      switch(to){
        case 9:
          cout << value * 1000;
          break;
        case 11:
          cout << value / 60;
          break;
        case 12:
          cout << value / 60 / 60;
          break;
        case 13:
          cout << value / 60 / 60 / 24;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 11:
      switch(to){
        case 9:
          cout << value * 1000 * 60;
          break;
        case 10:
          cout << value * 60;
          break;
        case 12:
          cout << value / 60;
          break;
        case 13:
          cout << value / 60 / 24;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 12:
      switch(to){
        case 9:
          cout << value * 1000 * 60 * 60;
          break;
        case 10:
          cout << value * 60 * 60;
          break;
        case 11:
          cout << value * 60;
          break;
        case 13:
          cout << value / 24;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 13:
      switch(to){
        case 9:
          cout << value * 1000 * 60 * 60 * 24;
          break;
        case 10:
          cout << value * 60 * 60 * 24;
          break;
        case 11:
          cout << value * 60 * 24;
          break;
        case 12:
          cout << value * 24;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    // -----------
    case 14:
      tom = value / 10000;
      switch(to){
        case 15:
          cout << tom;
          break;
        case 16:
          cout << tom * 1.1959900463011;
          break;
        case 17:
          cout << tom * 0.0002471054;
          break;
        case 18:
          cout << tom * 0.0001;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 15:
      tom = value;
      switch(to){
        case 14:
          cout << tom * 10000;
          break;
        case 16:
          cout << tom * 1.1959900463011;
          break;
        case 17:
          cout << tom * 0.0002471054;
          break;
        case 18:
          cout << tom * 0.0001;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 16:
      tom = value * (1 / 1.1959900463011);
      switch(to){
        case 14:
          cout << tom * 10000;
          break;
        case 15:
          cout << tom;
          break;
        case 17:
          cout << tom * 0.0002471054;
          break;
        case 18:
          cout << tom * 0.0001;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 17:
      tom = value * (1 / 0.0002471054);
      switch(to){
        case 14:
          cout << tom * 10000;
          break;
        case 15:
          cout << tom;
          break;
        case 16:
          cout << tom * 1.1959900463011;
          break;
        case 18:
          cout << tom * 0.0001;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 18:
      tom = value * (1 / 0.0001);
      switch(to){
        case 14:
          cout << tom * 10000;
          break;
        case 15:
          cout << tom;
          break;
        case 16:
          cout << tom * 1.1959900463011;
          break;
        case 17:
          cout << tom * 0.0002471054;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    // -------------
    case 19:
      tom = value;
      switch(to){
        case 20:
          cout << tom / 1000;
          break;
        case 21:
          cout << tom * 0.0352739619;
          break;
        case 22:
          cout << tom * 0.00220462262;
          break;
        case 23:
          cout << tom / 1000 / 1000;
          break;
        case 24:
          cout << tom * 0.00000333333;
          break;
        case 25:
          cout << tom * 0.01333333333;
          break;
        case 26:
          cout << tom * 0.21701389000000001;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 20:
      tom = value * 1000;
      switch(to){
        case 19:
          cout << tom;
          break;
        case 21:
          cout << tom * 0.0352739619;
          break;
        case 22:
          cout << tom * 0.00220462262;
          break;
        case 23:
          cout << tom / 1000 / 1000;
          break;
        case 24:
          cout << tom * 0.00000333333;
          break;
        case 25:
          cout << tom * 0.01333333333;
          break;
        case 26:
          cout << tom * 0.21701389000000001;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 21:
      tom = value * (1 / 0.0352739619);
      switch(to){
        case 19:
          cout << tom;
          break;
        case 20:
          cout << tom / 1000;
          break;
        case 22:
          cout << tom * 0.00220462262;
          break;
        case 23:
          cout << tom / 1000 / 1000;
          break;
        case 24:
          cout << tom * 0.00000333333;
          break;
        case 25:
          cout << tom * 0.01333333333;
          break;
        case 26:
          cout << tom * 0.21701389000000001;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 22:
      tom = value * (1 / 0.00220462262);
      switch(to){
        case 19:
          cout << tom;
          break;
        case 20:
          cout << tom / 1000;
          break;
        case 21:
          cout << tom * 0.0352739619;
          break;
        case 23:
          cout << tom / 1000 / 1000;
          break;
        case 24:
          cout << tom * 0.00000333333;
          break;
        case 25:
          cout << tom * 0.01333333333;
          break;
        case 26:
          cout << tom * 0.21701389000000001;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 23:
      tom = value * 1000 * 1000;
      switch(to){
        case 19:
          cout << tom;
          break;
        case 20:
          cout << tom / 1000;
          break;
        case 21:
          cout << tom * 0.0352739619;
          break;
        case 22:
          cout << tom * 0.00220462262;
          break;
        case 24:
          cout << tom * 0.00000333333;
          break;
        case 25:
          cout << tom * 0.01333333333;
          break;
        case 26:
          cout << tom * 0.21701389000000001;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 24:
      tom = value * (1 / 0.00000333333);
      switch(to){
        case 19:
          cout << tom;
          break;
        case 20:
          cout << tom / 1000;
          break;
        case 21:
          cout << tom * 0.0352739619;
          break;
        case 22:
          cout << tom * 0.00220462262;
          break;
        case 23:
          cout << tom / 1000 / 1000;
          break;
        case 25:
          cout << tom * 0.01333333333;
          break;
        case 26:
          cout << tom * 0.21701389000000001;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 25:
      tom = value * (1 / 0.01333333333);
      switch(to){
        case 19:
          cout << tom;
          break;
        case 20:
          cout << tom / 1000;
          break;
        case 21:
          cout << tom * 0.0352739619;
          break;
        case 22:
          cout << tom * 0.00220462262;
          break;
        case 23:
          cout << tom / 1000 / 1000;
          break;
        case 24:
          cout << tom * 0.00000333333;
          break;
        case 26:
          cout << tom * 0.21701389000000001;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 26:
      tom = value * (1 / 0.21701389000000001);
      switch(to){
        case 19:
          cout << tom;
          break;
        case 20:
          cout << tom / 1000;
          break;
        case 21:
          cout << tom * 0.0352739619;
          break;
        case 22:
          cout << tom * 0.00220462262;
          break;
        case 23:
          cout << tom / 1000 / 1000;
          break;
        case 24:
          cout << tom * 0.00000333333;
          break;
        case 25:
          cout << tom * 0.01333333333;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    // ----------
    case 27:
      tom = value;
      switch(to){
        case 28:
          cout << tom * 1.8 + 32;
          break;
        case 29:
          cout << tom + 273.15;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 28:
      tom = (value - 32) / 1.8;
      switch(to){
        case 27:
          cout << tom;
          break;
        case 29:
          cout << tom + 273.15;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    case 29:
      tom = value - 273.15;
      switch(to){
        case 27:
          cout << tom;
          break;
        case 28:
          cout << tom * 1.8 + 32;
          break;
        default:
          cout << "Khata! Vahedha chert o pert hastand.";
          break;
      }
    break;
    default:
      cout << "Khata! Vahedha chert o pert hastand.";
      break;
  }

  return 1;
}
