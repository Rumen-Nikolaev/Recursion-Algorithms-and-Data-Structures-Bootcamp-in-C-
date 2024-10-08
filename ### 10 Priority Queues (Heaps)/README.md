# Купчини и приоритетни опашки

Този документ предоставя преглед на ключови концепции и реализации, свързани с купчини и приоритетни опашки. Всеки раздел включва кратко описание на темите, разгледани в нашите лекции.

## 67. Какво представляват приоритетните опашки? (5 минути)

Приоритетните опашки са абстрактни типове данни, които съхраняват елементи със свързани приоритети. В опашка с приоритет елементите с по-висок приоритет се обслужват преди елементи с по-нисък приоритет. Те могат да бъдат реализирани с помощта на различни структури от данни, но често се използват купчини поради тяхната ефективност при поддържане на приоритетния ред.

## 68. Въведение в Heap - Основи (10 минути)

В този раздел въведохме купчини, специализирана дървовидна структура от данни, която удовлетворява свойството купчина. Максималната купчина гарантира, че за всеки даден възел стойността на възела е по-голяма или равна на стойностите на неговите деца. Обратно, min heap гарантира, че стойността на възела е по-малка или равна на неговите деца. Купчините обикновено се използват за внедряване на приоритетни опашки.

## 69. Въведение в купчина - представяне на масив (10 мин.)

Купчините могат да бъдат ефективно представени с помощта на масив или едномерен вектор. В това представяне:
- Основният възел е с индекс 0.
- За възел с индекс `i`, лявото му дете е с индекс `2*i + 1`, а дясното му дете е с индекс `2*i + 2`.
- Това представяне позволява лесно обхождане и манипулиране на купчината без нужда от указатели, което го прави ефективно за пространство.

## 70. Въведение в купчина - Операция за премахване (7 минути)

Операцията за премахване в купчина обикновено включва премахване на коренния възел (максимум в максимална купчина или минимум в минимална купчина). След премахване на корена, последният елемент в купчината го замества. Това може да наруши свойството на купчината, така че се извършва операция за коригиране надолу, за да се възстанови структурата на купчината чрез сравняване на родителя с неговите деца и извършване на необходимите суапове.

## 71. Използване на Heap структура от данни за сортиране (Heapsort) (6 минути)

Heapsort е базиран на сравнение алгоритъм за сортиране, който използва структурата на данните на купчината. Процесът включва:
1. Изграждане на максимален куп от входните данни.
2. Многократно премахване на максималния елемент (корена) от купчината и поставянето му в края на сортирания масив.
3. Извикване на операцията за коригиране надолу за поддържане на структурата на купчината след всяко премахване.
Резултатът е сортиран масив във възходящ ред.

## 72. Въведение в купчината - Време за работа (5 минути)

Времето за изпълнение на общи операции в купчина е както следва:
- **Вмъкване:** O(log n)
- **Премахване (Извличане на макс./мин):** O(log n)
- **Надникване (Получаване на макс./мин):** O(1)
- **Конструкция на купчина:** O(n)
Тези ефективни времена на работа правят купчините подходящи за внедряване на приоритетни опашки и алгоритми за сортиране.

## 73. Бином и купчини на Фибоначи (4 минути)

Биномиалните купчини и купчините на Фибоначи са усъвършенствани структури от данни за купчина, които предлагат подобрена производителност за определени операции в сравнение със стандартните двоични купчини.
- **Биномиална купчина:** Поддържа ефективно сливане на две купчини и има логаритмична височина, което прави операциите за обединение бързи.
- **Fibonacci Heap:** Осигурява амортизирани времеви граници за вмъквания и операции с намаляване на ключовете, което го прави подходящ за алгоритми като най-краткия път на Дейкстра.

## 74. Внедряване на купища I (7 минути)

В този раздел изследвахме внедряването на купчини с помощта на едномерен масив. Покрихме операции като вмъкване, премахване и функциите за коригиране и коригиране, които поддържат свойството на купчината след операциите. Прост пример демонстрира използването на тези функции в практическа реализация.

## 75. Внедряване на купища II (5 минути)

Този раздел се фокусира върху допълнителни подробности за внедряването на купчина, по-специално алгоритъма за сортиране на купчина. Обсъдихме как да извършим сортирането чрез многократно премахване на максималния елемент от купчината и възстановяване на свойствата на купчината чрез операцията за коригиране надолу. Практически пример илюстрира как структурата на купчината позволява ефективно сортиране на цели числа.
