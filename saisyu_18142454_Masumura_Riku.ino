# define PIN 12
int LED_PIN1 = 8;
int LED_PIN2 = 9;
int LED_PIN3 = 10;
int LED_PIN4 = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin( 9600 ); // シリアルポートを初期化（9600bps)
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
  pinMode(LED_PIN4, OUTPUT);
}

void loop(){
  // 変数宣言
    int inkey; // 入力文字格納用

    // 読み込み情報の有無確認
    if( Serial.available() > 0 ) {

        //　シリアルから値の読み込み
        inkey = Serial.read();

        // 入力文字の判定
        switch( inkey ){
          case '1':
          Serial.println( "香水　瑛人" ); // シリアルポートへ出力
  tone(PIN, 311, 300);//べ
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 311, 300);//つ
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 311, 300);//に
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 311, 600);//き
  delay(600);
  digitalWrite(8, LOW);
  tone(PIN, 262, 300);//み
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 233, 300);//を
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 311, 300);//も
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 311, 300);//と
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 262, 300);//め
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 233, 300);//て
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 311, 300);//な
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 311, 300);//い
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 311, 300);//け
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 233, 300);//ど
  delay(600);
  digitalWrite(8, LOW);
  tone(PIN, 311, 300);//よ
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 311, 300);//こ
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 311, 300);//に
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 311, 600);//い
  delay(600);
  digitalWrite(8, LOW);
  tone(PIN, 262, 300);//ら
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 233, 300);//れ
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 311, 600);//る
  delay(600);
  digitalWrite(8, HIGH);
  tone(PIN, 262, 300);//と
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 233, 300);//お
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 311, 300);//も
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 311, 300);//い
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 311, 300);//だ
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 233, 300);//す
  delay(600);
  digitalWrite(8, HIGH);
  tone(PIN, 311, 300);//き
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 311, 300);//み
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 311, 300);//の
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 311, 600);//ド
  delay(600);
  digitalWrite(8, HIGH);
  tone(PIN, 262, 300);//ル
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 233, 300);//チェ
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 311, 600);//ア
  delay(600);
  digitalWrite(8, LOW);
  tone(PIN, 262, 300);//ン
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 233, 300);//ド
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 311, 300);//ガッ
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 311, 600);//バ-
  delay(600);
  digitalWrite(8, LOW);
  tone(PIN, 392, 600);//ナ
  delay(600);
  digitalWrite(8, HIGH);
  tone(PIN, 349, 300);//の
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 349, 300);//そ
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 311, 300);//の
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 311, 600);//香
  delay(600);
  digitalWrite(8, HIGH);
  tone(PIN, 311, 300);//す
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 392, 300);//い
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 349, 300);//の
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 311, 300);//せ
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 311, 300);//い
  delay(300);
  digitalWrite(8, LOW);
  tone(PIN, 311, 300);//だ
  delay(300);
  digitalWrite(8, HIGH);
  tone(PIN, 311, 1200);//よ
  delay(2000);
  digitalWrite(8, LOW);
            
            break;
            
