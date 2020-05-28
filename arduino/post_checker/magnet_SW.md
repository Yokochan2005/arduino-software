# magnet_SW
## <img src="https://github.com/Yokochan2005/arduino-software/blob/master/arduino/post_checker/img/magnetSW.png" style="zoom:50%;" />
磁石に近づくと接点が閉じるマグネットSWをArduinoで動作確認する。

Arduino Uno R3を使用し、マグネットSWの他端を10kΩでプルアップ(5V)し、アナログ入力で電圧を計測した。

ネオジウム磁石を１～２ｃｍの距離にすると接点が閉じ、アナログ値が1023→0に変化




- circuit

  <img src="C:\Users\洋一郎\Documents\arduino-software\arduino\post_checker\circuit\magnet.jpg" style="zoom: 25%;" />

  