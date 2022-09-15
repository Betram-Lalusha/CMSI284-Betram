
import java.util.*;
public class phonetic {
    public HashMap<Character, String> map = new HashMap<>();

    public phonetic() {
        map.put('a', "Alfa");
        map.put('b', "Bravo");
        map.put('c',"Charlie");
        map.put('d',"Delta");
        map.put('e',"Echo");
        map.put('f',"Foxtrot");
        map.put('g',"Golf");
        map.put('h',"Hotel");
        map.put('i',"India");
        map.put('j',"Juliett");
        map.put('k',"Kilo");
        map.put('l',"Lima");
        map.put('m',"Mike");
        map.put('n',"November");
        map.put('o',"Oscar");
        map.put('p',"Papa");
        map.put('q',"Quebec");
        map.put('r',"Romeo");
        map.put('s',"Sierra");
        map.put('t',"Tango");
        map.put('u',"Uniform");
        map.put('v',"Victor");
        map.put('w',"Whiskey");
        map.put('x',"Xray");
        map.put('y',"Yankee");
        map.put('z',"Zulu");
    }


    public static void main(String[] args) {
    
        phonetic phoneticObj = new phonetic();

        System.out.println("enter word");
        System.out.println(" ");
        
        Scanner scanner = new Scanner(System.in);

        String input =  scanner.nextLine();

        String lowercased = input.toLowerCase();
        System.out.println(" ");

        for(int i = 0; i < lowercased.length(); i++) {
            System.out.println(phoneticObj.map.get(lowercased.charAt(i)));
        }

         System.out.println(" ");

    }
}