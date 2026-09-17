/*
Problem: 20. Valid Parentheses
URL: https://leetcode.com/problems/valid-parentheses/description/
Language: C++
Author: dvchinx
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> pila;

        for (char c : s) {
            // Si es de apertura, agregar a la pila
            if (c == '(' || c == '{' || c == '[') {
                pila.push(c);
            } else if (c == ')' || c == '}' || c == ']') {
                // Si la pila está vacía y 'c' es de cierre, no está balanceado
                if (pila.empty())
                    return false;

                // Si el tope es la apertura de 'c', eliminar de la pila
                char tope = pila.top();
                if (c == ')' && tope == '(' || 
                    c == '}' && tope == '{' ||
                    c == ']' && tope == '[') {
                    pila.pop();
                } else
                    return false;
            }
        }
        // Si la pila está vacía, retornar true, en otro caso, retornar false
        return (pila.empty() ? true : false);
    }
};