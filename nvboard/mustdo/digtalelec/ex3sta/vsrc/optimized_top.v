/* Generated by Yosys 0.44+20 (git sha1 5fb3c0b1d, clang++ 14.0.0-1ubuntu1.1 -fPIC -O3) */

(* src = "top.v:70.1-72.10" *)
module AND(SW1, SW2, ld);
  (* src = "top.v:70.23-70.26" *)
  wire _00_;
  (* src = "top.v:70.23-70.26" *)
  wire _01_;
  (* src = "top.v:70.23-70.26" *)
  wire _02_;
  (* src = "top.v:70.23-70.26" *)
  wire _03_;
  (* src = "top.v:70.38-70.41" *)
  wire _04_;
  (* src = "top.v:70.38-70.41" *)
  wire _05_;
  (* src = "top.v:70.38-70.41" *)
  wire _06_;
  (* src = "top.v:70.38-70.41" *)
  wire _07_;
  (* src = "top.v:70.54-70.56" *)
  wire _08_;
  (* src = "top.v:70.54-70.56" *)
  wire _09_;
  (* src = "top.v:70.54-70.56" *)
  wire _10_;
  (* src = "top.v:70.54-70.56" *)
  wire _11_;
  (* src = "top.v:70.23-70.26" *)
  input [3:0] SW1;
  wire [3:0] SW1;
  (* src = "top.v:70.38-70.41" *)
  input [3:0] SW2;
  wire [3:0] SW2;
  (* src = "top.v:70.54-70.56" *)
  output [6:0] ld;
  wire [6:0] ld;
  assign _08_ = _04_ & _00_;
  assign _09_ = _05_ & _01_;
  assign _10_ = _06_ & _02_;
  assign _11_ = _07_ & _03_;
  assign ld[6:4] = 3'h0;
  assign _04_ = SW2[0];
  assign _00_ = SW1[0];
  assign ld[0] = _08_;
  assign _05_ = SW2[1];
  assign _01_ = SW1[1];
  assign ld[1] = _09_;
  assign _06_ = SW2[2];
  assign _02_ = SW1[2];
  assign ld[2] = _10_;
  assign _07_ = SW2[3];
  assign _03_ = SW1[3];
  assign ld[3] = _11_;
endmodule

(* src = "top.v:102.1-119.10" *)
module EQ3(SW1, SW2, LD);
  wire _00_;
  wire _01_;
  wire _02_;
  wire _03_;
  (* src = "top.v:103.17-103.20" *)
  wire _04_;
  (* src = "top.v:103.17-103.20" *)
  wire _05_;
  (* src = "top.v:103.17-103.20" *)
  wire _06_;
  (* src = "top.v:104.17-104.20" *)
  wire _07_;
  (* src = "top.v:104.17-104.20" *)
  wire _08_;
  (* src = "top.v:104.17-104.20" *)
  wire _09_;
  (* src = "top.v:108.18-108.21" *)
  wire _10_;
  wire _11_;
  wire _12_;
  wire _13_;
  wire _14_;
  (* src = "top.v:105.17-105.19" *)
  output [6:0] LD;
  wire [6:0] LD;
  (* src = "top.v:103.17-103.20" *)
  input [2:0] SW1;
  wire [2:0] SW1;
  (* src = "top.v:104.17-104.20" *)
  input [2:0] SW2;
  wire [2:0] SW2;
  (* src = "top.v:108.18-108.21" *)
  wire eq0;
  assign _13_ = ~(_09_ ^ _06_);
  assign _14_ = ~(_07_ ^ _04_);
  assign _11_ = ~(_08_ ^ _05_);
  assign _12_ = _14_ & _11_;
  assign _10_ = _13_ & _12_;
  assign LD = { eq0, eq0, eq0, eq0, eq0, eq0, eq0 };
  assign _09_ = SW2[2];
  assign _06_ = SW1[2];
  assign _08_ = SW2[1];
  assign _05_ = SW1[1];
  assign _07_ = SW2[0];
  assign _04_ = SW1[0];
  assign eq0 = _10_;
endmodule

(* src = "top.v:66.1-68.10" *)
module NOT(SW1, ld);
  (* src = "top.v:66.23-66.26" *)
  wire _00_;
  (* src = "top.v:66.23-66.26" *)
  wire _01_;
  (* src = "top.v:66.23-66.26" *)
  wire _02_;
  (* src = "top.v:66.23-66.26" *)
  wire _03_;
  (* src = "top.v:66.39-66.41" *)
  wire _04_;
  (* src = "top.v:66.39-66.41" *)
  wire _05_;
  (* src = "top.v:66.39-66.41" *)
  wire _06_;
  (* src = "top.v:66.39-66.41" *)
  wire _07_;
  (* src = "top.v:66.23-66.26" *)
  input [3:0] SW1;
  wire [3:0] SW1;
  (* src = "top.v:66.39-66.41" *)
  output [6:0] ld;
  wire [6:0] ld;
  assign _04_ = ~_00_;
  assign _05_ = ~_01_;
  assign _06_ = ~_02_;
  assign _07_ = ~_03_;
  assign ld[6:4] = 3'h0;
  assign _00_ = SW1[0];
  assign ld[0] = _04_;
  assign _01_ = SW1[1];
  assign ld[1] = _05_;
  assign _02_ = SW1[2];
  assign ld[2] = _06_;
  assign _03_ = SW1[3];
  assign ld[3] = _07_;
