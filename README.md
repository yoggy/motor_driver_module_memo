motor_driver_module_memo
====
ATtiny45+BD6211Fで作ったモータードライバモジュールを作成したときのメモ。

![写真1](https://github.com/yoggy/motor_driver_module_memo/blob/master/assets/photo1.jpg)
![写真2](https://github.com/yoggy/motor_driver_module_memo/blob/master/assets/photo2.jpg)


リニア振動アクチュエータを駆動するために作成。

* リニア振動アクチュエータ LD14-002
  * http://akizukidenshi.com/catalog/g/gP-06838/


部品メモ
----
* ATTINY45-20SU
  * http://jp.rs-online.com/web/p/microcontrollers/6962478/

* BD6211F-E2
  * http://akizukidenshi.com/catalog/g/gI-05087/

* SOP8(1.27mm) DIP変換基板
  * http://akizukidenshi.com/catalog/g/gP-05154/

* 適当なピンヘッダとかこまごま

仕様メモ
----
回路図
* [回路図](https://github.com/yoggy/motor_driver_module_memo/blob/master/assets/motor_driver_module.png)

ブレッドボードを使ったプロトタイプ
* [写真3](https://github.com/yoggy/motor_driver_module_memo/blob/master/assets/photo3.jpg)

ピンアサイン
* [写真4](https://github.com/yoggy/motor_driver_module_memo/blob/master/assets/photo4.jpg)

モーターを駆動する場合は、プルアップしたりコンデンサを入れておいた方が良さげかも…？

プログラムの書き込みについて
----
今回はArduino-ISPを使用してスケッチをATtiny45に書き込みました。

Arduino-ISPを使用した開発環境の構築手順については、下記URLを参考にしています。

* Arduino IDEでATtiny他の開発（Arduino-ISP編） | Make | kosakalab
  * http://make.kosakalab.com/make/electronic-work/arduino-ide-arduinoisp/
