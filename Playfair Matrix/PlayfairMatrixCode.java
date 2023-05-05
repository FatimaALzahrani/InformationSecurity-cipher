/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 12fat
 */
import java.util.*;
public class PlayfairMatrixCode {
	// Method findIJ
	// لإيجاد مكان تقاطع الصف والعمود في المصفوفة
    //	لتشفير كل حرفين سوا.
	public static int[] findIJ(char a, char b, char x[][]){
            int[] y = new int[4];
            if (a == 'j')           
		a = 'i';
            else if (b == 'j')
                b = 'i';
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    if (x[i][j] == a) {
                        y[0] = i;
                        y[1] = j;
                    }
                    else if (x[i][j] == b) {
                        y[2] = i;
                        y[3] = j;
                    }
                }
            }
            if (y[0] == y[2]) {
                y[1] += 1;
                y[3] += 1;
            }
            else if (y[1] == y[3]) {
                y[0] += 1;
                y[2] += 1;
            }
            for (int i = 0; i < 4; i++)
                y[i] %= 5;
	    return y;
	}

	// Main  method
	public static void main(String[] args){
            // نسدعي كلاس سكانر ونخلي المستخدم يدخل الرساله والمفتاح
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter the Plain Text to Encript them : ");
            String pt = sc.nextLine();
            System.out.println("Enter The Key : ");
            String key = sc.nextLine();
            //حذف التكرارات من المفتاح عشان نحطه بالمصفوفه
            int jj, index = 0, len = key.length();
            char c[] = key.toCharArray();
            for (int i = 0; i < len; i++) {
                for (jj = 0; jj < i; jj++) {
                    if (c[i] == c[jj])             
                        break;
                }
                if (i == jj)
                    c[index++] = c[i];
            }
            key = new String((Arrays.copyOf(c, index)));
	    char[] ch = key.toCharArray();
        
	    String st = "abcdefghiklmnopqrstuvwxyz";
            char[] c2 = st.toCharArray();
            //حذف  الاحرف الموجودة في المفتاح  
            for (int i = 0; i < c2.length; i++) {
                for (int j = 0; j < ch.length; j++) {
                    if (c2[i] == ch[j])
                        c2[i] = ' ';
                }
            }
            st = new String(c2);
            st = st.replaceAll(" ", "");
            c = st.toCharArray();
            //  ندمج المفتاح في مصفوفة مع الحروف  باستثناء الاحرف الموجوده بالمفتاح
            char[][] x = new char[5][5];           
            int indexOfSt = 0, indexOfKey = 0;
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {  
                    if (indexOfKey < key.length())
                        x[i][j] = ch[indexOfKey++];
                    else
                        x[i][j] = c[indexOfSt++];
                }
            }
        // نطبع المصفوفه بعدما اضفنا لها المفتاح
	    for (int i = 0; i < 5; i++) {
		    for (int j = 0; j < 5; j++)
                System.out.print(x[i][j] + " ");
                System.out.println();
		}
        // نحد كل اثنين مع بعض عشان نشفرهم سوا
	    String s = "";
	    char charr = 'a';
            for (int i = 0; i < pt.length(); i++) {
                if (pt.charAt(i) == ' ')
                    continue;
                else {
                    charr = pt.charAt(i);
                    s += pt.charAt(i);
		}
                if (i < pt.length() - 1)
                    if (pt.charAt(i) == pt.charAt(i + 1))
                        s += "x";
            }
            // اذا كان طول النص فردي يعني بيبقا حرف وحده فبنضيف x 
            if (s.length() % 2 != 0)        
		s += "x";
	    System.out.println(s);
	    pt= s;
        // التشفير
	    char ch2[] = pt.toCharArray();
            int a[] = new int[4];
            for (int i = 0; i < pt.length(); i += 2) {
                if (i < pt.length() - 1) {
                    a = findIJ(pt.charAt(i), pt.charAt(i + 1),x);
                    if (a[0] == a[2]) {
                        ch2[i] = x[a[0]][a[1]];
                        ch2[i + 1] = x[a[0]][a[3]];
                    }else if (a[1] == a[3]) {
                        ch2[i] = x[a[0]][a[1]];                     
			            ch2[i + 1] = x[a[2]][a[1]];
		            }else {
                        ch2[i] = x[a[0]][a[3]];                     
			            ch2[i + 1] = x[a[2]][a[1]];
		             }
		        }
	        }
	    pt = new String(ch2);    
        //طباعة الرساله المشفره
	    System.out.println(pt);
	}
}