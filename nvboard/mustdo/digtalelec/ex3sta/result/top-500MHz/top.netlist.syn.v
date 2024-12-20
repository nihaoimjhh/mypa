/* Generated by Yosys 0.44+20 (git sha1 5fb3c0b1d, clang++ 14.0.0-1ubuntu1.1 -fPIC -O3) */

module AND(SW1, SW2, ld);
  wire _00_;
  wire _01_;
  wire _02_;
  wire _03_;
  wire _04_;
  wire _05_;
  wire _06_;
  wire _07_;
  wire _08_;
  wire _09_;
  wire _10_;
  wire _11_;
  wire _12_;
  input [3:0] SW1;
  wire [3:0] SW1;
  input [3:0] SW2;
  wire [3:0] SW2;
  output [6:0] ld;
  wire [6:0] ld;
  AND2_X4 _13_ (
    .A1(_04_),
    .A2(_00_),
    .ZN(_08_)
  );
  AND2_X4 _14_ (
    .A1(_05_),
    .A2(_01_),
    .ZN(_09_)
  );
  AND2_X4 _15_ (
    .A1(_06_),
    .A2(_02_),
    .ZN(_10_)
  );
  AND2_X4 _16_ (
    .A1(_07_),
    .A2(_03_),
    .ZN(_11_)
  );
  LOGIC0_X1 _17_ (
    .Z(_12_)
  );
  BUF_X1 _18_ (
    .A(_12_),
    .Z(ld[4])
  );
  BUF_X1 _19_ (
    .A(_12_),
    .Z(ld[5])
  );
  BUF_X1 _20_ (
    .A(_12_),
    .Z(ld[6])
  );
  BUF_X1 _21_ (
    .A(SW2[0]),
    .Z(_04_)
  );
  BUF_X1 _22_ (
    .A(SW1[0]),
    .Z(_00_)
  );
  BUF_X1 _23_ (
    .A(_08_),
    .Z(ld[0])
  );
  BUF_X1 _24_ (
    .A(SW2[1]),
    .Z(_05_)
  );
  BUF_X1 _25_ (
    .A(SW1[1]),
    .Z(_01_)
  );
  BUF_X1 _26_ (
    .A(_09_),
    .Z(ld[1])
  );
  BUF_X1 _27_ (
    .A(SW2[2]),
    .Z(_06_)
  );
  BUF_X1 _28_ (
    .A(SW1[2]),
    .Z(_02_)
  );
  BUF_X1 _29_ (
    .A(_10_),
    .Z(ld[2])
  );
  BUF_X1 _30_ (
    .A(SW2[3]),
    .Z(_07_)
  );
  BUF_X1 _31_ (
    .A(SW1[3]),
    .Z(_03_)
  );
  BUF_X1 _32_ (
    .A(_11_),
    .Z(ld[3])
  );
endmodule

module EQ3(SW1, SW2, LD);
  wire _00_;
  wire _01_;
  wire _02_;
  wire _03_;
  wire _04_;
  wire _05_;
  wire _06_;
  wire _07_;
  wire _08_;
  wire _09_;
  output [6:0] LD;
  wire [6:0] LD;
  input [2:0] SW1;
  wire [2:0] SW1;
  input [2:0] SW2;
  wire [2:0] SW2;
  wire eq0;
  XNOR2_X2 _10_ (
    .A(_04_),
    .B(_01_),
    .ZN(_08_)
  );
  XNOR2_X2 _11_ (
    .A(_03_),
    .B(_00_),
    .ZN(_09_)
  );
  XNOR2_X2 _12_ (
    .A(_05_),
    .B(_02_),
    .ZN(_07_)
  );
  AND3_X1 _13_ (
    .A1(_08_),
    .A2(_09_),
    .A3(_07_),
    .ZN(_06_)
  );
  BUF_X1 _14_ (
    .A(eq0),
    .Z(LD[0])
  );
  BUF_X1 _15_ (
    .A(eq0),
    .Z(LD[1])
  );
  BUF_X1 _16_ (
    .A(eq0),
    .Z(LD[2])
  );
  BUF_X1 _17_ (
    .A(eq0),
    .Z(LD[3])
  );
  BUF_X1 _18_ (
    .A(eq0),
    .Z(LD[4])
  );
  BUF_X1 _19_ (
    .A(eq0),
    .Z(LD[5])
  );
  BUF_X1 _20_ (
    .A(eq0),
    .Z(LD[6])
  );
  BUF_X1 _21_ (
    .A(SW2[2]),
    .Z(_05_)
  );
  BUF_X1 _22_ (
    .A(SW1[2]),
    .Z(_02_)
  );
  BUF_X1 _23_ (
    .A(SW2[1]),
    .Z(_04_)
  );
  BUF_X1 _24_ (
    .A(SW1[1]),
    .Z(_01_)
  );
  BUF_X1 _25_ (
    .A(SW2[0]),
    .Z(_03_)
  );
  BUF_X1 _26_ (
    .A(SW1[0]),
    .Z(_00_)
  );
  BUF_X1 _27_ (
    .A(_06_),
    .Z(eq0)
  );
endmodule

