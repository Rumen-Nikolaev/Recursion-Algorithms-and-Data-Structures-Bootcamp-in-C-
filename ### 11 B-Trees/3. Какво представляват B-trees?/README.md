## Какво представляват B-trees?

### Въведение
В предишните ни лекции обсъдихме съществените разлики между външна памет и основна памет (RAM). Стигнахме до заключението, че когато работим с данни във външна памет, трябва да изградим различни структури от данни, за да оптимизираме времето за достъп. Това ни кара да обсъждаме B-tree, които са специално проектирани за ефективно извличане на данни и манипулиране във външна памет.

### История
B-trees са представени за първи път през 1971 г. и са вид балансирана дървовидна структура от данни. Те са много ефективни за системи, които четат и записват големи блокове данни от външна памет.

### Ключови характеристики на B-дърветата
- **Множество ключове на възел**: За разлика от двоичните дървета за търсене, където всеки възел съдържа един ключ и може да има само две деца, B-дърветата позволяват на всеки възел да съхранява множество ключове и да има множество деца.
- **Оптимизиран за външна памет**: B-дърветата са проектирани да минимизират броя на операциите за четене и запис, което ги прави подходящи за бази данни и файлови системи.
- **Логаритмична времева сложност**: B-дърветата поддържат операции като вмъкване, премахване, последователен достъп и търсене с логаритмична времева сложност (O(log N)).

### Структура на B-дървета
- **Структура на възел**: Всеки възел в B-tree може да съдържа множество ключове и ако възелът може да съдържа до `M` ключове, той може да има до `M + 1` деца.
- **Сортиран ред**: Ключовете във всеки възел се съхраняват в сортиран ред. Тази организация гарантира, че за всеки даден ключ във възел всички ключове в лявото дете са по-малки, а всички ключове в дясното дете са по-големи.

#### Пример
Помислете за възел на B-tree с ключове: 8, 12 и 20. Този възел ще има четири деца:
- Първото дете съдържа ключове под 8.
- Второто дете съдържа ключове между 8 и 12.
- Третото дете съдържа ключове между 12 и 20.
- Четвъртото дете съдържа ключове, по-големи от 20.

### Свойства на B-tree
1. **Максимален брой ключове**: Един възел може да съдържа максимум `M` ключове и `M + 1` деца.
2. **Минимум ключове**: Всеки възел (с изключение на основния) трябва да съдържа поне `⌊M/2⌋` ключа.
3. **Разделяне на възел**: Ако възел надвишава `M` ключове, той се разделя на два възела.
4. **Сливане на възли**: Ако даден възел съдържа по-малко от `⌊M/2⌋` ключа след изтриване, той се слива с братски възел.
5. **Равномерна височина**: Всички листни възли са на едно и също ниво, което прави B-trees балансирани.

### Изграждане на B-trees
B-trees се конструират по начин отдолу нагоре. Когато вмъкваме нови ключове, започваме от листовите възли. Ако даден възел се напълни, ние го разделяме и създаваме родителски възел, ако е необходимо. Това е различно от двоичните дървета за търсене, които се изграждат отгоре надолу.

### Заключение
B-trees са основна структура от данни за ефективно управление на големи количества данни във външни системи с памет. Техните уникални свойства и структура позволяват бърз достъп и модификации, което ги прави идеални за приложения като бази данни и файлови системи.
