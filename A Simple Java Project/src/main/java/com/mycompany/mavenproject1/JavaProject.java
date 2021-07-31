package com.mycompany.mavenproject1;

import java.io.File; 
import java.io.FileWriter; 
import java.io.IOException;
import java.io.FileNotFoundException;  
import java.util.Scanner; 
import java.time.LocalDate;
import java.time.Period;
import java.time.temporal.ChronoUnit;
import java.util.Calendar;
import java.util.Date;
public class JavaProject {
 public static void StudentAgeCalculator(){
                
          Scanner sn = new Scanner(System.in);
        System.out.print("Enter Year : ");

          int year =sn.nextInt();
            System.out.print("Enter A month :");
int month = sn.nextInt();
        System.out.print("Enter date: ");
        int date = sn.nextInt();
          LocalDate start_Local_date = LocalDate.of(year, month, date);
        LocalDate end_Local_date = LocalDate.now();

        long years = ChronoUnit.YEARS.between(start_Local_date, end_Local_date);

        System.out.println("Age in years: "+years + "y ");
        Period period_Between = Period.between(start_Local_date, end_Local_date);
        System.out.println("Age in years/months/dates: "+period_Between.getYears() + "y "
                + period_Between.getMonths() + "m "
                + period_Between.getDays() + "d");
    }
 public static void registration(){
     
     Scanner sn = new Scanner(System.in);
             
            System.out.print("Enter Studnets Name :");
          String sname = sn.nextLine();  

     System.out.print("Enter Studnets Father Name :");
         String sfname = sn.nextLine();  // Read user input

     System.out.print("Enter Studnets Phone Numebr :");
         String sphone = sn.nextLine();  // Read user input
     System.out.print("Enter Studnets Mail :");
              String smail = sn.nextLine();  // Read user input
System.out.print("Enter Studnets Father Phone Number :");
              String sfphone = sn.nextLine();  // Read user input
System.out.print("Enter Studnets Parmanent address :");
           String spaddress = sn.nextLine();  // Read user input
    try{
        FileWriter myWriter = new FileWriter("registration.txt");
            myWriter.write("Student Name is: ");
            myWriter.write(sname);
      myWriter.write("\n Student Father Number is: ");
        
      myWriter.write(sfname);
         myWriter.write("\n Student Phone no is: ");
         
         myWriter.write(sphone);
      myWriter.write("\n Student address is: ");
      
      myWriter.write(spaddress);
     myWriter.close();
    }catch (IOException e) {
      System.out.println("An error occurred.");
     // e.printStackTrace();
    }

 }
 
 public static void roomManage(int x){
    
     try{
         x+=1;
        FileWriter mywriter = new FileWriter("roommanage.txt");
            mywriter.write("total Room Booked: ");
             mywriter.write(x);
            int total_room_availabe = 40-x;
            mywriter.write("total Room Available: ");
            mywriter.write(total_room_availabe);
            mywriter.close();
     }catch (IOException e) {
      System.out.println("An error occurred.");
      //e.printStackTrace();
    }
    
 }
 
 public static void fees_and_weaver(){
       Scanner sn = new Scanner(System.in);
int n =sn.nextInt();
     int total_fees = 6000; 
     
       
    
    int ans = total_fees -n;
if(ans == 0){
        System.out.println("Clear!");
     
    } 
      else {         
    
     System.out.print("Due is: ");
    System.out.println(ans);
     }
 }

    public static void main(String[] args) {

        int room =0;
        System.out.println("      Enter A choosen Number: ");
        System.out.println("Click 1 for AgeCalculate: ");
        System.out.println("Click 2 for Registration: ");
        System.out.println("click 3 for Room Manage : ");
System.out.println("click 4 for fees and weaver: ");
                
          Scanner sn = new Scanner(System.in);
int n =sn.nextInt();
if(n==1){
    StudentAgeCalculator();
     
}if(n==2){
    registration();
     
        }
if(n==3){
    roomManage(room);
}
if(n==4){
        fees_and_weaver();
}
}
}