endmodule

(* src = "top.v:73.1-75.10" *)
module OR(SW1, SW2, ld);
  (* src = "top.v:73.22-73.25" *)
  wire _00_;
  (* src = "top.v:73.22-73.25" *)
  wire _01_;
  (* src = "top.v:73.22-73.25" *)
  wire _02_;
  (* src = "top.v:73.22-73.25" *)
  wire _03_;
  (* src = "top.v:73.37-73.40" *)
  wire _04_;
  (* src = "top.v:73.37-73.40" *)
  wire _05_;
  (* src = "top.v:73.37-73.40" *)
  wire _06_;
  (* src = "top.v:73.37-73.40" *)
  wire _07_;
  (* src = "top.v:73.53-73.55" *)
  wire _08_;
  (* src = "top.v:73.53-73.55" *)
  wire _09_;
  (* src = "top.v:73.53-73.55" *)
  wire _10_;
  (* src = "top.v:73.53-73.55" *)
  wire _11_;
  (* src = "top.v:73.22-73.25" *)
  input [3:0] SW1;
  wire [3:0] SW1;
  (* src = "top.v:73.37-73.40" *)
  input [3:0] SW2;
  wire [3:0] SW2;
  (* src = "top.v:73.53-73.55" *)
  output [6:0] ld;
  wire [6:0] ld;
  assign _08_ = _04_ | _00_;
  assign _09_ = _05_ | _01_;
  assign _10_ = _06_ | _02_;
  assign _11_ = _07_ | _03_;
  assign ld[6:4] = 3'h0;
  assign _04_ = SW2[0];
  assign _00_ = SW1[0];
  assign ld[0] = _08_;
  assign _05_ = SW2[1];
  assign _01_ = SW1[1];
  assign ld[1] = _09_;
  assign _06_ = SW2[2];
  assign _02_ = SW1[2];
  assign ld[2] = _10_;
  assign _07_ = SW2[3];
  assign _03_ = SW1[3];
  assign ld[3] = _11_;
endmodule

(* src = "top.v:77.1-79.10" *)
module XOR(SW1, SW2, ld);
  (* src = "top.v:77.23-77.26" *)
  wire _00_;
  (* src = "top.v:77.23-77.26" *)
  wire _01_;
  (* src = "top.v:77.23-77.26" *)
  wire _02_;
  (* src = "top.v:77.23-77.26" *)
  wire _03_;
  (* src = "top.v:77.38-77.41" *)
  wire _04_;
  (* src = "top.v:77.38-77.41" *)
  wire _05_;
  (* src = "top.v:77.38-77.41" *)
  wire _06_;
  (* src = "top.v:77.38-77.41" *)
  wire _07_;
  (* src = "top.v:77.54-77.56" *)
  wire _08_;
  (* src = "top.v:77.54-77.56" *)
  wire _09_;
  (* src = "top.v:77.54-77.56" *)
  wire _10_;
  (* src = "top.v:77.54-77.56" *)
  wire _11_;
  (* src = "top.v:77.23-77.26" *)
  input [3:0] SW1;
  wire [3:0] SW1;
  (* src = "top.v:77.38-77.41" *)
  input [3:0] SW2;
  wire [3:0] SW2;
  (* src = "top.v:77.54-77.56" *)
  output [6:0] ld;
  wire [6:0] ld;
  assign _08_ = _04_ ^ _00_;
  assign _09_ = _05_ ^ _01_;
  assign _10_ = _06_ ^ _02_;
  assign _11_ = _07_ ^ _03_;
  assign ld[6:4] = 3'h0;
  assign _04_ = SW2[0];
  assign _00_ = SW1[0];
  assign ld[0] = _08_;
  assign _05_ = SW2[1];
  assign _01_ = SW1[1];
  assign ld[1] = _09_;
  assign _06_ = SW2[2];
  assign _02_ = SW1[2];
  assign ld[2] = _10_;
  assign _07_ = SW2[3];
  assign _03_ = SW1[3];
  assign ld[3] = _11_;
endmodule

