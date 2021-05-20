void setup(){
  size(1024,400);
  textFont( createFont("標楷體", 80));///顯示中文
}
void draw(){//因為系統會每秒更新，所以才會增加
  background( #8C61B2 );//色碼
  int s = second();  // Values from 0 - 59
  int m = minute();  // Values from 0 - 59
  int h = hour();    // Values from 0 - 23 ///參考文件可以找到
  textSize(55);
  text( h + " : " + m + " : " + s ,100,200);
    //數字+ 字串  數字 + 字串 數字
    // 等於字串    等於字串
  int total = s + 60*m + 60*60*h; ///目標總秒數
  int closeH=17 ,closeM=40,closeS=0;///結束的精確時間
  int total2= closeS + 60*closeM + 60*60*closeH; ///目標總秒數
  int ans = total2-total;
  text("剩下幾秒:" + ans,100,100);
  int ansH=ans/60/60%60,ansM=ans/60%60 ,ansS=ans%60;//剩下時間運算
  text( ansH + " : " + ansM + " : " + ansS ,100,300);//剩下時間
}
