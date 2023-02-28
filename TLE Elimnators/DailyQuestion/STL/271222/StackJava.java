import java.util.*;

class StackJava {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNext()) {
            Boolean flag = false;
            Stack<Character> par = new Stack<>();
            String s = sc.next();
            for (int i = 0; i < s.length(); i++) {

                if (s.charAt(i) == '(' || s.charAt(i) == '{' || s.charAt(i) == '[') {

                    par.push(s.charAt(i));
                } else if (!par.empty()) {
                    if (s.charAt(i) == '}' && par.peek() == '{') {
                        par.pop();
                    } else if (s.charAt(i) == ']' && par.peek() == '[') {
                        par.pop();
                    } else if (s.charAt(i) == ')' && par.peek() == '(') {
                        par.pop();
                    } else {
                        flag = true;
                    }
                } else {
                    flag = true;
                }
            }
            if (flag) {
                System.out.println(false);
            } else {
                System.out.println(true);
            }

        }
        sc.close();

    }
}