module NOT(SW1, ld);
  wire _00_;
  wire _01_;
  wire _02_;
  wire _03_;
  wire _04_;
  wire _05_;
  wire _06_;
  wire _07_;
  wire _08_;
  input [3:0] SW1;
  wire [3:0] SW1;
  output [6:0] ld;
  wire [6:0] ld;
  INV_X1 _09_ (
    .A(_00_),
    .ZN(_04_)
  );
  INV_X1 _10_ (
    .A(_01_),
    .ZN(_05_)
  );
  INV_X1 _11_ (
    .A(_02_),
    .ZN(_06_)
  );
  INV_X1 _12_ (
    .A(_03_),
    .ZN(_07_)
  );
  LOGIC0_X1 _13_ (
    .Z(_08_)
  );
  BUF_X1 _14_ (
    .A(_08_),
    .Z(ld[4])
  );
  BUF_X1 _15_ (
    .A(_08_),
    .Z(ld[5])
  );
  BUF_X1 _16_ (
    .A(_08_),
    .Z(ld[6])
  );
  BUF_X1 _17_ (
    .A(SW1[0]),
    .Z(_00_)
  );
  BUF_X1 _18_ (
    .A(_04_),
    .Z(ld[0])
  );
  BUF_X1 _19_ (
    .A(SW1[1]),
    .Z(_01_)
  );
  BUF_X1 _20_ (
    .A(_05_),
    .Z(ld[1])
  );
  BUF_X1 _21_ (
    .A(SW1[2]),
    .Z(_02_)
  );
  BUF_X1 _22_ (
    .A(_06_),
    .Z(ld[2])
  );
  BUF_X1 _23_ (
    .A(SW1[3]),
    .Z(_03_)
  );
  BUF_X1 _24_ (
    .A(_07_),
    .Z(ld[3])
  );
endmodule

module OR(SW1, SW2, ld);
  wire _00_;
  wire _01_;
  wire _02_;
  wire _03_;
  wire _04_;
  wire _05_;
  wire _06_;
  wire _07_;
  wire _08_;
  wire _09_;
  wire _10_;
  wire _11_;
  wire _12_;
  input [3:0] SW1;
  wire [3:0] SW1;
  input [3:0] SW2;
  wire [3:0] SW2;
  output [6:0] ld;
  wire [6:0] ld;
  OR2_X4 _13_ (
    .A1(_04_),
    .A2(_00_),
    .ZN(_08_)
  );
  OR2_X4 _14_ (
    .A1(_05_),
    .A2(_01_),
    .ZN(_09_)
  );
  OR2_X4 _15_ (
    .A1(_06_),
    .A2(_02_),
    .ZN(_10_)
  );
  OR2_X4 _16_ (
    .A1(_07_),
    .A2(_03_),
    .ZN(_11_)
  );
  LOGIC0_X1 _17_ (
    .Z(_12_)
  );
  BUF_X1 _18_ (
    .A(_12_),
    .Z(ld[4])
  );
  BUF_X1 _19_ (
    .A(_12_),
    .Z(ld[5])
  );
  BUF_X1 _20_ (
    .A(_12_),
    .Z(ld[6])
  );
  BUF_X1 _21_ (
    .A(SW2[0]),
    .Z(_04_)
  );
  BUF_X1 _22_ (
    .A(SW1[0]),
    .Z(_00_)
  );
  BUF_X1 _23_ (
    .A(_08_),
    .Z(ld[0])
  );
  BUF_X1 _24_ (
    .A(SW2[1]),
    .Z(_05_)
  );
  BUF_X1 _25_ (
    .A(SW1[1]),
    .Z(_01_)
  );
  BUF_X1 _26_ (
    .A(_09_),
    .Z(ld[1])
  );
  BUF_X1 _27_ (
    .A(SW2[2]),
    .Z(_06_)
  );
  BUF_X1 _28_ (
    .A(SW1[2]),
    .Z(_02_)
  );
  BUF_X1 _29_ (
    .A(_10_),
    .Z(ld[2])
  );
  BUF_X1 _30_ (
    .A(SW2[3]),
    .Z(_07_)
  );
  BUF_X1 _31_ (
    .A(SW1[3]),
    .Z(_03_)
  );
  BUF_X1 _32_ (
    .A(_11_),
    .Z(ld[3])
  );
endmodule

module XOR(SW1, SW2, ld);
  wire _00_;
  wire _01_;
  wire _02_;
  wire _03_;
  wire _04_;
  wire _05_;
  wire _06_;
  wire _07_;
  wire _08_;
  wire _09_;
  wire _10_;
  wire _11_;
  wire _12_;
  input [3:0] SW1;
  wire [3:0] SW1;
  input [3:0] SW2;
  wire [3:0] SW2;
  output [6:0] ld;
  wire [6:0] ld;
  XOR2_X1 _13_ (
    .A(_04_),
    .B(_00_),
    .Z(_08_)
  );
  XOR2_X1 _14_ (
    .A(_05_),
    .B(_01_),
    .Z(_09_)
  );
  XOR2_X1 _15_ (
    .A(_06_),
    .B(_02_),
    .Z(_10_)
  );
  XOR2_X1 _16_ (
    .A(_07_),
    .B(_03_),
    .Z(_11_)
  );
  LOGIC0_X1 _17_ (
    .Z(_12_)
  );
  BUF_X1 _18_ (
    .A(_12_),
    .Z(ld[4])
  );
  BUF_X1 _19_ (
    .A(_12_),
    .Z(ld[5])
  );
  BUF_X1 _20_ (
    .A(_12_),
    .Z(ld[6])
  );
  BUF_X1 _21_ (
    .A(SW2[0]),
    .Z(_04_)
  );
  BUF_X1 _22_ (
    .A(SW1[0]),
    .Z(_00_)
  );
  BUF_X1 _23_ (
    .A(_08_),
    .Z(ld[0])
  );
  BUF_X1 _24_ (
    .A(SW2[1]),
    .Z(_05_)
  );
  BUF_X1 _25_ (
    .A(SW1[1]),
    .Z(_01_)
  );
  BUF_X1 _26_ (
    .A(_09_),
    .Z(ld[1])
  );
  BUF_X1 _27_ (
    .A(SW2[2]),
    .Z(_06_)
  );
  BUF_X1 _28_ (
    .A(SW1[2]),
    .Z(_02_)
  );
  BUF_X1 _29_ (
    .A(_10_),
    .Z(ld[2])
  );
  BUF_X1 _30_ (
    .A(SW2[3]),
    .Z(_07_)
  );
  BUF_X1 _31_ (
    .A(SW1[3]),
    .Z(_03_)
  );
  BUF_X1 _32_ (
    .A(_11_),
    .Z(ld[3])
  );
