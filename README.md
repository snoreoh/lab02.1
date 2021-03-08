## Laboratory work II

## Homework

### Part I

1. Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).
```sh
  $ cd snoreoh/workspace/projects
  $ mkdir lab02.1 | cd lab02.1
  $ git init 
  Вывод: Initialized empty Git repository in /home/snoreoh/snoreoh/workspace/projects/lab02.1/.git/
  $ git remote add origin https://github.com/snoreoh/lab02.1.git
```
2. Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.
```sh
  $ touch README.md
  $ git add README.md
  $ git commit -m"added README.md"
  $ git push origin master
```
3. Создайте файл `hello_world.cpp` в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу **Hello world** на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку `using namespace std;`.
```sh
  $ cat > example/ex1 <<EOF
  Ввод:  
  > #include <iostream>
  > 
  > using namespace std;
  > 
  > int main(int argc, char** argv)
  > {
  >   cout<< "Hello world!"<< endl;
  > }
  > EOF
```
																						
4. Добавьте этот файл в локальную копию репозитория.
```sh
  $ git add .
```
5. Закоммитьте изменения с *осмысленным* сообщением.
```sh
  $ git commit -m"added hello_World.cpp"
```
6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение `Hello world from @name`, где `@name` имя пользователя.
```sh
  $ allias edit=nano
  $ edit hello_world.cpp 
```
7. Закоммитьте новую версию программы. Почему не надо добавлять файл повторно `git add`?
```sh
   $ git commit -m"hello_world.cpp has been changed" -a
```
 
8. Запуште изменения в удалёный репозиторий.
```sh
  $ git push origin master
```
9. [x] Проверьте, что история коммитов доступна в удалёный репозитории.

### Part II

**Note:** *Работать продолжайте с теми же репоззиториями, что и в первой части задания.*
1. В локальной копии репозитория создайте локальную ветку `patch1`.
```sh
  $ git сheckout -b patch1
```
2. Внесите изменения в ветке `patch1` по исправлению кода и избавления от `using namespace std;`.
```sh
  $ edit hello_world.cpp
```
3. **commit**, **push** локальную ветку в удалённый репозиторий.
```sh
   $ git commit -m"some new updates to hello_world.cpp"
   $ git push origin patch1 
```
4. [x] Проверьте, что ветка `patch1` доступна в удалёный репозитории. 
5. [x] Cоздайте pull-request `patch1 -> master`.
6. В локальной копии в ветке `patch1` добавьте в исходный код комментарии.
7. **commit**, **push**.
```sh
  $ edit hello_world.cpp 
  $ git commit -m"some more new updates to hello_world.cpp" -a
  $ git push origin patch1
```
8. [x] Проверьте, что новые изменения есть в созданном на **шаге 5** pull-request
9. В удалённый репозитории выполните  слияние PR `patch1 -> master` и удалите ветку `patch1` в удаленном репозитории.
```sh
  $ git checkout master
  $ git merge patch1
  $ git push origin master
  $ git push origin :patch1
```
10. Локально выполните **pull**.
```sh
   $ git pull origin master 
```

11. С помощью команды **git log** просмотрите историю в локальной версии ветки `master`.
```sh
  $ git pull origin master
  
  Часть вывода:
  commit be33a7dbe53f374557ff4965691c73dd44f6c4e3 (HEAD -> master, origin/master, patch1)
Author: snoreoh <nikita.hrapov@mail.ru>
Date:   Sun Mar 7 14:10:31 2021 +0300

    MORE UPDATES!

commit be33a7dbe53f374557ff4965691c73dd44f6c4e3 (HEAD -> master, origin/master, patch1)
Author: snoreoh <nikita.hrapov@mail.ru>
Date:   Sun Mar 7 14:10:31 2021 +0300

    MORE UPDATES!


commit 68089130a2a2837b2b2c1469a9a3e79dd4890433
Author: snoreoh <nikita.hrapov@mail.ru>
Date:   Sun Mar 7 10:51:15 2021 +0300

    hello_world.cpp has been changed

commit 77374b4833a52d9fdd9d1654fa5943ce8dc0431f
Author: snoreoh <nikita.hrapov@mail.ru>
Date:   Sun Mar 7 10:22:05 2021 +0300

    added hello_World.cpp
```
 12. Удалите локальную ветку `patch1`.
```sh
   $ git branch -d patch1
   
   Вывод:
   Deleted branch patch1 (was be33a7d).
```

### Part III

**Note:** *Работать продолжайте с теми же репоззиториями, что и в первой части задания.*
1. Создайте новую локальную ветку `patch2`.
```sh
  $ git checkout -b patch2
```
2. Измените *code style* с помощью утилиты [**clang-format**](http://clang.llvm.org/docs/ClangFormat.html). Например, используя опцию `-style=Mozilla`.
```sh
  $ clang-format -i -style=Chromium hello_world.cpp
```
3. **commit**, **push**, создайте pull-request `patch2 -> master`.
```sh
  $ git commit commit -m"changed code style" -a
  $ git push origin patch2
```
4. [x] В ветке **master** в удаленном репозитории измените комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.
5. [x] Убедитесь, что в pull-request появились *конфликтны*.
6. Для этого локально выполните **pull** + **rebase** (точную последовательность команд, следует узнать самостоятельно). **Исправьте конфликты**.
7. Сделайте *force push* в ветку `patch2`
8. Убедитель, что в pull-request пропали конфликтны. 
9. Вмержите pull-request `patch2 -> master`.
