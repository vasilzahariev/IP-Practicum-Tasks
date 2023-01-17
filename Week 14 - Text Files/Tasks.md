# Задачи за "Текстови файлове"

*Забележка: Когато се четат низове от файл ще приемаме, че няма да са по-дълги от 1024.*

## Задача 1

Напишете програма, която сама прочита кода си и го принтира на конзолата.

## Задача 2

Напишете програма, която прочита 3 низа (с максимална големина от 1024) и заменя всяко срещане на 2рия низ с 3тия.

Низовете, които ще се прочитат:

1. Име на файл
2. Дума, която се търси
3. Дума, с която се замества търсената

## Задача 3

Имате структура **Person**, която има име (динамично заделен низ), години (цяло неотрицателно число) и приятели (динамично заделен масив от тип **Person**).

Имената винаги ще са първо и второ със спейс между тях.

Напишете програма, която прочита информация от файл с име "friends.txt" и я записва във файл "output.txt". Първо се прочита информация за това колко хора ще бъдат прочетени и информация за всеки отделен човек, тоест име и години. След това за всеки от тях ще се прочетете колко приятеля имат и какъв им е индекса (в долния пример "Vasil Zahariev" ще е с индекс 0, а "Luben Georgiev" с индекс 2). После трябва да се изведе информация за всеки човек в "output.txt".

Ако някои от приятелите прочете ни от файла не съществува, нека не се записва и да бъде изведено подходящото съобщение.

***friends.txt:***
```
4
Vasil Zahariev
20
Petar Kolev
21
Luben Georgiev
21
Nikolai Todorov
21
2 1 2
2 0 2
3 0 1 3
1 2
```

***output.txt:***
```
Name: Vasil Zahariev
Age: 20
Friends: Petar Kolev, Luben Georgiev
Name: Petar Kolev
Age: 21
Friends: Vasil Zahariev, Luben Georgiev
Name: Luben Georgiev
Age: 21
Friends: Vasil Zahariev, Petar Kolev, Nikolai Todorov
Name: Nikolai Todorov
Age: 21
Friends: Luben Georgiev
```