endmodule

module add(SW1, SW2, LD);
  wire _00_;
  wire _01_;
  wire _02_;
  wire _03_;
  wire _04_;
  wire _05_;
  wire _06_;
  wire _07_;
  output [6:0] LD;
  wire [6:0] LD;
  input [3:0] SW1;
  wire [3:0] SW1;
  input [3:0] SW2;
  wire [3:0] SW2;
  wire cout1;
  wire cout2;
  wire cout3;
  wire cout4;
  wire s0;
  wire s1;
  wire s2;
  wire s3;
  NOR3_X1 _08_ (
    .A1(_05_),
    .A2(_04_),
    .A3(_06_),
    .ZN(_01_)
  );
  XOR2_X1 _09_ (
    .A(_03_),
    .B(_02_),
    .Z(_00_)
  );
  LOGIC0_X1 _10_ (
    .Z(_07_)
  );
  BUF_X1 _11_ (
    .A(s0),
    .Z(LD[0])
  );
  BUF_X1 _12_ (
    .A(s1),
    .Z(LD[1])
  );
  BUF_X1 _13_ (
    .A(s2),
    .Z(LD[2])
  );
  BUF_X1 _14_ (
    .A(s3),
    .Z(LD[3])
  );
  BUF_X1 _15_ (
    .A(cout4),
    .Z(LD[4])
  );
  BUF_X1 _16_ (
    .A(s1),
    .Z(_05_)
  );
  BUF_X1 _17_ (
    .A(s0),
    .Z(_04_)
  );
  BUF_X1 _18_ (
    .A(s2),
    .Z(_06_)
  );
  BUF_X1 _19_ (
    .A(_01_),
    .Z(LD[6])
  );
  BUF_X1 _20_ (
    .A(cout4),
    .Z(_03_)
  );
  BUF_X1 _21_ (
    .A(cout3),
    .Z(_02_)
  );
  BUF_X1 _22_ (
    .A(_00_),
    .Z(LD[5])
  );
  add1 insert_0 (
    .a(SW1[0]),
    .b(SW2[0]),
    .cin(_07_),
    .cout(cout1),
    .sum(s0)
  );
  add1 insert_1 (
    .a(SW1[1]),
    .b(SW2[1]),
    .cin(cout1),
    .cout(cout2),
    .sum(s1)
  );
  add1 insert_2 (
    .a(SW1[2]),
    .b(SW2[2]),
    .cin(cout2),
    .cout(cout3),
    .sum(s2)
  );
  add1 insert_3 (
    .a(SW1[3]),
    .b(SW2[3]),
    .cin(cout3),
    .cout(cout4),
    .sum(s3)
  );
endmodule

module add1(a, b, cin, sum, cout);
  wire _00_;
  wire _01_;
  wire _02_;
  wire _03_;
  wire _04_;
  wire _05_;
  wire _06_;
  wire _07_;
  input a;
  wire a;
  input b;
  wire b;
  input cin;
  wire cin;
  output cout;
  wire cout;
  output sum;
  wire sum;
  XOR2_X2 _08_ (
    .A(_02_),
    .B(_00_),
    .Z(_04_)
  );
  XOR2_X1 _09_ (
    .A(_04_),
    .B(_01_),
    .Z(_07_)
  );
  NAND2_X1 _10_ (
    .A1(_04_),
    .A2(_01_),
    .ZN(_05_)
  );
  NAND2_X1 _11_ (
    .A1(_02_),
    .A2(_00_),
    .ZN(_06_)
  );
  NAND2_X1 _12_ (
    .A1(_05_),
    .A2(_06_),
    .ZN(_03_)
  );
  BUF_X1 _13_ (
    .A(cin),
    .Z(_02_)
  );
  BUF_X1 _14_ (
    .A(a),
    .Z(_00_)
  );
  BUF_X1 _15_ (
    .A(b),
    .Z(_01_)
  );
  BUF_X1 _16_ (
    .A(_07_),
    .Z(sum)
  );
  BUF_X1 _17_ (
    .A(_03_),
    .Z(cout)
  );
endmodule

