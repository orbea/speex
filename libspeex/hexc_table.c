float hexc_table[256][8]={
{-0.808777,0.522889,-0.585996,0.00203914,-0.628691,-0.371588,0.380914,-0.317525},
{0.15673,-0.576408,0.728236,-0.323157,0.191227,-0.99638,0.93673,1.01064},
{0.0959034,-0.277018,-1.71916,0.224231,0.637612,-0.672212,-0.236905,1.70337},
{1.35613,0.458604,-1.36192,0.177675,-0.706717,0.322615,-0.95508,0.880085},
{-0.40989,-1.0725,-1.1971,0.100905,0.395604,-0.162363,-0.464094,-0.5957},
{1.61305,-1.83844,-0.883322,1.02425,-1.18022,0.223562,-0.115054,0.558894},
{0.351025,-0.552213,-0.786358,-0.459102,1.58681,0.888893,-1.37592,-0.201812},
{0.138743,-0.265277,1.17915,-1.24899,0.267171,1.34758,-1.87008,0.586374},
{-0.600932,-0.613149,-0.47943,1.12824,-0.408298,0.826508,0.0477193,1.24647},
{1.48869,-0.81186,-0.261784,-0.503374,-0.629299,0.662346,0.279251,-0.509087},
{-0.0934602,-0.17457,-0.758435,1.08457,0.239585,-0.504587,0.686232,0.582796},
{0.84693,1.38514,0.699449,1.25807,0.295049,-0.0894298,-0.10184,-0.806657},
{-0.368078,0.210787,-2.20296,-0.65638,1.56279,-0.16844,1.61318,-0.120006},
{-0.10194,0.0106725,0.120997,0.36348,-0.302064,-0.442791,0.00923203,0.578896},
{0.0293595,-0.203684,0.545515,-0.120283,-1.0069,0.137839,0.126781,0.00352654},
{-0.119486,0.154518,0.285092,3.33185,-1.33059,-0.983331,-1.05646,-0.506898},
{-1.59366,0.660099,0.998661,-0.314723,0.658744,-0.831439,1.22569,-0.486493},
{0.132164,-1.05403,1.78377,-1.59051,0.676839,0.224812,1.12597,-1.03693},
{-0.0600416,-0.135391,-1.31914,0.102171,-0.937818,-0.496109,1.74828,0.447002},
{0.520821,0.0324353,1.27146,-0.835034,-1.0944,-1.24635,-0.149284,1.39264},
{-0.145715,0.839715,0.513449,0.180693,0.374319,0.404758,-0.902613,-0.741751},
{3.34802,-0.109164,0.0169975,0.0553642,-1.05882,-0.451845,-0.492785,-0.443551},
{-0.0560106,0.319378,-0.168577,0.226488,-0.440823,0.56149,-2.7563,2.05412},
{0.118746,0.516211,-0.0143968,0.772312,-0.367631,0.691226,-3.23937,-0.330117},
{0.165231,-0.235354,-0.433716,-0.880436,-0.659189,-0.897381,1.11856,2.82471},
{0.588413,-1.41287,0.0470025,-0.446261,2.3859,-0.390315,0.439154,-1.15802},
{0.603859,1.41714,-1.58189,-1.44953,-0.940504,0.333627,0.782746,0.596901},
{0.329154,1.32764,0.272124,-0.080474,-1.03789,0.922687,0.176309,-0.250927},
{-0.276147,-0.0525192,-0.322986,-0.0330593,0.687889,0.565872,0.630147,-0.495979},
{-1.31743,0.150537,-0.169827,-0.0960073,0.905746,-0.420937,-0.58555,-0.469233},
{0.109767,0.192229,-0.537553,0.09561,-0.602509,1.29395,-0.941109,-0.571217},
{-0.253559,-0.468608,1.74868,-0.196019,1.14608,-0.386698,-0.980027,-0.494255},
{-0.73753,0.68799,-0.943899,0.830381,-0.330815,0.704227,0.975151,-0.219969},
{0.325216,0.115189,0.267397,-1.11632,1.71594,-2.11495,1.31783,-0.227522},
{-0.0622045,0.0197852,-0.416733,-0.0019605,-0.765851,0.516627,-1.07842,3.83718},
{0.427202,0.260416,0.159638,0.203798,-2.58566,-1.42905,1.84324,0.361801},
{-0.0170446,0.0899078,0.631411,-0.0989984,2.69772,-0.34365,-1.53167,-1.46737},
{0.439624,-3.04784,-0.560917,0.553406,0.203279,-0.238426,0.42574,0.748935},
{-0.556707,-0.0942741,-0.25737,0.701488,-0.219897,2.55963,-1.44952,0.430409},
{-0.295808,-0.0966204,0.837206,-0.39557,0.221283,0.348662,-0.131419,0.245537},
{-0.432811,-2.24016,1.80876,0.796433,-0.02536,0.910951,-0.422385,-0.274461},
{1.96178,0.36996,-0.198854,-1.35782,-1.16426,-0.312176,0.681845,0.462948},
{-0.459443,-0.749728,-2.37122,1.236,1.62279,0.668355,0.342503,-0.0838306},
{0.304269,0.262004,0.220552,0.570633,0.0833619,0.390873,0.208076,-0.0809892},
{0.367254,-1.68072,-1.17645,-0.446899,0.792627,0.853643,1.01843,-0.186805},
{0.337864,0.557125,0.751848,-0.533723,1.2263,-0.137238,0.205549,-0.013345},
{0.331314,-0.798549,2.87356,-0.39505,-0.193366,-1.14558,-0.0373992,-0.00878555},
{-2.1208,0.83966,0.737303,1.98379,-0.838669,-0.0178801,-0.485471,0.159222},
{-1.11582,-0.0638764,0.824772,-0.0352022,-0.211324,0.369823,0.282492,-1.01858},
{1.45412,0.492399,1.32568,-0.900533,0.352761,-1.54909,-0.167461,-0.581635},
{0.313625,0.148285,-0.473284,0.115123,-1.79888,0.442188,0.644912,1.37658},
{1.38859,1.94091,0.22186,0.180213,-0.273428,-1.01283,-1.03173,-0.897502},
{0.771184,-0.25248,1.2455,0.517539,0.691557,-0.183637,0.63611,-1.15696},
{1.85036,-1.25111,-1.45311,0.601111,1.0399,-0.239207,-0.927822,0.161069},
{-1.79724,1.51284,-0.912954,0.990636,-1.19074,1.13124,-0.691979,0.82091},
{0.292346,0.368185,0.385619,0.111567,-0.277132,-0.952879,-1.78787,-1.08619},
{-0.71588,-0.744422,-0.125341,-0.122294,0.0917814,0.106495,0.474856,0.338462},
{-0.427987,0.728385,-0.701375,-1.56086,0.436273,-0.389922,-0.268771,1.61832},
{0.871989,1.23289,-0.394881,-0.538355,0.964153,-0.729176,-0.979271,0.0710916},
{-0.61563,1.28199,0.157971,-1.17571,0.946734,0.444829,-1.09012,0.250331},
{-1.13856,-0.688581,-0.0940012,0.452695,0.431558,1.73898,1.47172,-0.689541},
{0.824974,0.0114767,-0.313246,-0.892286,-0.591019,-0.855078,-0.975519,-0.429125},
{-0.0528536,-0.201216,1.35063,0.974641,-1.34623,0.0666181,0.665035,-1.12152},
{0.313711,0.0441856,0.0955668,0.704854,-0.0354564,-1.20593,-1.8752,1.05217},
{-0.695493,1.2416,-0.0320361,-0.0619316,0.183647,0.306643,-0.0217553,0.389798},
{0.17934,-0.421392,0.0748884,-0.660978,-0.193801,-1.52173,3.13886,0.450854},
{-0.0396398,0.0540767,-0.374352,-0.187403,-0.03619,0.217266,0.405445,1.09984},
{1.04235,0.485276,-1.01031,0.46025,-0.15311,0.177342,0.742341,-0.688384},
{-1.69186,-1.15831,0.0983169,1.13975,1.35315,0.854954,-0.21213,-0.851528},
{2.09461,-1.73005,1.56185,-0.563142,-0.372469,0.115402,-0.555429,-0.0822499},
{-0.0795778,-0.069224,-0.218627,0.13899,-0.301441,2.61665,-0.00878438,-2.27138},
{-0.668836,-1.20384,1.25871,-0.737445,-0.517894,0.734018,-0.280888,1.13245},
{-0.830671,-1.49774,0.209523,1.86076,-1.00498,0.179658,0.857851,0.0910563},
{0.345519,-0.350603,-0.787428,-0.391039,-0.349897,0.159728,0.47223,0.205563},
{1.54183,-0.0948628,-1.02113,0.650511,-0.485278,-1.36601,0.562137,0.524121},
{2.90999,1.78334,2.05806,1.82433,1.5106,1.04695,0.72339,0.591056},
{-1.30733,-1.24676,-1.61786,-0.067692,0.468792,1.22463,0.83458,0.703393},
{-0.0155242,-0.0213231,0.00225538,0.723512,-0.356651,-0.299559,-0.155354,-0.754868},
{-0.606517,1.47653,1.22334,0.18925,-0.962231,-1.00246,0.365475,-0.213715},
{-0.164931,-1.20109,0.0430696,0.846456,-0.0651136,-0.941185,-0.398855,0.455344},
{-2.76299,1.74181,-0.458678,0.440893,0.733256,-0.433325,-0.171665,0.721036},
{1.58363,-1.09832,1.2246,-1.52276,0.95571,-1.1379,0.980383,-0.918086},
{-0.643503,0.442085,0.287107,-1.10492,-0.591021,-0.192952,0.752239,0.549148},
{0.195071,2.43492,-1.06219,-0.0949268,-0.885581,-1.47083,0.211643,0.535758},
{0.0720198,0.250183,0.12972,-0.216719,-0.0317595,-0.857157,-0.298859,-1.67954},
{0.999568,0.0687439,-1.61274,-1.40093,0.695667,-0.374883,-0.31825,0.206975},
{0.105676,-0.0115208,-0.0175211,0.0465023,-0.348852,0.350671,-0.735256,0.537047},
{0.174997,0.158472,0.553584,0.0843251,1.47625,-0.706212,-2.84033,0.448321},
{0.0594142,-1.45687,-1.03239,-1.34435,-0.475703,0.769129,1.06548,1.33537},
{0.773339,-0.451576,0.257821,-1.36492,0.42478,0.522859,0.775457,0.0230162},
{0.528344,0.830586,-0.693501,-0.675812,0.383242,-0.684998,1.06472,0.617906},
{0.722796,1.16666,-0.857913,-2.00835,0.204133,1.78738,-0.0914676,-0.609118},
{0.0185043,-0.164745,-0.353897,-0.489875,-0.441889,0.366605,3.19346,-1.40696},
{-0.361573,0.83363,0.38689,-0.141691,0.225086,-1.42919,-0.448093,0.983676},
{-0.043528,-1.21209,-0.198167,0.508588,-0.488381,0.75472,0.314166,-0.316087},
{-0.0787701,0.344402,1.85144,1.32925,0.143855,-1.34127,-1.26755,-1.04038},
{-1.03463,2.61701,-1.23752,1.60173,-0.892178,-0.203644,-0.0435452,-0.156978},
{-0.385499,2.16763,-1.31903,-0.830889,1.38589,-0.971437,0.341876,-0.621655},
{-0.982007,0.483396,0.234676,0.325206,-1.15629,0.272426,-0.452657,1.10688},
{-0.814407,0.0248399,0.519375,0.520542,-1.22835,-1.05489,0.791287,1.30571},
{-0.587444,-0.168542,-0.662712,0.19709,3.21792,-1.40667,0.309692,-0.393578},
{1.11184,-1.12929,0.160326,0.166788,-0.756938,1.45929,-0.823309,0.299687},
{-0.0576646,-0.637203,-0.217167,-1.87038,0.187128,2.98001,0.269578,-0.0542942},
{-0.778295,0.771084,1.79295,0.546435,-0.548952,1.22395,-0.75231,-0.797754},
{-2.08654,-1.42989,1.03557,0.166929,-0.23891,-0.082845,1.12907,0.52266},
{0.284327,0.414842,-0.494532,-1.12157,-0.450422,1.15686,1.53709,-0.0175749},
{-0.639228,-0.0646058,-1.40381,2.55341,0.688712,-0.542615,0.841051,-0.901197},
{0.763406,-0.568188,-0.00087138,0.413695,0.767502,0.740268,1.22465,0.552355},
{0.0415443,0.38186,-3.06332,-0.177463,-0.369302,1.59641,0.62692,0.704707},
{0.0812399,-0.813035,0.376212,-0.264687,0.16326,-0.0333936,-0.0502651,-0.951403},
{0.384816,0.55555,2.90495,-1.85337,-1.14819,0.129403,-0.476643,-0.439153},
{-1.40799,0.454224,0.114894,1.04154,1.63284,-0.0359158,0.30784,0.077151},
{-1.31494,-0.813242,1.77587,-1.4204,1.27696,-0.0261728,0.105655,0.176416},
{1.22696,-1.42075,0.614181,0.388936,0.579128,-1.12721,-0.568678,0.00162247},
{0.147985,1.0085,0.307689,-1.64006,-1.73847,0.443712,0.378749,1.2384},
{1.08718,-0.0593162,0.085134,-0.17511,-0.430982,-0.424982,0.186084,-0.135354},
{0.179978,0.0977914,0.431251,-0.0309529,0.510113,-0.693534,0.50011,-3.4506},
{1.19026,0.0486908,0.356885,0.167754,0.617369,-0.154919,-0.73482,-1.01514},
{-0.0387573,0.414342,-1.80526,2.11058,-1.54069,0.917013,-0.109245,-0.289524},
{-0.454713,1.52397,0.737781,1.12684,-0.680711,-0.790029,-1.42535,0.173591},
{-0.328012,0.261804,0.746791,0.564532,-0.553552,0.0441862,1.38248,0.186016},
{0.667876,1.38717,1.35139,-2.96378,-0.0395241,-0.567713,-0.145259,0.30536},
{0.135526,0.911312,-1.26862,-0.32518,0.538648,0.417322,-0.0360691,-0.398564},
{-0.98413,2.9185,0.654757,-1.09717,-0.950289,0.26985,0.0916787,-0.411594},
{-0.335957,-0.0634045,-1.00525,0.133848,-1.34124,2.98978,0.7772,-0.200313},
{-2.77015,-1.78929,-1.68706,-1.55953,-1.38527,-0.983483,-0.794544,-0.358305},
{0.422973,-0.660658,1.31996,-0.426988,-0.468712,1.12782,0.14786,-0.806196},
{0.361743,0.23277,0.25592,0.554855,0.998512,-2.28186,0.135399,-1.2093},
{-0.687769,0.0452033,-0.262838,0.20035,0.0353051,0.460395,-0.155171,-0.00192579},
{0.31032,-0.136012,0.137005,-0.945442,0.14841,-2.79005,1.45757,1.42989},
{-0.900737,-1.35268,-0.471629,1.17497,1.18787,0.350648,-1.24437,0.964389},
{1.56127,1.82359,-0.925776,1.01511,-1.45534,-0.297508,0.0559301,-0.139561},
{-0.0462621,-0.796178,0.00627632,0.487887,1.14132,0.895285,-0.409346,-0.239578},
{1.49325,-0.457553,-0.562713,1.49225,-0.230491,-0.132286,-0.0372553,-0.779219},
{-0.074052,-0.430304,0.672071,-0.956253,1.49798,1.61828,-0.876909,-1.27406},
{1.0187,0.253654,0.959619,-0.729613,-0.199576,-0.0358726,-1.21267,0.546944},
{-0.966716,-1.27168,-1.03772,-0.327353,-0.632859,-0.0430861,0.10775,0.8553},
{0.640816,0.206735,-0.344336,-0.524876,0.301453,0.635547,-0.136396,-0.0988855},
{0.184806,0.27398,-0.850987,0.161236,0.0455893,-0.984509,-0.168223,0.0759809},
{0.854671,-0.136258,1.39416,0.902722,0.199242,0.275231,-0.404062,0.2226},
{-1.94917,-0.733045,-0.772245,0.0691312,0.568955,-0.188401,1.11741,0.0813894},
{-0.0231792,0.0406332,-0.0422235,-0.0237807,0.00645228,-0.014091,-0.00328628,-0.0269731},
{-0.906194,-0.363433,1.06006,0.360859,-0.503677,-0.786459,0.0167893,0.0133404},
{0.422269,-0.343991,0.0560596,1.58514,-0.762344,0.318524,-0.97429,0.364358},
{-3.27627,0.673321,1.32766,0.470124,0.44532,0.278163,-0.156709,-0.171223},
{-0.123139,-1.49281,0.0668417,-1.51375,0.829185,-0.698139,0.904836,-0.0540672},
{0.458845,-0.200406,-0.90056,0.0409038,-1.87272,-0.059603,0.117528,-0.341763},
{0.311415,0.084379,0.200552,-0.256706,0.14961,-2.39829,-0.957787,2.49645},
{0.0325073,0.516325,0.142447,0.775278,-0.0761688,0.471091,-1.43209,-2.50531},
{2.35513,0.611441,0.32354,0.125114,0.53332,-0.186619,-0.117798,0.0939877},
{0.281024,0.722204,0.368336,0.368587,-1.71743,0.664121,-1.96004,0.801418},
{-0.0399085,-0.0233632,0.181302,0.716231,0.944008,1.9438,-2.5673,-1.24767},
{-0.427528,-0.18767,-0.557845,-0.390206,-0.405721,1.04527,0.863514,2.54192},
{-0.0880345,-0.459539,-0.912484,-0.65522,1.64758,1.67046,0.840719,-1.32067},
{-0.147995,2.54311,-1.1464,-0.371562,-0.731225,0.910382,-0.950371,0.253017},
{0.494899,1.59301,0.110902,-1.20394,-0.542264,-0.455406,0.616078,-0.751476},
{0.0416721,0.00096097,-0.332705,-0.133402,-0.592335,0.469598,0.843544,-1.5787},
{-0.28804,-0.147371,-0.148735,-0.89819,0.444204,-0.350171,-0.242063,0.216802},
{0.0235683,-0.154932,0.329484,1.49847,-2.55488,1.53946,-0.52761,-0.292228},
{-0.320628,0.56586,0.95019,0.860762,0.465814,-0.57876,-0.207143,0.0336202},
{-1.89591,1.69693,-1.01986,0.291905,0.0337999,-0.304789,0.80978,-0.907923},
{0.201753,-0.173085,0.57677,-0.541242,0.965199,-1.32738,2.05467,-2.2066},
{-0.0423064,0.595229,-0.567897,0.903553,-1.62325,-1.0837,-0.758215,2.19196},
{-0.0995138,1.16365,0.504768,1.15474,-2.97384,-0.639325,-0.157529,0.265709},
{-0.171421,-0.293915,-0.0931648,1.62147,1.59152,-0.421573,-1.26656,-0.973813},
{0.567538,-2.67901,0.384474,-0.825834,0.553463,1.14339,-0.162028,0.221003},
{-0.200415,-0.498812,-0.719186,-0.068236,0.349007,1.10351,-0.74929,1.10836},
{-0.227523,0.203778,0.250793,-1.22197,-0.626241,0.513681,-0.325717,-0.454119},
{-0.00361921,-2.26803,1.59277,0.444606,1.00568,-1.12035,0.660596,-0.304733},
{0.198435,-0.389408,-0.564997,-0.912806,-1.02791,-0.885569,0.0274177,0.655909},
{-0.724919,-0.107059,-2.02767,2.517,0.127475,-0.421874,-0.670363,0.821456},
{0.408334,0.604139,-0.0257201,0.962369,0.659979,0.604856,-0.652068,0.800184},
{1.92652,-0.70313,-1.80901,-1.32288,-0.138311,0.695327,1.03039,0.435844},
{0.0690851,-0.0623718,0.169685,-0.289407,0.141078,-0.281387,0.70663,-0.393098},
{0.377194,-0.385657,2.19488,0.602355,-1.91452,-0.411003,-0.953451,0.47299},
{-1.2391,0.289887,-0.611413,1.27895,0.130686,0.266617,-1.02355,0.169671},
{-0.797655,1.07721,0.537033,-0.828331,0.623273,0.943434,0.239111,-1.2561},
{0.208696,-0.0416711,1.07258,-0.724576,1.75278,-2.45005,-1.08247,0.165616},
{-0.146516,0.0763024,-0.623232,-0.403905,-2.06184,2.23284,-0.725328,1.45169},
{0.738275,1.21216,1.74647,-0.123546,-0.733204,-0.341279,-0.640132,-0.752561},
{-0.235637,-0.244096,0.35929,0.344935,1.19224,0.234872,-0.0568987,-2.19267},
{0.585596,-0.0452693,-0.605202,0.433336,1.2855,-0.605342,-0.0913277,-0.038099},
{-0.411354,0.838034,-1.49501,1.15931,-0.845042,1.17135,-1.31966,1.15102},
{1.29489,0.546986,0.317687,0.388757,-1.19381,0.291949,-0.988666,-0.790527},
{0.463076,-0.634534,-0.00213198,0.0555478,0.278823,-0.003153,-0.0730633,0.130724},
{-0.680517,-0.146837,-0.434109,-0.730404,1.35604,0.646014,0.547171,0.75849},
{0.494406,0.898478,-0.141296,-0.307567,-0.414651,-0.168474,-0.169992,0.249803},
{-1.40652,0.899466,1.45931,-0.86589,-0.120286,-0.0571926,-0.631404,0.350938},
{-0.547421,-0.352653,0.0902851,-0.284476,-0.395727,1.46829,0.776707,0.326405},
{-0.269792,-0.678802,-0.858414,-1.14491,-1.07189,-0.982154,-1.03886,-0.962474},
{1.23972,-1.21529,0.7549,0.823635,-1.07411,-0.183865,0.312112,-0.981306},
{-0.223371,-0.0609721,-0.0130559,1.76329,1.34323,-2.23744,-0.968509,0.553359},
{-0.83723,0.945377,-0.0130015,0.7976,-0.802271,0.337151,-0.466119,-0.222138},
{0.391602,0.503566,0.0480818,0.0673739,-0.647474,-1.56068,1.32505,-0.762175},
{1.39401,-0.601129,-0.532522,-0.356412,0.231133,-0.38761,-0.260244,1.01642},
{-0.0916899,0.947205,-0.473112,1.495,-1.10378,-0.309157,1.01827,-1.81116},
{-0.0327095,-2.17732,-0.296067,1.76383,1.14406,0.470282,0.102904,-0.294464},
{2.79548,-2.00851,-0.0650745,-0.56353,0.515563,-0.384438,0.379329,-0.303786},
{-0.938677,0.790154,-1.28689,0.816583,0.729919,1.4185,-0.510592,-1.07938},
{0.750844,-0.916416,0.960228,-2.26194,0.387169,-0.143917,-0.525221,1.02498},
{-2.56175,-0.369587,-0.520176,1.1574,-0.386785,0.863226,0.222942,0.415037},
{-0.590394,-0.815283,-0.929596,-1.35301,-0.275245,0.239319,0.360759,-0.343421},
{0.613533,-1.29497,-0.224972,0.793246,-0.142523,-0.74719,1.17681,-0.29032},
{0.66837,1.12645,0.887062,0.814444,0.96737,1.00758,0.745419,0.251183},
{-1.39397,-2.09185,0.20586,-0.115216,1.29928,0.795985,0.553848,0.431367},
{0.105604,-0.0561841,-0.238679,0.331352,0.348262,-0.0654908,-1.04148,-0.39253},
{-1.73263,0.56412,0.790091,-0.350418,-1.3668,0.881681,0.570515,-0.11346},
{-1.29172,-1.0458,1.03927,1.78312,0.209826,-0.878176,-0.667996,0.311771},
{-2.02997,0.76276,-0.48451,-1.12103,0.0675854,0.666788,0.288789,0.311225},
{1.28467,-0.216596,-0.248218,-0.76594,0.639806,-0.744657,0.995064,-1.01644},
{-1.06103,0.557376,-1.46966,0.0673947,-0.531373,0.480932,-0.0105433,0.789753},
{1.32469,1.42319,0.548429,-0.803708,-1.43431,-1.34565,-0.297593,0.547584},
{-0.273803,1.04973,-0.174112,0.232881,0.405845,-0.512552,0.344319,-0.815064},
{2.51955,1.57409,-1.39338,-0.937761,-0.0497074,-0.128205,-0.333554,-0.52516},
{-0.352971,0.713345,-0.558412,-0.431516,-0.635593,-0.135521,-1.30022,0.669742},
{0.246198,-0.698022,0.335394,-0.502827,1.58476,-0.426501,-0.796604,1.11315},
{-0.367488,-0.503223,-0.211863,-0.525563,0.0375716,0.204918,2.01842,1.15478},
{0.107188,-0.719032,-0.648959,-2.39294,2.46049,0.850218,0.18543,0.701523},
{0.407559,1.31236,-2.89593,0.611598,-0.152036,-0.72166,0.920559,-0.383882},
{1.28091,0.925667,0.313489,-1.10136,0.191921,0.638277,-0.356922,-1.11068},
{-0.240606,-0.443837,0.155519,-0.470245,0.906559,-0.213211,2.30216,-0.722409},
{-1.41226,-0.288547,0.332802,-0.187539,0.796591,-0.41168,-0.356223,1.33626},
{-0.114571,-0.371635,0.108278,1.38411,-0.191887,1.28419,-0.0299939,-1.14145},
{-1.13655,0.332799,1.10611,1.91257,0.726154,0.0727846,-0.652235,-1.19888},
{0.189963,1.40878,-1.27619,1.09449,0.284361,-0.527403,-0.734522,-0.0705183},
{-1.05085,0.810117,-0.641032,-0.283443,0.657092,-1.1502,0.777061,0.503461},
{-0.0696791,0.188862,-0.0880076,0.11709,-0.262023,0.181331,-0.677646,2.10793},
{-0.169008,0.192039,-0.110151,2.07904,-0.599761,-1.58628,1.00301,-0.0286543},
{-0.2082,-1.1611,-0.715412,-0.0343943,1.20253,-0.988453,0.73203,0.740159},
{0.738459,-1.18892,0.49685,-0.0177689,-0.458849,0.170949,-0.459235,1.25229},
{0.345414,-0.120539,-0.481404,-1.75731,0.0219378,1.44327,-0.574763,1.36348},
{-0.404927,-0.615118,0.908928,0.34826,-0.27947,0.389891,-1.43437,-0.0741029},
{-1.56463,-0.364887,2.75591,0.667894,-0.57053,-0.13117,0.538331,-0.0885438},
{0.518327,-0.215243,0.050454,-2.86284,-0.619997,0.155151,2.06075,0.471453},
{-0.62011,-0.352696,-0.145548,0.876026,0.666619,-0.413956,1.11097,-1.30323},
{-0.385767,0.170404,0.538993,0.961485,0.891708,1.22576,0.960098,1.11406},
{0.388173,-0.598376,-1.7336,0.129233,-0.1874,1.26948,0.0620169,-0.0968803},
{-0.19228,-0.471001,0.641792,-0.304033,0.772593,-1.03034,0.604548,-0.543104},
{0.236728,0.232818,1.44882,-1.05148,-0.828635,-0.531352,1.08306,-0.814594},
{-0.717436,-0.477879,0.650262,0.726283,0.623916,0.184593,0.138505,-0.0524061},
{-1.65222,-0.3664,0.264498,-0.335065,0.462571,1.50107,-0.68202,0.38008},
{0.852734,-0.893088,0.822156,-0.737121,0.493278,-0.482329,0.219251,-0.160266},
{0.733272,0.0144073,1.1664,-1.4086,-2.45165,1.45537,-0.0296166,-0.0845569},
{0.246836,0.26554,0.549598,-0.23729,-0.0491141,-0.575949,-0.311769,-0.230354},
{0.128284,-0.261473,0.105539,0.293469,0.51569,0.803836,1.89172,-3.07493},
{1.64698,-0.329134,-1.20051,0.000372357,0.810401,0.779316,-0.37545,-1.23125},
{-0.132155,0.419303,-0.732552,0.667706,-0.626713,0.339305,-0.32,0.289691},
{0.808921,0.354669,0.392377,0.671615,-0.803726,-1.28414,-0.556139,0.0837814},
{0.835236,0.620821,0.717716,-0.0309147,-0.223465,0.124068,0.667246,1.04023},
{-0.0521935,0.618173,0.241935,-2.14632,1.49656,-0.491607,0.372421,-0.678658},
{-0.40883,0.823298,-1.92246,-0.388639,1.55592,0.392341,-1.13516,0.595127},
{-0.958854,2.3407,1.30073,-0.280573,0.911012,-1.05048,-0.513848,-0.546581},
{-0.17029,-0.09665,-0.684148,0.150044,-2.35408,1.49623,2.21859,-0.0558014},
{-1.19796,-0.719742,-0.263796,-0.494669,-0.723702,-0.821728,-0.638013,-0.151613},
{0.410444,-1.75187,0.966378,-0.396605,-0.975379,0.0302732,1.08905,0.168156},
{0.195242,0.309484,1.07001,0.591054,-0.535163,-3.19281,0.13333,0.269121}};