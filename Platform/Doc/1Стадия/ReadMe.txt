Простая и понятная инструкция для пересчёта ключей в Bootcore телефонов Е71\EL71. 
После этой процедуры можно будет ввести BootKey в телефон, создать загрузчик для V-Klay, чтобы можно было сливать\заливать фуллфлеш, устанавливать патчи и т.п.

Если у вас EL71 с заводской версией прошивки ниже 41, то никаких операций с ТП делать не надо!

Необходимые коды HASH и ESN читаются через мидлет bsReader. 
Выпишите их перед тем как выполнить следующие операции.

Потребуется программа PapuaUtils 1.1.1b и кабель DCA-110.

Внимание! Аккумулятор телефона должен быть подключен к нему на время всех операций с телефоном!!!

Выставляем правильный номер СОМ-порта и жмём кнопку Информация. PapuaUtils должен отобразить справа данные о подключенном телефоне.

Переходим на вкладку Коды. Вводим ESN, полученный мидлетом bsReader. SKEY пишем 12345678.

Нажимаем Пересчитать HASH и BootKEY из ESN и SKEY. Получаем:

Далее идем на вкладку Флэш.
Отмечаем галочки так, как на картинке:

Замыкаем тестпоинт. Жмём Выполнить.
E71:

EL71 (замыкать через резистор):

Далее нам надо очень быстро инициировать короткое нажатие красной трубки на клавиатуре.

Не отпуская ТП, замыкаем пины, обозначенные желтыми кругами кругами на 1 сек

Как только появится надпись "Бут загружен. Пауза 2сек" быстро отпускаем ТП.

Как только увидим надпись "Бут отключен. Всё слеплено", собираем телефон. Включаем телефон. Нажимаем кнопку Ввести SKEY(BKEY) и вуаля - телефон в Factory Mode.

Для создания лоадера под V-Klay жмём кнопку V-Klay.vkd и кидаем его в папку с лоадерами V-Klay.
