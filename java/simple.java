import java.util.*;
import java.io.*;

class Main {
  public static int CountingMinutesI(String str) {
    //"1:00pm-11:00am" -1320
    // "2:08pm-2:00am" - 712
    // "11:00am-2:10pm" - 190
    // "3:00pm-4:45am" - 825

    String[] arr = str.split("-");
    char[] amOrPm = new char[2];
    amOrPm[0] = arr[0].charAt(arr[0].length()-2);
    amOrPm[1] = arr[1].charAt(arr[1].length()-2);

    Integer firstHour, secondHour;
    if (amOrPm[0] == 'p') {
      firstHour = Integer.valueOf(arr[0].substring(0, str.indexOf(":"))) + 12;
    } else {
      firstHour = Integer.valueOf(arr[0].substring(0, str.indexOf(":")));
    }

    if (amOrPm[1] == 'p') {
      secondHour = Integer.valueOf(arr[1].substring(0, str.indexOf(":"))) + 12;
    } else {
      secondHour = Integer.valueOf(arr[1].substring(0, str.indexOf(":")));
    }

    Integer firstMin = Integer.valueOf(arr[0].substring(arr[0].indexOf(":")+1, arr[0].length()-2));
    Integer secondMin = Integer.valueOf(arr[1].substring(arr[1].indexOf(":")+1, arr[1].length()-2));

    if (amOrPm[0] == amOrPm[1]) { //same (a==a or p==p)
      if (firstHour < secondHour || (firstHour == secondHour && firstMin < secondMin)) { //first hour comes first
        System.out.println("1");
        return (secondHour * 60 + secondMin) - (firstHour * 60 + firstMin);
      } else {
        System.out.println("2");
        return (24 * 60) - (firstHour * 60 + firstMin) + (secondHour * 60 + secondMin);
      }
    } else { // different
      if (amOrPm[0] == 'a') {
        System.out.println("3");
        return (12 - firstHour) * 60 + (60 - firstMin) + (secondHour * 60 + secondMin);
      } else {
        System.out.println("4");
        if (firstHour == 24) {
          firstHour = 0;
        }
        return ((firstHour * 60) - (60 - firstMin)) + (secondHour * 60 + secondMin);
      }
    }
  }

  public static void main (String[] args) {
    String timeString = new String("11:00am-2:10pm");
    System.out.print(timeString);
  }
}