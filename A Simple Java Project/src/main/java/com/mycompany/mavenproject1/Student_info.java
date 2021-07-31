import java.util.*;
import java.io.File;  // Import the File class
import java.io.FileNotFoundException; 
import java.io.IOException;  // Import the IOException class to handle errors
public class Student_info implements IStudentDAO{
	 Student_infol(){}
	LinkedList<student> mylist=new LinkedList<student>();
	public void insertStudent(int index,student stu) {
		System.out.println("Please enter the student ID number");
		Scanner sca=new Scanner(System.in);
		String s = sca.nextLine();
		stu.setSno(s);
		System.out.println("Please enter the student name");
		s=sca.next();
		stu.setSname(s);
		System.out.println("Please enter the student department");
		s=sca.next();
		stu.setSdept(s);
		mylist.add(index,stu);
	}
	
	public void deleteStudent(String sno) {
		mylist.remove(findStudentBySno(sno) );
	}
	
	public void updateStudent(student stu) {
		System.out.println("Please enter the student's new student number");
		Scanner sca=new Scanner(System.in);
		String s = sca.nextLine();
		stu.setSno(s);
		System.out.println("Please enter a new name for the student");
		s=sca.next();
		stu.setSname(s);
		System.out.println("Please enter the new department of the student");
		s=sca.next();
		stu.setSdept(s);
	}
	
	public Student findStudentBySno(String sno) {
		int i;
		int index = 0;
		boolean flag=false;
		for(i=0;i<mylist.size();i++) {
			if(sno.equals(mylist.get(i).getSno())) {
				flag=true;
				index=i;
			}
		}
		if(flag==false) {
			System.out.println("The student was not found");
			return null;
		}
		else {
			return mylist.get(index);
		}
	}
	
	public void displayStudentBySno(String sno) {
		Student student=findStudentBySno(sno);
		System.out.println("The student number is:"+student.getSno());
		System.out.println("The student's name is:"+student.getSname());
		System.out.println("The student department is:"+student.getSdept());
	}
	
	public void displayAllStudent() {
		int i;
		for(i=0;i<mylist.size();i++) {
                    try{
                    FileWriter myWriter = new FileWriter("filename.txt");
      myWriter.write("Student Number is:");
      myWriter.write((i+1));
      myWriter.write("Student Phone Number is:");
      
      myWriter.write(get(i).getSno());
      myWriter.write("Student Name is:",+get(i).getSname());
      
      myWriter.write("Student Name is:");
      
      myWriter.write(get(i).getSname());
      myWriter.write("Student Department is:");
      myWriter.write(get(i).getSdept());
      
      myWriter.close();
                    }catch (IOException e) {
      System.out.println("An error occurred.");
      e.printStackTrace();
    }		System.out.println(" "+(i+1)+"The student number is:");
			System.out.println(mylist.get(i).getSno());
			System.out.println(" "+(i+1)+"The name of the student is:");
			System.out.println(mylist.get(i).getSname());
			System.out.println(" "+(i+1)+"The student department is:");
			System.out.println(mylist.get(i).getSdept());
		}
	}
}
