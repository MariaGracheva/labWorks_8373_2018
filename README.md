# Осенний курс по дисциплине "Программирование" 2018

## Правила работы с репозиторием

- Для начала работы каждый студент делает форк (fork) репозитория на свой GitHub аккаунт.
- Каждый студент работает строго в своей директории FirstIO/ , где FirstIO - название директории в формате ФамилияИО на латинице. Если студент что-то изменяет в чужих директориях и во время пул-реквеста это замечается - студент это будет самостоятельно исправлять до корректного вида.
- Для каждой лабораторной требуется создавать отдельную директорию lab#, где # - номер лабораторной от 1 до 7.
- Внутри должно быть содержание папки с вашим проектом (т.е. папка с .sln файлом либо .pro в случае QtCreator, исходными кодами и так далее)
- Для каждой лабораторной создается **отдельная новая ветка (branch)** (checkout -b < FirstIO\_lab# >, где FirstIO - ФамилияИО, а # - номер работы).
- Для сдачи лабораторной работы создается пул-реквест (pull-request) из Вашей ветки с лабораторной работой в master-ветку общего репозитория курса. В начале заголовка пул-реквеста пишется "[READY] ", После - ФамилияИО, после - lab#.
- Для сдачи работы требуется закрытый пул-реквест со слиянием (merge) Вашей ветки в общий репозиторий. В таком случае работа считается **зачтенной**.
- Если имеются какие-либо нарекания к предложенным студентом файлам, то все замечания пишутся проверяющим в комментарии пул-реквеста, а так же изменяется префикс заголовка на [WIP].
- Напоминание: коммиты в ветку, которую студент отправляет на пул-реквест отображаются в самом пул-реквесте. **Делать новый пул-реквест не надо.**
- Закончив исправления, студент пишет об этом отдельным комментарием, указывая, возможно, пояснения к исправлениям, а так же меняет префикс заголовка пул-реквеста на [READY].
- Курс лабораторных считается завершенным полностью, если в основном репозитории находятся директории всех 7 лабораторных работ студента, а так-же защищены все помеченные работы.