module compare(SW1, SW2, LD);
  wire _00_;
  wire _01_;
  wire _02_;
  wire _03_;
  wire _04_;
  wire _05_;
  wire _06_;
  wire _07_;
  wire _08_;
  wire _09_;
  wire _10_;
  wire _11_;
  wire _12_;
  wire _13_;
  wire _14_;
  wire _15_;
  wire _16_;
  wire _17_;
  wire _18_;
  wire _19_;
  wire _20_;
  wire _21_;
  output [6:0] LD;
  wire [6:0] LD;
  input [2:0] SW1;
  wire [2:0] SW1;
  input [2:0] SW2;
  wire [2:0] SW2;
  wire eq0;
  INV_X32 _22_ (
    .A(_04_),
    .ZN(_09_)
  );
  AND2_X4 _23_ (
    .A1(_09_),
    .A2(_07_),
    .ZN(_10_)
  );
  INV_X32 _24_ (
    .A(_03_),
    .ZN(_11_)
  );
  AOI21_X4 _25_ (
    .A(_10_),
    .B1(_11_),
    .B2(_06_),
    .ZN(_12_)
  );
  NOR2_X1 _26_ (
    .A1(_09_),
    .A2(_07_),
    .ZN(_13_)
  );
  NOR2_X1 _27_ (
    .A1(_11_),
    .A2(_06_),
    .ZN(_14_)
  );
  NOR2_X1 _28_ (
    .A1(_13_),
    .A2(_14_),
    .ZN(_15_)
  );
  INV_X1 _29_ (
    .A(_02_),
    .ZN(_16_)
  );
  NOR2_X1 _30_ (
    .A1(_16_),
    .A2(_05_),
    .ZN(_17_)
  );
  INV_X1 _31_ (
    .A(_17_),
    .ZN(_18_)
  );
  AND2_X1 _32_ (
    .A1(_16_),
    .A2(_05_),
    .ZN(_19_)
  );
  INV_X1 _33_ (
    .A(_19_),
    .ZN(_20_)
  );
  AND4_X2 _34_ (
    .A1(_12_),
    .A2(_15_),
    .A3(_18_),
    .A4(_20_),
    .ZN(_08_)
  );
  NAND2_X1 _35_ (
    .A1(_12_),
    .A2(_15_),
    .ZN(_21_)
  );
  OAI22_X1 _36_ (
    .A1(_21_),
    .A2(_18_),
    .B1(_10_),
    .B2(_15_),
    .ZN(_01_)
  );
  OAI22_X1 _37_ (
    .A1(_21_),
    .A2(_20_),
    .B1(_12_),
    .B2(_13_),
    .ZN(_00_)
  );
  BUF_X1 _38_ (
    .A(LD[2]),
    .Z(LD[0])
  );
  BUF_X1 _39_ (
    .A(LD[2]),
    .Z(LD[1])
  );
  BUF_X1 _40_ (
    .A(eq0),
    .Z(LD[3])
  );
  BUF_X1 _41_ (
    .A(LD[6]),
    .Z(LD[4])
  );
  BUF_X1 _42_ (
    .A(LD[6]),
    .Z(LD[5])
  );
  BUF_X1 _43_ (
    .A(SW1[2]),
    .Z(_04_)
  );
  BUF_X1 _44_ (
    .A(SW2[2]),
    .Z(_07_)
  );
  BUF_X1 _45_ (
    .A(SW1[1]),
    .Z(_03_)
  );
  BUF_X1 _46_ (
    .A(SW2[1]),
    .Z(_06_)
  );
  BUF_X1 _47_ (
    .A(SW1[0]),
    .Z(_02_)
  );
  BUF_X1 _48_ (
    .A(SW2[0]),
    .Z(_05_)
  );
  BUF_X1 _49_ (
    .A(_08_),
    .Z(eq0)
  );
  BUF_X1 _50_ (
    .A(_01_),
    .Z(LD[6])
  );
  BUF_X1 _51_ (
    .A(_00_),
    .Z(LD[2])
  );
endmodule

module subtraction(SW1, SW2, LD);
  wire _00_;
  wire _01_;
  wire _02_;
  wire _03_;
  wire _04_;
  wire _05_;
  wire _06_;
  output [6:0] LD;
  wire [6:0] LD;
  wire \SW0s[0] ;
  wire \SW0s[1] ;
  wire \SW0s[2] ;
  input [3:0] SW1;
  wire [3:0] SW1;
  input [3:0] SW2;
  wire [3:0] SW2;
  XOR2_X1 _07_ (
    .A(_03_),
    .B(_02_),
    .Z(_00_)
  );
  NOR2_X4 _08_ (
    .A1(_03_),
    .A2(_02_),
    .ZN(_05_)
  );
  XNOR2_X1 _09_ (
    .A(_05_),
    .B(_04_),
    .ZN(_01_)
  );
  LOGIC1_X1 _10_ (
    .Z(_06_)
  );
  BUF_X1 _11_ (
    .A(SW2[0]),
    .Z(\SW0s[0] )
  );
  BUF_X1 _12_ (
    .A(SW2[1]),
    .Z(_03_)
  );
  BUF_X1 _13_ (
    .A(SW2[0]),
    .Z(_02_)
  );
  BUF_X1 _14_ (
    .A(_00_),
    .Z(\SW0s[1] )
  );
  BUF_X1 _15_ (
    .A(SW2[2]),
    .Z(_04_)
  );
  BUF_X1 _16_ (
    .A(_01_),
    .Z(\SW0s[2] )
  );
  add insert_0 (
    .LD(LD),
    .SW1(SW1),
    .SW2({ _06_, \SW0s[2] , \SW0s[1] , SW2[0] })
  );
endmodule

