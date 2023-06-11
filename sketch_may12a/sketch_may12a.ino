#include <EEPROM.h> // подключаем библиотеку EEPROM

void setup() {
  char smallNum[] = "33C08ED0BC007C8EC08ED8BE007CBF0006B90002FCF3A450681C06CBFBB90400BDBE07807E00007C0B0F850E0183C510E2F1CD1888560055C6461105C6461000B441BBAA55CD135D720F81FB55AA7509F7C101007403FE46106660807E1000742666680000000066FF760868000068007C680100681000B4428A56008BF4CD139F83C4109EEB14B80102BB007C8A56008A76018A4E028A6E03CD136661731CFE4E11750C807E00800F848A00B280EB845532E48A5600CD135DEB9E813EFE7D55AA756EFF7600E88D007517FAB0D1E664E88300B0DFE660E87C00B0FFE664E87500FBB800BBCD1A6623C0753B6681FB54435041753281F90201722C666807BB00006668000200006668080000006653665366556668000000006668007C0000666168000007CD1A5A32F6EA007C0000CD18A0B707EB08A0B607EB03A0B50732E40500078BF0AC3C007409BB0700B40ECD10EBF2F4EBFD2BC9E464EB002402E0F82402C3496E76616C696420706172746974696F6E207461626C65004572726F72206C6F6164696E67206F7065726174696E672073797374656D004D697373696E67206F7065726174696E672073797374656D000000637B9A8E1403700000802021000CFEFFE10008000000B8F30000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000055AAEB58904D53444F53352E3000020862060200000000F800003F00FF000008000000B8F300CF3C0000000000000200000001000600000000000000000000000000800029E2DFF02E4E4F204E414D4520202020464154333220202033C98ED1BCF47B8EC18ED9BD007C885640884E028A5640B441BBAA55CD13721081FB55AA750AF6C1017405FE4602EB2D8A5640B408CD137305B9FFFF8AF1660FB6C640660FB6D180E23FF7E286CDC0ED0641660FB7C966F7E1668946F8837E16007539837E2A007733668B461C6683C00CBB0080B90100E82C00E9A803A1F87D80C47C8BF0AC84C074173CFF7409B40EBB0700CD10EBEEA1FA7DEBE4A17D80EBDF98CD16CD196660807E02000F842000666A0066500653666810000100B4428A56408BF4CD136658665866586658EB33663B46F87203F9EB2A6633D2660FB74E1866F7F1FEC28ACA668BD066C1EA10F7761A86D68A56408AE8C0E4060ACCB80102CD1366610F8274FF81C300026640497594C3424F4F544D475220202020000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000D0A4469736B206572726F72FF0D0A507265737320616E79206B657920746F20726573746172740D0A0000000000000000000000000000000000000000000000000000000000000000000000AC01B901000055AA5252614100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000072724161B30E0D00E6000000000000000000000000000000000055AA00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000055AAF8FFFF0FFFFFFFFFFFFFFF0FFFFFFF0FFFFFFF0FFFFFFF0FFFFFFF0F08000000090000000A000000FFFFFF0F0C0000000D0000000E0000000F000000100000001100000012000000130000001400000015000000160000001700000018000000190000001A0000001B0000001C0000001D0000001E0000001F000000200000002100000022000000230000002400000025000000260000002700000028000000290000002A0000002B0000002C0000002D0000002E0000002F000000300000003100000032000000330000003400000035000000360000003700000038000000390000003A0000003B0000003C0000003D0000003E0000003F000000400000004100000042000000430000004400000045000000460000004700000048000000490000004A0000004B0000004C0000004D0000004E0000004F000000500000005100000052000000530000005400000055000000560000005700000058000000590000005A0000005B0000005C0000005D0000005E0000005F000000600000006100000062000000630000006400000065000000660000006700000068000000690000006A0000006B0000006C0000006D0000006E0000006F000000700000007100000072000000730000007400000075000000760000007700000078000000790000007A0000007B0000007C0000007D0000007E0000007F0000008000000042200049006E0066006F000F007272006D006100740069006F0000006E00000001530079007300740065000F00726D00200056006F006C00750000006D00650053595354454D7E3120202016005967122B56AC56000068122B560300000000004553442D555342202020200800000000000000000000E79A51560000000000004155544F52554E20494E4620188B67122B56AC560000A23B2855050080000000424F4F542020202020202010088D67122B562B56000068122B56060000000000424F4F544D47522020202020086A6B122B56A3560000A23B285595112A500600424F4F544D4752204546492018736B122B56A3560000A33B2855FB1110861700454649202020202020202010089D6C122B562B5600006D122B56741300000000534554555020202045584520182E70122B56A3560000A23B2855BF28C8210100534F55524345532020202010083270122B562B56000071122B56D22800000000535550504F525420202020100842DB132B562B561100DC132B56596800000000426C0065000000FFFFFFFF0F00E9FFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFF015F005000500054005F000F00E946006F0072005F004D006F0000006F0064005F5050545F467E31202020100018CF9A51565156110002694E56B66800000000E52E0066007300650076000F00DA65006E0074007300640000000000FFFFFFFFE5534556454E7E31202020120070C89A515651560100C89A5156F4FB0000000042300030000000FFFFFFFF0F0021FFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFF012E00530070006F0074000F00216C0069006700680074002D0000005600310053504F544C497E31202020120076C89A515651560100C89A5156F5FB00000000E51D043E04320430044F040F00EA20003F0430043F043A04300400000000FFFFE58E82809F8F7E3120202010001262677D567D56110063677D56897000000000504F4C59414B4F5620202010081262677D56AC56110063677D5689700000000041130418041004260400000F0010FFFFFFFFFFFFFFFFFFFFFFFF0000FFFFFFFF838880962020202020202010003C6C4B8456845611006D4B84568E7300000000426B00740069006B0065000F000A2E007000640066000000FFFF0000FFFFFFFF016F0074006300680065000F000A74005F0070006F005F0070000000720061004F54434845547E3150444620008DF7ACA256A3561200F0ACA25602008B770B00426B00740069006B0065000F001E2E00700070007400780000000000FFFFFFFF016F0074006300680065000F001E74005F0070006F005F0070000000720061004F54434845547E3150505420001EF8ACA256A3561200CEACA256BA002EA8020054455854202020205458542018516170AC56AC5612003D76AC56E600210A0000E53437303839305F202020100039AA73AC56AC560000AB73AC56E60000100000E53437323936385F202020100042AB73AC56AC560000AC73AC56E60000100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000099945CD2D2F34EBA84141497F207A2E896C25121AD4BC9C02A2660A11E27AD94C02F1B5F069BA0AB14918D096BEE8B6C3D021955B2A6306A4F90BD20CC09221012BD04372F872EB81C52098588FB90BA80860CC4035EA083070D64660E42E675B1B4EEB83A62E04211E5613E9F416D4466EE0C0330DA4D41562E23A77429AA8A1403152E7845760E0877516DB9F4919407589395CE12D60C9D51574E64FA597D1F8B33C67D4ECA98EE01109D37F524237F2AA7F8729774D80E997F76A711F253691466E41F0B3D9AD96EBC632098951D05A980600EB20F046023B34DA82CF8806A1D21A7F85690AAF933D20D0DA324B420BC92A70CDD28DFF0E60965D12662B695109808CC648133322975E1DE98CACC095511B93E21BC066410206825F5F333BC97C13AF8CC70C36740016080029A202E484AEE2C0E64B30C591A0D132B698544869C664AC57AA8BE74E7C25BF28A25E9BCD3A914A15E447B3B27EFB01D7666C4A99D2ADC058291DC2E69E79C1D650235C024902139052494819B938E335047621774226002CB7D2469E1D220AD16A7DA5E7EA18676DDC4B3EC900A7A8487C6173A98A175D5CF3EA499E8AA1D9DD7FCBE75440F26CC6048235247907555907CB4A66C1045D106CE06570C39A55D35C1B7281C98B223B4DB9F38E15676898E78EE260178405D8D344340CBB4F566CAB7B2DD5B5071AF54AE1D5A42DD8B62BE64D63C79E37B69343857DB273E1805F94DF25718C1A56DA6DC3AEA166C8F1CCC8CB371E9BB8ABB0A088A5F61F70C42CA29F51B59BF25267AF40E841B9F2C228768044A12192F162DA9374373A5239E8E60C8A16D64E94CB22E4602AC52C073E1CC8CA6D76963F4E0AA038FA416CA4CA567418F0206B881944F44A348F517D865FD0A1C2CE83B0DD83A74DC1FE289330B386BEB805B2517ABC0F42AB909996E27DB06E07BC7FF30FE820264BDD99479C810100EBAF8628B20FCA80E6008EC32D0632FB8880F19D191B749E4D0457291A835BCC20B88A287285D7C8B60CBC013F4CBFCA428B729E82A88421D0874D3401CC57629F5226A8F5D171316D1997599B4433322BF2439399C6456AB20AD505D816F825898D255D5218014A463E28D8BACCFACD4F6C13E4D7708B7E0A0784892411471106DD7B6E86C37611615ADBFAE2805F176669535BF05405D781ED4852026EC830CDEC83A735D727F678676B030E7CCB0F178C283972C2D4A56424253AA40C51A130293E961D82F534A08A59E2A6C35A941A8D7F5F54272D41E2551A742697DFE820C942947D05C2B334B1F03D2E00E5DC22633A5CF19F420B3BB6FA656632648F01CF3B65680C03B2610C15E5C5151C0231C4A79844DE37C1627F1281DC295484152B314B3C50EC40E6306E86E652E58C24E2A0CE39FC417DED74B83A8820B41902FC364BF626B5ED47BC36CDD4D2C952EC23881F6251AC04139F14B182D53556206864734652DC13988CD78D67BC3ECD2474321DD9D0151A7A92A271836E782D037F182221846C930B00F5254D71B22A7C2267D8A0C3133702C959906B40C20131A815543D4442286909C3F9819E7CEE482996C0DA773EAD530D5010E60EA1B6708A8596182500378384EB6AF7C5F09E6CB60161C6567A1139C07BE9DD99C1498B333D9E69659CBEACC4155CE203A9006B8210C0C54A01367A65E2F63088266EC892880260AF0CE85309B17B9192070D2DBCA9942250703183CE94A00401A74A91A65CC00D866862044E9E4398AFFA086B40B841B37DA350630BF23DB602E242E0FFD365121D9569C9419DD770A3E747711892D13C97791787B8414E0B38B2BDC8835CE243316D78F0783E2C3DE9865FB76E9CCBACA8C6533327754BC866DCB61A4A588A750B8451E2E55AE8CF4AA1B0003B433122141A20D3DDB6F15F180A0FDD76F95A582A4EFE28E2725A0EB9A721C500F02FF8631ACA5A37DB4E3E2DE7060EDCAD05C32AF849AC643CDB3C599407A5F8788AADD51190158D43D99BF105E160960A4411B4427689935BFD3112FB268135142B9A0451043E649D6EBE40B62061402630A88595412353228AB464B226A68C79809C4AC4D315F05D05F5088D17CAF5E7E3379516B8B440507E16429F86105301F6F6FEE9DCC8C6614426F02B4859D42E48976530829C62F7590215A2A4C09D201543A79D0FB30485A07561DC5CF3E85F9AB249BCC2226F80C86D4FC3582361FD42CE18C145D7A807A66A51F512C89D6B29AA4F49E56132113963AB28D99E203ECF12106B891562C05E817974F67C55D322E843A58D4F6F3B0760C8FB205CAC4A884541A050772E5E6642E31661930C3F4363A09A204279309910449681D64841C9AA3402C9998818C8331232C2D1444B1B788FE7522C508DA620914E3C05FF4E2F939344BB7096B45CAA86A8DF83FD5A004505871B20E7AB1A46298A448B4A8ADE502BA4466E75BB487642A002380E62B7841A1684AC42D2924F9A0B74B2D29A5C056728D61D00ACD5FAD2004E7905ADB861BAA4DF5FA13BE8B6452854AA4802ECA8725EF1B99768415C2B0253130F954FAAE0BCB31C9B9B4DF47212202C001C0401E2C3529CED995085CB290E4EEC4947D2B6240FD804692240C57E62B71B9E46A8646A00B49C206A6373B13F9474B3966CC5264C259169C6DD512252B91097AA19DA700B5841A34323906CE40A4540407E60E72276AB69C762D65809E232DF9DA5104D253277386427B15D381350187B20F92444A7C065F13574C3A12D15A3C9F0257BFD829FA4C6F13A320238ADC6FCBAB22511F47EB123CDB06B377B1E83C504E2602D68B8573E81DCB5BBBD8ED493431DF022CB673EE1B57248FE4495235A2738EEE5BB968AE8F825428D30DB2C5B756D1EE2D0682FED612A8A85006AA8F0408F0BB79BA58F39D1B325417EBA5BC2CF8900191B5009F277F081F937D90068194C22514E290420118921F2ED67ADEC0AF12D8CC12175BE90246DC8F459C050AFA943406DFC46F52D8A751346FF1D6C5958242016C1340B60A38FB76669E180F9DEB168B8B98540F03F97AC3C81A17AB0A19207E430A6C55EB2DD46643394F20779D0187D9479F385DA80383AD983BAAD828492CC426BF21B079F6AAD99AC5CD20C0A7A041564904C29418395703E2CC03C6F5EDD8CD1FAC90FA0CB8A24028098948F69B122AC420B23B80D834E6D0450B44474FC32DD280CA03B5EDBB4E41A86D4E7C39878DF237D7D930D4141A56C399EFDFA35B93A4A294BED250033A08B6A9D1960DCBB5618D580F5E71D3931FD95669CE90643853352E073554D7650203F0C6415C2395B81A354AC9C1FEBBE0E7EEBB7EE1E459A5D0B5D3C582A51224A71038C261D92F3520286373F7452B05EBE75B267A7C741BF995A98DC944B33198BA621CDEF5668D6CBC6093E0EC631ABA7D4142070629CB509510C4408431B4F75A081223495ACC72ACCCE9C9964C0BA93F96552E11449853F6F9AC4809D48806E9AC43F50EB1E95566EF32270DA9BF899A2F980918A254042D2D3162AAF39172B3101376578A5C1AF14958D9326183B146B4001D9353F30B33AB269867DDECE5C8E6D1E5B659F66CF808935C1A2ED80CAAB25EF61AB92082941888023557281B9999084B6FCE157EC48C33CC3C1334F6DCEDAF2CB0F4DA40B90BC097DBA4B1E80FA132E32B013F974C981139B59942FB6C53B13581374F91BB2E49D5CE54515C65784058076D47D59779E8692ED030287449DE7E5151B3B4673A36303CB25D9C58A93882002649AE1301ED2F2716E68905B884E00264555AB030D03474A6F9545D684B2275AD211CFDF0CCB717C38B31263D85CD17C1BC5731F3E391359941069177CAB1087D85AEA640452C597C1878F3BD63069B825642E76ECC249DE62E35C125354CD5754C941846C9EEBA067A376126A306AEC40C5B41BFCC2ECC42626D4A3170073AACF4B0854228"; // целое число от 0 до 255
  EEPROM.write(, smallNum); // запись числа в ячейку 0
 
  Serial.begin(9600); // инициализация послед. порта
}

void loop() {
  for (int addr=0; addr<; addr++) { 
    byte val = EEPROM.read(addr); // считываем 1 байт по адресу ячейки
    Serial.print(addr); // выводим адрес в послед. порт 
    Serial.print("\t"); // табуляция
    Serial.println(val); // выводим значение в послед. порт
  }

  delay(60000); // задержка 1 мин
}