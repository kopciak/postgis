int gbox_data_length = 46;
char gbox_data[][512] = { 
"LINESTRING(-3.083333333333333333333333333333333 9.83333333333333333333333333333333,15.5 -5.25)",
"GBOX((0.9595879536661512,-0.052998127820754914,-0.09150161866340238),(0.9949586928172913,0.2661172917357788,0.17078275740560678))",
"LINESTRING(-35.0 52.5,50.0 60.0)",
"GBOX((0.32139380484326974,-0.3491712110387923,0.7933533402912352),(0.49866816905678146,0.3830222215594891,0.9014764513830344))",
"LINESTRING(-122.5 56.25,-123.5 69.166666)",
"GBOX((-0.2985076686105858,-0.46856318207700426,0.8314696123025452),(-0.19629681530223578,-0.2965721369531419,0.9346189212108039))",
"LINESTRING(-121.75 42.55,-122.35 43.25)",
"GBOX((-0.38974385906936987,-0.6264438483522763,0.6762333461397154),(-0.3876552159203768,-0.6153242999306493,0.6851829903263591))",
"LINESTRING(-3.083333333333333333333333333333333 9.83333333333333333333333333333333,15.5 -5.25)",
"GBOX((0.9595879536661512,-0.052998127820754914,-0.09150161866340238),(0.9949586928172913,0.2661172917357788,0.17078275740560678))",
"LINESTRING(86.85 9.85,105.5 -5.25)",
"GBOX((-0.2661172917357788,0.9595879536661512,-0.09150161866340238),(0.054140158622265885,0.9949902364317366,0.17106936486110255))",
"LINESTRING(-120.0 62.55,-120.0 62.55)",
"GBOX((-0.23048718726773115,-0.39921551884135303,0.8874134470592832),(-0.23048718726773115,-0.39921551884135303,0.8874134470592832))",
"LINESTRING(-135.0 40.0,45.0 -40.0)",
"GBOX((-1.0,-1.0,-1.0),(1.0,1.0,1.0))",
"LINESTRING(-120.0 62.55,60.0 73.25)",
"GBOX((-0.23048718726773115,-0.39921551884135303,0.8874134470592832),(0.14409813406704472,0.2495852894799931,1.0))",
"LINESTRING(-120.0 -62.55,60.0 -73.25)",
"GBOX((-0.23048718726773115,-0.39921551884135303,-1.0),(0.14409813406704472,0.2495852894799931,-0.8874134470592832))",
"LINESTRING(-120.0 20.0,-120.5 20.0)",
"GBOX((-0.47693005443993386,-0.8137976813493738,0.3420201433256687),(-0.469846310392954,-0.8096665639208592,0.34202301827896614))",
"LINESTRING(-120.0 45.0,-120.5 45.0)",
"GBOX((-0.3588838181618333,-0.6123724356957946,0.7071067811865475),(-0.3535533905932736,-0.6092638222162746,0.7071101467680172))",
"LINESTRING(-120.0 75.0,-120.5 75.0)",
"GBOX((-0.13136059445438608,-0.2241438680420134,0.9659258262890683),(-0.12940952255126031,-0.22300603653796233,0.9659264422294181))",
"LINESTRING(-120.0 -20.0,-120.5 -20.0)",
"GBOX((-0.47693005443993386,-0.8137976813493738,-0.34202301827896603),(-0.469846310392954,-0.8096665639208592,-0.3420201433256687))",
"LINESTRING(-120.0 -45.0,-120.5 -45.0)",
"GBOX((-0.3588838181618333,-0.6123724356957946,-0.7071101467680172),(-0.3535533905932736,-0.6092638222162746,-0.7071067811865475))",
"LINESTRING(-120.0 -75.0,-120.5 -75.0)",
"GBOX((-0.13136059445438608,-0.2241438680420134,-0.9659264422294181),(-0.12940952255126031,-0.22300603653796233,-0.9659258262890683))",
"LINESTRING(0.0 60.0,0.0 7.0)",
"GBOX((0.5000000000000001,0.0,0.12186934340514748),(0.992546151641322,0.0,0.8660254037844386))",
"LINESTRING(0.0 -60.0,0.0 -70.0)",
"GBOX((0.3420201433256688,0.0,-0.9396926207859083),(0.5000000000000001,0.0,-0.8660254037844386))",
"LINESTRING(180.0 60.0,180.0 70.0)",
"GBOX((-0.5000000000000001,4.188538737676993E-17,0.8660254037844386),(-0.3420201433256688,6.123233995736767E-17,0.9396926207859083))",
"LINESTRING(4.0 45.0,-4.0 45.0)",
"GBOX((0.7053843046066397,-0.04932527561613236,0.7071067811865475),(0.7062439675293093,0.04932527561613236,0.7079685433184585))",
"LINESTRING(-176.0 45.0,176.0 45.0)",
"GBOX((-0.7053843046066397,-0.049325275616132515,-0.7079685433184585),(0.7062439675293093,0.04932527561613243,0.7071067811865475))",
"LINESTRING(176.0 45.0,-176.0 45.0)",
"GBOX((-0.7053843046066397,-0.04932527561613243,-0.7079685433184585),(0.7062439675293093,0.049325275616132515,0.7071067811865475))",
"LINESTRING(-4.0 45.0,4.0 45.0)",
"GBOX((0.7053843046066397,-0.04932527561613236,0.7071067811865475),(0.7062439675293093,0.04932527561613236,0.7079685433184585))",
"LINESTRING(-45.0 60.0,135.0 72.0)",
"GBOX((-0.21850801222441055,-0.3535533905932738,0.8660254037844386),(0.35355339059327384,0.21850801222441057,1.0))",
"LINESTRING(-45.0 -60.0,135.0 -72.0)",
"GBOX((-0.21850801222441055,-0.3535533905932738,-1.0),(0.35355339059327384,0.21850801222441057,-0.8660254037844386))",
"LINESTRING(-15.0 3.5,15.0 -3.5)",
"GBOX((0.9641241799135144,-0.2583362954111446,-0.06104853953485687),(0.9641241799135144,0.2583362954111446,0.06104853953485687))",
"LINESTRING(75.0 3.5,105.0 -3.5)",
"GBOX((-0.2583362954111447,0.9641241799135144,-0.06104853953485687),(0.2583362954111446,1.0,0.06104853953485687))",
"LINESTRING(-75.0 3.5,-105.0 -3.5)",
"GBOX((-0.2583362954111447,-1.0,-0.06104853953485687),(0.2583362954111446,-0.9641241799135144,0.06104853953485687))",
"LINESTRING(-153.11560 24.70504,-9.15580 24.18317)",
"GBOX((-0.8102844449894852,-0.5761590206406835,0.40965509098927283),(0.9006179133313287,-0.14515536715290223,0.8267171981124425))",
"LINESTRING(-178.0 45.0,165.0 45.0)",
"GBOX((-0.7066760308408345,-0.9967556114749435,-0.7110008644817356),(0.7077824677818997,0.18301270189221913,0.7071067811865475))",
"LINESTRING(10.0 45.0,110.0 45.0)",
"GBOX((-0.24184476264797528,0.12278780396897285,0.7071067811865475),(0.696364240320019,0.6644630243886748,0.8412050806713923))",
"LINESTRING(10.0 -45.0,110.0 -45.0)",
"GBOX((-0.24184476264797528,0.12278780396897285,-0.8412050806713923),(0.696364240320019,0.6644630243886748,-0.7071067811865475))",
"LINESTRING(-10.0 45.0,-110.0 45.0)",
"GBOX((-0.24184476264797528,-0.6644630243886748,0.7071067811865475),(0.696364240320019,-0.12278780396897285,0.8412050806713923))",
"LINESTRING(160.0 25.0,-160.0 25.0)",
"GBOX((-0.8516507396391466,-1.0,-0.4445129523522235),(0.8957724237724166,0.3099755192194448,0.42261826174069944))",
"LINESTRING(170.0 35.0,-160.0 35.0)",
"GBOX((-0.8067072841115989,-0.9986908105135698,-0.5869188447292516),(0.8112600906598508,0.14224425972292398,0.573576436351046))",
"LINESTRING(-10.0 35.0,10.0 -35.0)",
"GBOX((0.8067072841115988,-0.14224425972292404,-0.573576436351046),(0.8067072841115988,0.14224425972292404,0.573576436351046))",
"LINESTRING(-80.0 25.0,-60.0 -25.0)",
"GBOX((0.1573786956242627,-0.9472425401447112,-0.42261826174069944),(0.4531538935183251,-0.7848855672213958,0.42261826174069944))",
"LINESTRING(-80.0 25.0,-60.0 -45.0)",
"GBOX((0.1573786956242627,-0.9618448143567158,-0.7071067811865475),(0.35744468692115106,-0.6123724356957946,0.42261826174069944))",
"LINESTRING(-120.0 70.0,60.0 70.0)",
"GBOX((-0.17101007166283433,-0.29619813272602397,0.9396926207859083),(0.17101007166283444,0.2961981327260239,1.0))",
"LINESTRING(-120.0 -70.0,60.0 -70.0)",
"GBOX((-0.17101007166283433,-0.29619813272602397,-1.0),(0.17101007166283444,0.2961981327260239,-0.9396926207859083))",
"LINESTRING(-112.0 45.0,-112.00166666666666666666666666667 45.0)",
"GBOX((-0.2649059335238084,-0.6556179909708572,0.7071067811865475),(-0.26488686248158333,-0.655610285446987,0.7071067812239428))",
"LINESTRING(-120.0 -5.0,60.0 80.0)",
"GBOX((-0.49809734904587255,-0.862729915662821,-0.08715574274765817),(0.08682408883346522,0.15038373318043535,1.0))",
"LINESTRING(165.0 10.0,-172.0 -5.0)",
"GBOX((-0.9864997997699045,-0.1386435052934046,-0.08715574274765817),(0.9999918210489989,0.833398392064089,0.5526875047801408))",
"LINESTRING(97.87714324162704 46.6879465040995,155.49353589912155 -68.93911854796522)",
"GBOX((-0.4617028385042928,0.14906095261936342,-0.9331991042675769),(-0.09401197136406152,0.9212323166703043,0.7276284637592436))",
"LINESTRING(-77.90029319006709 -20.61989357708765,-29.776541043747443 88.24497900223159)",
"GBOX((0.026582505574020924,-0.9759756839408249,-0.3521666349428651),(0.21905192975441434,-0.015209494233135086,0.9995309108189598))",
"LINESTRING(12.21419896647646 -2.2758177391540926,149.7713684095024 13.210117902931728)",
"GBOX((-0.8411600283798623,0.2114001371958298,-0.03971006891196685),(0.9765925928556858,0.9610575090405382,0.2934426691118194))",
"LINESTRING(-49.891199414628915 66.72545480471234,-39.418865490450656 -89.97504625275525)",
"GBOX((3.364537771200467E-4,-0.7647039984150772,-0.9999999051589669),(0.6443817199937109,-2.7655182725940225E-4,0.9186220197585023))",
};