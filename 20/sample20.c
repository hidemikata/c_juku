/*
プロセス間通信
https://ja.wikipedia.org/wiki/%E3%83%97%E3%83%AD%E3%82%BB%E3%82%B9%E9%96%93%E9%80%9A%E4%BF%A1
スレッドとの違い
　スレッドは1プロセス内のマルチタスク
　マルチプロセスは複数プロセスでのマルチタスク
　スレッドはメモリー空間を各スレッドで共有するが、
　マルチプロセスはメモリー空間は各プロセス個別に管理している。
　　基本的にほかのプロセス間のアドレスにアクセスできない。

プロセス間通信
プロセス間通信(IPC、英: interprocess communication)

プロセス間通信の種類
-パイプを使う方法
-特別なファイルを介す方法
-共有メモリを使う方法
-ソケット通信
がある。


-パイプを使う方法
パイプとは
ls | grep copy
のパイプと同じで、これをCで実装できる。
http://www.c-lang.net/pipe/index.html
pipe()パイプを作成する
fork()自プロセスを複製して後続の処理を続ける（分身する感じ）
パイプに書き込んだり、読み込んだりすると、分身したプロセス間で通信が可能



-特別なファイルを介す方法
パイプを使う方法だと、分身した２プロセスでしか通信ができない。
特別なファイルを介すことでだれとでも通信可能になる。
mkfifo()で特別なファイルを作成。
作成したファイルに各々のプロセスがread()したりwrite()したりすることで通信を行う。




-共有メモリを使う方法
http://www.ncad.co.jp/~komata/c-kouza13.htm
shmget共有メモリ取得
shmat共有メモリ使用開始 shmgetのときに得られるIDを指定し、その場所に別のプロセスが書き込む。
shmdt共有メモリ使用終了




-ソケット通信
ネットワークソケットを使うため、他のPCとも通信が可能なのだが、
自分のPC内の別のプロセスへ通信できるようなI/Fもあるので、プロセス間通信に使用できる。





http://www.geocities.jp/sugachan1973/doc/funto45.html
をTCPまで実施し、処理の流れを理解してください。
*/