module top(BTN, SW1, SW2, LD);
  wire _000_;
  wire _001_;
  wire _002_;
  wire _003_;
  wire _004_;
  wire _005_;
  wire _006_;
  wire _007_;
  wire _008_;
  wire _009_;
  wire _010_;
  wire _011_;
  wire _012_;
  wire _013_;
  wire _014_;
  wire _015_;
  wire _016_;
  wire _017_;
  wire _018_;
  wire _019_;
  wire _020_;
  wire _021_;
  wire _022_;
  wire _023_;
  wire _024_;
  wire _025_;
  wire _026_;
  wire _027_;
  wire _028_;
  wire _029_;
  wire _030_;
  wire _031_;
  wire _032_;
  wire _033_;
  wire _034_;
  wire _035_;
  wire _036_;
  wire _037_;
  wire _038_;
  wire _039_;
  wire _040_;
  wire _041_;
  wire _042_;
  wire _043_;
  wire _044_;
  wire _045_;
  wire _046_;
  wire _047_;
  wire _048_;
  wire _049_;
  wire _050_;
  wire _051_;
  wire _052_;
  wire _053_;
  wire _054_;
  wire _055_;
  wire _056_;
  wire _057_;
  wire _058_;
  wire _059_;
  wire _060_;
  wire _061_;
  wire _062_;
  wire _063_;
  wire _064_;
  wire _065_;
  wire _066_;
  wire _067_;
  wire _068_;
  wire _069_;
  wire _070_;
  wire _071_;
  wire _072_;
  wire _073_;
  wire _074_;
  wire _075_;
  wire _076_;
  wire _077_;
  wire _078_;
  wire _079_;
  wire _080_;
  wire _081_;
  wire _082_;
  wire _083_;
  wire _084_;
  wire _085_;
  wire _086_;
  wire _087_;
  wire _088_;
  wire _089_;
  wire _090_;
  wire _091_;
  wire _092_;
  wire _093_;
  wire _094_;
  wire _095_;
  wire _096_;
  wire _097_;
  wire _098_;
  wire _099_;
  wire _100_;
  wire _101_;
  wire _102_;
  wire _103_;
  wire _104_;
  wire _105_;
  wire _106_;
  wire _107_;
  wire _108_;
  wire _109_;
  wire _110_;
  wire _111_;
  wire _112_;
  wire _113_;
  wire _114_;
  wire _115_;
  wire _116_;
  wire _117_;
  wire _118_;
  wire _119_;
  wire _120_;
  wire _121_;
  wire _122_;
  wire _123_;
  wire _124_;
  wire _125_;
  wire _126_;
  wire _127_;
  wire _128_;
  wire _129_;
  wire _130_;
  wire _131_;
  wire _132_;
  wire _133_;
  input [2:0] BTN;
  wire [2:0] BTN;
  output [6:0] LD;
  wire [6:0] LD;
  input [3:0] SW1;
  wire [3:0] SW1;
  input [3:0] SW2;
  wire [3:0] SW2;
  wire \resul0[0] ;
  wire \resul0[1] ;
  wire \resul0[2] ;
  wire \resul0[3] ;
  wire \resul0[4] ;
  wire \resul0[5] ;
  wire \resul0[6] ;
  wire \resul1[0] ;
  wire \resul1[1] ;
  wire \resul1[2] ;
  wire \resul1[3] ;
  wire \resul1[4] ;
  wire \resul1[5] ;
  wire \resul1[6] ;
  wire \resul2[0] ;
  wire \resul2[1] ;
  wire \resul2[2] ;
  wire \resul2[3] ;
  wire \resul2[4] ;
  wire \resul2[5] ;
  wire \resul2[6] ;
  wire \resul3[0] ;
  wire \resul3[1] ;
  wire \resul3[2] ;
  wire \resul3[3] ;
  wire \resul3[4] ;
  wire \resul3[5] ;
  wire \resul3[6] ;
  wire \resul4[0] ;
  wire \resul4[1] ;
  wire \resul4[2] ;
  wire \resul4[3] ;
  wire \resul4[4] ;
  wire \resul4[5] ;
  wire \resul4[6] ;
  wire \resul5[0] ;
  wire \resul5[1] ;
  wire \resul5[2] ;
  wire \resul5[3] ;
  wire \resul5[4] ;
  wire \resul5[5] ;
  wire \resul5[6] ;
  wire \resul6[0] ;
  wire \resul6[1] ;
  wire \resul6[2] ;
  wire \resul6[3] ;
  wire \resul6[4] ;
  wire \resul6[5] ;
  wire \resul6[6] ;
  wire \resul7[0] ;
  wire \resul7[1] ;
  wire \resul7[2] ;
  wire \resul7[3] ;
  wire \resul7[4] ;
  wire \resul7[5] ;
  wire \resul7[6] ;
  INV_X32 _134_ (
    .A(_002_),
    .ZN(_047_)
  );
  NOR2_X4 _135_ (
    .A1(_047_),
    .A2(_001_),
    .ZN(_048_)
  );
  AND3_X1 _136_ (
    .A1(_048_),
    .A2(_000_),
    .A3(_113_),
    .ZN(_049_)
  );
  INV_X2 _137_ (
    .A(_000_),
    .ZN(_050_)
  );
  AND2_X2 _138_ (
    .A1(_048_),
    .A2(_050_),
    .ZN(_051_)
  );
  AOI21_X1 _139_ (
    .A(_049_),
    .B1(_106_),
    .B2(_051_),
    .ZN(_052_)
  );
  INV_X32 _140_ (
    .A(_001_),
    .ZN(_053_)
  );
  NOR2_X4 _141_ (
    .A1(_053_),
    .A2(_002_),
    .ZN(_054_)
  );
  AND3_X1 _142_ (
    .A1(_054_),
    .A2(_000_),
    .A3(_099_),
    .ZN(_055_)
  );
  AND2_X2 _143_ (
    .A1(_054_),
    .A2(_050_),
    .ZN(_056_)
  );
  AOI21_X1 _144_ (
    .A(_055_),
    .B1(_092_),
    .B2(_056_),
    .ZN(_057_)
  );
  AND4_X1 _145_ (
    .A1(_053_),
    .A2(_047_),
    .A3(_000_),
    .A4(_085_),
    .ZN(_058_)
  );
  NOR2_X1 _146_ (
    .A1(_001_),
    .A2(_002_),
    .ZN(_059_)
  );
  AND2_X2 _147_ (
    .A1(_059_),
    .A2(_050_),
    .ZN(_060_)
  );
  AOI21_X1 _148_ (
    .A(_058_),
    .B1(_078_),
    .B2(_060_),
    .ZN(_061_)
  );
  AND2_X4 _149_ (
    .A1(_001_),
    .A2(_002_),
    .ZN(_062_)
  );
  AND3_X2 _150_ (
    .A1(_062_),
    .A2(_000_),
    .A3(_127_),
    .ZN(_063_)
  );
  AND2_X4 _151_ (
    .A1(_062_),
    .A2(_050_),
    .ZN(_064_)
  );
  AOI21_X2 _152_ (
    .A(_063_),
    .B1(_120_),
    .B2(_064_),
    .ZN(_065_)
  );
  NAND4_X1 _153_ (
    .A1(_052_),
    .A2(_057_),
    .A3(_061_),
    .A4(_065_),
    .ZN(_003_)
  );
  AND3_X1 _154_ (
    .A1(_048_),
    .A2(_000_),
    .A3(_114_),
    .ZN(_066_)
  );
  AOI21_X1 _155_ (
    .A(_066_),
    .B1(_107_),
    .B2(_051_),
    .ZN(_067_)
  );
  AND3_X1 _156_ (
    .A1(_054_),
    .A2(_000_),
    .A3(_100_),
    .ZN(_068_)
  );
  AOI21_X1 _157_ (
    .A(_068_),
    .B1(_093_),
    .B2(_056_),
    .ZN(_069_)
  );
  AND4_X1 _158_ (
    .A1(_053_),
    .A2(_047_),
    .A3(_000_),
    .A4(_086_),
    .ZN(_070_)
  );
  AOI21_X1 _159_ (
    .A(_070_),
    .B1(_079_),
    .B2(_060_),
    .ZN(_071_)
  );
  AND3_X2 _160_ (
    .A1(_062_),
    .A2(_000_),
    .A3(_128_),
    .ZN(_072_)
  );
  AOI21_X2 _161_ (
    .A(_072_),
    .B1(_121_),
    .B2(_064_),
    .ZN(_073_)
  );
  NAND4_X1 _162_ (
    .A1(_067_),
    .A2(_069_),
    .A3(_071_),
    .A4(_073_),
    .ZN(_004_)
  );
  AND3_X1 _163_ (
    .A1(_048_),
    .A2(_000_),
    .A3(_115_),
    .ZN(_074_)
  );
  AOI21_X1 _164_ (
    .A(_074_),
    .B1(_108_),
    .B2(_051_),
    .ZN(_075_)
  );
  AND3_X1 _165_ (
    .A1(_054_),
    .A2(_000_),
    .A3(_101_),
    .ZN(_076_)
  );
  AOI21_X1 _166_ (
    .A(_076_),
    .B1(_094_),
    .B2(_056_),
    .ZN(_077_)
  );
  AND4_X1 _167_ (
    .A1(_053_),
    .A2(_047_),
    .A3(_000_),
    .A4(_087_),
    .ZN(_010_)
  );
  AOI21_X1 _168_ (
    .A(_010_),
    .B1(_080_),
    .B2(_060_),
    .ZN(_011_)
  );
  AND3_X2 _169_ (
    .A1(_062_),
    .A2(_000_),
    .A3(_129_),
    .ZN(_012_)
  );
  AOI21_X2 _170_ (
    .A(_012_),
    .B1(_122_),
    .B2(_064_),
    .ZN(_013_)
  );
  NAND4_X1 _171_ (
    .A1(_075_),
    .A2(_077_),
    .A3(_011_),
    .A4(_013_),
    .ZN(_005_)
  );
  AND3_X1 _172_ (
    .A1(_054_),
    .A2(_000_),
    .A3(_102_),
    .ZN(_014_)
  );
  AOI21_X1 _173_ (
    .A(_014_),
    .B1(_095_),
    .B2(_056_),
    .ZN(_015_)
  );
  AND3_X2 _174_ (
    .A1(_062_),
    .A2(_000_),
    .A3(_130_),
    .ZN(_016_)
  );
  AOI21_X2 _175_ (
    .A(_016_),
    .B1(_109_),
    .B2(_051_),
    .ZN(_017_)
  );
  AND3_X2 _176_ (
    .A1(_062_),
    .A2(_050_),
    .A3(_123_),
    .ZN(_018_)
  );
  AND2_X1 _177_ (
    .A1(_048_),
    .A2(_000_),
    .ZN(_019_)
  );
  AOI21_X2 _178_ (
    .A(_018_),
    .B1(_116_),
    .B2(_019_),
    .ZN(_020_)
  );
  AND4_X1 _179_ (
    .A1(_053_),
    .A2(_047_),
    .A3(_000_),
    .A4(_088_),
    .ZN(_021_)
  );
  AOI21_X1 _180_ (
    .A(_021_),
    .B1(_081_),
    .B2(_060_),
    .ZN(_022_)
  );
  NAND4_X1 _181_ (
    .A1(_015_),
    .A2(_017_),
    .A3(_020_),
    .A4(_022_),
    .ZN(_006_)
  );
  AND3_X1 _182_ (
    .A1(_048_),
    .A2(_050_),
    .A3(_110_),
    .ZN(_023_)
  );
  AOI21_X1 _183_ (
    .A(_023_),
    .B1(_117_),
    .B2(_019_),
    .ZN(_024_)
  );
  AND3_X1 _184_ (
    .A1(_054_),
    .A2(_000_),
    .A3(_103_),
    .ZN(_025_)
  );
  AOI21_X1 _185_ (
    .A(_025_),
    .B1(_096_),
    .B2(_056_),
    .ZN(_026_)
  );
  AND4_X1 _186_ (
    .A1(_053_),
    .A2(_047_),
    .A3(_000_),
    .A4(_089_),
    .ZN(_027_)
  );
  AOI21_X1 _187_ (
    .A(_027_),
    .B1(_082_),
    .B2(_060_),
    .ZN(_028_)
  );
  AND3_X2 _188_ (
    .A1(_062_),
    .A2(_000_),
    .A3(_131_),
    .ZN(_029_)
  );
  AOI21_X2 _189_ (
    .A(_029_),
    .B1(_124_),
    .B2(_064_),
    .ZN(_030_)
  );
  NAND4_X1 _190_ (
    .A1(_024_),
    .A2(_026_),
    .A3(_028_),
    .A4(_030_),
    .ZN(_007_)
  );
  AND3_X1 _191_ (
    .A1(_048_),
    .A2(_000_),
    .A3(_118_),
    .ZN(_031_)
  );
  AOI21_X1 _192_ (
    .A(_031_),
    .B1(_111_),
    .B2(_051_),
    .ZN(_032_)
  );
  AND3_X1 _193_ (
    .A1(_054_),
    .A2(_000_),
    .A3(_104_),
    .ZN(_033_)
  );
  AOI21_X1 _194_ (
    .A(_033_),
    .B1(_097_),
    .B2(_056_),
    .ZN(_034_)
  );
  AND4_X1 _195_ (
    .A1(_053_),
    .A2(_047_),
    .A3(_000_),
    .A4(_090_),
    .ZN(_035_)
  );
  AOI21_X1 _196_ (
    .A(_035_),
    .B1(_083_),
    .B2(_060_),
    .ZN(_036_)
  );
  AND3_X2 _197_ (
    .A1(_062_),
    .A2(_000_),
    .A3(_132_),
    .ZN(_037_)
  );
  AOI21_X2 _198_ (
    .A(_037_),
    .B1(_125_),
    .B2(_064_),
    .ZN(_038_)
  );
  NAND4_X1 _199_ (
    .A1(_032_),
    .A2(_034_),
    .A3(_036_),
    .A4(_038_),
    .ZN(_008_)
  );
  AND3_X1 _200_ (
    .A1(_048_),
    .A2(_000_),
    .A3(_119_),
    .ZN(_039_)
  );
  AOI21_X1 _201_ (
    .A(_039_),
    .B1(_112_),
    .B2(_051_),
    .ZN(_040_)
  );
  AND3_X1 _202_ (
    .A1(_054_),
    .A2(_000_),
    .A3(_105_),
    .ZN(_041_)
  );
  AOI21_X1 _203_ (
    .A(_041_),
    .B1(_098_),
    .B2(_056_),
    .ZN(_042_)
  );
  AND4_X1 _204_ (
    .A1(_053_),
    .A2(_047_),
    .A3(_000_),
    .A4(_091_),
    .ZN(_043_)
  );
  AOI21_X1 _205_ (
    .A(_043_),
    .B1(_084_),
    .B2(_060_),
    .ZN(_044_)
  );
  AND3_X2 _206_ (
    .A1(_062_),
    .A2(_000_),
    .A3(_133_),
    .ZN(_045_)
  );
  AOI21_X2 _207_ (
    .A(_045_),
    .B1(_126_),
    .B2(_064_),
    .ZN(_046_)
  );
  NAND4_X1 _208_ (
    .A1(_040_),
    .A2(_042_),
    .A3(_044_),
    .A4(_046_),
    .ZN(_009_)
  );
  BUF_X1 _209_ (
    .A(BTN[1]),
    .Z(_001_)
  );
  BUF_X1 _210_ (
    .A(BTN[2]),
    .Z(_002_)
  );
  BUF_X1 _211_ (
    .A(BTN[0]),
    .Z(_000_)
  );
  BUF_X1 _212_ (
    .A(\resul0[0] ),
    .Z(_078_)
  );
  BUF_X1 _213_ (
    .A(\resul1[0] ),
    .Z(_085_)
  );
  BUF_X1 _214_ (
    .A(\resul2[0] ),
    .Z(_092_)
  );
  BUF_X1 _215_ (
    .A(\resul3[0] ),
    .Z(_099_)
  );
  BUF_X1 _216_ (
    .A(\resul4[0] ),
    .Z(_106_)
  );
  BUF_X1 _217_ (
    .A(\resul5[0] ),
    .Z(_113_)
  );
  BUF_X1 _218_ (
    .A(\resul6[0] ),
    .Z(_120_)
  );
  BUF_X1 _219_ (
    .A(\resul7[0] ),
    .Z(_127_)
  );
  BUF_X1 _220_ (
    .A(_003_),
    .Z(LD[0])
  );
  BUF_X1 _221_ (
    .A(\resul0[1] ),
    .Z(_079_)
  );
  BUF_X1 _222_ (
    .A(\resul1[1] ),
    .Z(_086_)
  );
  BUF_X1 _223_ (
    .A(\resul2[1] ),
    .Z(_093_)
  );
  BUF_X1 _224_ (
    .A(\resul3[1] ),
    .Z(_100_)
  );
  BUF_X1 _225_ (
    .A(\resul4[1] ),
    .Z(_107_)
  );
  BUF_X1 _226_ (
    .A(\resul5[1] ),
    .Z(_114_)
  );
  BUF_X1 _227_ (
    .A(\resul6[1] ),
    .Z(_121_)
  );
  BUF_X1 _228_ (
    .A(\resul7[1] ),
    .Z(_128_)
  );
  BUF_X1 _229_ (
    .A(_004_),
    .Z(LD[1])
  );
  BUF_X1 _230_ (
    .A(\resul0[2] ),
    .Z(_080_)
  );
  BUF_X1 _231_ (
    .A(\resul1[2] ),
    .Z(_087_)
  );
  BUF_X1 _232_ (
    .A(\resul2[2] ),
    .Z(_094_)
  );
  BUF_X1 _233_ (
    .A(\resul3[2] ),
    .Z(_101_)
  );
  BUF_X1 _234_ (
    .A(\resul4[2] ),
    .Z(_108_)
  );
  BUF_X1 _235_ (
    .A(\resul5[2] ),
    .Z(_115_)
  );
  BUF_X1 _236_ (
    .A(\resul6[2] ),
    .Z(_122_)
  );
  BUF_X1 _237_ (
    .A(\resul7[2] ),
    .Z(_129_)
  );
  BUF_X1 _238_ (
    .A(_005_),
    .Z(LD[2])
  );
  BUF_X1 _239_ (
    .A(\resul0[3] ),
    .Z(_081_)
  );
  BUF_X1 _240_ (
    .A(\resul1[3] ),
    .Z(_088_)
  );
  BUF_X1 _241_ (
    .A(\resul2[3] ),
    .Z(_095_)
  );
  BUF_X1 _242_ (
    .A(\resul3[3] ),
    .Z(_102_)
  );
  BUF_X1 _243_ (
    .A(\resul4[3] ),
    .Z(_109_)
  );
  BUF_X1 _244_ (
    .A(\resul5[3] ),
    .Z(_116_)
  );
  BUF_X1 _245_ (
    .A(\resul6[3] ),
    .Z(_123_)
  );
  BUF_X1 _246_ (
    .A(\resul7[3] ),
    .Z(_130_)
  );
  BUF_X1 _247_ (
    .A(_006_),
    .Z(LD[3])
  );
  BUF_X1 _248_ (
    .A(\resul0[4] ),
    .Z(_082_)
  );
  BUF_X1 _249_ (
    .A(\resul1[4] ),
    .Z(_089_)
  );
  BUF_X1 _250_ (
    .A(\resul2[4] ),
    .Z(_096_)
  );
  BUF_X1 _251_ (
    .A(\resul3[4] ),
    .Z(_103_)
  );
  BUF_X1 _252_ (
    .A(\resul4[4] ),
    .Z(_110_)
  );
  BUF_X1 _253_ (
    .A(\resul5[4] ),
    .Z(_117_)
  );
  BUF_X1 _254_ (
    .A(\resul6[4] ),
    .Z(_124_)
  );
  BUF_X1 _255_ (
    .A(\resul7[4] ),
    .Z(_131_)
  );
  BUF_X1 _256_ (
    .A(_007_),
    .Z(LD[4])
  );
  BUF_X1 _257_ (
    .A(\resul0[5] ),
    .Z(_083_)
  );
  BUF_X1 _258_ (
    .A(\resul1[5] ),
    .Z(_090_)
  );
  BUF_X1 _259_ (
    .A(\resul2[5] ),
    .Z(_097_)
  );
  BUF_X1 _260_ (
    .A(\resul3[5] ),
    .Z(_104_)
  );
  BUF_X1 _261_ (
    .A(\resul4[5] ),
    .Z(_111_)
  );
  BUF_X1 _262_ (
    .A(\resul5[5] ),
    .Z(_118_)
  );
  BUF_X1 _263_ (
    .A(\resul6[5] ),
    .Z(_125_)
  );
  BUF_X1 _264_ (
    .A(\resul7[5] ),
    .Z(_132_)
  );
  BUF_X1 _265_ (
    .A(_008_),
    .Z(LD[5])
  );
  BUF_X1 _266_ (
    .A(\resul0[6] ),
    .Z(_084_)
  );
  BUF_X1 _267_ (
    .A(\resul1[6] ),
    .Z(_091_)
  );
  BUF_X1 _268_ (
    .A(\resul2[6] ),
    .Z(_098_)
  );
  BUF_X1 _269_ (
    .A(\resul3[6] ),
    .Z(_105_)
  );
  BUF_X1 _270_ (
    .A(\resul4[6] ),
    .Z(_112_)
  );
  BUF_X1 _271_ (
    .A(\resul5[6] ),
    .Z(_119_)
  );
  BUF_X1 _272_ (
    .A(\resul6[6] ),
    .Z(_126_)
  );
  BUF_X1 _273_ (
    .A(\resul7[6] ),
    .Z(_133_)
  );
  BUF_X1 _274_ (
    .A(_009_),
    .Z(LD[6])
  );
  add add3 (
    .LD({ \resul0[6] , \resul0[5] , \resul0[4] , \resul0[3] , \resul0[2] , \resul0[1] , \resul0[0]  }),
    .SW1(SW1),
    .SW2(SW2)
  );
  AND and3 (
    .SW1(SW1),
    .SW2(SW2),
    .ld({ \resul3[6] , \resul3[5] , \resul3[4] , \resul3[3] , \resul3[2] , \resul3[1] , \resul3[0]  })
  );
  compare c3 (
    .LD({ \resul6[6] , \resul6[5] , \resul6[4] , \resul6[3] , \resul6[2] , \resul6[1] , \resul6[0]  }),
    .SW1(SW1[2:0]),
    .SW2(SW2[2:0])
  );
  EQ3 eq3 (
    .LD({ \resul7[6] , \resul7[5] , \resul7[4] , \resul7[3] , \resul7[2] , \resul7[1] , \resul7[0]  }),
    .SW1(SW1[2:0]),
    .SW2(SW2[2:0])
  );
  NOT not3 (
    .SW1(SW1),
    .ld({ \resul2[6] , \resul2[5] , \resul2[4] , \resul2[3] , \resul2[2] , \resul2[1] , \resul2[0]  })
  );
  OR or3 (
    .SW1(SW1),
    .SW2(SW2),
    .ld({ \resul4[6] , \resul4[5] , \resul4[4] , \resul4[3] , \resul4[2] , \resul4[1] , \resul4[0]  })
  );
  subtraction sub3 (
    .LD({ \resul1[6] , \resul1[5] , \resul1[4] , \resul1[3] , \resul1[2] , \resul1[1] , \resul1[0]  }),
    .SW1(SW1),
    .SW2(SW2)
  );
  XOR xor3 (
    .SW1(SW1),
    .SW2(SW2),
    .ld({ \resul5[6] , \resul5[5] , \resul5[4] , \resul5[3] , \resul5[2] , \resul5[1] , \resul5[0]  })
  );
endmodule
