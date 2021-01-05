#include <stdio.h>

void print_array(int* a, int len){
    printf("[");
    for(int i = 0; i < len; i++){
        printf("%d, ", a[i]);
    }
    printf("]\n");
}

void test_array_equality(int* a, int* b, int len){
    for(int i = 0; i < len; i++){
        if(a[i] != b[i]){
            printf("Error arrays not equal: \n");
            print_array(a, len);
            print_array(b, len);
            return;
        }
    }
}

void bubble_sort(int* to_sort, int len){
    for(int j = 0; j < len; j++){
        for(int i = 0; i < len - 1; i++){
            if(to_sort[i] < to_sort[i+1]){
                continue;
            }
            int tmp = to_sort[i];
            to_sort[i] = to_sort[i+1];
            to_sort[i+1] = tmp;
        }
    }
}

int main(int argc, char *argv[]){

    // First Test Case

    int test_n = 1;
    printf("Test %d\n", test_n);
    test_n++;

    int a[7] = {3, 8, 1, 2, 4, 5, 6};
    int a_sorted[7] = {1, 2, 3, 4, 5, 6, 8};

    bubble_sort(a, 7);
    test_array_equality(a, a_sorted, 7);

    // Test Edge Cases

    printf("Test %d\n", test_n);
    test_n++;

    int empty_array[0];
    int empty_array_sorted[0];

    bubble_sort(empty_array, 0);
    test_array_equality(empty_array, empty_array_sorted, 0);


    printf("Test %d\n", test_n);
    test_n++;

    int singleton_array[1] = {1};
    int singleton_array_sorted[1] = {1};

    bubble_sort(singleton_array, 1);
    test_array_equality(singleton_array, singleton_array_sorted, 1);

    // Randomly Generated Test Cases

    #define N_TESTCASES 20
    #define LEN_TESTCASE 20

    int testcases[N_TESTCASES][LEN_TESTCASE] = {
{79882, 7147, 99980, 22950, 42664, 34273, 91076, 68916, 90243, 23796, 62747, 44322, 20564, 33113, 76282, 42218, 43490, 82920, 57414, 25094},
{16569, 27585, 7928, 13174, 78955, 95404, 93630, 78570, 58843, 57867, 31814, 19247, 85689, 29795, 69062, 54062, 60936, 94837, 15964, 44304},
{9667, 71168, 47159, 53923, 38033, 74179, 72559, 65440, 18891, 10967, 84136, 93630, 22752, 34675, 78477, 17668, 87013, 93617, 69411, 27007},
{74449, 89790, 82512, 67607, 88827, 81038, 58685, 17225, 59272, 20240, 41791, 2773, 19832, 28906, 79900, 5367, 93819, 38652, 39827, 13516},
{88694, 29680, 68470, 9658, 83751, 85855, 96005, 86044, 67789, 18132, 14661, 2092, 88580, 19410, 11379, 91677, 94070, 54640, 74452, 55076},
{88855, 52754, 86270, 74574, 60086, 63290, 66835, 94432, 14372, 77601, 23951, 72038, 79752, 30557, 60569, 30410, 43526, 56016, 9225, 22194},
{97109, 47831, 24503, 32876, 45016, 246, 19838, 25996, 33150, 37613, 57007, 96712, 85227, 55653, 39289, 41753, 73809, 79818, 45870, 11462},
{4511, 63953, 82944, 32066, 97671, 97283, 86303, 39015, 98708, 7122, 58879, 8540, 22405, 15270, 53007, 31379, 73677, 2704, 5765, 78131},
{67622, 4718, 24403, 33249, 14867, 70879, 57124, 72675, 6954, 76572, 49827, 11712, 40965, 43742, 37205, 99491, 7344, 23120, 77619, 26794},
{15246, 68821, 54036, 55394, 1880, 48693, 38016, 79204, 90585, 95486, 58469, 12412, 31633, 22615, 91434, 53052, 35168, 11930, 69949, 74533},
{99154, 92113, 28411, 11052, 54685, 71305, 74595, 31125, 85302, 51778, 28063, 79500, 20374, 75274, 9768, 73507, 43237, 91706, 72330, 15271},
{8929, 88385, 70612, 78919, 35190, 7227, 60155, 17348, 63667, 36671, 44323, 45671, 16282, 10071, 37515, 61829, 2065, 81760, 12159, 66487},
{92292, 22470, 60606, 64951, 64389, 86632, 12517, 30721, 92501, 51527, 7142, 16308, 86820, 24705, 12652, 20414, 7475, 442, 74586, 12897},
{21954, 54894, 64639, 8524, 15002, 56523, 23068, 71126, 73185, 86548, 87413, 54150, 64045, 93049, 76368, 59351, 58883, 71860, 85317, 15250},
{20897, 28738, 59974, 55474, 5898, 64377, 22203, 37512, 7418, 53926, 96943, 99489, 63015, 65786, 26497, 40114, 37267, 35464, 85618, 3884},
{20512, 38313, 40936, 15766, 91649, 8869, 80928, 9873, 28538, 98200, 67047, 28914, 47047, 14521, 87510, 81408, 61117, 81143, 31390, 12034},
{19120, 38971, 74152, 36000, 4668, 34636, 42411, 94765, 99835, 22631, 50460, 67323, 75378, 4634, 49541, 35872, 81626, 28175, 58263, 63902},
{95476, 33494, 16529, 4397, 54485, 82914, 54065, 80141, 59591, 26334, 50824, 30098, 94784, 91981, 34758, 89438, 91956, 44816, 20956, 88112},
{27158, 21053, 56294, 65339, 95580, 783, 14157, 32921, 62402, 16111, 94843, 91755, 97609, 92367, 63298, 73304, 20128, 32437, 82010, 58719},
{7448, 56315, 73936, 90671, 67081, 52530, 12113, 41686, 27359, 21546, 58250, 20848, 90527, 78013, 35654, 24987, 40993, 87395, 51682, 9711}
    };

    int groundtruth[N_TESTCASES][LEN_TESTCASE] = {
{7147, 20564, 22950, 23796, 25094, 33113, 34273, 42218, 42664, 43490, 44322, 57414, 62747, 68916, 76282, 79882, 82920, 90243, 91076, 99980},
{7928, 13174, 15964, 16569, 19247, 27585, 29795, 31814, 44304, 54062, 57867, 58843, 60936, 69062, 78570, 78955, 85689, 93630, 94837, 95404},
{9667, 10967, 17668, 18891, 22752, 27007, 34675, 38033, 47159, 53923, 65440, 69411, 71168, 72559, 74179, 78477, 84136, 87013, 93617, 93630},
{2773, 5367, 13516, 17225, 19832, 20240, 28906, 38652, 39827, 41791, 58685, 59272, 67607, 74449, 79900, 81038, 82512, 88827, 89790, 93819},
{2092, 9658, 11379, 14661, 18132, 19410, 29680, 54640, 55076, 67789, 68470, 74452, 83751, 85855, 86044, 88580, 88694, 91677, 94070, 96005},
{9225, 14372, 22194, 23951, 30410, 30557, 43526, 52754, 56016, 60086, 60569, 63290, 66835, 72038, 74574, 77601, 79752, 86270, 88855, 94432},
{246, 11462, 19838, 24503, 25996, 32876, 33150, 37613, 39289, 41753, 45016, 45870, 47831, 55653, 57007, 73809, 79818, 85227, 96712, 97109},
{2704, 4511, 5765, 7122, 8540, 15270, 22405, 31379, 32066, 39015, 53007, 58879, 63953, 73677, 78131, 82944, 86303, 97283, 97671, 98708},
{4718, 6954, 7344, 11712, 14867, 23120, 24403, 26794, 33249, 37205, 40965, 43742, 49827, 57124, 67622, 70879, 72675, 76572, 77619, 99491},
{1880, 11930, 12412, 15246, 22615, 31633, 35168, 38016, 48693, 53052, 54036, 55394, 58469, 68821, 69949, 74533, 79204, 90585, 91434, 95486},
{9768, 11052, 15271, 20374, 28063, 28411, 31125, 43237, 51778, 54685, 71305, 72330, 73507, 74595, 75274, 79500, 85302, 91706, 92113, 99154},
{2065, 7227, 8929, 10071, 12159, 16282, 17348, 35190, 36671, 37515, 44323, 45671, 60155, 61829, 63667, 66487, 70612, 78919, 81760, 88385},
{442, 7142, 7475, 12517, 12652, 12897, 16308, 20414, 22470, 24705, 30721, 51527, 60606, 64389, 64951, 74586, 86632, 86820, 92292, 92501},
{8524, 15002, 15250, 21954, 23068, 54150, 54894, 56523, 58883, 59351, 64045, 64639, 71126, 71860, 73185, 76368, 85317, 86548, 87413, 93049},
{3884, 5898, 7418, 20897, 22203, 26497, 28738, 35464, 37267, 37512, 40114, 53926, 55474, 59974, 63015, 64377, 65786, 85618, 96943, 99489},
{8869, 9873, 12034, 14521, 15766, 20512, 28538, 28914, 31390, 38313, 40936, 47047, 61117, 67047, 80928, 81143, 81408, 87510, 91649, 98200},
{4634, 4668, 19120, 22631, 28175, 34636, 35872, 36000, 38971, 42411, 49541, 50460, 58263, 63902, 67323, 74152, 75378, 81626, 94765, 99835},
{4397, 16529, 20956, 26334, 30098, 33494, 34758, 44816, 50824, 54065, 54485, 59591, 80141, 82914, 88112, 89438, 91956, 91981, 94784, 95476},
{783, 14157, 16111, 20128, 21053, 27158, 32437, 32921, 56294, 58719, 62402, 63298, 65339, 73304, 82010, 91755, 92367, 94843, 95580, 97609},
{7448, 9711, 12113, 20848, 21546, 24987, 27359, 35654, 40993, 41686, 51682, 52530, 56315, 58250, 67081, 73936, 78013, 87395, 90527, 90671}
    };

    for(int i = 0; i < N_TESTCASES; i++){
        int* current_test = testcases[i];
        int* current_groundtruth = groundtruth[i];
        printf("Test %d\n", test_n);
        test_n++;

        bubble_sort(current_test, LEN_TESTCASE);
        test_array_equality(current_test, current_groundtruth, LEN_TESTCASE);
    }

    return 0;
}