(* src = "top.v:43.1-55.10" *)
module add(SW1, SW2, LD);
  wire _00_;
  (* src = "top.v:43.54-43.56" *)
  wire _01_;
  (* src = "top.v:43.54-43.56" *)
  wire _02_;
  (* src = "top.v:44.19-44.24" *)
  wire _03_;
  (* src = "top.v:44.25-44.30" *)
  wire _04_;
  wire _05_;
  (* src = "top.v:44.31-44.33" *)
  wire _06_;
  (* src = "top.v:44.34-44.36" *)
  wire _07_;
  (* src = "top.v:44.37-44.39" *)
  wire _08_;
  (* src = "top.v:43.54-43.56" *)
  output [6:0] LD;
  wire [6:0] LD;
  (* src = "top.v:43.23-43.26" *)
  input [3:0] SW1;
  wire [3:0] SW1;
  (* src = "top.v:43.38-43.41" *)
  input [3:0] SW2;
  wire [3:0] SW2;
  (* src = "top.v:44.7-44.12" *)
  wire cout1;
  (* src = "top.v:44.13-44.18" *)
  wire cout2;
  (* src = "top.v:44.19-44.24" *)
  wire cout3;
  (* src = "top.v:44.25-44.30" *)
  wire cout4;
  (* src = "top.v:45.12-45.13" *)
  wire [2:0] l;
  (* src = "top.v:44.31-44.33" *)
  wire s0;
  (* src = "top.v:44.34-44.36" *)
  wire s1;
  (* src = "top.v:44.37-44.39" *)
  wire s2;
  (* src = "top.v:44.40-44.42" *)
  wire s3;
  assign _05_ = ~(_07_ | _06_);
  assign _02_ = _05_ & ~(_08_);
  assign _01_ = _04_ ^ _03_;
  (* module_not_derived = 32'd1 *)
  (* src = "top.v:46.8-46.45" *)
  add1 insert_0 (
    .a(SW1[0]),
    .b(SW2[0]),
    .cin(1'h0),
    .cout(cout1),
    .sum(s0)
  );
  (* module_not_derived = 32'd1 *)
  (* src = "top.v:47.8-47.46" *)
  add1 insert_1 (
    .a(SW1[1]),
    .b(SW2[1]),
    .cin(cout1),
    .cout(cout2),
    .sum(s1)
  );
  (* module_not_derived = 32'd1 *)
  (* src = "top.v:48.8-48.46" *)
  add1 insert_2 (
    .a(SW1[2]),
    .b(SW2[2]),
    .cin(cout2),
    .cout(cout3),
    .sum(s2)
  );
  (* module_not_derived = 32'd1 *)
  (* src = "top.v:49.8-49.46" *)
  add1 insert_3 (
    .a(SW1[3]),
    .b(SW2[3]),
    .cin(cout3),
    .cout(cout4),
    .sum(s3)
  );
  assign LD[4:0] = { cout4, s3, s2, s1, s0 };
  assign l = { s2, s1, s0 };
  assign _07_ = s1;
  assign _06_ = s0;
  assign _08_ = s2;
  assign LD[6] = _02_;
  assign _04_ = cout4;
  assign _03_ = cout3;
  assign LD[5] = _01_;
endmodule

(* src = "top.v:40.1-42.10" *)
module add1(a, b, cin, sum, cout);
  wire _00_;
  wire _01_;
  wire _02_;
  (* src = "top.v:40.19-40.20" *)
  wire _03_;
  (* src = "top.v:40.27-40.28" *)
  wire _04_;
  (* src = "top.v:40.35-40.38" *)
  wire _05_;
  (* src = "top.v:40.57-40.61" *)
  wire _06_;
  wire _07_;
  wire _08_;
  wire _09_;
  (* src = "top.v:40.46-40.49" *)
  wire _10_;
  (* src = "top.v:40.19-40.20" *)
  input a;
  wire a;
  (* src = "top.v:40.27-40.28" *)
  input b;
  wire b;
  (* src = "top.v:40.35-40.38" *)
  input cin;
  wire cin;
  (* src = "top.v:40.57-40.61" *)
  output cout;
  wire cout;
  (* src = "top.v:40.46-40.49" *)
  output sum;
  wire sum;
  assign _07_ = ~(_05_ & _03_);
  assign _08_ = _05_ ^ _03_;
  assign _09_ = ~(_04_ & _08_);
  assign _10_ = _04_ ^ _08_;
  assign _06_ = ~(_07_ & _09_);
  assign _05_ = cin;
  assign _03_ = a;
  assign _04_ = b;
  assign sum = _10_;
  assign cout = _06_;
endmodule

(* src = "top.v:82.1-101.10" *)
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
  (* src = "top.v:85.17-85.19" *)
  wire _16_;
  (* src = "top.v:85.17-85.19" *)
  wire _17_;
  (* src = "top.v:83.17-83.20" *)
  wire _18_;
  (* src = "top.v:83.17-83.20" *)
  wire _19_;
  (* src = "top.v:83.17-83.20" *)
  wire _20_;
  (* src = "top.v:84.17-84.20" *)
  wire _21_;
  (* src = "top.v:84.17-84.20" *)
  wire _22_;
  (* src = "top.v:84.17-84.20" *)
  wire _23_;
  (* src = "top.v:88.18-88.21" *)
  wire _24_;
  wire _25_;
  wire _26_;
  wire _27_;
  wire _28_;
  wire _29_;
  wire _30_;
  wire _31_;
  wire _32_;
  wire _33_;
  wire _34_;
  wire _35_;
  wire _36_;
  wire _37_;
  wire _38_;
  wire _39_;
  wire _40_;
  (* src = "top.v:85.17-85.19" *)
  output [6:0] LD;
  wire [6:0] LD;
  (* src = "top.v:83.17-83.20" *)
  input [2:0] SW1;
  wire [2:0] SW1;
  (* src = "top.v:84.17-84.20" *)
  input [2:0] SW2;
  wire [2:0] SW2;
  (* src = "top.v:88.18-88.21" *)
  wire eq0;
  assign _25_ = _19_ | ~(_22_);
  assign _26_ = _20_ | ~(_23_);
  assign _27_ = ~(_25_ & _26_);
  assign _28_ = _23_ | ~(_20_);
  assign _29_ = _22_ | ~(_19_);
  assign _30_ = ~(_28_ & _29_);
  assign _31_ = ~(_20_ ^ _23_);
  assign _32_ = ~(_19_ ^ _22_);
  assign _33_ = _31_ & _32_;
  assign _34_ = _21_ & ~(_18_);
  assign _35_ = _18_ & ~(_21_);
  assign _36_ = ~(_34_ | _35_);
  assign _24_ = _33_ & _36_;
  assign _37_ = ~(_33_ & _35_);
  assign _38_ = ~(_26_ & _30_);
  assign _17_ = ~(_37_ & _38_);
  assign _39_ = ~(_33_ & _34_);
  assign _40_ = ~(_27_ & _28_);
  assign _16_ = ~(_39_ & _40_);
  assign { LD[5:3], LD[1:0] } = { LD[6], LD[6], eq0, LD[2], LD[2] };
  assign _20_ = SW1[2];
  assign _23_ = SW2[2];
  assign _19_ = SW1[1];
  assign _22_ = SW2[1];
  assign _18_ = SW1[0];
  assign _21_ = SW2[0];
  assign eq0 = _24_;
  assign LD[6] = _17_;
  assign LD[2] = _16_;
endmodule

(* src = "top.v:57.1-63.10" *)
module subtraction(SW1, SW2, LD);
  wire _0_;
  wire _1_;
  wire _2_;
  (* src = "top.v:57.46-57.49" *)
  wire _3_;
  (* src = "top.v:57.46-57.49" *)
  wire _4_;
  (* src = "top.v:57.46-57.49" *)
  wire _5_;
  wire _6_;
  (* src = "top.v:57.62-57.64" *)
  output [6:0] LD;
  wire [6:0] LD;
  wire [2:0] SW0s;
  (* src = "top.v:57.31-57.34" *)
  input [3:0] SW1;
  wire [3:0] SW1;
  (* src = "top.v:57.46-57.49" *)
  input [3:0] SW2;
  wire [3:0] SW2;
  wire [2:0] SW2s;
  assign _6_ = ~(_4_ | _3_);
  assign _1_ = _4_ ^ _3_;
  assign _2_ = ~(_5_ ^ _6_);
  (* module_not_derived = 32'd1 *)
  (* src = "top.v:62.7-62.28" *)
  add insert_0 (
    .LD(LD),
    .SW1(SW1),
    .SW2({ 1'h1, SW0s[2:1], SW2[0] })
  );
  assign SW0s[0] = SW2[0];
  assign SW2s = { SW0s[2:1], SW2[0] };
  assign _4_ = SW2[1];
  assign _3_ = SW2[0];
  assign SW0s[1] = _1_;
  assign _5_ = SW2[2];
  assign SW0s[2] = _2_;
endmodule

(* top =  1  *)
(* src = "top.v:1.1-39.10" *)
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
  (* src = "top.v:2.14-2.17" *)
  wire _111_;
  (* src = "top.v:2.14-2.17" *)
  wire _112_;
  (* src = "top.v:2.14-2.17" *)
  wire _113_;
  (* src = "top.v:5.15-5.17" *)
  wire _114_;
  (* src = "top.v:5.15-5.17" *)
  wire _115_;
  (* src = "top.v:5.15-5.17" *)
  wire _116_;
  (* src = "top.v:5.15-5.17" *)
  wire _117_;
  (* src = "top.v:5.15-5.17" *)
  wire _118_;
  (* src = "top.v:5.15-5.17" *)
  wire _119_;
  (* src = "top.v:5.15-5.17" *)
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
  wire _134_;
  wire _135_;
  wire _136_;
  wire _137_;
  wire _138_;
  wire _139_;
  wire _140_;
  wire _141_;
  wire _142_;
  wire _143_;
  wire _144_;
  wire _145_;
  wire _146_;
  wire _147_;
  wire _148_;
  wire _149_;
  wire _150_;
  wire _151_;
  wire _152_;
  wire _153_;
  wire _154_;
  wire _155_;
  wire _156_;
  wire _157_;
  wire _158_;
  wire _159_;
  wire _160_;
  wire _161_;
  wire _162_;
  wire _163_;
  wire _164_;
  wire _165_;
  wire _166_;
  wire _167_;
  wire _168_;
  wire _169_;
  wire _170_;
  wire _171_;
  wire _172_;
  wire _173_;
  wire _174_;
  wire _175_;
  wire _176_;
  wire _177_;
  wire _178_;
  wire _179_;
  wire _180_;
  wire _181_;
  wire _182_;
  wire _183_;
  wire _184_;
  wire _185_;
  wire _186_;
  wire _187_;
  wire _188_;
  wire _189_;
  wire _190_;
  wire _191_;
  wire _192_;
  wire _193_;
  wire _194_;
  wire _195_;
  wire _196_;
  wire _197_;
  wire _198_;
  wire _199_;
  wire _200_;
  wire _201_;
  wire _202_;
  wire _203_;
  wire _204_;
  wire _205_;
  wire _206_;
  wire _207_;
  wire _208_;
  wire _209_;
  wire _210_;
  wire _211_;
  wire _212_;
  wire _213_;
  wire _214_;
  wire _215_;
  wire _216_;
  wire _217_;
  wire _218_;
  wire _219_;
  wire _220_;
  wire _221_;
  wire _222_;
  wire _223_;
  wire _224_;
  wire _225_;
  wire _226_;
  wire _227_;
  wire _228_;
  wire _229_;
  wire _230_;
  (* src = "top.v:7.12-7.18" *)
  wire _231_;
  (* src = "top.v:7.12-7.18" *)
  wire _232_;
  (* src = "top.v:7.12-7.18" *)
  wire _233_;
  (* src = "top.v:7.12-7.18" *)
  wire _234_;
  (* src = "top.v:7.12-7.18" *)
  wire _235_;
  (* src = "top.v:7.12-7.18" *)
  wire _236_;
  (* src = "top.v:7.12-7.18" *)
  wire _237_;
  (* src = "top.v:7.19-7.25" *)
  wire _238_;
  (* src = "top.v:7.19-7.25" *)
  wire _239_;
  (* src = "top.v:7.19-7.25" *)
  wire _240_;
  (* src = "top.v:7.19-7.25" *)
  wire _241_;
  (* src = "top.v:7.19-7.25" *)
  wire _242_;
  (* src = "top.v:7.19-7.25" *)
  wire _243_;
  (* src = "top.v:7.19-7.25" *)
  wire _244_;
  (* src = "top.v:7.26-7.32" *)
  wire _245_;
  (* src = "top.v:7.26-7.32" *)
  wire _246_;
  (* src = "top.v:7.26-7.32" *)
  wire _247_;
  (* src = "top.v:7.26-7.32" *)
  wire _248_;
  (* src = "top.v:7.26-7.32" *)
  wire _249_;
  (* src = "top.v:7.26-7.32" *)
  wire _250_;
  (* src = "top.v:7.26-7.32" *)
  wire _251_;
  (* src = "top.v:7.33-7.39" *)
  wire _252_;
  (* src = "top.v:7.33-7.39" *)
  wire _253_;
  (* src = "top.v:7.33-7.39" *)
  wire _254_;
  (* src = "top.v:7.33-7.39" *)
  wire _255_;
  (* src = "top.v:7.33-7.39" *)
  wire _256_;
  (* src = "top.v:7.33-7.39" *)
  wire _257_;
  (* src = "top.v:7.33-7.39" *)
  wire _258_;
  (* src = "top.v:7.40-7.46" *)
  wire _259_;
  (* src = "top.v:7.40-7.46" *)
  wire _260_;
  (* src = "top.v:7.40-7.46" *)
  wire _261_;
  (* src = "top.v:7.40-7.46" *)
  wire _262_;
  (* src = "top.v:7.40-7.46" *)
  wire _263_;
  (* src = "top.v:7.40-7.46" *)
  wire _264_;
  (* src = "top.v:7.40-7.46" *)
  wire _265_;
  (* src = "top.v:7.47-7.53" *)
  wire _266_;
  (* src = "top.v:7.47-7.53" *)
  wire _267_;
  (* src = "top.v:7.47-7.53" *)
  wire _268_;
  (* src = "top.v:7.47-7.53" *)
  wire _269_;
  (* src = "top.v:7.47-7.53" *)
  wire _270_;
  (* src = "top.v:7.47-7.53" *)
  wire _271_;
  (* src = "top.v:7.47-7.53" *)
  wire _272_;
  (* src = "top.v:7.54-7.60" *)
  wire _273_;
  (* src = "top.v:7.54-7.60" *)
  wire _274_;
  (* src = "top.v:7.54-7.60" *)
  wire _275_;
  (* src = "top.v:7.54-7.60" *)
  wire _276_;
  (* src = "top.v:7.54-7.60" *)
  wire _277_;
  (* src = "top.v:7.54-7.60" *)
  wire _278_;
  (* src = "top.v:7.54-7.60" *)
  wire _279_;
  (* src = "top.v:7.61-7.67" *)
  wire _280_;
  (* src = "top.v:7.61-7.67" *)
  wire _281_;
  (* src = "top.v:7.61-7.67" *)
  wire _282_;
  (* src = "top.v:7.61-7.67" *)
  wire _283_;
  (* src = "top.v:7.61-7.67" *)
  wire _284_;
  (* src = "top.v:7.61-7.67" *)
  wire _285_;
  (* src = "top.v:7.61-7.67" *)
  wire _286_;
  (* src = "top.v:2.14-2.17" *)
  input [2:0] BTN;
  wire [2:0] BTN;
  (* src = "top.v:5.15-5.17" *)
  output [6:0] LD;
  wire [6:0] LD;
  (* src = "top.v:3.14-3.17" *)
  input [3:0] SW1;
  wire [3:0] SW1;
  (* src = "top.v:4.14-4.17" *)
  input [3:0] SW2;
  wire [3:0] SW2;
  (* src = "top.v:7.12-7.18" *)
  wire [6:0] resul0;
  (* src = "top.v:7.19-7.25" *)
  wire [6:0] resul1;
  (* src = "top.v:7.26-7.32" *)
  wire [6:0] resul2;
  (* src = "top.v:7.33-7.39" *)
  wire [6:0] resul3;
  (* src = "top.v:7.40-7.46" *)
  wire [6:0] resul4;
  (* src = "top.v:7.47-7.53" *)
  wire [6:0] resul5;
  (* src = "top.v:7.54-7.60" *)
  wire [6:0] resul6;
  (* src = "top.v:7.61-7.67" *)
  wire [6:0] resul7;
  (* src = "top.v:8.12-8.16" *)
  (* unused_bits = "0 1 2 3 4 5 6" *)
  wire [6:0] sig0;
  (* src = "top.v:8.17-8.21" *)
  (* unused_bits = "0 1 2 3 4 5 6" *)
  wire [6:0] sig1;
  (* src = "top.v:8.22-8.26" *)
  (* unused_bits = "0 1 2 3 4 5 6" *)
  wire [6:0] sig2;
  (* src = "top.v:8.27-8.31" *)
  (* unused_bits = "0 1 2 3 4 5 6" *)
  wire [6:0] sig3;
  (* src = "top.v:8.32-8.36" *)
  (* unused_bits = "0 1 2 3 4 5 6" *)
  wire [6:0] sig4;
  (* src = "top.v:8.37-8.41" *)
  (* unused_bits = "0 1 2 3 4 5 6" *)
  wire [6:0] sig5;
  (* src = "top.v:8.42-8.46" *)
  (* unused_bits = "0 1 2 3 4 5 6" *)
  wire [6:0] sig6;
  (* src = "top.v:8.47-8.51" *)
  (* unused_bits = "0 1 2 3 4 5 6" *)
  wire [6:0] sig7;
  assign _199_ = ~(_112_ | _113_);
  assign _200_ = _111_ & _199_;
  assign _201_ = ~(_238_ & _200_);
  assign _202_ = _199_ & ~(_111_);
  assign _203_ = ~(_231_ & _202_);
  assign _204_ = _201_ & _203_;
  assign _205_ = _112_ & _113_;
  assign _206_ = _111_ & _205_;
  assign _207_ = ~(_280_ & _206_);
  assign _208_ = _112_ & ~(_113_);
  assign _209_ = _208_ & ~(_111_);
  assign _210_ = ~(_245_ & _209_);
  assign _211_ = _207_ & _210_;
  assign _212_ = _204_ & _211_;
  assign _213_ = _205_ & ~(_111_);
  assign _214_ = ~(_273_ & _213_);
  assign _215_ = _113_ & ~(_112_);
  assign _216_ = _111_ & _215_;
  assign _217_ = ~(_266_ & _216_);
  assign _218_ = _214_ & _217_;
  assign _219_ = _215_ & ~(_111_);
  assign _220_ = ~(_259_ & _219_);
  assign _221_ = _111_ & _208_;
  assign _222_ = ~(_252_ & _221_);
  assign _223_ = _220_ & _222_;
  assign _224_ = _218_ & _223_;
  assign _114_ = ~(_212_ & _224_);
  assign _225_ = ~(_274_ & _213_);
  assign _226_ = ~(_246_ & _209_);
  assign _227_ = _225_ & _226_;
  assign _228_ = ~(_260_ & _219_);
  assign _229_ = ~(_232_ & _202_);
  assign _230_ = _228_ & _229_;
  assign _121_ = _227_ & _230_;
  assign _122_ = ~(_267_ & _216_);
  assign _123_ = ~(_253_ & _221_);
  assign _124_ = _122_ & _123_;
  assign _125_ = ~(_281_ & _206_);
  assign _126_ = ~(_239_ & _200_);
  assign _127_ = _125_ & _126_;
  assign _128_ = _124_ & _127_;
  assign _115_ = ~(_121_ & _128_);
  assign _129_ = ~(_240_ & _200_);
  assign _130_ = ~(_233_ & _202_);
  assign _131_ = _129_ & _130_;
  assign _132_ = ~(_282_ & _206_);
  assign _133_ = ~(_247_ & _209_);
  assign _134_ = _132_ & _133_;
  assign _135_ = _131_ & _134_;
  assign _136_ = ~(_275_ & _213_);
  assign _137_ = ~(_261_ & _219_);
  assign _138_ = _136_ & _137_;
  assign _139_ = ~(_268_ & _216_);
  assign _140_ = ~(_254_ & _221_);
  assign _141_ = _139_ & _140_;
  assign _142_ = _138_ & _141_;
  assign _116_ = ~(_135_ & _142_);
  assign _143_ = ~(_262_ & _219_);
  assign _144_ = ~(_234_ & _202_);
  assign _145_ = _143_ & _144_;
  assign _146_ = ~(_248_ & _209_);
  assign _147_ = ~(_269_ & _216_);
  assign _148_ = _146_ & _147_;
  assign _149_ = _145_ & _148_;
  assign _150_ = ~(_283_ & _206_);
  assign _151_ = ~(_241_ & _200_);
  assign _152_ = _150_ & _151_;
  assign _153_ = ~(_255_ & _221_);
  assign _154_ = ~(_276_ & _213_);
  assign _155_ = _153_ & _154_;
  assign _156_ = _152_ & _155_;
  assign _117_ = ~(_149_ & _156_);
  assign _157_ = ~(_242_ & _200_);
  assign _158_ = ~(_263_ & _219_);
  assign _159_ = _157_ & _158_;
  assign _160_ = ~(_277_ & _213_);
  assign _161_ = ~(_249_ & _209_);
  assign _162_ = _160_ & _161_;
  assign _163_ = _159_ & _162_;
  assign _164_ = ~(_235_ & _202_);
  assign _165_ = ~(_270_ & _216_);
  assign _166_ = _164_ & _165_;
  assign _167_ = ~(_284_ & _206_);
  assign _168_ = ~(_256_ & _221_);
  assign _169_ = _167_ & _168_;
  assign _170_ = _166_ & _169_;
  assign _118_ = ~(_163_ & _170_);
  assign _171_ = ~(_278_ & _213_);
  assign _172_ = ~(_250_ & _209_);
  assign _173_ = _171_ & _172_;
  assign _174_ = ~(_264_ & _219_);
  assign _175_ = ~(_236_ & _202_);
  assign _176_ = _174_ & _175_;
  assign _177_ = _173_ & _176_;
  assign _178_ = ~(_271_ & _216_);
  assign _179_ = ~(_257_ & _221_);
  assign _180_ = _178_ & _179_;
  assign _181_ = ~(_285_ & _206_);
  assign _182_ = ~(_243_ & _200_);
  assign _183_ = _181_ & _182_;
  assign _184_ = _180_ & _183_;
  assign _119_ = ~(_177_ & _184_);
  assign _185_ = ~(_244_ & _200_);
  assign _186_ = ~(_237_ & _202_);
  assign _187_ = _185_ & _186_;
  assign _188_ = ~(_286_ & _206_);
  assign _189_ = ~(_251_ & _209_);
  assign _190_ = _188_ & _189_;
  assign _191_ = _187_ & _190_;
  assign _192_ = ~(_279_ & _213_);
  assign _193_ = ~(_265_ & _219_);
  assign _194_ = _192_ & _193_;
  assign _195_ = ~(_272_ & _216_);
  assign _196_ = ~(_258_ & _221_);
  assign _197_ = _195_ & _196_;
  assign _198_ = _194_ & _197_;
  assign _120_ = ~(_191_ & _198_);
  (* module_not_derived = 32'd1 *)
  (* src = "top.v:9.6-9.26" *)
  add add3 (
    .LD(resul0),
    .SW1(SW1),
    .SW2(SW2)
  );
  (* module_not_derived = 32'd1 *)
  (* src = "top.v:12.9-12.29" *)
  AND and3 (
    .SW1(SW1),
    .SW2(SW2),
    .ld(resul3)
  );
  (* module_not_derived = 32'd1 *)
  (* src = "top.v:15.10-15.38" *)
  compare c3 (
    .LD(resul6),
    .SW1(SW1[2:0]),
    .SW2(SW2[2:0])
  );
  (* module_not_derived = 32'd1 *)
  (* src = "top.v:16.6-16.35" *)
  EQ3 eq3 (
    .LD(resul7),
    .SW1(SW1[2:0]),
    .SW2(SW2[2:0])
  );
  (* module_not_derived = 32'd1 *)
  (* src = "top.v:11.6-11.22" *)
  NOT not3 (
    .SW1(SW1),
    .ld(resul2)
  );
  (* module_not_derived = 32'd1 *)
  (* src = "top.v:13.5-13.24" *)
  OR or3 (
    .SW1(SW1),
    .SW2(SW2),
    .ld(resul4)
  );
  (* module_not_derived = 32'd1 *)
  (* src = "top.v:10.14-10.34" *)
  subtraction sub3 (
    .LD(resul1),
    .SW1(SW1),
    .SW2(SW2)
  );
  (* module_not_derived = 32'd1 *)
  (* src = "top.v:14.6-14.26" *)
  XOR xor3 (
    .SW1(SW1),
    .SW2(SW2),
    .ld(resul5)
  );
  assign sig0[5:0] = { sig0[6], sig0[6], sig0[6], sig0[6], sig0[6], sig0[6] };
  assign sig1[5:0] = { sig1[6], sig1[6], sig1[6], sig1[6], sig1[6], sig1[6] };
  assign sig2[5:0] = { sig2[6], sig2[6], sig2[6], sig2[6], sig2[6], sig2[6] };
  assign sig3[5:0] = { sig3[6], sig3[6], sig3[6], sig3[6], sig3[6], sig3[6] };
  assign sig4[5:0] = { sig4[6], sig4[6], sig4[6], sig4[6], sig4[6], sig4[6] };
  assign sig5[5:0] = { sig5[6], sig5[6], sig5[6], sig5[6], sig5[6], sig5[6] };
  assign sig6[5:0] = { sig6[6], sig6[6], sig6[6], sig6[6], sig6[6], sig6[6] };
  assign sig7[5:0] = { sig7[6], sig7[6], sig7[6], sig7[6], sig7[6], sig7[6] };
  assign _112_ = BTN[1];
  assign _113_ = BTN[2];
  assign _111_ = BTN[0];
  assign _231_ = resul0[0];
  assign _238_ = resul1[0];
  assign _245_ = resul2[0];
  assign _252_ = resul3[0];
  assign _259_ = resul4[0];
  assign _266_ = resul5[0];
  assign _273_ = resul6[0];
  assign _280_ = resul7[0];
  assign LD[0] = _114_;
  assign _232_ = resul0[1];
  assign _239_ = resul1[1];
  assign _246_ = resul2[1];
  assign _253_ = resul3[1];
  assign _260_ = resul4[1];
  assign _267_ = resul5[1];
  assign _274_ = resul6[1];
  assign _281_ = resul7[1];
  assign LD[1] = _115_;
  assign _233_ = resul0[2];
  assign _240_ = resul1[2];
  assign _247_ = resul2[2];
  assign _254_ = resul3[2];
  assign _261_ = resul4[2];
  assign _268_ = resul5[2];
  assign _275_ = resul6[2];
  assign _282_ = resul7[2];
  assign LD[2] = _116_;
  assign _234_ = resul0[3];
  assign _241_ = resul1[3];
  assign _248_ = resul2[3];
  assign _255_ = resul3[3];
  assign _262_ = resul4[3];
  assign _269_ = resul5[3];
  assign _276_ = resul6[3];
  assign _283_ = resul7[3];
  assign LD[3] = _117_;
  assign _235_ = resul0[4];
  assign _242_ = resul1[4];
  assign _249_ = resul2[4];
  assign _256_ = resul3[4];
  assign _263_ = resul4[4];
  assign _270_ = resul5[4];
  assign _277_ = resul6[4];
  assign _284_ = resul7[4];
  assign LD[4] = _118_;
  assign _236_ = resul0[5];
  assign _243_ = resul1[5];
  assign _250_ = resul2[5];
  assign _257_ = resul3[5];
  assign _264_ = resul4[5];
  assign _271_ = resul5[5];
  assign _278_ = resul6[5];
  assign _285_ = resul7[5];
  assign LD[5] = _119_;
  assign _237_ = resul0[6];
  assign _244_ = resul1[6];
  assign _251_ = resul2[6];
  assign _258_ = resul3[6];
  assign _265_ = resul4[6];
  assign _272_ = resul5[6];
  assign _279_ = resul6[6];
  assign _286_ = resul7[6];
  assign LD[6] = _120_;
endmodule
