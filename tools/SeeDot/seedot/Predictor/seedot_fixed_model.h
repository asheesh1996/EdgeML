// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

#pragma once

#define B_SPARSE_Z 1

namespace bonsai_fixed {

const MYINT mean[30][1] = {
	4713, 3930, 2857, 3543, 1062, -345, -435, -1261, 689, 341, -1711, -4029, -2774, -9581, -4552, 1408, 180, -1355, -480, 6731, -1503, -2305, 1698, 1649, -7775, 351, -880, -1959, -2897, 1575, 
};

const MYINT Zval[1542] = {
	9673, 13583, -2715, 88, 3204, 4167, -4008, -2391, -3226, 3059, -1843, 3337, 822, 1908, 3282, 2033, 1952, 2675, 1825, 3151, -1705, 1449, -849, -455, -1140, -948, 746, 166, 1444, -683, -817, 791, -1724, 151, 1704, -1391, -643, -2017, -531, 1564, -1095, -1192, -900, -1523, 1161, -672, 1113, -2077, -814, 1562, -904, 1575, 1570, -1345, 1527, 795, -1312, 2368, 1049, -1123, 530, -1718, 259, 984, 1389, -1008, 778, 715, 1907, 1257, 1095, 1681, -1251, -843, 1818, 955, 33, 1544, -378, 2421, 1273, 2356, 1406, -1292, -931, 2741, -948, 3211, 2688, 1723, -621, 3787, -1630, 4799, -4133, 3663, 4309, 5228, 7422, -5331, -8000, -6220, -8489, -4479, 3907, -4872, 4024, -3492, -4108, -5169, 2026, 462, -320, 2970, -2533, -1823, 1080, -243, 811, -849, -1377, -1423, 944, 592, -837, -48, 928, -1458, 705, -1785, -495, 321, -2159, 1586, 1427, 1315, 940, -2364, 2058, -1482, -702, 891, -1058, -740, -493, -1196, 87, -1672, -1132, 1067, -2101, 1203, -1197, 1884, -977, -1853, -516, 154, -1491, -649, -1401, 130, 386, 978, 1423, 1305, -653, 91, 1824, 558, -723, 1257, 1287, -319, 467, 711, -1247, 865, -1067, 355, 1084, 1489, 1256, 831, 1365, -979, -991, 1079, 2816, 942, -1436, 3074, 2663, 1398, 4114, 4403, 4751, -1718, 33, -2848, -5631, 2283, -284, -8589, 2379, -498, -894, -323, -843, 1140, 108, 1610, -707, -1385, 1530, 464, 819, 1053, 562, -1423, -481, -291, -772, -240, 885, -986, 730, -932, -900, 795, 1288, 683, 243, -101, 1386, 927, -520, -1003, -776, 836, -739, 705, 640, -1573, -296, 770, 887, -1132, -1153, -1329, 1943, 1048, -295, -876, -1216, -785, 1496, -1103, 754, 903, 703, -878, -1224, 734, -1078, 1251, -1883, 1024, 610, 666, -1440, -658, -129, -758, -910, -1012, -1074, 1036, 1502, -1956, -237, 755, 498, 1270, -727, 771, -1807, 2252, -538, 936, -3645, -410, -2532, 3045, 2523, -3587, 3661, 4000, 2450, 2028, 5375, -3666, -2698, 3908, 2025, 1060, 3660, -3740, -1344, 1743, 1509, -1077, 1369, -1570, -1793, 740, -864, -157, 275, -1167, -422, 854, -667, 895, -376, -1256, -388, -1492, -1193, 892, 1138, 50, 1320, 2330, -1266, 985, -1242, 721, 1177, -1047, 752, 624, -501, -2361, -1371, 1851, 970, 1183, -990, -790, -474, 1152, -1305, 1466, 1975, -647, -699, 1876, 2064, -1574, 757, 2033, -705, -1355, -653, -1686, 1033, 516, 2087, -1421, 459, -166, -1258, 648, 1413, 1163, -1375, -1627, 886, -1267, 979, -2035, 1533, 1035, -1581, 1256, -2286, -953, 686, -747, 978, -1231, -466, 1428, -1273, -888, -302, -89, -1092, 746, -1116, 711, -1028, 1336, -1334, -1017, 1186, -783, -724, 592, -1435, -588, -1262, -1687, 1731, -1420, -1657, 1349, 2173, -1422, -2182, -1968, -4165, -7274, -5377, 5368, -2474, -3852, 52, -95, 1373, -2803, 923, -1528, 834, -1039, 874, 1023, 1198, -19, 645, -751, -339, -1235, 739, 221, 784, -1453, -780, 1325, 1609, -1252, 1363, -1986, -1085, -406, 1929, -984, 1332, 1421, -1061, 453, -402, 743, 1949, 1342, -487, 861, -1101, 1518, -903, 852, 950, -729, -564, 1452, 2430, -3049, 1632, -668, 1657, -1238, 2000, -2745, 2935, 558, -1937, 1039, -660, 835, -324, -831, -1854, 429, -1222, -975, -193, 1495, -701, 1944, 1840, -1061, -2232, -1389, 1337, -1172, -378, 1313, 1919, -1416, 990, 1726, -784, 1474, 1384, 1379, -1562, 1340, -2460, 7198, 5514, 6378, -8564, -9858, -3682, -1076, -2181, 1220, -2788, 2303, 2105, 2024, -1394, -2976, 1367, -2755, 1667, -1169, -1720, 1268, -1078, 1224, 1568, 750, -632, -791, 764, -1157, 1132, 1078, -833, 1044, -1247, 603, 1868, 1956, 645, 1341, -1387, -865, -1407, 904, 1417, -1400, -1258, 925, -2635, 1366, -1034, -708, 882, -1150, 719, -878, 1452, -1679, 1351, -2398, -1034, 292, -766, 2189, 882, 968, 1645, 1365, -2146, 1248, 199, 1968, -1432, 1647, 1119, 1252, -1007, -909, 741, 1589, -736, 1023, 285, -900, 782, 736, 713, 535, 883, 597, 1973, -991, 1047, 782, 556, -274, -168, -762, -512, 629, -633, -645, -224, -1019, 715, 532, -531, -1098, 2132, -3631, -1716, 1842, -465, 5809, 6083, -916, 9109, 811, 1349, -1277, -1055, -1951, -784, -2630, -777, -784, 88, 350, 782, 1299, -772, -821, 1081, -1178, -168, -897, 645, 1123, 951, -1163, 2067, -692, 664, 375, 754, 934, -168, 748, -1078, -807, 1278, -1296, 788, 468, -666, -2649, -1332, -1931, 195, 1083, -183, -1184, -1487, 910, 890, 1328, -503, -1006, -1156, 1953, -1782, 839, -950, -918, 953, 1204, 815, 644, 1413, -1004, -436, 954, 1003, -975, 1740, 935, -859, -552, 948, -768, 1238, 740, 955, -367, 1357, -1858, -503, 541, -1659, -20, 399, 1019, -571, 416, 634, -861, 612, -760, -667, -891, -2149, 2892, -4394, -1801, -1961, 1641, 3220, -571, -1152, 613, -1436, -565, 1050, -1173, -1822, 540, -765, -1146, 1104, -2786, 670, 1448, -1231, 306, 1621, -2312, 1224, -458, -346, 262, 934, 738, -1002, 1179, 640, -1589, -748, 680, -2043, 488, 991, -212, -780, 1459, -783, -1732, 1461, -1626, 1560, -660, 1463, 1190, -55, -510, -1270, -1369, 717, -547, 335, 341, -416, 1079, -1542, 589, -1091, 1371, -684, 984, 883, -965, 2, -1221, 744, -843, 1460, -1449, -872, -835, -834, 270, -516, -1459, 1292, 1761, -829, -911, 1063, -167, -1944, 2897, -2086, 3308, -3372, -2876, 2195, 1867, 2603, -763, 1304, -1457, -1651, 1141, 1003, -1429, -1994, -777, -265, 328, -1229, 942, -2977, -51, 993, 1015, 952, -934, -806, -676, -1538, 614, 1002, 1181, -1319, 644, 527, 327, 47, -395, -516, 936, 179, -952, 1417, 1653, -593, 399, 1712, 82, 1479, 1182, -658, -79, -1878, 1948, 1465, 685, -730, -1058, 1480, -1178, 1506, 513, -1485, 1375, 634, 219, 669, -968, 887, -1119, 1146, -409, -1103, -1370, -808, 882, 1807, -52, -3066, 450, 1279, 387, 1372, -1247, 1379, -1096, -1447, 1860, -2944, -1731, 2392, 2478, 1535, 1872, 1927, -2229, 800, -1751, 1058, 1403, -938, -851, -1096, 396, 810, 126, -1122, -1199, -1057, 934, -1852, -831, 1623, 1570, -943, 1209, -948, -1815, 1363, 542, 1065, -1358, -509, 1340, -610, 972, 669, 1448, -878, -727, -1306, 1951, 1164, -1611, 3, 993, 414, -77, 1338, -143, -943, 591, 757, 241, 462, -426, 2152, -1128, -594, -135, -749, -1344, -1007, 1783, 104, -115, -832, 693, -1358, 1230, -411, 426, -1397, 864, 1080, 152, 1459, -1139, 1134, 1512, -760, -1116, 1468, 1037, -1739, -1583, -2039, 3525, 1814, -1931, -268, -312, -4304, -1090, -422, -3074, 1857, 1904, -734, -1433, 1161, -1184, 912, 1577, -1417, 577, -981, -1552, 1644, 635, -703, 986, -401, -397, -922, -1042, -1333, 873, 489, 215, -454, 1773, -1047, -1620, -117, -1112, 1723, -964, 1116, 1440, 347, 532, -1363, -459, 488, 1415, 1315, 501, 1551, -175, 1323, 1676, 2438, -1358, 1251, 1562, 967, -328, -1091, 79, -1214, -879, 733, 719, 1260, -623, -757, 807, 1069, 1574, 477, 1250, 657, 310, -625, 875, -935, -132, 1038, -984, 1817, -2012, -903, 1150, -514, -1, -1951, -1309, 975, -2391, 2767, 2774, -983, 52, -913, 1462, 3099, 1079, 1526, -1692, -608, 496, 898, 1055, -1710, -909, 1092, -1250, -434, 1001, -231, -740, -1000, -454, -257, -476, -1292, 222, -905, 1928, -1123, -1577, -944, 773, -1307, 1509, 951, 157, -793, -1184, -1483, -795, -480, 1131, -315, -1286, -433, -728, 1487, -379, -790, 988, -981, 852, -328, 583, 1011, -1508, -401, 501, -322, 1254, 966, -1171, -1218, 1196, 2442, 381, -646, 306, -1761, -786, 1201, -248, -1746, -1115, -203, -618, -1184, 926, -1363, 1116, -40, 1020, 1322, -889, 502, -347, 1275, -1919, -680, -1039, 916, -5699, 3586, -2566, 2163, 1893, -564, 800, 1083, -1631, -1396, -1666, -334, -213, 711, -1966, -1683, -514, -193, -1536, -1456, -1356, -872, 228, -929, -494, 527, -2148, -950, -1478, -1804, -1107, -1616, 1480, -875, 591, 100, 1247, -715, 436, 438, 824, 976, 669, 65, 947, -787, 1430, 609, -1409, 852, -664, -627, -1470, -1303, -56, 1659, 429, -518, 990, -693, -1587, -1718, 571, 30, -1835, 165, 1101, -855, -1450, 1899, -697, -1122, -1461, -1737, -1586, -477, 833, 760, -458, -3092, -1233, 810, -3315, -2681, 1951, 2946, -1902, 1322, -1669, -176, 1199, -1090, 610, 589, -2054, -346, -446, -499, 889, -1495, -869, -1143, -257, -151, -497, -708, 27, 336, 593, 509, -1855, 673, 320, 963, 617, 1424, -530, -774, -1402, 524, 878, -369, -1436, 1807, 793, 513, -2095, 1169, 990, -1348, -748, 739, -746, -689, -1360, 2397, -814, 1099, 848, 857, -1657, 1105, -1136, -127, -235, -1270, -962, -210, 278, 722, 595, -763, -520, -896, -1213, 580, -1183, -800, -2024, -316, -2108, -2197, -1705, -1016, -940, -1986, 1742, -2657, -2491, -933, -2487, -3440, -2254, 2788, -1701, 3435, 2113, 2647, -4219, 4365, 3761, -1081, -987, -1387, -1940, 1920, 2202, -2149, 1289, 2128, 1277, -422, -1463, 445, -864, -2131, 481, -626, -778, 440, -1434, 1115, -829, -1183, 534, -1340, -915, -978, 1289, 1537, -1245, -1238, -1201, 312, 1846, 2273, -928, -772, -961, 1942, 1710, -1139, 126, -633, 307, 903, -689, -1598, -1931, 1208, -902, 1045, -1526, -1043, -1315, -139, -834, -1805, 680, -1929, -3466, 1284, -2391, 11, -1987, -2650, -2611, 1848, -2570, 2599, -2459, -5973, 3340, 3865, 2628, -3149, 3687, -7438, 12098, -8181, -9762, -7710, -2738, -3837, -3735, 3731, 2016, -1235, 873, -644, -3675, 959, -739, 2954, 1390, 1416, -499, -1248, -532, -1317, -2281, -232, -1095, -2994, -2723, 1385, -1889, 756, 1027, -1528, -284, -1870, 1351, -1217, -1045, 1128, 1497, 1879, -756, -342, -990, 1271, -692, 1858, -1519, 907, 1040, -534, -1350, 2015, -1342, 1258, -415, -1154, -1961, 664, -1216, 258, 847, 1389, -1469, 2852, 2512, -1628, -2235, 3824, -5575, -2545, 3115, -3775, -3061, -861, -4596, 4171, -1240, -5958, 4023, 1664, 2179, -2980, 1427, 1614, -5211, 4605, 3756, -2657, -6365, 6914, 7344, -8360, 7366, 8869, -726, 1162, 954, -632, -1292, 80, 1201, 1050, -1178, 
};

const MYINT Zidx[1799] = {
	11, 27, 0, 1, 12, 15, 22, 24, 25, 29, 0, 5, 14, 28, 30, 0, 9, 18, 22, 26, 0, 1, 13, 18, 19, 22, 29, 0, 2, 7, 8, 12, 17, 20, 26, 27, 0, 7, 11, 13, 0, 5, 6, 7, 14, 15, 17, 19, 24, 26, 29, 0, 5, 10, 13, 14, 16, 17, 18, 20, 22, 25, 27, 28, 0, 1, 20, 21, 26, 0, 1, 2, 3, 5, 10, 15, 17, 18, 20, 23, 28, 30, 0, 3, 6, 8, 24, 27, 28, 0, 2, 5, 7, 11, 16, 18, 25, 28, 29, 0, 5, 8, 11, 17, 19, 25, 28, 0, 2, 7, 8, 19, 28, 0, 7, 16, 18, 25, 26, 0, 1, 2, 9, 14, 24, 25, 0, 8, 10, 12, 20, 24, 0, 6, 26, 0, 1, 3, 28, 0, 11, 21, 22, 26, 30, 0, 10, 0, 5, 11, 12, 14, 15, 0, 1, 2, 3, 5, 9, 10, 11, 13, 14, 15, 16, 19, 21, 25, 29, 0, 1, 2, 8, 9, 11, 13, 14, 20, 24, 26, 27, 28, 29, 0, 1, 2, 7, 10, 16, 20, 22, 0, 1, 4, 8, 11, 12, 19, 22, 30, 0, 5, 8, 17, 24, 25, 28, 0, 1, 5, 8, 16, 17, 18, 0, 23, 24, 0, 4, 15, 18, 19, 21, 24, 0, 3, 4, 5, 13, 17, 18, 25, 27, 29, 0, 13, 0, 7, 0, 1, 2, 4, 9, 27, 0, 11, 17, 20, 21, 0, 3, 12, 13, 17, 26, 28, 0, 6, 7, 10, 11, 13, 14, 17, 20, 25, 26, 27, 0, 1, 5, 7, 8, 13, 15, 25, 29, 0, 4, 7, 9, 10, 11, 14, 16, 22, 0, 2, 7, 11, 13, 20, 26, 29, 0, 2, 9, 20, 25, 0, 3, 12, 13, 14, 27, 29, 0, 7, 12, 18, 20, 24, 28, 0, 3, 10, 11, 22, 23, 25, 27, 30, 0, 4, 8, 11, 13, 14, 20, 23, 30, 0, 1, 3, 10, 14, 18, 19, 25, 28, 0, 10, 16, 20, 23, 26, 29, 0, 1, 4, 9, 11, 18, 21, 27, 29, 0, 1, 7, 12, 15, 17, 23, 28, 0, 3, 6, 11, 13, 0, 4, 7, 18, 23, 26, 0, 5, 15, 21, 22, 24, 26, 27, 28, 0, 1, 8, 10, 23, 25, 30, 0, 1, 12, 13, 15, 16, 18, 25, 0, 1, 4, 6, 12, 15, 20, 23, 24, 25, 26, 27, 29, 0, 1, 4, 8, 10, 13, 14, 15, 17, 19, 20, 22, 25, 27, 28, 30, 0, 2, 3, 4, 5, 6, 8, 13, 14, 18, 19, 22, 25, 27, 29, 0, 1, 2, 3, 4, 12, 16, 19, 20, 27, 28, 0, 1, 4, 7, 12, 16, 18, 19, 20, 24, 28, 30, 0, 6, 8, 18, 19, 23, 0, 7, 8, 12, 16, 19, 26, 0, 3, 14, 17, 0, 11, 24, 25, 27, 0, 3, 22, 29, 0, 3, 8, 14, 18, 20, 22, 29, 0, 10, 17, 26, 0, 2, 3, 4, 9, 11, 15, 17, 18, 0, 17, 22, 24, 0, 1, 3, 6, 7, 12, 22, 24, 0, 1, 5, 7, 19, 22, 23, 25, 28, 0, 1, 2, 5, 6, 8, 13, 15, 16, 19, 20, 22, 0, 1, 4, 8, 13, 17, 22, 27, 0, 4, 8, 12, 18, 19, 25, 30, 0, 4, 6, 21, 28, 0, 4, 6, 14, 16, 18, 19, 20, 0, 5, 7, 11, 19, 20, 21, 23, 30, 0, 5, 11, 12, 18, 23, 30, 0, 3, 4, 11, 30, 0, 2, 3, 7, 10, 12, 28, 29, 0, 8, 11, 13, 19, 22, 24, 26, 28, 29, 0, 5, 12, 17, 0, 7, 10, 17, 20, 0, 2, 3, 4, 7, 10, 17, 22, 28, 0, 3, 16, 17, 20, 26, 28, 0, 1, 2, 3, 9, 13, 22, 24, 0, 3, 10, 12, 14, 16, 19, 23, 26, 0, 2, 13, 14, 21, 28, 0, 3, 6, 8, 13, 14, 15, 16, 25, 26, 0, 4, 5, 8, 9, 13, 16, 21, 22, 24, 26, 30, 0, 1, 10, 12, 14, 16, 20, 21, 26, 0, 10, 13, 18, 19, 25, 0, 8, 12, 18, 20, 25, 26, 28, 0, 1, 2, 3, 6, 9, 11, 12, 13, 18, 27, 28, 0, 8, 12, 22, 25, 0, 13, 20, 23, 0, 15, 28, 0, 2, 5, 9, 15, 29, 0, 6, 12, 20, 23, 24, 29, 0, 2, 8, 10, 15, 18, 20, 21, 24, 25, 0, 1, 2, 9, 19, 22, 26, 27, 0, 1, 3, 5, 8, 12, 17, 24, 25, 28, 0, 5, 9, 13, 23, 0, 13, 16, 17, 20, 21, 23, 27, 29, 0, 2, 4, 6, 8, 12, 13, 16, 21, 22, 26, 28, 0, 2, 4, 12, 13, 15, 16, 17, 21, 24, 27, 30, 0, 1, 2, 3, 4, 9, 10, 15, 16, 17, 0, 14, 16, 17, 18, 0, 1, 8, 11, 18, 25, 0, 1, 30, 0, 11, 15, 26, 0, 5, 10, 28, 29, 0, 3, 7, 28, 0, 2, 9, 13, 17, 21, 0, 1, 4, 5, 15, 19, 23, 0, 1, 12, 18, 19, 22, 29, 0, 3, 12, 0, 3, 6, 11, 14, 19, 22, 25, 28, 0, 5, 13, 16, 0, 8, 13, 16, 17, 19, 22, 24, 0, 8, 10, 12, 13, 17, 19, 24, 30, 0, 1, 3, 10, 19, 24, 27, 29, 0, 4, 5, 7, 12, 15, 17, 18, 19, 21, 25, 27, 0, 18, 23, 24, 26, 29, 0, 3, 12, 13, 22, 0, 1, 2, 7, 8, 10, 14, 18, 0, 13, 19, 0, 5, 6, 15, 16, 0, 5, 16, 19, 20, 29, 0, 2, 13, 17, 26, 0, 1, 10, 11, 12, 15, 17, 20, 26, 0, 10, 12, 13, 15, 18, 21, 25, 27, 0, 13, 23, 24, 28, 0, 2, 11, 15, 21, 28, 0, 3, 7, 8, 17, 19, 25, 0, 2, 5, 7, 9, 17, 20, 24, 27, 0, 3, 8, 10, 11, 12, 14, 16, 22, 24, 25, 27, 29, 0, 10, 11, 18, 0, 4, 15, 17, 24, 25, 26, 27, 0, 23, 0, 1, 12, 20, 0, 6, 7, 17, 25, 29, 0, 1, 2, 3, 20, 21, 22, 0, 14, 17, 0, 4, 11, 12, 23, 27, 29, 30, 0, 9, 13, 29, 0, 2, 4, 7, 21, 25, 27, 0, 6, 11, 22, 28, 0, 2, 12, 20, 0, 1, 3, 6, 7, 8, 12, 27, 0, 5, 11, 0, 10, 16, 17, 22, 24, 26, 27, 0, 3, 6, 10, 11, 12, 13, 18, 26, 0, 3, 18, 19, 21, 22, 26, 28, 0, 4, 5, 6, 7, 12, 13, 15, 17, 23, 25, 28, 30, 0, 1, 2, 7, 12, 19, 21, 30, 0, 27, 0, 11, 12, 14, 16, 18, 25, 26, 30, 0, 3, 6, 11, 18, 21, 0, 9, 12, 17, 0, 1, 3, 4, 8, 23, 25, 28, 29, 0, 2, 4, 7, 12, 15, 29, 0, 2, 7, 9, 12, 18, 19, 20, 24, 0, 1, 7, 10, 13, 14, 22, 23, 26, 27, 28, 0, 1, 10, 12, 25, 28, 0, 18, 21, 23, 0, 1, 5, 23, 30, 0, 1, 16, 17, 19, 25, 0, 7, 12, 14, 17, 19, 22, 26, 0, 11, 14, 15, 16, 18, 20, 22, 0, 8, 9, 11, 13, 16, 17, 21, 28, 0, 3, 10, 24, 0, 12, 14, 19, 27, 0, 1, 11, 13, 16, 17, 22, 29, 30, 0, 4, 7, 22, 23, 0, 3, 20, 29, 0, 8, 12, 14, 16, 18, 0, 1, 2, 7, 11, 18, 27, 0, 6, 8, 21, 23, 28, 30, 0, 2, 6, 9, 18, 21, 0, 4, 7, 16, 27, 28, 0, 1, 6, 12, 15, 17, 22, 23, 0, 1, 6, 15, 18, 20, 28, 0, 8, 27, 28, 29, 0, 4, 9, 17, 22, 23, 28, 30, 0, 11, 19, 23, 25, 0, 1, 4, 7, 18, 21, 24, 26, 0, 1, 9, 10, 11, 12, 15, 17, 18, 21, 25, 28, 30, 0, 1, 4, 8, 11, 17, 0, 6, 8, 10, 12, 18, 19, 30, 0, 2, 7, 10, 14, 23, 0, 16, 30, 0, 3, 6, 17, 0, 13, 21, 27, 0, 7, 8, 19, 20, 22, 0, 2, 5, 8, 9, 20, 0, 14, 24, 26, 0, 5, 8, 9, 10, 11, 16, 19, 24, 25, 26, 28, 30, 0, 4, 7, 14, 23, 26, 27, 0, 3, 13, 0, 2, 14, 18, 26, 0, 1, 10, 12, 17, 23, 25, 26, 28, 0, 5, 7, 10, 15, 18, 21, 25, 26, 28, 30, 0, 4, 8, 15, 0, 11, 22, 28, 0, 2, 19, 21, 27, 0, 3, 9, 11, 14, 24, 29, 0, 3, 13, 14, 18, 0, 7, 24, 26, 0, 5, 21, 0, 5, 10, 18, 24, 30, 0, 12, 19, 20, 21, 25, 0, 2, 5, 16, 19, 20, 27, 0, 3, 4, 10, 11, 15, 21, 28, 30, 0, 1, 6, 7, 8, 9, 12, 16, 19, 22, 0, 1, 5, 6, 8, 15, 17, 21, 23, 24, 25, 26, 29, 0, 14, 15, 16, 22, 28, 0, 9, 11, 17, 21, 0, 1, 4, 13, 19, 26, 28, 29, 30, 0, 6, 13, 16, 17, 18, 24, 26, 0, 1, 3, 20, 28, 0, 3, 7, 9, 19, 27, 0, 2, 7, 25, 28, 0, 5, 8, 9, 16, 18, 25, 27, 29, 0, 6, 17, 18, 0, 3, 4, 7, 8, 16, 22, 0, 5, 29, 0, 16, 22, 23, 24, 25, 0, 7, 28, 30, 0, 4, 5, 15, 19, 22, 26, 28, 0, 10, 14, 25, 26, 0, 2, 8, 12, 13, 14, 21, 23, 0, 2, 3, 12, 15, 19, 26, 29, 0, 1, 4, 5, 7, 12, 13, 18, 19, 0, 3, 10, 13, 17, 26, 0, 5, 17, 19, 24, 25, 0, 3, 4, 17, 18, 25, 27, 28, 29, 0, 27, 0, 6, 19, 0, 5, 9, 10, 20, 21, 22, 28, 0, 18, 19, 20, 22, 0, 3, 7, 18, 0, 2, 16, 19, 26, 0, 1, 5, 7, 11, 16, 18, 22, 25, 0, 3, 8, 14, 19, 23, 27, 28, 0, 5, 11, 13, 15, 22, 23, 27, 28, 0, 8, 25, 26, 0, 3, 7, 8, 13, 16, 18, 23, 25, 28, 29, 0, 3, 7, 13, 14, 19, 25, 0, 11, 12, 14, 16, 23, 26, 0, 1, 22, 23, 25, 0, 6, 10, 26, 28, 0, 2, 5, 7, 12, 17, 19, 24, 28, 29, 0, 1, 5, 10, 12, 13, 19, 24, 25, 28, 29, 0, 13, 21, 0, 1, 7, 10, 23, 25, 29, 0, 2, 6, 7, 9, 17, 19, 21, 24, 30, 0, 
};

const MYINT W[15][1][30] = {
	-5104, -191, -815, -6627, -10876, 6503, 8852, 4355, 0, 4312, 7352, -3065, -5817, 548, 2843, -2616, -5426, -14444, 6840, -5557, 4486, 3137, -3923, 4805, -5719, -5285, -804, -745, 1743, -7016, 
	4583, 11045, -3394, -6394, -4064, -2954, -1269, -1411, -3441, -5305, 7238, 2121, -11583, 3015, 0, -6760, 6130, -94, 0, -7978, -5812, -8259, -426, 2749, -3814, 275, 7576, -9158, 5383, 2249, 
	5540, 6677, 0, 3685, 4811, 4174, 1027, 6033, 0, 2374, 4212, -4275, -1364, 0, 0, 5620, -2458, -6765, 14244, -2519, 0, -2511, 3507, 0, -3626, 8381, -300, 10509, -4845, 0, 
	-7772, 0, -8363, 0, -4360, 1642, -2766, -61, 565, 5448, 0, 4003, -4383, 1657, 2722, 7065, -11164, 3550, -5861, 2126, 0, 2113, -3859, 2516, 0, -212, -8772, -4750, 6634, 0, 
	0, 0, 0, 0, -2747, 0, 0, 0, 0, 0, 0, 0, 0, -8689, -914, -2423, 0, 0, -5928, 573, 0, 1978, 4542, -2876, -4344, -2564, -625, -8171, 0, 1437, 
	162, -4815, 2369, 0, 0, 0, -382, 4395, 0, 4348, -5085, -1321, 9168, 3301, 0, -3765, -3845, 1165, 0, 0, 0, 0, 2134, -6532, 3021, 0, -1444, -1936, -2015, 3194, 
	5776, 4830, 2254, 1099, -3601, 0, 3809, -5384, 2994, 0, 2326, 0, 5156, 1896, 0, 10049, 0, 4245, 4126, -6467, 0, 4088, 2433, 0, 11316, 3465, 4253, 2246, 454, -8173, 
	-3719, 0, -5373, -836, -2317, 0, 0, -1559, 2850, 6972, -4559, 0, -3742, -4302, 1554, 0, -5807, 0, -8813, 1516, 0, 4334, 0, 700, -1841, -8319, -5327, -9038, 0, 0, 
	-3155, 0, -2235, 0, -1946, 0, -1410, 681, 0, 0, -1374, 1922, 4688, -770, 0, 394, 617, 1935, 0, 0, 0, 1455, 0, -3890, 3815, 1167, 359, -3599, 0, 0, 
	-3349, -1069, 0, 0, 222, -566, 0, -2315, 2312, 0, 1644, 5622, 0, 0, 0, 4383, -346, 0, -1258, 826, -1208, 0, 0, 1897, 833, -323, 0, 0, 0, -921, 
	0, 0, 0, -733, 0, 155, 0, 701, -96, 0, 0, 0, -568, 0, 591, 0, 0, 0, 715, 0, 370, 262, 0, 0, 0, -607, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	2846, 1864, 286, 0, -2203, 1192, 0, 0, 0, 3656, 0, -5680, 0, 0, 0, -2319, -7163, 0, 0, 0, 0, -2774, 4636, -5946, 0, -3401, 0, -2476, 0, 0, 
	0, 0, 0, 0, -286, -12, 0, 0, 0, 0, 0, 0, 519, 13, 0, -252, 0, 0, -423, 0, 0, -494, 0, -319, 112, 149, 0, -746, 0, 0, 
	6185, 987, 0, -3909, 0, -417, 0, 3196, 0, -1913, -7256, -7504, 10371, 0, 0, 0, 6540, 8504, 0, -3085, 2389, -3990, 0, 0, 4939, 0, 8020, -1480, -3726, 0, 
};

const MYINT V[15][1][30] = {
	0, 1926, -7548, -2681, -13287, 11868, 0, -1625, -3740, -2015, 6875, -582, 0, 2508, -8279, 11600, 9045, -5586, 2974, -7256, 6839, 1078, 2698, 4422, -9346, -5231, -3513, 3181, -6389, 6345, 
	0, 4906, 0, 2360, 5123, 0, 0, -2791, 0, -563, 0, 2693, -6217, -8539, 0, -2642, 2490, 0, -3505, -7329, 6138, 0, 10735, 0, 0, -6997, 0, -6511, -7777, 180, 
	-6902, -8179, -8852, -5579, 0, 0, 0, -2254, 0, 3890, 4342, 1338, 10379, 0, 0, 6009, -3283, 0, -2304, -633, -1884, 3412, 0, 3314, 6807, -10, -2714, -5538, 3291, -2718, 
	6911, 2447, -3541, 1760, 0, 7505, -837, 0, 4153, 800, -4348, -7137, -656, -1421, 0, 3291, -4657, 1014, 0, 910, 4023, 1250, 5557, -1697, 5645, -2331, 0, 0, -3359, -3920, 
	0, 2665, -2514, -3880, 3146, 0, -2782, -5832, 0, 344, 607, 0, -4905, 1830, 3408, -2962, 2125, 700, 0, -5515, -978, -2683, -4541, 1817, 3657, 138, 3248, 0, 2164, -2836, 
	0, -2934, 0, 0, 0, 0, 3501, 1007, -1297, 0, 0, 3938, 959, 0, 0, 1472, 1773, 1335, 0, 0, 0, 3434, -293, 89, 2367, 3729, -189, 4389, -1356, 1515, 
	0, -2505, -3899, -460, 7844, 1854, -339, 11538, 0, 1893, -1434, 4018, 6280, 0, 0, -498, -2528, -1800, 0, 4554, -3939, 3383, 5153, -1674, 1409, -3841, 0, -1676, -2968, 0, 
	5870, 9283, -1421, 0, 0, 5707, -2737, -3889, 0, 0, 0, -1269, -4371, 7641, 0, -3449, -3409, 0, -862, -7873, 0, -7998, 0, 5025, 8020, 0, 0, 0, 0, 0, 
	0, 1960, 0, 3360, 0, 0, -761, 0, -671, 0, 0, 0, 0, 1952, -1226, 2603, 862, 2517, -2917, 0, -562, 0, 0, -1267, 1449, 0, -3495, 0, -1742, 0, 
	216, 3725, 0, 0, 0, 0, -276, 0, 0, 1918, -3560, -15, 0, 474, 0, 0, -2651, 3686, 0, 0, 0, -3863, 0, -3805, 0, 0, 762, 1166, 0, 0, 
	112, 0, 0, 0, -317, 0, 484, 0, 0, 0, 0, -203, -1000, 0, 0, 0, 0, 186, 633, -305, 370, 444, 323, 0, 0, -756, 0, 0, -344, -263, 
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
	0, -2448, -5249, -1612, -5498, 5578, 6565, -585, -646, -4284, 9333, 4039, 175, -76, 173, 2258, 4420, -1585, 5131, -713, 5792, 0, -766, 1193, -4702, 180, 0, 2116, -276, 0, 
	0, 0, 429, 0, 0, -195, 0, 27, 239, 0, -43, 0, -373, 0, 0, 0, 0, 305, 0, 0, 573, 470, 0, 0, 0, 0, -47, 782, 0, 0, 
	-4821, -657, 2738, 0, -4673, -7098, 2406, 4231, 0, -136, -307, 0, -1391, -4230, 0, 3082, 0, 7221, 0, 3772, 0, -1631, -7637, 317, 2799, 0, 156, 0, 0, 0, 
};

const MYINT T[7][1][30] = {
	-2700, -8903, 6694, 0, 10647, -8172, 8621, 15445, -2049, -5984, 3937, -6230, -3744, 3118, 3708, -6950, 7742, 2245, 9753, 2267, 0, -4285, -5443, 1879, -3571, 0, 1831, 15950, -2252, 4209, 
	-5040, -4505, 933, -2300, 4836, -2019, -807, -339, 1735, 0, 0, 6140, 0, -4010, 0, 564, 9055, -4362, -3662, 3951, 0, 5855, -3966, 0, -4660, -1911, 5609, 2116, -5366, 0, 
	0, -2636, 4507, -7186, -2020, -443, -2779, 8588, 0, -52, -5410, -8435, 2077, -2494, 0, 0, -1135, 1764, -1658, 3516, 0, -5542, -2431, -7065, 2178, -2788, 1449, -994, -744, 0, 
	-3129, 0, 0, 2189, 2997, 0, 0, 0, 0, -3319, 0, 7035, 1789, 3084, 0, 3007, 3569, 0, 0, 0, 0, 0, -1016, 2025, 2246, 6193, 2587, 5292, 0, 0, 
	0, 0, 0, 0, 485, 0, 0, 0, -795, 36, -668, -2137, 0, 82, 0, 0, 0, 1030, 0, 0, 631, 0, 0, 0, 75, 0, 0, 269, 207, 0, 
	0, -1686, 0, 0, 3473, -1738, 0, 0, 0, -1719, 0, 4814, 0, 0, 0, 1221, 3596, 0, 0, 0, 0, 0, -1323, 2589, 0, 1675, 990, 3675, 0, 0, 
	0, 0, 2621, 0, 0, -1104, 0, 3447, 0, 929, -3271, -5227, 0, 0, 0, -2820, -149, 1314, 0, 0, 0, 0, 0, -2987, -213, -2144, 0, 0, -3622, 1282, 
};

}
