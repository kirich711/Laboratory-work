#include <iostream> 

using namespace std;


int main() {

    setlocale(LC_ALL, "Russian");

    // Ââîä äâóõ ÷èñåë 

    double num1, num2;
    cout << "Ââåäèòå äâà ÷èñëà: ";
    cin >> num1 >> num2;

    // 1. Ñóììà ÷èñåë 

    double sum = num1 + num2;
    cout << "Ñóììà ÷èñåë: " << sum << endl;

    // 2. Ðàçíîñòü ÷èñåë 

    double difference = num1 - num2;
    cout << "Ðàçíîñòü ÷èñåë: " << difference << endl;

    // 3. Ïðîèçâåäåíèå ÷èñåë 

    double product = num1 * num2;
    cout << "Ïðîèçâåäåíèå ÷èñåë: " << product << endl;

    // 4. Ñðåäíåå àðèôìåòè÷åñêîå ÷èñåë 

    double average = (num1 + num2) / 2;
    cout << "Ñðåäíåå àðèôìåòè÷åñêîå ÷èñåë: " << average << endl;

    // 5. Ðàçíîñòü ìàêñèìàëüíîãî è ìèíèìàëüíîãî ïî ìîäóëþ 

    double absNum1 = (num1 >= 0) ? num1 : -num1;
    double absNum2 = (num2 >= 0) ? num2 : -num2;
    double maxAbs = (absNum1 >= absNum2) ? absNum1 : absNum2;
    double minAbs = (absNum1 < absNum2) ? absNum1 : absNum2;
    double differenceMaxMinAbs = maxAbs - minAbs;
    cout << "Ðàçíîñòü ìàêñèìàëüíîãî è ìèíèìàëüíîãî ïî ìîäóëþ: " << differenceMaxMinAbs << endl;

    return 0;
    
}
