#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <string.h>

#define PRIME_COUNT 1033
#define MAX_PRIME_VALUE UINT32_MAX

// Global variables
uint64_t* prime_list;
int Nprimes = PRIME_COUNT;

// Function to initialize the list of primes
uint64_t* init_prime_list() {
    // Allocate memory for prime list
    uint64_t* list = (uint64_t*)malloc(PRIME_COUNT * sizeof(uint64_t));
    if (list == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    
    // For simplicity, we'll use some hardcoded primes
    // In a real implementation, you'd want to generate these more carefully
  list[0] = 10007;
  list[1] = 10009;
  list[2] = 10037;
  list[3] = 10039;
  list[4] = 10061;
  list[5] = 10067;
  list[6] = 10069;
  list[7] = 10079;
  list[8] = 10091;
  list[9] = 10093;
  list[10] = 10099;
  list[11] = 10103;
  list[12] = 10111;
  list[13] = 10133;
  list[14] = 10139;
  list[15] = 10141;
  list[16] = 10151;
  list[17] = 10159;
  list[18] = 10163;
  list[19] = 10169;
  list[20] = 10177;
  list[21] = 10181;
  list[22] = 10193;
  list[23] = 10211;
  list[24] = 10223;
  list[25] = 10243;
  list[26] = 10247;
  list[27] = 10253;
  list[28] = 10259;
  list[29] = 10267;
  list[30] = 10271;
  list[31] = 10273;
  list[32] = 10289;
  list[33] = 10301;
  list[34] = 10303;
  list[35] = 10313;
  list[36] = 10321;
  list[37] = 10331;
  list[38] = 10333;
  list[39] = 10337;
  list[40] = 10343;
  list[41] = 10357;
  list[42] = 10369;
  list[43] = 10391;
  list[44] = 10399;
  list[45] = 10427;
  list[46] = 10429;
  list[47] = 10433;
  list[48] = 10453;
  list[49] = 10457;
  list[50] = 10459;
  list[51] = 10463;
  list[52] = 10477;
  list[53] = 10487;
  list[54] = 10499;
  list[55] = 10501;
  list[56] = 10513;
  list[57] = 10529;
  list[58] = 10531;
  list[59] = 10559;
  list[60] = 10567;
  list[61] = 10589;
  list[62] = 10597;
  list[63] = 10601;
  list[64] = 10607;
  list[65] = 10613;
  list[66] = 10627;
  list[67] = 10631;
  list[68] = 10639;
  list[69] = 10651;
  list[70] = 10657;
  list[71] = 10663;
  list[72] = 10667;
  list[73] = 10687;
  list[74] = 10691;
  list[75] = 10709;
  list[76] = 10711;
  list[77] = 10723;
  list[78] = 10729;
  list[79] = 10733;
  list[80] = 10739;
  list[81] = 10753;
  list[82] = 10771;
  list[83] = 10781;
  list[84] = 10789;
  list[85] = 10799;
  list[86] = 10831;
  list[87] = 10837;
  list[88] = 10847;
  list[89] = 10853;
  list[90] = 10859;
  list[91] = 10861;
  list[92] = 10867;
  list[93] = 10883;
  list[94] = 10889;
  list[95] = 10891;
  list[96] = 10903;
  list[97] = 10909;
  list[98] = 10937;
  list[99] = 10939;
  list[100] = 10949;
  list[101] = 10957;
  list[102] = 10973;
  list[103] = 10979;
  list[104] = 10987;
  list[105] = 10993;
  list[106] = 11003;
  list[107] = 11027;
  list[108] = 11047;
  list[109] = 11057;
  list[110] = 11059;
  list[111] = 11069;
  list[112] = 11071;
  list[113] = 11083;
  list[114] = 11087;
  list[115] = 11093;
  list[116] = 11113;
  list[117] = 11117;
  list[118] = 11119;
  list[119] = 11131;
  list[120] = 11149;
  list[121] = 11159;
  list[122] = 11161;
  list[123] = 11171;
  list[124] = 11173;
  list[125] = 11177;
  list[126] = 11197;
  list[127] = 11213;
  list[128] = 11239;
  list[129] = 11243;
  list[130] = 11251;
  list[131] = 11257;
  list[132] = 11261;
  list[133] = 11273;
  list[134] = 11279;
  list[135] = 11287;
  list[136] = 11299;
  list[137] = 11311;
  list[138] = 11317;
  list[139] = 11321;
  list[140] = 11329;
  list[141] = 11351;
  list[142] = 11353;
  list[143] = 11369;
  list[144] = 11383;
  list[145] = 11393;
  list[146] = 11399;
  list[147] = 11411;
  list[148] = 11423;
  list[149] = 11437;
  list[150] = 11443;
  list[151] = 11447;
  list[152] = 11467;
  list[153] = 11471;
  list[154] = 11483;
  list[155] = 11489;
  list[156] = 11491;
  list[157] = 11497;
  list[158] = 11503;
  list[159] = 11519;
  list[160] = 11527;
  list[161] = 11549;
  list[162] = 11551;
  list[163] = 11579;
  list[164] = 11587;
  list[165] = 11593;
  list[166] = 11597;
  list[167] = 11617;
  list[168] = 11621;
  list[169] = 11633;
  list[170] = 11657;
  list[171] = 11677;
  list[172] = 11681;
  list[173] = 11689;
  list[174] = 11699;
  list[175] = 11701;
  list[176] = 11717;
  list[177] = 11719;
  list[178] = 11731;
  list[179] = 11743;
  list[180] = 11777;
  list[181] = 11779;
  list[182] = 11783;
  list[183] = 11789;
  list[184] = 11801;
  list[185] = 11807;
  list[186] = 11813;
  list[187] = 11821;
  list[188] = 11827;
  list[189] = 11831;
  list[190] = 11833;
  list[191] = 11839;
  list[192] = 11863;
  list[193] = 11867;
  list[194] = 11887;
  list[195] = 11897;
  list[196] = 11903;
  list[197] = 11909;
  list[198] = 11923;
  list[199] = 11927;
  list[200] = 11933;
  list[201] = 11939;
  list[202] = 11941;
  list[203] = 11953;
  list[204] = 11959;
  list[205] = 11969;
  list[206] = 11971;
  list[207] = 11981;
  list[208] = 11987;
  list[209] = 12007;
  list[210] = 12011;
  list[211] = 12037;
  list[212] = 12041;
  list[213] = 12043;
  list[214] = 12049;
  list[215] = 12071;
  list[216] = 12073;
  list[217] = 12097;
  list[218] = 12101;
  list[219] = 12107;
  list[220] = 12109;
  list[221] = 12113;
  list[222] = 12119;
  list[223] = 12143;
  list[224] = 12149;
  list[225] = 12157;
  list[226] = 12161;
  list[227] = 12163;
  list[228] = 12197;
  list[229] = 12203;
  list[230] = 12211;
  list[231] = 12227;
  list[232] = 12239;
  list[233] = 12241;
  list[234] = 12251;
  list[235] = 12253;
  list[236] = 12263;
  list[237] = 12269;
  list[238] = 12277;
  list[239] = 12281;
  list[240] = 12289;
  list[241] = 12301;
  list[242] = 12323;
  list[243] = 12329;
  list[244] = 12343;
  list[245] = 12347;
  list[246] = 12373;
  list[247] = 12377;
  list[248] = 12379;
  list[249] = 12391;
  list[250] = 12401;
  list[251] = 12409;
  list[252] = 12413;
  list[253] = 12421;
  list[254] = 12433;
  list[255] = 12437;
  list[256] = 12451;
  list[257] = 12457;
  list[258] = 12473;
  list[259] = 12479;
  list[260] = 12487;
  list[261] = 12491;
  list[262] = 12497;
  list[263] = 12503;
  list[264] = 12511;
  list[265] = 12517;
  list[266] = 12527;
  list[267] = 12539;
  list[268] = 12541;
  list[269] = 12547;
  list[270] = 12553;
  list[271] = 12569;
  list[272] = 12577;
  list[273] = 12583;
  list[274] = 12589;
  list[275] = 12601;
  list[276] = 12611;
  list[277] = 12613;
  list[278] = 12619;
  list[279] = 12637;
  list[280] = 12641;
  list[281] = 12647;
  list[282] = 12653;
  list[283] = 12659;
  list[284] = 12671;
  list[285] = 12689;
  list[286] = 12697;
  list[287] = 12703;
  list[288] = 12713;
  list[289] = 12721;
  list[290] = 12739;
  list[291] = 12743;
  list[292] = 12757;
  list[293] = 12763;
  list[294] = 12781;
  list[295] = 12791;
  list[296] = 12799;
  list[297] = 12809;
  list[298] = 12821;
  list[299] = 12823;
  list[300] = 12829;
  list[301] = 12841;
  list[302] = 12853;
  list[303] = 12889;
  list[304] = 12893;
  list[305] = 12899;
  list[306] = 12907;
  list[307] = 12911;
  list[308] = 12917;
  list[309] = 12919;
  list[310] = 12923;
  list[311] = 12941;
  list[312] = 12953;
  list[313] = 12959;
  list[314] = 12967;
  list[315] = 12973;
  list[316] = 12979;
  list[317] = 12983;
  list[318] = 13001;
  list[319] = 13003;
  list[320] = 13007;
  list[321] = 13009;
  list[322] = 13033;
  list[323] = 13037;
  list[324] = 13043;
  list[325] = 13049;
  list[326] = 13063;
  list[327] = 13093;
  list[328] = 13099;
  list[329] = 13103;
  list[330] = 13109;
  list[331] = 13121;
  list[332] = 13127;
  list[333] = 13147;
  list[334] = 13151;
  list[335] = 13159;
  list[336] = 13163;
  list[337] = 13171;
  list[338] = 13177;
  list[339] = 13183;
  list[340] = 13187;
  list[341] = 13217;
  list[342] = 13219;
  list[343] = 13229;
  list[344] = 13241;
  list[345] = 13249;
  list[346] = 13259;
  list[347] = 13267;
  list[348] = 13291;
  list[349] = 13297;
  list[350] = 13309;
  list[351] = 13313;
  list[352] = 13327;
  list[353] = 13331;
  list[354] = 13337;
  list[355] = 13339;
  list[356] = 13367;
  list[357] = 13381;
  list[358] = 13397;
  list[359] = 13399;
  list[360] = 13411;
  list[361] = 13417;
  list[362] = 13421;
  list[363] = 13441;
  list[364] = 13451;
  list[365] = 13457;
  list[366] = 13463;
  list[367] = 13469;
  list[368] = 13477;
  list[369] = 13487;
  list[370] = 13499;
  list[371] = 13513;
  list[372] = 13523;
  list[373] = 13537;
  list[374] = 13553;
  list[375] = 13567;
  list[376] = 13577;
  list[377] = 13591;
  list[378] = 13597;
  list[379] = 13613;
  list[380] = 13619;
  list[381] = 13627;
  list[382] = 13633;
  list[383] = 13649;
  list[384] = 13669;
  list[385] = 13679;
  list[386] = 13681;
  list[387] = 13687;
  list[388] = 13691;
  list[389] = 13693;
  list[390] = 13697;
  list[391] = 13709;
  list[392] = 13711;
  list[393] = 13721;
  list[394] = 13723;
  list[395] = 13729;
  list[396] = 13751;
  list[397] = 13757;
  list[398] = 13759;
  list[399] = 13763;
  list[400] = 13781;
  list[401] = 13789;
  list[402] = 13799;
  list[403] = 13807;
  list[404] = 13829;
  list[405] = 13831;
  list[406] = 13841;
  list[407] = 13859;
  list[408] = 13873;
  list[409] = 13877;
  list[410] = 13879;
  list[411] = 13883;
  list[412] = 13901;
  list[413] = 13903;
  list[414] = 13907;
  list[415] = 13913;
  list[416] = 13921;
  list[417] = 13931;
  list[418] = 13933;
  list[419] = 13963;
  list[420] = 13967;
  list[421] = 13997;
  list[422] = 13999;
  list[423] = 14009;
  list[424] = 14011;
  list[425] = 14029;
  list[426] = 14033;
  list[427] = 14051;
  list[428] = 14057;
  list[429] = 14071;
  list[430] = 14081;
  list[431] = 14083;
  list[432] = 14087;
  list[433] = 14107;
  list[434] = 14143;
  list[435] = 14149;
  list[436] = 14153;
  list[437] = 14159;
  list[438] = 14173;
  list[439] = 14177;
  list[440] = 14197;
  list[441] = 14207;
  list[442] = 14221;
  list[443] = 14243;
  list[444] = 14249;
  list[445] = 14251;
  list[446] = 14281;
  list[447] = 14293;
  list[448] = 14303;
  list[449] = 14321;
  list[450] = 14323;
  list[451] = 14327;
  list[452] = 14341;
  list[453] = 14347;
  list[454] = 14369;
  list[455] = 14387;
  list[456] = 14389;
  list[457] = 14401;
  list[458] = 14407;
  list[459] = 14411;
  list[460] = 14419;
  list[461] = 14423;
  list[462] = 14431;
  list[463] = 14437;
  list[464] = 14447;
  list[465] = 14449;
  list[466] = 14461;
  list[467] = 14479;
  list[468] = 14489;
  list[469] = 14503;
  list[470] = 14519;
  list[471] = 14533;
  list[472] = 14537;
  list[473] = 14543;
  list[474] = 14549;
  list[475] = 14551;
  list[476] = 14557;
  list[477] = 14561;
  list[478] = 14563;
  list[479] = 14591;
  list[480] = 14593;
  list[481] = 14621;
  list[482] = 14627;
  list[483] = 14629;
  list[484] = 14633;
  list[485] = 14639;
  list[486] = 14653;
  list[487] = 14657;
  list[488] = 14669;
  list[489] = 14683;
  list[490] = 14699;
  list[491] = 14713;
  list[492] = 14717;
  list[493] = 14723;
  list[494] = 14731;
  list[495] = 14737;
  list[496] = 14741;
  list[497] = 14747;
  list[498] = 14753;
  list[499] = 14759;
  list[500] = 14767;
  list[501] = 14771;
  list[502] = 14779;
  list[503] = 14783;
  list[504] = 14797;
  list[505] = 14813;
  list[506] = 14821;
  list[507] = 14827;
  list[508] = 14831;
  list[509] = 14843;
  list[510] = 14851;
  list[511] = 14867;
  list[512] = 14869;
  list[513] = 14879;
  list[514] = 14887;
  list[515] = 14891;
  list[516] = 14897;
  list[517] = 14923;
  list[518] = 14929;
  list[519] = 14939;
  list[520] = 14947;
  list[521] = 14951;
  list[522] = 14957;
  list[523] = 14969;
  list[524] = 14983;
  list[525] = 15013;
  list[526] = 15017;
  list[527] = 15031;
  list[528] = 15053;
  list[529] = 15061;
  list[530] = 15073;
  list[531] = 15077;
  list[532] = 15083;
  list[533] = 15091;
  list[534] = 15101;
  list[535] = 15107;
  list[536] = 15121;
  list[537] = 15131;
  list[538] = 15137;
  list[539] = 15139;
  list[540] = 15149;
  list[541] = 15161;
  list[542] = 15173;
  list[543] = 15187;
  list[544] = 15193;
  list[545] = 15199;
  list[546] = 15217;
  list[547] = 15227;
  list[548] = 15233;
  list[549] = 15241;
  list[550] = 15259;
  list[551] = 15263;
  list[552] = 15269;
  list[553] = 15271;
  list[554] = 15277;
  list[555] = 15287;
  list[556] = 15289;
  list[557] = 15299;
  list[558] = 15307;
  list[559] = 15313;
  list[560] = 15319;
  list[561] = 15329;
  list[562] = 15331;
  list[563] = 15349;
  list[564] = 15359;
  list[565] = 15361;
  list[566] = 15373;
  list[567] = 15377;
  list[568] = 15383;
  list[569] = 15391;
  list[570] = 15401;
  list[571] = 15413;
  list[572] = 15427;
  list[573] = 15439;
  list[574] = 15443;
  list[575] = 15451;
  list[576] = 15461;
  list[577] = 15467;
  list[578] = 15473;
  list[579] = 15493;
  list[580] = 15497;
  list[581] = 15511;
  list[582] = 15527;
  list[583] = 15541;
  list[584] = 15551;
  list[585] = 15559;
  list[586] = 15569;
  list[587] = 15581;
  list[588] = 15583;
  list[589] = 15601;
  list[590] = 15607;
  list[591] = 15619;
  list[592] = 15629;
  list[593] = 15641;
  list[594] = 15643;
  list[595] = 15647;
  list[596] = 15649;
  list[597] = 15661;
  list[598] = 15667;
  list[599] = 15671;
  list[600] = 15679;
  list[601] = 15683;
  list[602] = 15727;
  list[603] = 15731;
  list[604] = 15733;
  list[605] = 15737;
  list[606] = 15739;
  list[607] = 15749;
  list[608] = 15761;
  list[609] = 15767;
  list[610] = 15773;
  list[611] = 15787;
  list[612] = 15791;
  list[613] = 15797;
  list[614] = 15803;
  list[615] = 15809;
  list[616] = 15817;
  list[617] = 15823;
  list[618] = 15859;
  list[619] = 15877;
  list[620] = 15881;
  list[621] = 15887;
  list[622] = 15889;
  list[623] = 15901;
  list[624] = 15907;
  list[625] = 15913;
  list[626] = 15919;
  list[627] = 15923;
  list[628] = 15937;
  list[629] = 15959;
  list[630] = 15971;
  list[631] = 15973;
  list[632] = 15991;
  list[633] = 16001;
  list[634] = 16007;
  list[635] = 16033;
  list[636] = 16057;
  list[637] = 16061;
  list[638] = 16063;
  list[639] = 16067;
  list[640] = 16069;
  list[641] = 16073;
  list[642] = 16087;
  list[643] = 16091;
  list[644] = 16097;
  list[645] = 16103;
  list[646] = 16111;
  list[647] = 16127;
  list[648] = 16139;
  list[649] = 16141;
  list[650] = 16183;
  list[651] = 16187;
  list[652] = 16189;
  list[653] = 16193;
  list[654] = 16217;
  list[655] = 16223;
  list[656] = 16229;
  list[657] = 16231;
  list[658] = 16249;
  list[659] = 16253;
  list[660] = 16267;
  list[661] = 16273;
  list[662] = 16301;
  list[663] = 16319;
  list[664] = 16333;
  list[665] = 16339;
  list[666] = 16349;
  list[667] = 16361;
  list[668] = 16363;
  list[669] = 16369;
  list[670] = 16381;
  list[671] = 16411;
  list[672] = 16417;
  list[673] = 16421;
  list[674] = 16427;
  list[675] = 16433;
  list[676] = 16447;
  list[677] = 16451;
  list[678] = 16453;
  list[679] = 16477;
  list[680] = 16481;
  list[681] = 16487;
  list[682] = 16493;
  list[683] = 16519;
  list[684] = 16529;
  list[685] = 16547;
  list[686] = 16553;
  list[687] = 16561;
  list[688] = 16567;
  list[689] = 16573;
  list[690] = 16603;
  list[691] = 16607;
  list[692] = 16619;
  list[693] = 16631;
  list[694] = 16633;
  list[695] = 16649;
  list[696] = 16651;
  list[697] = 16657;
  list[698] = 16661;
  list[699] = 16673;
  list[700] = 16691;
  list[701] = 16693;
  list[702] = 16699;
  list[703] = 16703;
  list[704] = 16729;
  list[705] = 16741;
  list[706] = 16747;
  list[707] = 16759;
  list[708] = 16763;
  list[709] = 16787;
  list[710] = 16811;
  list[711] = 16823;
  list[712] = 16829;
  list[713] = 16831;
  list[714] = 16843;
  list[715] = 16871;
  list[716] = 16879;
  list[717] = 16883;
  list[718] = 16889;
  list[719] = 16901;
  list[720] = 16903;
  list[721] = 16921;
  list[722] = 16927;
  list[723] = 16931;
  list[724] = 16937;
  list[725] = 16943;
  list[726] = 16963;
  list[727] = 16979;
  list[728] = 16981;
  list[729] = 16987;
  list[730] = 16993;
  list[731] = 17011;
  list[732] = 17021;
  list[733] = 17027;
  list[734] = 17029;
  list[735] = 17033;
  list[736] = 17041;
  list[737] = 17047;
  list[738] = 17053;
  list[739] = 17077;
  list[740] = 17093;
  list[741] = 17099;
  list[742] = 17107;
  list[743] = 17117;
  list[744] = 17123;
  list[745] = 17137;
  list[746] = 17159;
  list[747] = 17167;
  list[748] = 17183;
  list[749] = 17189;
  list[750] = 17191;
  list[751] = 17203;
  list[752] = 17207;
  list[753] = 17209;
  list[754] = 17231;
  list[755] = 17239;
  list[756] = 17257;
  list[757] = 17291;
  list[758] = 17293;
  list[759] = 17299;
  list[760] = 17317;
  list[761] = 17321;
  list[762] = 17327;
  list[763] = 17333;
  list[764] = 17341;
  list[765] = 17351;
  list[766] = 17359;
  list[767] = 17377;
  list[768] = 17383;
  list[769] = 17387;
  list[770] = 17389;
  list[771] = 17393;
  list[772] = 17401;
  list[773] = 17417;
  list[774] = 17419;
  list[775] = 17431;
  list[776] = 17443;
  list[777] = 17449;
  list[778] = 17467;
  list[779] = 17471;
  list[780] = 17477;
  list[781] = 17483;
  list[782] = 17489;
  list[783] = 17491;
  list[784] = 17497;
  list[785] = 17509;
  list[786] = 17519;
  list[787] = 17539;
  list[788] = 17551;
  list[789] = 17569;
  list[790] = 17573;
  list[791] = 17579;
  list[792] = 17581;
  list[793] = 17597;
  list[794] = 17599;
  list[795] = 17609;
  list[796] = 17623;
  list[797] = 17627;
  list[798] = 17657;
  list[799] = 17659;
  list[800] = 17669;
  list[801] = 17681;
  list[802] = 17683;
  list[803] = 17707;
  list[804] = 17713;
  list[805] = 17729;
  list[806] = 17737;
  list[807] = 17747;
  list[808] = 17749;
  list[809] = 17761;
  list[810] = 17783;
  list[811] = 17789;
  list[812] = 17791;
  list[813] = 17807;
  list[814] = 17827;
  list[815] = 17837;
  list[816] = 17839;
  list[817] = 17851;
  list[818] = 17863;
  list[819] = 17881;
  list[820] = 17891;
  list[821] = 17903;
  list[822] = 17909;
  list[823] = 17911;
  list[824] = 17921;
  list[825] = 17923;
  list[826] = 17929;
  list[827] = 17939;
  list[828] = 17957;
  list[829] = 17959;
  list[830] = 17971;
  list[831] = 17977;
  list[832] = 17981;
  list[833] = 17987;
  list[834] = 17989;
  list[835] = 18013;
  list[836] = 18041;
  list[837] = 18043;
  list[838] = 18047;
  list[839] = 18049;
  list[840] = 18059;
  list[841] = 18061;
  list[842] = 18077;
  list[843] = 18089;
  list[844] = 18097;
  list[845] = 18119;
  list[846] = 18121;
  list[847] = 18127;
  list[848] = 18131;
  list[849] = 18133;
  list[850] = 18143;
  list[851] = 18149;
  list[852] = 18169;
  list[853] = 18181;
  list[854] = 18191;
  list[855] = 18199;
  list[856] = 18211;
  list[857] = 18217;
  list[858] = 18223;
  list[859] = 18229;
  list[860] = 18233;
  list[861] = 18251;
  list[862] = 18253;
  list[863] = 18257;
  list[864] = 18269;
  list[865] = 18287;
  list[866] = 18289;
  list[867] = 18301;
  list[868] = 18307;
  list[869] = 18311;
  list[870] = 18313;
  list[871] = 18329;
  list[872] = 18341;
  list[873] = 18353;
  list[874] = 18367;
  list[875] = 18371;
  list[876] = 18379;
  list[877] = 18397;
  list[878] = 18401;
  list[879] = 18413;
  list[880] = 18427;
  list[881] = 18433;
  list[882] = 18439;
  list[883] = 18443;
  list[884] = 18451;
  list[885] = 18457;
  list[886] = 18461;
  list[887] = 18481;
  list[888] = 18493;
  list[889] = 18503;
  list[890] = 18517;
  list[891] = 18521;
  list[892] = 18523;
  list[893] = 18539;
  list[894] = 18541;
  list[895] = 18553;
  list[896] = 18583;
  list[897] = 18587;
  list[898] = 18593;
  list[899] = 18617;
  list[900] = 18637;
  list[901] = 18661;
  list[902] = 18671;
  list[903] = 18679;
  list[904] = 18691;
  list[905] = 18701;
  list[906] = 18713;
  list[907] = 18719;
  list[908] = 18731;
  list[909] = 18743;
  list[910] = 18749;
  list[911] = 18757;
  list[912] = 18773;
  list[913] = 18787;
  list[914] = 18793;
  list[915] = 18797;
  list[916] = 18803;
  list[917] = 18839;
  list[918] = 18859;
  list[919] = 18869;
  list[920] = 18899;
  list[921] = 18911;
  list[922] = 18913;
  list[923] = 18917;
  list[924] = 18919;
  list[925] = 18947;
  list[926] = 18959;
  list[927] = 18973;
  list[928] = 18979;
  list[929] = 19001;
  list[930] = 19009;
  list[931] = 19013;
  list[932] = 19031;
  list[933] = 19037;
  list[934] = 19051;
  list[935] = 19069;
  list[936] = 19073;
  list[937] = 19079;
  list[938] = 19081;
  list[939] = 19087;
  list[940] = 19121;
  list[941] = 19139;
  list[942] = 19141;
  list[943] = 19157;
  list[944] = 19163;
  list[945] = 19181;
  list[946] = 19183;
  list[947] = 19207;
  list[948] = 19211;
  list[949] = 19213;
  list[950] = 19219;
  list[951] = 19231;
  list[952] = 19237;
  list[953] = 19249;
  list[954] = 19259;
  list[955] = 19267;
  list[956] = 19273;
  list[957] = 19289;
  list[958] = 19301;
  list[959] = 19309;
  list[960] = 19319;
  list[961] = 19333;
  list[962] = 19373;
  list[963] = 19379;
  list[964] = 19381;
  list[965] = 19387;
  list[966] = 19391;
  list[967] = 19403;
  list[968] = 19417;
  list[969] = 19421;
  list[970] = 19423;
  list[971] = 19427;
  list[972] = 19429;
  list[973] = 19433;
  list[974] = 19441;
  list[975] = 19447;
  list[976] = 19457;
  list[977] = 19463;
  list[978] = 19469;
  list[979] = 19471;
  list[980] = 19477;
  list[981] = 19483;
  list[982] = 19489;
  list[983] = 19501;
  list[984] = 19507;
  list[985] = 19531;
  list[986] = 19541;
  list[987] = 19543;
  list[988] = 19553;
  list[989] = 19559;
  list[990] = 19571;
  list[991] = 19577;
  list[992] = 19583;
  list[993] = 19597;
  list[994] = 19603;
  list[995] = 19609;
  list[996] = 19661;
  list[997] = 19681;
  list[998] = 19687;
  list[999] = 19697;
  list[1000] = 19699;
  list[1001] = 19709;
  list[1002] = 19717;
  list[1003] = 19727;
  list[1004] = 19739;
  list[1005] = 19751;
  list[1006] = 19753;
  list[1007] = 19759;
  list[1008] = 19763;
  list[1009] = 19777;
  list[1010] = 19793;
  list[1011] = 19801;
  list[1012] = 19813;
  list[1013] = 19819;
  list[1014] = 19841;
  list[1015] = 19843;
  list[1016] = 19853;
  list[1017] = 19861;
  list[1018] = 19867;
  list[1019] = 19889;
  list[1020] = 19891;
  list[1021] = 19913;
  list[1022] = 19919;
  list[1023] = 19927;
  list[1024] = 19937;
  list[1025] = 19949;
  list[1026] = 19961;
  list[1027] = 19963;
  list[1028] = 19973;
  list[1029] = 19979;
  list[1030] = 19991;
  list[1031] = 19993;
  list[1032] = 19997;
    // Fill the rest with larger primes (this is a simplified approach)
    for (int i = 10; i < PRIME_COUNT; i++) {
        // Generate a random large odd number
        list[i] = (((uint64_t)rand() << 32) | rand()) | 1;
        
        // A very simple primality test (not suitable for production)
        // In a real implementation, use a proper primality test
        int is_prime = 1;
        for (uint64_t j = 3; j * j <= list[i] && is_prime; j += 2) {
            if (list[i] % j == 0) {
                is_prime = 0;
            }
        }
        
        if (!is_prime) {
            // Try again
            i--;
        }
    }
    
    return list;
}

// Generate a random prime from the prime list
uint64_t gen_prime(uint64_t* prime_list) {
    uint seed = time(0);
    return prime_list[rand_r(&seed) % Nprimes];
}

// Calculate greatest common divisor
uint64_t gcd(uint64_t a, uint64_t b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// Improved power function using square-and-multiply algorithm
// This is much more efficient than the linear approach
uint64_t power(uint64_t base, uint64_t exp, uint64_t mod) {
    // Base case
    uint64_t res = 1;
    
    // Avoid overflow by using modular arithmetic at each step
    base = base % mod;
    
    while (exp > 0) {
        // If exp is odd, multiply result with base
        if (exp & 1)
            res = (res * base) % mod;
            
        // exp must be even now
        exp = exp >> 1; // exp = exp/2
        base = (base * base) % mod;
    }
    
    return res;
}

// Fix the mod_inverse function from the provided code
uint64_t mod_inverse(uint64_t a, uint64_t m) {
    int64_t m0 = m;
    int64_t y = 0, x = 1;
    
    if (m == 1)
        return 0;
    
    while (a > 1) {
        // q is quotient
        int64_t q = a / m;
        int64_t t = m;
        
        // m is remainder now
        m = a % m;
        a = t;
        t = y;
        
        // Update y and x
        y = x - q * y;
        x = t;
    }
    
    // Make x positive
    if (x < 0)
        x += m0;
    
    return x;
}

// Generate RSA key pair
void gen_keys(uint64_t *enc_exp, uint64_t *dec_exp, uint64_t *product) {
    uint64_t* prime_list = init_prime_list();
    uint64_t p = gen_prime(prime_list);
    uint64_t q = gen_prime(prime_list);
    
    // Ensure p and q are different
    while (p == q) {
        q = gen_prime(prime_list);
    }
    
    // Calculate product n = p*q
    *product = p * q;
    
    // Calculate Euler's totient function phi(n) = (p-1)*(q-1)
    uint64_t phi = (p - 1) * (q - 1);
    
    // Choose encryption exponent e such that 1 < e < phi and gcd(e, phi) = 1
    *enc_exp = 65537; // Common choice for e
    
    // Ensure gcd(e, phi) = 1
    while (gcd(*enc_exp, phi) != 1) {
        (*enc_exp)++;
    }
    
    // Calculate decryption exponent d such that (d*e) % phi = 1
    *dec_exp = mod_inverse(*enc_exp, phi);
    
    // Free the allocated memory
    free(prime_list);
}

// Encrypt a message
uint64_t encrypt(uint64_t message, uint64_t enc_exp, uint64_t product) {
    // Check that message is less than the product
    if (message >= product) {
        fprintf(stderr, "Message is too large for the given key\n");
        return 0;
    }
    
    // Encrypt: c = m^e mod n
    return power(message, enc_exp, product);
}

// Decrypt a ciphertext
uint64_t decrypt(uint64_t ciphertext, uint64_t dec_exp, uint64_t product) {
    // Decrypt: m = c^d mod n
    return power(ciphertext, dec_exp, product);
}

// Function to encrypt a string message
void encrypt_string(const char* message, uint64_t enc_exp, uint64_t product, 
                   uint64_t** encrypted, int* length) {
    *length = strlen(message);
    *encrypted = (uint64_t*)malloc(*length * sizeof(uint64_t));
    
    if (*encrypted == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    
    for (int i = 0; i < *length; i++) {
        (*encrypted)[i] = encrypt((uint64_t)message[i], enc_exp, product);
    }
}

// Function to decrypt an encrypted message back to a string
char* decrypt_string(uint64_t* encrypted, int length, uint64_t dec_exp, uint64_t product) {
    char* decrypted = (char*)malloc((length + 1) * sizeof(char));
    
    if (decrypted == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    
    for (int i = 0; i < length; i++) {
        decrypted[i] = (char)decrypt(encrypted[i], dec_exp, product);
    }
    
    decrypted[length] = '\0';
    return decrypted;
}





// #include <time.h>
// #include <stdio.h>
// #include <stdint.h>
// #include <stdlib.h>
// #define Nprimes 1033
//
// // // Generate large primes
// // uint64_t* init_prime_list(){
// //   uint64_t* prime_numbers = (uint64_t*) malloc(sizeof(uint64_t) * Nprimes);
// //   // Prime numbers array initialization
// //   // Initialize with the first few values for demonstration
// //   prime_numbers[0] = 10007;
// //   prime_numbers[1] = 10009;
// //   prime_numbers[2] = 10037;
// //   // (Rest of the prime initialization would be here)
// //   
// //   return prime_numbers;
// // }
// //
// // uint64_t gen_prime(uint64_t* prime_list){
// //   // Initialize the random seed only once per program execution
// //   static int initialized = 0;
// //   if (!initialized) {
// //     srand(time(NULL));
// //     initialized = 1;
// //   }
// //   return prime_list[rand() % Nprimes];
// // }
// //
// // // Greatest common divisor
// // uint64_t gcd(uint64_t a, uint64_t b){
// //   if (a == 0)
// //     return b;
// //   return gcd(b % a, a);
// // }
// //
// // // Fixed power function using modular exponentiation
// // // Computes (base^exp) % mod without overflowing
// // uint64_t power(uint64_t base, uint64_t exp, uint64_t mod){
// //   uint64_t res = 1;
// //   
// //   // Take modulo of base first to prevent initial overflow
// //   base = base % mod;
// //   
// //   while (exp > 0){
// //     if (exp & 1)
// //       res = (res * base) % mod;  // Modulo after each multiplication
// //     
// //     base = (base * base) % mod;  // Modulo after each squaring
// //     exp /= 2;
// //   }
// //   
// //   return res;
// // }
// //
// // // Find modular multiplicative inverse
// // uint64_t mod_inverse(uint64_t enc_exp, uint64_t phi){
// //   // Extended Euclidean Algorithm for more efficient inverse calculation
// //   int64_t s = 0, old_s = 1;
// //   int64_t t = 1, old_t = 0;
// //   int64_t r = phi, old_r = enc_exp;
// //   int64_t quotient, temp;
// //   
// //   while (r != 0) {
// //     quotient = old_r / r;
// //     
// //     temp = r;
// //     r = old_r - quotient * r;
// //     old_r = temp;
// //     
// //     temp = s;
// //     s = old_s - quotient * s;
// //     old_s = temp;
// //     
// //     temp = t;
// //     t = old_t - quotient * t;
// //     old_t = temp;
// //   }
// //   
// //   // Make sure the result is positive
// //   if (old_s < 0)
// //     old_s += phi;
// //     
// //   return old_s;
// // }
// //
// // void gen_keys(uint64_t *enc_exp, uint64_t *dec_exp, uint64_t *product){
// //   uint64_t* prime_list = init_prime_list();
// //   
// //   // Choose two different primes
// //   uint64_t p = gen_prime(prime_list);
// //   uint64_t q;
// //   do {
// //     q = gen_prime(prime_list);
// //   } while (p == q);
// //   
// //   // Calculate product
// //   *product = p * q;
// //   
// //   // Calculate φ(n) = (p-1)(q-1)
// //   uint64_t phi = (p-1) * (q-1);
// //   
// //   // Choose encryption exponent
// //   *enc_exp = 65537;  // Common value for e, which is prime and sufficiently large
// //   
// //   // If 65537 isn't coprime with phi, find another value
// //   if (gcd(*enc_exp, phi) != 1) {
// //     for (*enc_exp = 3; *enc_exp < phi; (*enc_exp) += 2) {
// //       if (gcd(*enc_exp, phi) == 1)
// //         break;
// //     }
// //   }
// //   
// //   // Compute decryption exponent
// //   *dec_exp = mod_inverse(*enc_exp, phi);
// //   
// //   free(prime_list);  // Free the allocated memory
// // }
// //
// // // Encrypt message using public key (e, n)
// // uint64_t encrypt(uint64_t message, uint64_t enc_exp, uint64_t product) {
// //     // Check message size
// //     if (message >= product) {
// //         printf("Warning: Message is too large for this key. Modulo applied.\n");
// //         message %= product;  // Apply modulo to keep message in valid range
// //     }
// //     return power(message, enc_exp, product);
// // }
// //
// // // Decrypt message using private key (d, n)
// // uint64_t decrypt(uint64_t cipher, uint64_t dec_exp, uint64_t product) {
// //     return power(cipher, dec_exp, product);
// // }
//
//
//
// #include <time.h>
// #include <stdio.h>
// #include <stdint.h>
// #include <stdlib.h>
// #define Nprimes 1033
//
// // Generate large primes
// uint64_t* init_prime_list(){
//   uint64_t* prime_numbers = (uint64_t*) malloc(sizeof(uint64_t) * Nprimes);
//   prime_numbers[0] = 10007;
//   prime_numbers[1] = 10009;
//   prime_numbers[2] = 10037;
//   prime_numbers[3] = 10039;
//   prime_numbers[4] = 10061;
//   prime_numbers[5] = 10067;
//   prime_numbers[6] = 10069;
//   prime_numbers[7] = 10079;
//   prime_numbers[8] = 10091;
//   prime_numbers[9] = 10093;
//   prime_numbers[10] = 10099;
//   prime_numbers[11] = 10103;
//   prime_numbers[12] = 10111;
//   prime_numbers[13] = 10133;
//   prime_numbers[14] = 10139;
//   prime_numbers[15] = 10141;
//   prime_numbers[16] = 10151;
//   prime_numbers[17] = 10159;
//   prime_numbers[18] = 10163;
//   prime_numbers[19] = 10169;
//   prime_numbers[20] = 10177;
//   prime_numbers[21] = 10181;
//   prime_numbers[22] = 10193;
//   prime_numbers[23] = 10211;
//   prime_numbers[24] = 10223;
//   prime_numbers[25] = 10243;
//   prime_numbers[26] = 10247;
//   prime_numbers[27] = 10253;
//   prime_numbers[28] = 10259;
//   prime_numbers[29] = 10267;
//   prime_numbers[30] = 10271;
//   prime_numbers[31] = 10273;
//   prime_numbers[32] = 10289;
//   prime_numbers[33] = 10301;
//   prime_numbers[34] = 10303;
//   prime_numbers[35] = 10313;
//   prime_numbers[36] = 10321;
//   prime_numbers[37] = 10331;
//   prime_numbers[38] = 10333;
//   prime_numbers[39] = 10337;
//   prime_numbers[40] = 10343;
//   prime_numbers[41] = 10357;
//   prime_numbers[42] = 10369;
//   prime_numbers[43] = 10391;
//   prime_numbers[44] = 10399;
//   prime_numbers[45] = 10427;
//   prime_numbers[46] = 10429;
//   prime_numbers[47] = 10433;
//   prime_numbers[48] = 10453;
//   prime_numbers[49] = 10457;
//   prime_numbers[50] = 10459;
//   prime_numbers[51] = 10463;
//   prime_numbers[52] = 10477;
//   prime_numbers[53] = 10487;
//   prime_numbers[54] = 10499;
//   prime_numbers[55] = 10501;
//   prime_numbers[56] = 10513;
//   prime_numbers[57] = 10529;
//   prime_numbers[58] = 10531;
//   prime_numbers[59] = 10559;
//   prime_numbers[60] = 10567;
//   prime_numbers[61] = 10589;
//   prime_numbers[62] = 10597;
//   prime_numbers[63] = 10601;
//   prime_numbers[64] = 10607;
//   prime_numbers[65] = 10613;
//   prime_numbers[66] = 10627;
//   prime_numbers[67] = 10631;
//   prime_numbers[68] = 10639;
//   prime_numbers[69] = 10651;
//   prime_numbers[70] = 10657;
//   prime_numbers[71] = 10663;
//   prime_numbers[72] = 10667;
//   prime_numbers[73] = 10687;
//   prime_numbers[74] = 10691;
//   prime_numbers[75] = 10709;
//   prime_numbers[76] = 10711;
//   prime_numbers[77] = 10723;
//   prime_numbers[78] = 10729;
//   prime_numbers[79] = 10733;
//   prime_numbers[80] = 10739;
//   prime_numbers[81] = 10753;
//   prime_numbers[82] = 10771;
//   prime_numbers[83] = 10781;
//   prime_numbers[84] = 10789;
//   prime_numbers[85] = 10799;
//   prime_numbers[86] = 10831;
//   prime_numbers[87] = 10837;
//   prime_numbers[88] = 10847;
//   prime_numbers[89] = 10853;
//   prime_numbers[90] = 10859;
//   prime_numbers[91] = 10861;
//   prime_numbers[92] = 10867;
//   prime_numbers[93] = 10883;
//   prime_numbers[94] = 10889;
//   prime_numbers[95] = 10891;
//   prime_numbers[96] = 10903;
//   prime_numbers[97] = 10909;
//   prime_numbers[98] = 10937;
//   prime_numbers[99] = 10939;
//   prime_numbers[100] = 10949;
//   prime_numbers[101] = 10957;
//   prime_numbers[102] = 10973;
//   prime_numbers[103] = 10979;
//   prime_numbers[104] = 10987;
//   prime_numbers[105] = 10993;
//   prime_numbers[106] = 11003;
//   prime_numbers[107] = 11027;
//   prime_numbers[108] = 11047;
//   prime_numbers[109] = 11057;
//   prime_numbers[110] = 11059;
//   prime_numbers[111] = 11069;
//   prime_numbers[112] = 11071;
//   prime_numbers[113] = 11083;
//   prime_numbers[114] = 11087;
//   prime_numbers[115] = 11093;
//   prime_numbers[116] = 11113;
//   prime_numbers[117] = 11117;
//   prime_numbers[118] = 11119;
//   prime_numbers[119] = 11131;
//   prime_numbers[120] = 11149;
//   prime_numbers[121] = 11159;
//   prime_numbers[122] = 11161;
//   prime_numbers[123] = 11171;
//   prime_numbers[124] = 11173;
//   prime_numbers[125] = 11177;
//   prime_numbers[126] = 11197;
//   prime_numbers[127] = 11213;
//   prime_numbers[128] = 11239;
//   prime_numbers[129] = 11243;
//   prime_numbers[130] = 11251;
//   prime_numbers[131] = 11257;
//   prime_numbers[132] = 11261;
//   prime_numbers[133] = 11273;
//   prime_numbers[134] = 11279;
//   prime_numbers[135] = 11287;
//   prime_numbers[136] = 11299;
//   prime_numbers[137] = 11311;
//   prime_numbers[138] = 11317;
//   prime_numbers[139] = 11321;
//   prime_numbers[140] = 11329;
//   prime_numbers[141] = 11351;
//   prime_numbers[142] = 11353;
//   prime_numbers[143] = 11369;
//   prime_numbers[144] = 11383;
//   prime_numbers[145] = 11393;
//   prime_numbers[146] = 11399;
//   prime_numbers[147] = 11411;
//   prime_numbers[148] = 11423;
//   prime_numbers[149] = 11437;
//   prime_numbers[150] = 11443;
//   prime_numbers[151] = 11447;
//   prime_numbers[152] = 11467;
//   prime_numbers[153] = 11471;
//   prime_numbers[154] = 11483;
//   prime_numbers[155] = 11489;
//   prime_numbers[156] = 11491;
//   prime_numbers[157] = 11497;
//   prime_numbers[158] = 11503;
//   prime_numbers[159] = 11519;
//   prime_numbers[160] = 11527;
//   prime_numbers[161] = 11549;
//   prime_numbers[162] = 11551;
//   prime_numbers[163] = 11579;
//   prime_numbers[164] = 11587;
//   prime_numbers[165] = 11593;
//   prime_numbers[166] = 11597;
//   prime_numbers[167] = 11617;
//   prime_numbers[168] = 11621;
//   prime_numbers[169] = 11633;
//   prime_numbers[170] = 11657;
//   prime_numbers[171] = 11677;
//   prime_numbers[172] = 11681;
//   prime_numbers[173] = 11689;
//   prime_numbers[174] = 11699;
//   prime_numbers[175] = 11701;
//   prime_numbers[176] = 11717;
//   prime_numbers[177] = 11719;
//   prime_numbers[178] = 11731;
//   prime_numbers[179] = 11743;
//   prime_numbers[180] = 11777;
//   prime_numbers[181] = 11779;
//   prime_numbers[182] = 11783;
//   prime_numbers[183] = 11789;
//   prime_numbers[184] = 11801;
//   prime_numbers[185] = 11807;
//   prime_numbers[186] = 11813;
//   prime_numbers[187] = 11821;
//   prime_numbers[188] = 11827;
//   prime_numbers[189] = 11831;
//   prime_numbers[190] = 11833;
//   prime_numbers[191] = 11839;
//   prime_numbers[192] = 11863;
//   prime_numbers[193] = 11867;
//   prime_numbers[194] = 11887;
//   prime_numbers[195] = 11897;
//   prime_numbers[196] = 11903;
//   prime_numbers[197] = 11909;
//   prime_numbers[198] = 11923;
//   prime_numbers[199] = 11927;
//   prime_numbers[200] = 11933;
//   prime_numbers[201] = 11939;
//   prime_numbers[202] = 11941;
//   prime_numbers[203] = 11953;
//   prime_numbers[204] = 11959;
//   prime_numbers[205] = 11969;
//   prime_numbers[206] = 11971;
//   prime_numbers[207] = 11981;
//   prime_numbers[208] = 11987;
//   prime_numbers[209] = 12007;
//   prime_numbers[210] = 12011;
//   prime_numbers[211] = 12037;
//   prime_numbers[212] = 12041;
//   prime_numbers[213] = 12043;
//   prime_numbers[214] = 12049;
//   prime_numbers[215] = 12071;
//   prime_numbers[216] = 12073;
//   prime_numbers[217] = 12097;
//   prime_numbers[218] = 12101;
//   prime_numbers[219] = 12107;
//   prime_numbers[220] = 12109;
//   prime_numbers[221] = 12113;
//   prime_numbers[222] = 12119;
//   prime_numbers[223] = 12143;
//   prime_numbers[224] = 12149;
//   prime_numbers[225] = 12157;
//   prime_numbers[226] = 12161;
//   prime_numbers[227] = 12163;
//   prime_numbers[228] = 12197;
//   prime_numbers[229] = 12203;
//   prime_numbers[230] = 12211;
//   prime_numbers[231] = 12227;
//   prime_numbers[232] = 12239;
//   prime_numbers[233] = 12241;
//   prime_numbers[234] = 12251;
//   prime_numbers[235] = 12253;
//   prime_numbers[236] = 12263;
//   prime_numbers[237] = 12269;
//   prime_numbers[238] = 12277;
//   prime_numbers[239] = 12281;
//   prime_numbers[240] = 12289;
//   prime_numbers[241] = 12301;
//   prime_numbers[242] = 12323;
//   prime_numbers[243] = 12329;
//   prime_numbers[244] = 12343;
//   prime_numbers[245] = 12347;
//   prime_numbers[246] = 12373;
//   prime_numbers[247] = 12377;
//   prime_numbers[248] = 12379;
//   prime_numbers[249] = 12391;
//   prime_numbers[250] = 12401;
//   prime_numbers[251] = 12409;
//   prime_numbers[252] = 12413;
//   prime_numbers[253] = 12421;
//   prime_numbers[254] = 12433;
//   prime_numbers[255] = 12437;
//   prime_numbers[256] = 12451;
//   prime_numbers[257] = 12457;
//   prime_numbers[258] = 12473;
//   prime_numbers[259] = 12479;
//   prime_numbers[260] = 12487;
//   prime_numbers[261] = 12491;
//   prime_numbers[262] = 12497;
//   prime_numbers[263] = 12503;
//   prime_numbers[264] = 12511;
//   prime_numbers[265] = 12517;
//   prime_numbers[266] = 12527;
//   prime_numbers[267] = 12539;
//   prime_numbers[268] = 12541;
//   prime_numbers[269] = 12547;
//   prime_numbers[270] = 12553;
//   prime_numbers[271] = 12569;
//   prime_numbers[272] = 12577;
//   prime_numbers[273] = 12583;
//   prime_numbers[274] = 12589;
//   prime_numbers[275] = 12601;
//   prime_numbers[276] = 12611;
//   prime_numbers[277] = 12613;
//   prime_numbers[278] = 12619;
//   prime_numbers[279] = 12637;
//   prime_numbers[280] = 12641;
//   prime_numbers[281] = 12647;
//   prime_numbers[282] = 12653;
//   prime_numbers[283] = 12659;
//   prime_numbers[284] = 12671;
//   prime_numbers[285] = 12689;
//   prime_numbers[286] = 12697;
//   prime_numbers[287] = 12703;
//   prime_numbers[288] = 12713;
//   prime_numbers[289] = 12721;
//   prime_numbers[290] = 12739;
//   prime_numbers[291] = 12743;
//   prime_numbers[292] = 12757;
//   prime_numbers[293] = 12763;
//   prime_numbers[294] = 12781;
//   prime_numbers[295] = 12791;
//   prime_numbers[296] = 12799;
//   prime_numbers[297] = 12809;
//   prime_numbers[298] = 12821;
//   prime_numbers[299] = 12823;
//   prime_numbers[300] = 12829;
//   prime_numbers[301] = 12841;
//   prime_numbers[302] = 12853;
//   prime_numbers[303] = 12889;
//   prime_numbers[304] = 12893;
//   prime_numbers[305] = 12899;
//   prime_numbers[306] = 12907;
//   prime_numbers[307] = 12911;
//   prime_numbers[308] = 12917;
//   prime_numbers[309] = 12919;
//   prime_numbers[310] = 12923;
//   prime_numbers[311] = 12941;
//   prime_numbers[312] = 12953;
//   prime_numbers[313] = 12959;
//   prime_numbers[314] = 12967;
//   prime_numbers[315] = 12973;
//   prime_numbers[316] = 12979;
//   prime_numbers[317] = 12983;
//   prime_numbers[318] = 13001;
//   prime_numbers[319] = 13003;
//   prime_numbers[320] = 13007;
//   prime_numbers[321] = 13009;
//   prime_numbers[322] = 13033;
//   prime_numbers[323] = 13037;
//   prime_numbers[324] = 13043;
//   prime_numbers[325] = 13049;
//   prime_numbers[326] = 13063;
//   prime_numbers[327] = 13093;
//   prime_numbers[328] = 13099;
//   prime_numbers[329] = 13103;
//   prime_numbers[330] = 13109;
//   prime_numbers[331] = 13121;
//   prime_numbers[332] = 13127;
//   prime_numbers[333] = 13147;
//   prime_numbers[334] = 13151;
//   prime_numbers[335] = 13159;
//   prime_numbers[336] = 13163;
//   prime_numbers[337] = 13171;
//   prime_numbers[338] = 13177;
//   prime_numbers[339] = 13183;
//   prime_numbers[340] = 13187;
//   prime_numbers[341] = 13217;
//   prime_numbers[342] = 13219;
//   prime_numbers[343] = 13229;
//   prime_numbers[344] = 13241;
//   prime_numbers[345] = 13249;
//   prime_numbers[346] = 13259;
//   prime_numbers[347] = 13267;
//   prime_numbers[348] = 13291;
//   prime_numbers[349] = 13297;
//   prime_numbers[350] = 13309;
//   prime_numbers[351] = 13313;
//   prime_numbers[352] = 13327;
//   prime_numbers[353] = 13331;
//   prime_numbers[354] = 13337;
//   prime_numbers[355] = 13339;
//   prime_numbers[356] = 13367;
//   prime_numbers[357] = 13381;
//   prime_numbers[358] = 13397;
//   prime_numbers[359] = 13399;
//   prime_numbers[360] = 13411;
//   prime_numbers[361] = 13417;
//   prime_numbers[362] = 13421;
//   prime_numbers[363] = 13441;
//   prime_numbers[364] = 13451;
//   prime_numbers[365] = 13457;
//   prime_numbers[366] = 13463;
//   prime_numbers[367] = 13469;
//   prime_numbers[368] = 13477;
//   prime_numbers[369] = 13487;
//   prime_numbers[370] = 13499;
//   prime_numbers[371] = 13513;
//   prime_numbers[372] = 13523;
//   prime_numbers[373] = 13537;
//   prime_numbers[374] = 13553;
//   prime_numbers[375] = 13567;
//   prime_numbers[376] = 13577;
//   prime_numbers[377] = 13591;
//   prime_numbers[378] = 13597;
//   prime_numbers[379] = 13613;
//   prime_numbers[380] = 13619;
//   prime_numbers[381] = 13627;
//   prime_numbers[382] = 13633;
//   prime_numbers[383] = 13649;
//   prime_numbers[384] = 13669;
//   prime_numbers[385] = 13679;
//   prime_numbers[386] = 13681;
//   prime_numbers[387] = 13687;
//   prime_numbers[388] = 13691;
//   prime_numbers[389] = 13693;
//   prime_numbers[390] = 13697;
//   prime_numbers[391] = 13709;
//   prime_numbers[392] = 13711;
//   prime_numbers[393] = 13721;
//   prime_numbers[394] = 13723;
//   prime_numbers[395] = 13729;
//   prime_numbers[396] = 13751;
//   prime_numbers[397] = 13757;
//   prime_numbers[398] = 13759;
//   prime_numbers[399] = 13763;
//   prime_numbers[400] = 13781;
//   prime_numbers[401] = 13789;
//   prime_numbers[402] = 13799;
//   prime_numbers[403] = 13807;
//   prime_numbers[404] = 13829;
//   prime_numbers[405] = 13831;
//   prime_numbers[406] = 13841;
//   prime_numbers[407] = 13859;
//   prime_numbers[408] = 13873;
//   prime_numbers[409] = 13877;
//   prime_numbers[410] = 13879;
//   prime_numbers[411] = 13883;
//   prime_numbers[412] = 13901;
//   prime_numbers[413] = 13903;
//   prime_numbers[414] = 13907;
//   prime_numbers[415] = 13913;
//   prime_numbers[416] = 13921;
//   prime_numbers[417] = 13931;
//   prime_numbers[418] = 13933;
//   prime_numbers[419] = 13963;
//   prime_numbers[420] = 13967;
//   prime_numbers[421] = 13997;
//   prime_numbers[422] = 13999;
//   prime_numbers[423] = 14009;
//   prime_numbers[424] = 14011;
//   prime_numbers[425] = 14029;
//   prime_numbers[426] = 14033;
//   prime_numbers[427] = 14051;
//   prime_numbers[428] = 14057;
//   prime_numbers[429] = 14071;
//   prime_numbers[430] = 14081;
//   prime_numbers[431] = 14083;
//   prime_numbers[432] = 14087;
//   prime_numbers[433] = 14107;
//   prime_numbers[434] = 14143;
//   prime_numbers[435] = 14149;
//   prime_numbers[436] = 14153;
//   prime_numbers[437] = 14159;
//   prime_numbers[438] = 14173;
//   prime_numbers[439] = 14177;
//   prime_numbers[440] = 14197;
//   prime_numbers[441] = 14207;
//   prime_numbers[442] = 14221;
//   prime_numbers[443] = 14243;
//   prime_numbers[444] = 14249;
//   prime_numbers[445] = 14251;
//   prime_numbers[446] = 14281;
//   prime_numbers[447] = 14293;
//   prime_numbers[448] = 14303;
//   prime_numbers[449] = 14321;
//   prime_numbers[450] = 14323;
//   prime_numbers[451] = 14327;
//   prime_numbers[452] = 14341;
//   prime_numbers[453] = 14347;
//   prime_numbers[454] = 14369;
//   prime_numbers[455] = 14387;
//   prime_numbers[456] = 14389;
//   prime_numbers[457] = 14401;
//   prime_numbers[458] = 14407;
//   prime_numbers[459] = 14411;
//   prime_numbers[460] = 14419;
//   prime_numbers[461] = 14423;
//   prime_numbers[462] = 14431;
//   prime_numbers[463] = 14437;
//   prime_numbers[464] = 14447;
//   prime_numbers[465] = 14449;
//   prime_numbers[466] = 14461;
//   prime_numbers[467] = 14479;
//   prime_numbers[468] = 14489;
//   prime_numbers[469] = 14503;
//   prime_numbers[470] = 14519;
//   prime_numbers[471] = 14533;
//   prime_numbers[472] = 14537;
//   prime_numbers[473] = 14543;
//   prime_numbers[474] = 14549;
//   prime_numbers[475] = 14551;
//   prime_numbers[476] = 14557;
//   prime_numbers[477] = 14561;
//   prime_numbers[478] = 14563;
//   prime_numbers[479] = 14591;
//   prime_numbers[480] = 14593;
//   prime_numbers[481] = 14621;
//   prime_numbers[482] = 14627;
//   prime_numbers[483] = 14629;
//   prime_numbers[484] = 14633;
//   prime_numbers[485] = 14639;
//   prime_numbers[486] = 14653;
//   prime_numbers[487] = 14657;
//   prime_numbers[488] = 14669;
//   prime_numbers[489] = 14683;
//   prime_numbers[490] = 14699;
//   prime_numbers[491] = 14713;
//   prime_numbers[492] = 14717;
//   prime_numbers[493] = 14723;
//   prime_numbers[494] = 14731;
//   prime_numbers[495] = 14737;
//   prime_numbers[496] = 14741;
//   prime_numbers[497] = 14747;
//   prime_numbers[498] = 14753;
//   prime_numbers[499] = 14759;
//   prime_numbers[500] = 14767;
//   prime_numbers[501] = 14771;
//   prime_numbers[502] = 14779;
//   prime_numbers[503] = 14783;
//   prime_numbers[504] = 14797;
//   prime_numbers[505] = 14813;
//   prime_numbers[506] = 14821;
//   prime_numbers[507] = 14827;
//   prime_numbers[508] = 14831;
//   prime_numbers[509] = 14843;
//   prime_numbers[510] = 14851;
//   prime_numbers[511] = 14867;
//   prime_numbers[512] = 14869;
//   prime_numbers[513] = 14879;
//   prime_numbers[514] = 14887;
//   prime_numbers[515] = 14891;
//   prime_numbers[516] = 14897;
//   prime_numbers[517] = 14923;
//   prime_numbers[518] = 14929;
//   prime_numbers[519] = 14939;
//   prime_numbers[520] = 14947;
//   prime_numbers[521] = 14951;
//   prime_numbers[522] = 14957;
//   prime_numbers[523] = 14969;
//   prime_numbers[524] = 14983;
//   prime_numbers[525] = 15013;
//   prime_numbers[526] = 15017;
//   prime_numbers[527] = 15031;
//   prime_numbers[528] = 15053;
//   prime_numbers[529] = 15061;
//   prime_numbers[530] = 15073;
//   prime_numbers[531] = 15077;
//   prime_numbers[532] = 15083;
//   prime_numbers[533] = 15091;
//   prime_numbers[534] = 15101;
//   prime_numbers[535] = 15107;
//   prime_numbers[536] = 15121;
//   prime_numbers[537] = 15131;
//   prime_numbers[538] = 15137;
//   prime_numbers[539] = 15139;
//   prime_numbers[540] = 15149;
//   prime_numbers[541] = 15161;
//   prime_numbers[542] = 15173;
//   prime_numbers[543] = 15187;
//   prime_numbers[544] = 15193;
//   prime_numbers[545] = 15199;
//   prime_numbers[546] = 15217;
//   prime_numbers[547] = 15227;
//   prime_numbers[548] = 15233;
//   prime_numbers[549] = 15241;
//   prime_numbers[550] = 15259;
//   prime_numbers[551] = 15263;
//   prime_numbers[552] = 15269;
//   prime_numbers[553] = 15271;
//   prime_numbers[554] = 15277;
//   prime_numbers[555] = 15287;
//   prime_numbers[556] = 15289;
//   prime_numbers[557] = 15299;
//   prime_numbers[558] = 15307;
//   prime_numbers[559] = 15313;
//   prime_numbers[560] = 15319;
//   prime_numbers[561] = 15329;
//   prime_numbers[562] = 15331;
//   prime_numbers[563] = 15349;
//   prime_numbers[564] = 15359;
//   prime_numbers[565] = 15361;
//   prime_numbers[566] = 15373;
//   prime_numbers[567] = 15377;
//   prime_numbers[568] = 15383;
//   prime_numbers[569] = 15391;
//   prime_numbers[570] = 15401;
//   prime_numbers[571] = 15413;
//   prime_numbers[572] = 15427;
//   prime_numbers[573] = 15439;
//   prime_numbers[574] = 15443;
//   prime_numbers[575] = 15451;
//   prime_numbers[576] = 15461;
//   prime_numbers[577] = 15467;
//   prime_numbers[578] = 15473;
//   prime_numbers[579] = 15493;
//   prime_numbers[580] = 15497;
//   prime_numbers[581] = 15511;
//   prime_numbers[582] = 15527;
//   prime_numbers[583] = 15541;
//   prime_numbers[584] = 15551;
//   prime_numbers[585] = 15559;
//   prime_numbers[586] = 15569;
//   prime_numbers[587] = 15581;
//   prime_numbers[588] = 15583;
//   prime_numbers[589] = 15601;
//   prime_numbers[590] = 15607;
//   prime_numbers[591] = 15619;
//   prime_numbers[592] = 15629;
//   prime_numbers[593] = 15641;
//   prime_numbers[594] = 15643;
//   prime_numbers[595] = 15647;
//   prime_numbers[596] = 15649;
//   prime_numbers[597] = 15661;
//   prime_numbers[598] = 15667;
//   prime_numbers[599] = 15671;
//   prime_numbers[600] = 15679;
//   prime_numbers[601] = 15683;
//   prime_numbers[602] = 15727;
//   prime_numbers[603] = 15731;
//   prime_numbers[604] = 15733;
//   prime_numbers[605] = 15737;
//   prime_numbers[606] = 15739;
//   prime_numbers[607] = 15749;
//   prime_numbers[608] = 15761;
//   prime_numbers[609] = 15767;
//   prime_numbers[610] = 15773;
//   prime_numbers[611] = 15787;
//   prime_numbers[612] = 15791;
//   prime_numbers[613] = 15797;
//   prime_numbers[614] = 15803;
//   prime_numbers[615] = 15809;
//   prime_numbers[616] = 15817;
//   prime_numbers[617] = 15823;
//   prime_numbers[618] = 15859;
//   prime_numbers[619] = 15877;
//   prime_numbers[620] = 15881;
//   prime_numbers[621] = 15887;
//   prime_numbers[622] = 15889;
//   prime_numbers[623] = 15901;
//   prime_numbers[624] = 15907;
//   prime_numbers[625] = 15913;
//   prime_numbers[626] = 15919;
//   prime_numbers[627] = 15923;
//   prime_numbers[628] = 15937;
//   prime_numbers[629] = 15959;
//   prime_numbers[630] = 15971;
//   prime_numbers[631] = 15973;
//   prime_numbers[632] = 15991;
//   prime_numbers[633] = 16001;
//   prime_numbers[634] = 16007;
//   prime_numbers[635] = 16033;
//   prime_numbers[636] = 16057;
//   prime_numbers[637] = 16061;
//   prime_numbers[638] = 16063;
//   prime_numbers[639] = 16067;
//   prime_numbers[640] = 16069;
//   prime_numbers[641] = 16073;
//   prime_numbers[642] = 16087;
//   prime_numbers[643] = 16091;
//   prime_numbers[644] = 16097;
//   prime_numbers[645] = 16103;
//   prime_numbers[646] = 16111;
//   prime_numbers[647] = 16127;
//   prime_numbers[648] = 16139;
//   prime_numbers[649] = 16141;
//   prime_numbers[650] = 16183;
//   prime_numbers[651] = 16187;
//   prime_numbers[652] = 16189;
//   prime_numbers[653] = 16193;
//   prime_numbers[654] = 16217;
//   prime_numbers[655] = 16223;
//   prime_numbers[656] = 16229;
//   prime_numbers[657] = 16231;
//   prime_numbers[658] = 16249;
//   prime_numbers[659] = 16253;
//   prime_numbers[660] = 16267;
//   prime_numbers[661] = 16273;
//   prime_numbers[662] = 16301;
//   prime_numbers[663] = 16319;
//   prime_numbers[664] = 16333;
//   prime_numbers[665] = 16339;
//   prime_numbers[666] = 16349;
//   prime_numbers[667] = 16361;
//   prime_numbers[668] = 16363;
//   prime_numbers[669] = 16369;
//   prime_numbers[670] = 16381;
//   prime_numbers[671] = 16411;
//   prime_numbers[672] = 16417;
//   prime_numbers[673] = 16421;
//   prime_numbers[674] = 16427;
//   prime_numbers[675] = 16433;
//   prime_numbers[676] = 16447;
//   prime_numbers[677] = 16451;
//   prime_numbers[678] = 16453;
//   prime_numbers[679] = 16477;
//   prime_numbers[680] = 16481;
//   prime_numbers[681] = 16487;
//   prime_numbers[682] = 16493;
//   prime_numbers[683] = 16519;
//   prime_numbers[684] = 16529;
//   prime_numbers[685] = 16547;
//   prime_numbers[686] = 16553;
//   prime_numbers[687] = 16561;
//   prime_numbers[688] = 16567;
//   prime_numbers[689] = 16573;
//   prime_numbers[690] = 16603;
//   prime_numbers[691] = 16607;
//   prime_numbers[692] = 16619;
//   prime_numbers[693] = 16631;
//   prime_numbers[694] = 16633;
//   prime_numbers[695] = 16649;
//   prime_numbers[696] = 16651;
//   prime_numbers[697] = 16657;
//   prime_numbers[698] = 16661;
//   prime_numbers[699] = 16673;
//   prime_numbers[700] = 16691;
//   prime_numbers[701] = 16693;
//   prime_numbers[702] = 16699;
//   prime_numbers[703] = 16703;
//   prime_numbers[704] = 16729;
//   prime_numbers[705] = 16741;
//   prime_numbers[706] = 16747;
//   prime_numbers[707] = 16759;
//   prime_numbers[708] = 16763;
//   prime_numbers[709] = 16787;
//   prime_numbers[710] = 16811;
//   prime_numbers[711] = 16823;
//   prime_numbers[712] = 16829;
//   prime_numbers[713] = 16831;
//   prime_numbers[714] = 16843;
//   prime_numbers[715] = 16871;
//   prime_numbers[716] = 16879;
//   prime_numbers[717] = 16883;
//   prime_numbers[718] = 16889;
//   prime_numbers[719] = 16901;
//   prime_numbers[720] = 16903;
//   prime_numbers[721] = 16921;
//   prime_numbers[722] = 16927;
//   prime_numbers[723] = 16931;
//   prime_numbers[724] = 16937;
//   prime_numbers[725] = 16943;
//   prime_numbers[726] = 16963;
//   prime_numbers[727] = 16979;
//   prime_numbers[728] = 16981;
//   prime_numbers[729] = 16987;
//   prime_numbers[730] = 16993;
//   prime_numbers[731] = 17011;
//   prime_numbers[732] = 17021;
//   prime_numbers[733] = 17027;
//   prime_numbers[734] = 17029;
//   prime_numbers[735] = 17033;
//   prime_numbers[736] = 17041;
//   prime_numbers[737] = 17047;
//   prime_numbers[738] = 17053;
//   prime_numbers[739] = 17077;
//   prime_numbers[740] = 17093;
//   prime_numbers[741] = 17099;
//   prime_numbers[742] = 17107;
//   prime_numbers[743] = 17117;
//   prime_numbers[744] = 17123;
//   prime_numbers[745] = 17137;
//   prime_numbers[746] = 17159;
//   prime_numbers[747] = 17167;
//   prime_numbers[748] = 17183;
//   prime_numbers[749] = 17189;
//   prime_numbers[750] = 17191;
//   prime_numbers[751] = 17203;
//   prime_numbers[752] = 17207;
//   prime_numbers[753] = 17209;
//   prime_numbers[754] = 17231;
//   prime_numbers[755] = 17239;
//   prime_numbers[756] = 17257;
//   prime_numbers[757] = 17291;
//   prime_numbers[758] = 17293;
//   prime_numbers[759] = 17299;
//   prime_numbers[760] = 17317;
//   prime_numbers[761] = 17321;
//   prime_numbers[762] = 17327;
//   prime_numbers[763] = 17333;
//   prime_numbers[764] = 17341;
//   prime_numbers[765] = 17351;
//   prime_numbers[766] = 17359;
//   prime_numbers[767] = 17377;
//   prime_numbers[768] = 17383;
//   prime_numbers[769] = 17387;
//   prime_numbers[770] = 17389;
//   prime_numbers[771] = 17393;
//   prime_numbers[772] = 17401;
//   prime_numbers[773] = 17417;
//   prime_numbers[774] = 17419;
//   prime_numbers[775] = 17431;
//   prime_numbers[776] = 17443;
//   prime_numbers[777] = 17449;
//   prime_numbers[778] = 17467;
//   prime_numbers[779] = 17471;
//   prime_numbers[780] = 17477;
//   prime_numbers[781] = 17483;
//   prime_numbers[782] = 17489;
//   prime_numbers[783] = 17491;
//   prime_numbers[784] = 17497;
//   prime_numbers[785] = 17509;
//   prime_numbers[786] = 17519;
//   prime_numbers[787] = 17539;
//   prime_numbers[788] = 17551;
//   prime_numbers[789] = 17569;
//   prime_numbers[790] = 17573;
//   prime_numbers[791] = 17579;
//   prime_numbers[792] = 17581;
//   prime_numbers[793] = 17597;
//   prime_numbers[794] = 17599;
//   prime_numbers[795] = 17609;
//   prime_numbers[796] = 17623;
//   prime_numbers[797] = 17627;
//   prime_numbers[798] = 17657;
//   prime_numbers[799] = 17659;
//   prime_numbers[800] = 17669;
//   prime_numbers[801] = 17681;
//   prime_numbers[802] = 17683;
//   prime_numbers[803] = 17707;
//   prime_numbers[804] = 17713;
//   prime_numbers[805] = 17729;
//   prime_numbers[806] = 17737;
//   prime_numbers[807] = 17747;
//   prime_numbers[808] = 17749;
//   prime_numbers[809] = 17761;
//   prime_numbers[810] = 17783;
//   prime_numbers[811] = 17789;
//   prime_numbers[812] = 17791;
//   prime_numbers[813] = 17807;
//   prime_numbers[814] = 17827;
//   prime_numbers[815] = 17837;
//   prime_numbers[816] = 17839;
//   prime_numbers[817] = 17851;
//   prime_numbers[818] = 17863;
//   prime_numbers[819] = 17881;
//   prime_numbers[820] = 17891;
//   prime_numbers[821] = 17903;
//   prime_numbers[822] = 17909;
//   prime_numbers[823] = 17911;
//   prime_numbers[824] = 17921;
//   prime_numbers[825] = 17923;
//   prime_numbers[826] = 17929;
//   prime_numbers[827] = 17939;
//   prime_numbers[828] = 17957;
//   prime_numbers[829] = 17959;
//   prime_numbers[830] = 17971;
//   prime_numbers[831] = 17977;
//   prime_numbers[832] = 17981;
//   prime_numbers[833] = 17987;
//   prime_numbers[834] = 17989;
//   prime_numbers[835] = 18013;
//   prime_numbers[836] = 18041;
//   prime_numbers[837] = 18043;
//   prime_numbers[838] = 18047;
//   prime_numbers[839] = 18049;
//   prime_numbers[840] = 18059;
//   prime_numbers[841] = 18061;
//   prime_numbers[842] = 18077;
//   prime_numbers[843] = 18089;
//   prime_numbers[844] = 18097;
//   prime_numbers[845] = 18119;
//   prime_numbers[846] = 18121;
//   prime_numbers[847] = 18127;
//   prime_numbers[848] = 18131;
//   prime_numbers[849] = 18133;
//   prime_numbers[850] = 18143;
//   prime_numbers[851] = 18149;
//   prime_numbers[852] = 18169;
//   prime_numbers[853] = 18181;
//   prime_numbers[854] = 18191;
//   prime_numbers[855] = 18199;
//   prime_numbers[856] = 18211;
//   prime_numbers[857] = 18217;
//   prime_numbers[858] = 18223;
//   prime_numbers[859] = 18229;
//   prime_numbers[860] = 18233;
//   prime_numbers[861] = 18251;
//   prime_numbers[862] = 18253;
//   prime_numbers[863] = 18257;
//   prime_numbers[864] = 18269;
//   prime_numbers[865] = 18287;
//   prime_numbers[866] = 18289;
//   prime_numbers[867] = 18301;
//   prime_numbers[868] = 18307;
//   prime_numbers[869] = 18311;
//   prime_numbers[870] = 18313;
//   prime_numbers[871] = 18329;
//   prime_numbers[872] = 18341;
//   prime_numbers[873] = 18353;
//   prime_numbers[874] = 18367;
//   prime_numbers[875] = 18371;
//   prime_numbers[876] = 18379;
//   prime_numbers[877] = 18397;
//   prime_numbers[878] = 18401;
//   prime_numbers[879] = 18413;
//   prime_numbers[880] = 18427;
//   prime_numbers[881] = 18433;
//   prime_numbers[882] = 18439;
//   prime_numbers[883] = 18443;
//   prime_numbers[884] = 18451;
//   prime_numbers[885] = 18457;
//   prime_numbers[886] = 18461;
//   prime_numbers[887] = 18481;
//   prime_numbers[888] = 18493;
//   prime_numbers[889] = 18503;
//   prime_numbers[890] = 18517;
//   prime_numbers[891] = 18521;
//   prime_numbers[892] = 18523;
//   prime_numbers[893] = 18539;
//   prime_numbers[894] = 18541;
//   prime_numbers[895] = 18553;
//   prime_numbers[896] = 18583;
//   prime_numbers[897] = 18587;
//   prime_numbers[898] = 18593;
//   prime_numbers[899] = 18617;
//   prime_numbers[900] = 18637;
//   prime_numbers[901] = 18661;
//   prime_numbers[902] = 18671;
//   prime_numbers[903] = 18679;
//   prime_numbers[904] = 18691;
//   prime_numbers[905] = 18701;
//   prime_numbers[906] = 18713;
//   prime_numbers[907] = 18719;
//   prime_numbers[908] = 18731;
//   prime_numbers[909] = 18743;
//   prime_numbers[910] = 18749;
//   prime_numbers[911] = 18757;
//   prime_numbers[912] = 18773;
//   prime_numbers[913] = 18787;
//   prime_numbers[914] = 18793;
//   prime_numbers[915] = 18797;
//   prime_numbers[916] = 18803;
//   prime_numbers[917] = 18839;
//   prime_numbers[918] = 18859;
//   prime_numbers[919] = 18869;
//   prime_numbers[920] = 18899;
//   prime_numbers[921] = 18911;
//   prime_numbers[922] = 18913;
//   prime_numbers[923] = 18917;
//   prime_numbers[924] = 18919;
//   prime_numbers[925] = 18947;
//   prime_numbers[926] = 18959;
//   prime_numbers[927] = 18973;
//   prime_numbers[928] = 18979;
//   prime_numbers[929] = 19001;
//   prime_numbers[930] = 19009;
//   prime_numbers[931] = 19013;
//   prime_numbers[932] = 19031;
//   prime_numbers[933] = 19037;
//   prime_numbers[934] = 19051;
//   prime_numbers[935] = 19069;
//   prime_numbers[936] = 19073;
//   prime_numbers[937] = 19079;
//   prime_numbers[938] = 19081;
//   prime_numbers[939] = 19087;
//   prime_numbers[940] = 19121;
//   prime_numbers[941] = 19139;
//   prime_numbers[942] = 19141;
//   prime_numbers[943] = 19157;
//   prime_numbers[944] = 19163;
//   prime_numbers[945] = 19181;
//   prime_numbers[946] = 19183;
//   prime_numbers[947] = 19207;
//   prime_numbers[948] = 19211;
//   prime_numbers[949] = 19213;
//   prime_numbers[950] = 19219;
//   prime_numbers[951] = 19231;
//   prime_numbers[952] = 19237;
//   prime_numbers[953] = 19249;
//   prime_numbers[954] = 19259;
//   prime_numbers[955] = 19267;
//   prime_numbers[956] = 19273;
//   prime_numbers[957] = 19289;
//   prime_numbers[958] = 19301;
//   prime_numbers[959] = 19309;
//   prime_numbers[960] = 19319;
//   prime_numbers[961] = 19333;
//   prime_numbers[962] = 19373;
//   prime_numbers[963] = 19379;
//   prime_numbers[964] = 19381;
//   prime_numbers[965] = 19387;
//   prime_numbers[966] = 19391;
//   prime_numbers[967] = 19403;
//   prime_numbers[968] = 19417;
//   prime_numbers[969] = 19421;
//   prime_numbers[970] = 19423;
//   prime_numbers[971] = 19427;
//   prime_numbers[972] = 19429;
//   prime_numbers[973] = 19433;
//   prime_numbers[974] = 19441;
//   prime_numbers[975] = 19447;
//   prime_numbers[976] = 19457;
//   prime_numbers[977] = 19463;
//   prime_numbers[978] = 19469;
//   prime_numbers[979] = 19471;
//   prime_numbers[980] = 19477;
//   prime_numbers[981] = 19483;
//   prime_numbers[982] = 19489;
//   prime_numbers[983] = 19501;
//   prime_numbers[984] = 19507;
//   prime_numbers[985] = 19531;
//   prime_numbers[986] = 19541;
//   prime_numbers[987] = 19543;
//   prime_numbers[988] = 19553;
//   prime_numbers[989] = 19559;
//   prime_numbers[990] = 19571;
//   prime_numbers[991] = 19577;
//   prime_numbers[992] = 19583;
//   prime_numbers[993] = 19597;
//   prime_numbers[994] = 19603;
//   prime_numbers[995] = 19609;
//   prime_numbers[996] = 19661;
//   prime_numbers[997] = 19681;
//   prime_numbers[998] = 19687;
//   prime_numbers[999] = 19697;
//   prime_numbers[1000] = 19699;
//   prime_numbers[1001] = 19709;
//   prime_numbers[1002] = 19717;
//   prime_numbers[1003] = 19727;
//   prime_numbers[1004] = 19739;
//   prime_numbers[1005] = 19751;
//   prime_numbers[1006] = 19753;
//   prime_numbers[1007] = 19759;
//   prime_numbers[1008] = 19763;
//   prime_numbers[1009] = 19777;
//   prime_numbers[1010] = 19793;
//   prime_numbers[1011] = 19801;
//   prime_numbers[1012] = 19813;
//   prime_numbers[1013] = 19819;
//   prime_numbers[1014] = 19841;
//   prime_numbers[1015] = 19843;
//   prime_numbers[1016] = 19853;
//   prime_numbers[1017] = 19861;
//   prime_numbers[1018] = 19867;
//   prime_numbers[1019] = 19889;
//   prime_numbers[1020] = 19891;
//   prime_numbers[1021] = 19913;
//   prime_numbers[1022] = 19919;
//   prime_numbers[1023] = 19927;
//   prime_numbers[1024] = 19937;
//   prime_numbers[1025] = 19949;
//   prime_numbers[1026] = 19961;
//   prime_numbers[1027] = 19963;
//   prime_numbers[1028] = 19973;
//   prime_numbers[1029] = 19979;
//   prime_numbers[1030] = 19991;
//   prime_numbers[1031] = 19993;
//   prime_numbers[1032] = 19997;
//
//   return prime_numbers;
// }
//
//
// uint64_t gen_prime(uint64_t* prime_list){
//   uint seed = time(0);
//   return prime_list[rand_r(&seed) % Nprimes];
// }
//
//
// //
// // gcd
// uint64_t gcd(uint64_t a, uint64_t b){
//   if (a == 0)
//     return b;
//   return gcd(b%a, a);
//   // if (b == 0)
//   //   return a;
//   // if (a == b)
//     // return a;
//   // if (a > b)
//   //   return gcd(a%b, b);
//   // return gcd(a, b%a);
// }
//
// uint64_t power(uint64_t base, uint64_t exp, uint64_t mod){
//   
//   uint64_t res = 1;
//   for (int i = 0; i < exp; i++){
//     res = (res * base) % mod;
//   }
//   // while (exp > 0){
//   //   if (exp & 1)
//   //     res = (res * base) % mod;
//   //   base = (base * base) % mod;
//   //   exp /= 2;
//   // }
//   return res;
// }
//
// uint64_t mod_inverse(uint64_t enc_exp, uint64_t phi){
//   uint64_t aprev, iprev, i = 1, atemp, itemp;
//   aprev = enc_exp, iprev = enc_exp;
//   while (enc_exp != 1){
//     atemp = enc_exp;
//     itemp = i;
//     enc_exp = aprev - aprev / atemp * enc_exp;
//     enc_exp = iprev - aprev / atemp * i;
//     aprev = atemp;
//     iprev = itemp;
//     while (i < 0)
//       i += phi;
//   }
//   return i;
// }
//
// // uint64_t mod_inverse(uint64_t enc_exp, uint64_t phi){
// //   for (uint64_t dec_exp = 2; dec_exp < phi; dec_exp++){
// //     if ( (enc_exp * dec_exp) % phi == 1)
// //       return dec_exp;
// //   }
// //   return -1;
// // }
//
// void gen_keys(uint64_t *enc_exp, uint64_t *dec_exp, uint64_t *product){
//   uint64_t* prime_list = init_prime_list();
//   uint64_t p = gen_prime(prime_list);
//   uint64_t q = gen_prime(prime_list);
//   *product = p * q;
//   uint64_t phi = (p-1) * (q-1);
//
//   // choose encryption exponent
//   for (*enc_exp = 2; *enc_exp < phi; (*enc_exp)++){
//     if (gcd(*enc_exp, phi) == 1)
//       break;
//   }
//
//   // Compute Decryption exponent
//   *dec_exp = mod_inverse(*enc_exp, phi);
// }
//
// // Encrypt message using public key (e, n)
// uint64_t encrypt(uint64_t message, uint64_t enc_exp, uint64_t product) {
//     return power(message, enc_exp, product);
// }
//
// // Decrypt message using private key (d, n)
// uint64_t decrypt(uint64_t cipher, uint64_t dec_exp, uint64_t product) {
//     return power(cipher, dec_exp, product);
// }
//
//
//
// // 
// //
// // Encrypt
// //
// //
// // Decrypt