case'2':
            Serial.println( "Dynamite BTS" ); // シリアルポートへ出力

  tone(PIN, 330, 130);//Cause
  delay(200);
  digitalWrite(9, HIGH);
  tone(PIN, 554, 260);//ah-
  delay(520);
  digitalWrite(9, LOW);
  tone(PIN, 494, 260);//ah
  delay(520);
  digitalWrite(9, HIGH);
  tone(PIN, 440, 260);//I'm
  delay(520);
  digitalWrite(9, LOW);
  tone(PIN, 415, 260);//in
  delay(260);
  digitalWrite(9, HIGH);
  tone(PIN, 415, 130);//the
  delay(130);
  digitalWrite(9, LOW);
  tone(PIN, 370, 260);//star
  delay(260);
  digitalWrite(9, HIGH);
  tone(PIN, 330, 130);//to
  delay(130);
  digitalWrite(9, LOW);
  tone(PIN, 330, 260);//night
  delay(985);
  digitalWrite(9, HIGH);
  tone(PIN, 330, 65);//So
  delay(65);
  digitalWrite(9, LOW);
  tone(PIN, 330, 130);//watch
  delay(130);
  digitalWrite(9, HIGH);
  tone(PIN, 330, 130);//me
  delay(130);
  digitalWrite(9, LOW);
  tone(PIN, 330, 260);//
  delay(260);
  digitalWrite(9, HIGH);
  tone(PIN, 554, 260);//bring
  delay(520);
  digitalWrite(9, LOW);
  tone(PIN, 494, 260);//the
  delay(520);
  digitalWrite(9, HIGH);
  tone(PIN, 440, 260);//fire
  delay(520);
  digitalWrite(9, LOW);
  tone(PIN, 415, 260);//and
  delay(260);
  digitalWrite(9, HIGH);
  tone(PIN, 330, 130);//set
  delay(130);
  digitalWrite(9, LOW);
  tone(PIN, 370, 260);//the
  delay(260);
  digitalWrite(9, HIGH);
  tone(PIN, 330, 130);//night
  delay(130);
  digitalWrite(9, LOW);
  tone(PIN, 330, 260);//alight
  delay(1820);
  digitalWrite(9, HIGH);
  tone(PIN, 247, 260);//Shining
  delay(260);
  digitalWrite(9, LOW);
  tone(PIN, 277, 130);//through
  delay(130);
  digitalWrite(9, HIGH);
  tone(PIN, 330, 130);//the
  delay(260);
  digitalWrite(9, LOW);
  tone(PIN, 370, 130);//city
  delay(260);
  digitalWrite(9, HIGH);
  tone(PIN, 415, 260);//with
  delay(260);
  digitalWrite(9, LOW);
  tone(PIN, 440, 130);//a
  delay(260);
  digitalWrite(9, HIGH);
  tone(PIN, 415, 260);//little
  delay(260);
  digitalWrite(9, LOW);
  tone(PIN, 440, 130);//funk
  delay(260);
  digitalWrite(9, HIGH);
  tone(PIN, 494, 260);//and
  delay(260);
  digitalWrite(9, LOW);
  tone(PIN, 494, 130);//soul
  delay(260);
  digitalWrite(9, HIGH);
  tone(PIN, 494, 260);//star
  delay(260);
  digitalWrite(9, LOW);
  tone(PIN, 494, 130);//star
  delay(260);
  digitalWrite(9, HIGH);
  tone(PIN, 494, 260);//star
  delay(260);
  digitalWrite(9, LOW);
  tone(PIN, 370, 130);//star
  delay(130);
  digitalWrite(9, HIGH);
  tone(PIN, 415, 260);//soul
  delay(260);
  digitalWrite(9, LOW);
  tone(PIN, 330, 130);//So
  delay(130);
  digitalWrite(9, HIGH);
  tone(PIN, 330, 130);//I'ma
  delay(390);
  digitalWrite(9, LOW);
  tone(PIN, 554, 260);//light
  delay(520);
  digitalWrite(9, HIGH);
  tone(PIN, 494, 260);//it
  delay(520);
  digitalWrite(9, LOW);
  tone(PIN, 440, 260);//up
  delay(520);
  digitalWrite(9, HIGH);
  tone(PIN, 415, 325);//li
  delay(325);
  digitalWrite(9, LOW);
  tone(PIN, 330, 65);//ke
  delay(65);
  digitalWrite(9, HIGH);
  tone(PIN, 370, 260);//dy
  delay(260);
  digitalWrite(9, LOW);
  tone(PIN, 330, 130);//na
  delay(130);
  digitalWrite(9, HIGH);
  tone(PIN, 330, 260);//mite
  delay(520);
  digitalWrite(9, LOW);
  tone(PIN, 330, 130);//wh
  delay(130);
  digitalWrite(9, HIGH);
  tone(PIN, 247, 260);//o
  delay(260);
  digitalWrite(9, LOW);
  tone(PIN, 330, 260);//a
  delay(260);
  digitalWrite(9, HIGH);
  digitalWrite(9, LOW);
            
            break;

            case '3':
          Serial.println( "炎　LISA" ); // シリアルポートへ出力
  tone(PIN, 330, 200);//ぼ
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 311, 200);//く
  delay(200);
  digitalWrite(10, LOW);
  tone(PIN, 330, 200);//た
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 370, 200);//ち
  delay(200);
  digitalWrite(10, LOW); 
  tone(PIN, 330, 400);//は
  delay(800);
  digitalWrite(10, HIGH);
  tone(PIN, 330, 200);//も
  delay(200);
  digitalWrite(10, LOW);
  tone(PIN, 311, 200);//え
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 330, 200);//さ
  delay(200);
  digitalWrite(10, LOW);
  tone(PIN, 370, 200);//か
  delay(200);
  digitalWrite(10, HIGH); 
  tone(PIN, 330, 400);//る
  delay(800);
  digitalWrite(10, LOW);
  tone(PIN, 330, 200);//た
  delay(200);
  digitalWrite(10, HIGH); 
  tone(PIN, 311, 200);//び
  delay(200);
  digitalWrite(10, LOW); 
  tone(PIN, 330, 200);//の
  delay(200);
  digitalWrite(10, HIGH); 
   tone(PIN, 370, 200);//と
  delay(200);
  digitalWrite(10, LOW);
  tone(PIN, 415, 400);//ちゅう
  delay(400);
  digitalWrite(10, HIGH);  
  tone(PIN, 466, 200);//で
  delay(200);
  digitalWrite(10, LOW); 
  tone(PIN, 370, 600);//で
  delay(600);
  digitalWrite(10, HIGH); 
  tone(PIN, 330, 200);//あ
  delay(200);
  digitalWrite(10, LOW); 
  tone(PIN, 415, 600);//い
  delay(1600);
  digitalWrite(10, HIGH); 
  tone(PIN, 311, 200);//て
  delay(200);
  digitalWrite(10, LOW); 
  tone(PIN, 330, 200);//を
  delay(200);
  digitalWrite(10, HIGH); 
  tone(PIN, 494, 400);//と
  delay(400);
  digitalWrite(10, LOW);
  tone(PIN, 494, 200);//り
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 494, 200);//そ
  delay(200);
  digitalWrite(10, LOW);
  tone(PIN, 494, 200);//し
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 494,400);//て
  delay(400);
  digitalWrite(10, LOW);
  tone(PIN, 554, 200);//は
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 494, 200);//な
  delay(200);
  digitalWrite(10, LOW);
  tone(PIN, 330, 200);//し
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 330, 400);//た
  delay(400);
  digitalWrite(10, LOW);
  tone(PIN, 659, 400);//み
  delay(400);
  digitalWrite(10, HIGH);
  tone(PIN, 622, 800);//らい
  delay(800);
  digitalWrite(10, LOW);
  tone(PIN, 494, 400);//の
  delay(400);
  digitalWrite(10, HIGH);
  tone(PIN, 370, 200);//た
  delay(200);
  digitalWrite(10, LOW);
  tone(PIN, 494, 200);//め
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 415, 800);//に
  delay(1200);
  digitalWrite(10, LOW);
  tone(PIN, 330, 200);//ゆ
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 311, 200);//め
  delay(200);
  digitalWrite(10, LOW);
  tone(PIN, 330, 200);//が
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 370, 200);//ひと
  delay(200);
  digitalWrite(10, LOW); 
  tone(PIN, 330, 400);//つ
  delay(800);
  digitalWrite(10, HIGH);
  tone(PIN, 330, 200);//か
  delay(200);
  digitalWrite(10, LOW);
  tone(PIN, 311, 200);//な
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 330, 200);//う
  delay(200);
  digitalWrite(10, LOW);
  tone(PIN, 370, 200);//た
  delay(200);
  digitalWrite(10, HIGH); 
  tone(PIN, 415, 400);//び
  delay(1200);
  digitalWrite(10, LOW);
  tone(PIN, 415, 200);//ぼ
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 440, 200);//く
  delay(200);
  digitalWrite(10, LOW);
  tone(PIN, 494, 400);//は
  delay(400);
  digitalWrite(10, LOW);
  tone(PIN, 494, 200);//き
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 494, 400);//み
  delay(400);
  digitalWrite(10, LOW);
  tone(PIN, 494, 400);//を
  delay(400);
  digitalWrite(10, HIGH);
  tone(PIN, 523, 400);//おも
  delay(400);
  digitalWrite(10, LOW);
  tone(PIN, 554, 400);//う
  delay(400);
  digitalWrite(10, HIGH);
  tone(PIN, 622, 400);//だ
  delay(400);
  digitalWrite(10, LOW);
  tone(PIN, 659, 800);//ろう
  delay(800);
  digitalWrite(10, HIGH);
  tone(PIN, 554, 400);//つ
  delay(400);
  digitalWrite(10, LOW);
  tone(PIN, 494, 400);//よ
  delay(400);
  digitalWrite(10, HIGH);
  tone(PIN, 440, 200);//く
  delay(200);
  digitalWrite(10, LOW);
  tone(PIN, 440, 200);//な
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 494, 400);//り
  delay(400);
  digitalWrite(10, LOW);
  tone(PIN, 330, 200);//た
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 330, 600);//い
  delay(600);
  digitalWrite(10, HIGH);
  tone(PIN, 330, 200);//と
  delay(200);
  digitalWrite(10, LOW);
  tone(PIN, 330, 200);//ね
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 370, 400);//が
  delay(400);
  digitalWrite(10, LOW);
  tone(PIN, 415, 200);//い
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 440, 400);//な
  delay(400);
  digitalWrite(10, LOW);
  tone(PIN, 415, 200);//い
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 415, 800);//た
  delay(1600);
  digitalWrite(10, LOW);
  tone(PIN, 415, 200);//け
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 370, 200);//つ
  delay(200);
  digitalWrite(10, LOW);
  tone(PIN, 330, 400);//い
  delay(1200);
  digitalWrite(10, HIGH);
  tone(PIN, 330, 200);//を
  delay(200);
  digitalWrite(10, LOW);
  tone(PIN, 330, 200);//は
  delay(200);
  digitalWrite(10, HIGH);
  tone(PIN, 370, 400);//な
  delay(400);
  digitalWrite(10, LOW);
  tone(PIN, 330, 400);//む
  delay(400);
  digitalWrite(10, HIGH);
  tone(PIN, 311, 400);//け
  delay(400);
  digitalWrite(10, LOW);
  tone(PIN, 330, 800);//に
  delay(1000);
  digitalWrite(10, LOW);
        break;
        
        case'4':
            Serial.println( "Make you happy NiziU" ); // シリアルポートへ出力

  tone(PIN, 523, 300);//ド
  delay(300);
  digitalWrite(11, HIGH);
  tone(PIN, 494, 300);//シ
  delay(300);
  digitalWrite(11, LOW);
  tone(PIN, 440, 300);//ラ
  delay(300);
  digitalWrite(11, HIGH);
  tone(PIN, 440, 150);//ラ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 392, 150);//ソ
  delay(150);
  digitalWrite(11, HIGH);
  tone(PIN, 494, 300);//シ
  delay(300);
  digitalWrite(11, LOW);
  tone(PIN, 392, 300);//ソ
  delay(300);
  digitalWrite(11, HIGH);
  tone(PIN, 392, 150);//ソ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 440, 150);//ラ
  delay(150);
  digitalWrite(11, HIGH);
  tone(PIN, 494, 300);//シ
  delay(300);
  digitalWrite(11, LOW);
  tone(PIN, 494, 300);//シ
  delay(600);
  digitalWrite(11, HIGH);
  tone(PIN, 494, 150);//シ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 494, 150);//シ
  delay(150);
  digitalWrite(11, HIGH);
  tone(PIN, 440, 150);//ラ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 440, 150);//ラ
  delay(200);
  digitalWrite(11, HIGH);
  tone(PIN, 392, 150);//ソ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 494, 300);//シ
  delay(400);
  digitalWrite(111, HIGH);
  tone(PIN, 392, 600);//ソ
  delay(1600);
  digitalWrite(11, LOW);
  tone(PIN, 494, 150);//シ
  delay(150);
  digitalWrite(11, HIGH);
  tone(PIN, 440, 150);//ラ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 392, 150);//ソ
  delay(150);
  digitalWrite(11, HIGH);
  tone(PIN, 494, 300);//シ
  delay(300);
  digitalWrite(11, LOW);
  tone(PIN, 392, 300);//ソ
  delay(300);
  digitalWrite(11, HIGH);
  tone(PIN, 392, 150);//ソ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 440, 150);//ラ
  delay(150);
  digitalWrite(11, HIGH);
  tone(PIN, 494, 300);//シ
  delay(300);
  digitalWrite(11, LOW);
  tone(PIN, 494, 300);//シ
  delay(400);
  digitalWrite(11, HIGH);
  tone(PIN, 494, 300);//シ
  delay(300);
  digitalWrite(11, LOW);
  tone(PIN, 494, 150);//シ
  delay(150);
  digitalWrite(11, HIGH);
  tone(PIN, 440, 150);//ラ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 440, 150);//ラ
  delay(150);
  digitalWrite(11, HIGH);
  tone(PIN, 392, 150);//ソ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 494, 150);//シ
  delay(150);
  digitalWrite(11, HIGH);
  tone(PIN, 392, 150);//ソ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 392, 150);//ソ
  delay(150);
  digitalWrite(11, HIGH);
  tone(PIN, 392, 150);//ソ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 392, 150);//ソ
  delay(150);
  digitalWrite(11, HIGH);
  tone(PIN, 392, 150);//ソ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 440, 300);//ラ
  delay(300);
  digitalWrite(11, HIGH);
  tone(PIN, 440, 300);//ラ
  delay(300);
  digitalWrite(11, LOW);
  tone(PIN, 494, 300);//シ
  delay(600);
  digitalWrite(11, HIGH);
  tone(PIN, 392, 300);//ソ
  delay(300);
  digitalWrite(11, LOW);
  tone(PIN, 440, 300);//ラ
  delay(300);
  digitalWrite(11, HIGH);
  tone(PIN, 494, 300);//シ
  delay(300);
  digitalWrite(11, LOW);
  tone(PIN, 659, 300);//ミ
  delay(300);
  digitalWrite(11, HIGH);
  tone(PIN, 587, 300);//レ
  delay(300);
  digitalWrite(11, LOW);
  tone(PIN, 494, 300);//シ
  delay(300);
  digitalWrite(11, HIGH);
  tone(PIN, 440, 300);//ラ
  delay(300);
  digitalWrite(11, LOW);
  tone(PIN, 392, 300);//ソ
  delay(300);
  digitalWrite(11, HIGH);
  tone(PIN, 440, 300);//ラ
  delay(300);
  digitalWrite(11, LOW);
  tone(PIN, 494, 300);//シ
  delay(300);
  digitalWrite(11, HIGH);
  tone(PIN, 330, 300);//ミ
  delay(300);
  digitalWrite(11, LOW);
  tone(PIN, 392, 300);//ソ
  delay(600);
  digitalWrite(11, HIGH);
  tone(PIN, 392, 150);//ソ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 440, 300);//ラ
  delay(300);
  digitalWrite(11, HIGH);
  tone(PIN, 440, 300);//ラ
  delay(300);
  digitalWrite(11, LOW);
  tone(PIN, 494, 300);//シ
  delay(600);
  digitalWrite(11, HIGH);
  tone(PIN, 440, 150);//ラ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 440, 150);//ラ
  delay(150);
  digitalWrite(11, HIGH);
  tone(PIN, 392, 150);//ソ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 494, 300);//シ
  delay(600);
  digitalWrite(11, HIGH);
  tone(PIN, 440, 150);//ラ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 440, 150);//ラ
  delay(150);
  digitalWrite(11, HIGH);
  tone(PIN, 392, 150);//ソ
  delay(300);
  digitalWrite(11, LOW);
  tone(PIN, 494, 300);//シ
  delay(600);
  digitalWrite(11, HIGH);
  tone(PIN, 392, 150);//ソ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 440, 300);//ラ
  delay(300);
  digitalWrite(11, HIGH);
  tone(PIN, 392, 300);//ソ
  delay(600);
  digitalWrite(11, LOW);
  tone(PIN, 392, 150);//ソ
  delay(150);
  digitalWrite(11, HIGH);
  tone(PIN, 440, 300);//ラ
  delay(300);
  digitalWrite(11, LOW);
  tone(PIN, 392, 300);//ソ
  delay(600);
  digitalWrite(11,HIGH);
  tone(PIN, 392, 150);//ソ
  delay(150);
  digitalWrite(11, LOW);
  tone(PIN, 392, 300);//ソ
  delay(300);
  digitalWrite(11, HIGH);
  tone(PIN, 392, 300);//ソ
  delay(600);

  break;
  
        }
    }
  }
