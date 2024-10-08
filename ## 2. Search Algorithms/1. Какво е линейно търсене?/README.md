# Какво е линейно търсене?

В тази лекция изследваме алгоритъма за линейно търсене, известен също като последователно търсене. Този алгоритъм се използва за намиране на елемент в неподреден списък чрез изследване на всеки елемент един по един.

## Разбиране на линейното търсене

Представете си ситуация, в която искаме да намерим конкретна книга на неподреден рафт. Тъй като книгите не са сортирани, трябва да започнем с първата книга и да проверяваме всяка последователно, докато намерим желаната книга. Този подход определя линейното търсене.

### Характеристики на линейното търсене:
- **Метод**: Проверява всеки елемент в списъка, докато намери целта.
- **Сложност**:
 - **Най-лош случай**: В най-лошия случай алгоритъмът трябва да изследва всички елементи в списъка, което води до линейна времева сложност от **O(N)**, където N е броят на елементите в списъкът.
 - **Ефективност**: Този метод не е практичен за големи набори от данни, особено в сравнение с други алгоритми като двоично търсене, което предлага логаритмична времева сложност **O(log N)**, или хеш функции, които могат да осигурят постоянна времева сложност * *O(1)**.

### Пример
Помислете за следния сценарий:
- Имаме няколко книги, представени с единични знаци, и търсим книгата с етикет **C**.
- Книгите не са сортирани. За да намерим **C**, започваме с първата книга и продължаваме да проверяваме всяка, докато я намерим.

### Стъпки в линейното търсене
1. Започнете с първия елемент в списъка.
2. Сравнете текущия елемент с целевия елемент.
3. Ако съвпадат, върнете позицията на елемента.
4. Ако не, преминете към следващия елемент и повторете, докато целта бъде намерена или краят на списъка бъде достигнат.

## Заключение
Линейното търсене е лесен алгоритъм, полезен за несортирани списъци, но неговата линейна времева сложност може да бъде недостатък за по-големи набори от данни. В следващата лекция ще приложим този алгоритъм и ще го сравним с двоично търсене, за да демонстрираме как можем да постигнем по-бързо време за търсене.
